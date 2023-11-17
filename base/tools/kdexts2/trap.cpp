/*++

Copyright (c) 1992  Microsoft Corporation

Module Name:

    trap.c

Abstract:

    WinDbg Extension Api

Revision History:

--*/

#include "precomp.h"
#include "i386.h"
#pragma hdrstop

extern ULONG64 STeip, STebp, STesp;
extern ULONG64 ThreadLastDump;

typedef unsigned __int64  EM_REG;
typedef EM_REG           *PEM_REG;
#define EM_REG_BITS       (sizeof(EM_REG) * 8)

typedef struct _EM_ISR {
    unsigned __int64    code:16;        //  0-15 : interruption Code
    unsigned __int64    vector:8;       // 16-23 : IA32 exception vector number
    unsigned __int64    reserved0: 8;   
    unsigned __int64    x:1;            //    32 : Execute exception
    unsigned __int64    w:1;            //    33 : Write exception
    unsigned __int64    r:1;            //    34 : Read exception
    unsigned __int64    na:1;           //    35 : Non-Access exception
    unsigned __int64    sp:1;           //    36 : Speculative load exception
    unsigned __int64    rs:1;           //    37 : Register Stack
    unsigned __int64    ir:1;           //    38 : Invalid Register frame
    unsigned __int64    ni:1;           //    39 : Nested interruption
    unsigned __int64    so:1;           //    40 : IA32 Supervisor Override
    unsigned __int64    ei:2;           // 41-42 : Excepting IA64 Instruction
    unsigned __int64    ed:1;           //    43 : Exception Differal
    unsigned __int64    reserved1:20;   // 44-63 
} EM_ISR, *PEM_ISR;

DECLARE_API( callback )

/*++

Routine Description:



Arguments:

    args -

Return Value:

    None

--*/

{
    ULONG64         Address;
    ULONG           Flags;
    ULONG           result;
    ULONG64         Thread;
    ULONG64         prevCallout ;
    INT             calloutNum ;
    INT             whichCallout ;
    ULONG64         InitialStack;
    ULONG64         TrFr;
    ULONG           dwProcessor=0;
    
    GetCurrentProcessor(Client, &dwProcessor, NULL);

    Address = 0;
    whichCallout = 0 ;
    if (GetExpressionEx(args, &Address, &args)) {
        if (!sscanf(args, "%ld", &whichCallout)) {
            whichCallout = 0;
        }
    }

    if (Address == 0) {
        GetCurrentThreadAddr((USHORT)dwProcessor, &Address);
    }

    if (!DumpThreadEx(dwProcessor, "", Address, 0, Client))
        return E_INVALIDARG;

    GetFieldValue(Address, "ETHREAD", "Tcb.InitialStack", InitialStack);
    
    /*
     * now try and grab the contents of the stack
     */
    if (GetFieldValue(InitialStack, "KCALLOUT_FRAME", "TrFr", TrFr)) {
        dprintf("%08p: Unable to get callout frame\n", InitialStack);
        return E_INVALIDARG;
    }

    if (TargetMachine == IMAGE_FILE_MACHINE_I386) {
        /*
         * Save eip, esp, ebp for quick backtrace from this callback in case
         * they gave us a bogus callout frame.
         */
        GetFieldValue(InitialStack, "KCALLOUT_FRAME", "Ret", STeip);
        STesp = (ULONG) InitialStack ;
        GetFieldValue(InitialStack, "KCALLOUT_FRAME", "Ebp", STebp);
    }

    /*
     * Print the callout chain
     */
    calloutNum = 0 ;
    prevCallout = InitialStack ;
    
    if (TargetMachine == IMAGE_FILE_MACHINE_I386) {
        dprintf("Callout#    ebp        esp        eip        trapframe\n") ;
    } else {
        dprintf("Callout#        esp        trapframe\n") ;
    }

    while (prevCallout) {

        if (TargetMachine == IMAGE_FILE_MACHINE_I386) {
            ULONG Ret, Ebp;

            GetFieldValue(prevCallout, "KCALLOUT_FRAME", "Ebp", Ebp);
            GetFieldValue(prevCallout, "KCALLOUT_FRAME", "Ret", Ret);

            dprintf("  %3d       %08lx   %08p   %08lx   %08lx",
                    calloutNum, Ebp, prevCallout,
                    Ret, TrFr) ;
            if (calloutNum == whichCallout) {
                STeip = Ret ;
                STesp = (ULONG) prevCallout ;
                STebp = Ebp ;
                dprintf("   <-- !kb\n") ;
            }
            else
                dprintf("\n") ;
        } else {
            dprintf("  %3d       %08p   %08lx",
                    calloutNum, prevCallout, TrFr) ;
        }


        /*
         * advance to the next callout and try to read it
         */
        calloutNum++ ;

        GetFieldValue(prevCallout, "KCALLOUT_FRAME", "CbStk", prevCallout);
        
        if (GetFieldValue(prevCallout, "KCALLOUT_FRAME", "TrFr", TrFr)) {
            dprintf("%08p: Unable to get callout frame\n", prevCallout);
            return E_INVALIDARG;
        }
        
    }
    dprintf("\n") ;

    if (calloutNum <= whichCallout) {
        dprintf("#(%ld) is out of range.  Frame #0 selected.\n", calloutNum) ;
    }

    return S_OK;
}

DECLARE_API( kb )

/*++

--*/

{
    dprintf("\n");
    dprintf("    \"!kb\" is no longer necessary as using \"kb\" after a \".cxr\" or \".trap\"\n");
    dprintf("  command will give you the stack for the faulting thread.\n");
    dprintf("\n");
    dprintf("    Type \"!cxr\" or \"!trap\" for more help on this.\n");
    dprintf("\n");

    return S_OK;
}


DECLARE_API( kv )

/*++

--*/

{
    dprintf("\n");
    dprintf("    \"!kv\" is no longer necessary as using \"kv\" after a \".cxr\" or \".trap\"\n");
    dprintf("  command will give you the stack for the faulting thread.\n");
    dprintf("\n");
    dprintf("    Type \"!cxr\" or \"!trap\" for more help on this.\n");
    dprintf("\n");

    return S_OK;
}


#define HIGH(x) ((ULONG) ((x>>32) & 0xFFFFFFFF))
#define LOW(x) ((ULONG) (x & 0xFFFFFFFF))



VOID
DisplayFullEmRegField(
    ULONG64      EmRegValue,
    EM_REG_FIELD EmRegFields[],
    ULONG        Field
    )
{
   dprintf( "\n %3.3s : %I64x : %-s",  
            EmRegFields[Field].SubName,
            (EmRegValue >> EmRegFields[Field].Shift) & ((1 << EmRegFields[Field].Length) - 1),
            EmRegFields[Field].Name
          );
   return;
} // DisplayFullEmRegField()

VOID
DisplayFullEmReg(
    IN ULONG64      Val,
    IN EM_REG_FIELD EmRegFields[],
    IN DISPLAY_MODE DisplayMode
    )
{
    ULONG i, j;

    i = j = 0;
    if ( DisplayMode >= DISPLAY_MAX )   {
       while( j < EM_REG_BITS )   {
          DisplayFullEmRegField( Val, EmRegFields, i );
          j += EmRegFields[i].Length;
          i++;
       }
    }
    else  {
       while( j < EM_REG_BITS )   {
          if ( !strstr(EmRegFields[i].Name, "reserved" ) &&
               !strstr(EmRegFields[i].Name, "ignored"  ) ) {
             DisplayFullEmRegField( Val, EmRegFields, i );
          }
          j += EmRegFields[i].Length;
          i++;
       }
    }
    dprintf("\n");

    return;

} // DisplayFullEmReg()

