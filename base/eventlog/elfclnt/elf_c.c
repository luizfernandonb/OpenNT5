

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Fri Nov 17 18:07:52 2023
 */
/* Compiler settings for elf.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, oldnames, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */
#pragma warning( disable: 4211 )  /* redefine extent to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma optimize("", off ) 

#include <string.h>

#include "elf.h"

#define TYPE_FORMAT_STRING_SIZE   433                               
#define PROC_FORMAT_STRING_SIZE   1501                              
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;

#define GENERIC_BINDING_TABLE_SIZE   2            


/* Standard interface: eventlog, ver. 0.0,
   GUID={0x82273FDC,0xE32A,0x18C3,{0x3F,0x78,0x82,0x79,0x29,0xDC,0x23,0xEA}} */

handle_t eventlog_handle;


static const RPC_CLIENT_INTERFACE eventlog___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x82273FDC,0xE32A,0x18C3,{0x3F,0x78,0x82,0x79,0x29,0xDC,0x23,0xEA}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE eventlog_ClientIfHandle = (RPC_IF_HANDLE)& eventlog___RpcClientInterface;

extern const MIDL_STUB_DESC eventlog_StubDesc;

static RPC_BINDING_HANDLE eventlog__MIDL_AutoBindHandle;


NTSTATUS ElfrClearELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_UNICODE_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrBackupELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[48],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrCloseEL( 
    /* [out][in] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[96],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrDeregisterEventSource( 
    /* [out][in] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[138],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrNumberOfRecords( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ PULONG NumberOfRecords)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[180],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOldestRecord( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ PULONG OldestRecordNumber)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[228],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrChangeNotify( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ RPC_CLIENT_ID ClientId,
    /* [in] */ ULONG Event)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[276],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[330],
                  ( unsigned char * )&UNCServerName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrRegisterEventSourceW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[402],
                  ( unsigned char * )&UNCServerName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenBELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[474],
                  ( unsigned char * )&UNCServerName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReadELW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG ReadFlags,
    /* [in] */ ULONG RecordOffset,
    /* [range][in] */ ULONG NumberOfBytesToRead,
    /* [size_is][out] */ PBYTE Buffer,
    /* [out] */ PULONG NumberOfBytesRead,
    /* [out] */ PULONG MinNumberOfBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[540],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReportEventW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG Time,
    /* [in] */ USHORT EventType,
    /* [in] */ USHORT EventCategory,
    /* [in] */ ULONG EventID,
    /* [range][in] */ USHORT NumStrings,
    /* [range][in] */ ULONG DataSize,
    /* [in] */ PRPC_UNICODE_STRING ComputerName,
    /* [unique][in] */ PRPC_SID UserSID,
    /* [unique][size_is][in] */ PRPC_UNICODE_STRING Strings[  ],
    /* [unique][size_is][in] */ PBYTE Data,
    /* [in] */ USHORT Flags,
    /* [unique][out][in] */ PULONG RecordNumber,
    /* [unique][out][in] */ PULONG TimeWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[618],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrClearELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[738],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrBackupELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[786],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[834],
                  ( unsigned char * )&UNCServerName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrRegisterEventSourceA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[906],
                  ( unsigned char * )&UNCServerName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenBELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING FileName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[978],
                  ( unsigned char * )&UNCServerName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReadELA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG ReadFlags,
    /* [in] */ ULONG RecordOffset,
    /* [range][in] */ ULONG NumberOfBytesToRead,
    /* [size_is][out] */ PBYTE Buffer,
    /* [out] */ PULONG NumberOfBytesRead,
    /* [out] */ PULONG MinNumberOfBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1044],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReportEventA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG Time,
    /* [in] */ USHORT EventType,
    /* [in] */ USHORT EventCategory,
    /* [in] */ ULONG EventID,
    /* [range][in] */ USHORT NumStrings,
    /* [range][in] */ ULONG DataSize,
    /* [in] */ PRPC_STRING ComputerName,
    /* [unique][in] */ PRPC_SID UserSID,
    /* [unique][size_is][in] */ PRPC_STRING Strings[  ],
    /* [unique][size_is][in] */ PBYTE Data,
    /* [in] */ USHORT Flags,
    /* [unique][out][in] */ PULONG RecordNumber,
    /* [unique][out][in] */ PULONG TimeWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1122],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrRegisterClusterSvc( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [out] */ RULONG *pulSize,
    /* [size_is][size_is][out] */ BYTE **ppPackedEventInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1242],
                  ( unsigned char * )&UNCServerName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrDeregisterClusterSvc( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1296],
                  ( unsigned char * )&UNCServerName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrWriteClusterEvents( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [range][in] */ ULONG ulSize,
    /* [size_is][in] */ BYTE *pBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1338],
                  ( unsigned char * )&UNCServerName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrGetLogInformation( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG InfoLevel,
    /* [size_is][out] */ PBYTE lpBuffer,
    /* [range][in] */ ULONG cbBufSize,
    /* [out] */ PULONG pcbBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1392],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrFlushEL( 
    /* [in] */ IELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1458],
                  ( unsigned char * )&LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure ElfrClearELFW */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 22 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x2 ),	/* 2 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 30 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 32 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 34 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 36 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 38 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 40 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrBackupELFW */

/* 48 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 58 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 60 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 62 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0x24 ),	/* 36 */
/* 66 */	NdrFcShort( 0x8 ),	/* 8 */
/* 68 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 70 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x2 ),	/* 2 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 78 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 80 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 82 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 84 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 86 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 88 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrCloseEL */

/* 96 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x2 ),	/* 2 */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x30,		/* FC_BIND_CONTEXT */
			0xe8,		/* Ctxt flags:  via ptr, in, out, strict, */
/* 108 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 110 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 112 */	NdrFcShort( 0x38 ),	/* 56 */
/* 114 */	NdrFcShort( 0x40 ),	/* 64 */
/* 116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 118 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 126 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 128 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 130 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrDeregisterEventSource */

/* 138 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x3 ),	/* 3 */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x30,		/* FC_BIND_CONTEXT */
			0xe8,		/* Ctxt flags:  via ptr, in, out, strict, */
/* 150 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 152 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 154 */	NdrFcShort( 0x38 ),	/* 56 */
/* 156 */	NdrFcShort( 0x40 ),	/* 64 */
/* 158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 160 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 168 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 170 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 172 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrNumberOfRecords */

/* 180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x4 ),	/* 4 */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 192 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 194 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 196 */	NdrFcShort( 0x24 ),	/* 36 */
/* 198 */	NdrFcShort( 0x24 ),	/* 36 */
/* 200 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 202 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 210 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 212 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 214 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter NumberOfRecords */

/* 216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOldestRecord */

/* 228 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x5 ),	/* 5 */
/* 236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 238 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 240 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 242 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0x24 ),	/* 36 */
/* 246 */	NdrFcShort( 0x24 ),	/* 36 */
/* 248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 250 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 258 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 260 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 262 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter OldestRecordNumber */

/* 264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrChangeNotify */

/* 276 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x6 ),	/* 6 */
/* 284 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 286 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 288 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 290 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 292 */	NdrFcShort( 0x44 ),	/* 68 */
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 298 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 306 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 308 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 310 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ClientId */

/* 312 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 316 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter Event */

/* 318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 326 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenELW */

/* 330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x7 ),	/* 7 */
/* 338 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 340 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 342 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 344 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 346 */	NdrFcShort( 0x2a ),	/* 42 */
/* 348 */	NdrFcShort( 0x40 ),	/* 64 */
/* 350 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 352 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 354 */	NdrFcShort( 0x1 ),	/* 1 */
/* 356 */	NdrFcShort( 0x2 ),	/* 2 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 360 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 362 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 364 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter ModuleName */

/* 366 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 370 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter RegModuleName */

/* 372 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 376 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter MajorVersion */

/* 378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 390 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 392 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 394 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 398 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrRegisterEventSourceW */

/* 402 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 410 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 412 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 414 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 416 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 418 */	NdrFcShort( 0x2a ),	/* 42 */
/* 420 */	NdrFcShort( 0x40 ),	/* 64 */
/* 422 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 424 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 428 */	NdrFcShort( 0x2 ),	/* 2 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 432 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 434 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 436 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter ModuleName */

/* 438 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 442 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter RegModuleName */

/* 444 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 448 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter MajorVersion */

/* 450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 458 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 462 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 464 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 466 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenBELW */

/* 474 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x9 ),	/* 9 */
/* 482 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 484 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 486 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 488 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 490 */	NdrFcShort( 0x2a ),	/* 42 */
/* 492 */	NdrFcShort( 0x40 ),	/* 64 */
/* 494 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 496 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 504 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 506 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 508 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter BackupFileName */

/* 510 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter MajorVersion */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 528 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 532 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReadELW */

/* 540 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0xa ),	/* 10 */
/* 548 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 550 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 552 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 554 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 556 */	NdrFcShort( 0x3c ),	/* 60 */
/* 558 */	NdrFcShort( 0x40 ),	/* 64 */
/* 560 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 562 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 566 */	NdrFcShort( 0x1 ),	/* 1 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 570 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 572 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 574 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ReadFlags */

/* 576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RecordOffset */

/* 582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumberOfBytesToRead */

/* 588 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 592 */	NdrFcShort( 0x56 ),	/* 86 */

	/* Parameter Buffer */

/* 594 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 596 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 598 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter NumberOfBytesRead */

/* 600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 602 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinNumberOfBytesNeeded */

/* 606 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 608 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 614 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReportEventW */

/* 618 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0xb ),	/* 11 */
/* 626 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 628 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 630 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 632 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 634 */	NdrFcShort( 0x8c ),	/* 140 */
/* 636 */	NdrFcShort( 0x40 ),	/* 64 */
/* 638 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xf,		/* 15 */
/* 640 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x6 ),	/* 6 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 648 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 650 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 652 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Time */

/* 654 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EventType */

/* 660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 664 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 668 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 670 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 674 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumStrings */

/* 678 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 680 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 682 */	NdrFcShort( 0x70 ),	/* 112 */

	/* Parameter DataSize */

/* 684 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 686 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 688 */	NdrFcShort( 0x7a ),	/* 122 */

	/* Parameter ComputerName */

/* 690 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 692 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 694 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter UserSID */

/* 696 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 698 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 700 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Parameter Strings */

/* 702 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 704 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 706 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter Data */

/* 708 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 710 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 712 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Parameter Flags */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 718 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 720 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 722 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 724 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Parameter TimeWritten */

/* 726 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 728 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 730 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 734 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrClearELFA */

/* 738 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0xc ),	/* 12 */
/* 746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 748 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 750 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 752 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 754 */	NdrFcShort( 0x24 ),	/* 36 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 760 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x2 ),	/* 2 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 768 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 770 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 772 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 774 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 778 */	NdrFcShort( 0xea ),	/* Type Offset=234 */

	/* Return value */

/* 780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrBackupELFA */

/* 786 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0xd ),	/* 13 */
/* 794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 796 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 798 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 800 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 802 */	NdrFcShort( 0x24 ),	/* 36 */
/* 804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 806 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 808 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x2 ),	/* 2 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 816 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 818 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 820 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 822 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 826 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenELA */

/* 834 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0xe ),	/* 14 */
/* 842 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 844 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 846 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 848 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 850 */	NdrFcShort( 0x29 ),	/* 41 */
/* 852 */	NdrFcShort( 0x40 ),	/* 64 */
/* 854 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 856 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 860 */	NdrFcShort( 0x2 ),	/* 2 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 864 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 866 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 868 */	NdrFcShort( 0x114 ),	/* Type Offset=276 */

	/* Parameter ModuleName */

/* 870 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter RegModuleName */

/* 876 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 880 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter MajorVersion */

/* 882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 890 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 894 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 896 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 898 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrRegisterEventSourceA */

/* 906 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0xf ),	/* 15 */
/* 914 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 916 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 918 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 920 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 922 */	NdrFcShort( 0x29 ),	/* 41 */
/* 924 */	NdrFcShort( 0x40 ),	/* 64 */
/* 926 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 928 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 932 */	NdrFcShort( 0x2 ),	/* 2 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 936 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 938 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 940 */	NdrFcShort( 0x114 ),	/* Type Offset=276 */

	/* Parameter ModuleName */

/* 942 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 944 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 946 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter RegModuleName */

/* 948 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 950 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 952 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter MajorVersion */

/* 954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 962 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 966 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 968 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 970 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 974 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenBELA */

/* 978 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x10 ),	/* 16 */
/* 986 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 988 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 990 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 992 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 994 */	NdrFcShort( 0x29 ),	/* 41 */
/* 996 */	NdrFcShort( 0x40 ),	/* 64 */
/* 998 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1000 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1002 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 1008 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1010 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1012 */	NdrFcShort( 0x114 ),	/* Type Offset=276 */

	/* Parameter FileName */

/* 1014 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1018 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter MajorVersion */

/* 1020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 1026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 1032 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1034 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1036 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 1038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1040 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReadELA */

/* 1044 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1052 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1054 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1056 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1058 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1060 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1062 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1064 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 1066 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1074 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1076 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1078 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ReadFlags */

/* 1080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RecordOffset */

/* 1086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumberOfBytesToRead */

/* 1092 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1096 */	NdrFcShort( 0x118 ),	/* 280 */

	/* Parameter Buffer */

/* 1098 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1100 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1102 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter NumberOfBytesRead */

/* 1104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1106 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinNumberOfBytesNeeded */

/* 1110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1112 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1118 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReportEventA */

/* 1122 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1130 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1132 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1134 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1136 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1138 */	NdrFcShort( 0x8c ),	/* 140 */
/* 1140 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1142 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xf,		/* 15 */
/* 1144 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1152 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1154 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1156 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Time */

/* 1158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EventType */

/* 1164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1168 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 1170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1174 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 1176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1178 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumStrings */

/* 1182 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1184 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1186 */	NdrFcShort( 0x122 ),	/* 290 */

	/* Parameter DataSize */

/* 1188 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1190 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1192 */	NdrFcShort( 0x12c ),	/* 300 */

	/* Parameter ComputerName */

/* 1194 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1196 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1198 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter UserSID */

/* 1200 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1202 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1204 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Parameter Strings */

/* 1206 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1208 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1210 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter Data */

/* 1212 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1214 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1216 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Parameter Flags */

/* 1218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1220 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1222 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 1224 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1226 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1228 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Parameter TimeWritten */

/* 1230 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1232 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1234 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 1236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1238 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrRegisterClusterSvc */

/* 1242 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1250 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1252 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 1254 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1256 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1258 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1260 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1262 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1264 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 1272 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1274 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1276 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter pulSize */

/* 1278 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1280 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1282 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Parameter ppPackedEventInfo */

/* 1284 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1286 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1288 */	NdrFcShort( 0x168 ),	/* Type Offset=360 */

	/* Return value */

/* 1290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrDeregisterClusterSvc */

/* 1296 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1306 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 1308 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1310 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1312 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1318 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 1326 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1328 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1330 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Return value */

/* 1332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrWriteClusterEvents */

/* 1338 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1346 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1348 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 1350 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1352 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1354 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1358 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1360 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 1368 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1370 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1372 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter ulSize */

/* 1374 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1378 */	NdrFcShort( 0x17c ),	/* 380 */

	/* Parameter pBuffer */

/* 1380 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1384 */	NdrFcShort( 0x18a ),	/* Type Offset=394 */

	/* Return value */

/* 1386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrGetLogInformation */

/* 1392 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1400 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1402 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1404 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1406 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1408 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1410 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1412 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 1414 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1422 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1424 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1426 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter InfoLevel */

/* 1428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 1434 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1438 */	NdrFcShort( 0x19a ),	/* Type Offset=410 */

	/* Parameter cbBufSize */

/* 1440 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1442 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1444 */	NdrFcShort( 0x1a6 ),	/* 422 */

	/* Parameter pcbBytesNeeded */

/* 1446 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1448 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1454 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrFlushEL */

/* 1458 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1466 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1468 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1470 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1472 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1474 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1478 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1480 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1488 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1490 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1492 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 1494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1496 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	0x30,		/* FC_BIND_CONTEXT */
			0x49,		/* Ctxt flags:  in, strict, can't be null */
/*  4 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  6 */	
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0x14 ),	/* Offset= 20 (28) */
/* 10 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 16 */	NdrFcShort( 0x2 ),	/* 2 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 26 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 28 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 30 */	NdrFcShort( 0x8 ),	/* 8 */
/* 32 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 36 */	NdrFcShort( 0x4 ),	/* 4 */
/* 38 */	NdrFcShort( 0x4 ),	/* 4 */
/* 40 */	0x12, 0x0,	/* FC_UP */
/* 42 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (10) */
/* 44 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 46 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 48 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 50 */	
			0x11, 0x0,	/* FC_RP */
/* 52 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (28) */
/* 54 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 56 */	NdrFcShort( 0x2 ),	/* Offset= 2 (58) */
/* 58 */	0x30,		/* FC_BIND_CONTEXT */
			0xe9,		/* Ctxt flags:  via ptr, in, out, strict, can't be null */
/* 60 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 62 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 64 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 66 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 72 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 74 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 76 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 80 */	NdrFcShort( 0x2 ),	/* Offset= 2 (82) */
/* 82 */	0x30,		/* FC_BIND_CONTEXT */
			0xa8,		/* Ctxt flags:  via ptr, out, strict, */
/* 84 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 86 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 88 */	NdrFcLong( 0x0 ),	/* 0 */
/* 92 */	NdrFcLong( 0x7ffff ),	/* 524287 */
/* 96 */	
			0x11, 0x0,	/* FC_RP */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 104 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 108 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 110 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 112 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 118 */	NdrFcLong( 0x100 ),	/* 256 */
/* 122 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 128 */	NdrFcLong( 0x3ffff ),	/* 262143 */
/* 132 */	
			0x12, 0x0,	/* FC_UP */
/* 134 */	NdrFcShort( 0x1e ),	/* Offset= 30 (164) */
/* 136 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 138 */	NdrFcShort( 0x6 ),	/* 6 */
/* 140 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 142 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 144 */	NdrFcShort( 0x6 ),	/* 6 */
/* 146 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 148 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (136) */
/* 150 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 152 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 154 */	NdrFcShort( 0x4 ),	/* 4 */
/* 156 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 158 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 160 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 162 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 164 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 168 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (152) */
/* 170 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 172 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 174 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (142) */
/* 176 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 178 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 180 */	NdrFcShort( 0x2 ),	/* Offset= 2 (182) */
/* 182 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 184 */	NdrFcShort( 0x4 ),	/* 4 */
/* 186 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 188 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 190 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 192 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 194 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 196 */	NdrFcShort( 0x4 ),	/* 4 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	0x12, 0x0,	/* FC_UP */
/* 208 */	NdrFcShort( 0xff4c ),	/* Offset= -180 (28) */
/* 210 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 212 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 214 */	
			0x12, 0x0,	/* FC_UP */
/* 216 */	NdrFcShort( 0x2 ),	/* Offset= 2 (218) */
/* 218 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 220 */	NdrFcShort( 0x1 ),	/* 1 */
/* 222 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 224 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 226 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 228 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 230 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 232 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 234 */	
			0x12, 0x0,	/* FC_UP */
/* 236 */	NdrFcShort( 0xe ),	/* Offset= 14 (250) */
/* 238 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 242 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 244 */	NdrFcShort( 0x2 ),	/* 2 */
/* 246 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 248 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 250 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 256 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 258 */	NdrFcShort( 0x4 ),	/* 4 */
/* 260 */	NdrFcShort( 0x4 ),	/* 4 */
/* 262 */	0x12, 0x0,	/* FC_UP */
/* 264 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (238) */
/* 266 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 268 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 270 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 272 */	
			0x11, 0x0,	/* FC_RP */
/* 274 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (250) */
/* 276 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 278 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 280 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 286 */	NdrFcLong( 0x7ffff ),	/* 524287 */
/* 290 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 296 */	NdrFcLong( 0x100 ),	/* 256 */
/* 300 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcLong( 0x3ffff ),	/* 262143 */
/* 310 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 312 */	NdrFcShort( 0x2 ),	/* Offset= 2 (314) */
/* 314 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 316 */	NdrFcShort( 0x4 ),	/* 4 */
/* 318 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 320 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 322 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 324 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 326 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 328 */	NdrFcShort( 0x4 ),	/* 4 */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	0x12, 0x0,	/* FC_UP */
/* 340 */	NdrFcShort( 0xffa6 ),	/* Offset= -90 (250) */
/* 342 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 344 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 346 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 348 */	NdrFcShort( 0x2 ),	/* Offset= 2 (350) */
/* 350 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 356 */	NdrFcLong( 0x7ffff ),	/* 524287 */
/* 360 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 362 */	NdrFcShort( 0x2 ),	/* Offset= 2 (364) */
/* 364 */	
			0x12, 0x0,	/* FC_UP */
/* 366 */	NdrFcShort( 0x2 ),	/* Offset= 2 (368) */
/* 368 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 372 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 376 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 378 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 380 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 386 */	NdrFcLong( 0x7ffff ),	/* 524287 */
/* 390 */	
			0x11, 0x0,	/* FC_RP */
/* 392 */	NdrFcShort( 0x2 ),	/* Offset= 2 (394) */
/* 394 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 398 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 400 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 402 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 404 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 406 */	
			0x11, 0x0,	/* FC_RP */
/* 408 */	NdrFcShort( 0x2 ),	/* Offset= 2 (410) */
/* 410 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 414 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 418 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 420 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 422 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 428 */	NdrFcLong( 0x400 ),	/* 1024 */

			0x0
        }
    };

static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ] = 
        {
        {
            (GENERIC_BINDING_ROUTINE)EVENTLOG_HANDLE_W_bind,
            (GENERIC_UNBIND_ROUTINE)EVENTLOG_HANDLE_W_unbind
         }
        ,{
            (GENERIC_BINDING_ROUTINE)EVENTLOG_HANDLE_A_bind,
            (GENERIC_UNBIND_ROUTINE)EVENTLOG_HANDLE_A_unbind
         }
        
        };


static const unsigned short eventlog_FormatStringOffsetTable[] =
    {
    0,
    48,
    96,
    138,
    180,
    228,
    276,
    330,
    402,
    474,
    540,
    618,
    738,
    786,
    834,
    906,
    978,
    1044,
    1122,
    1242,
    1296,
    1338,
    1392,
    1458
    };


static const MIDL_STUB_DESC eventlog_StubDesc = 
    {
    (void *)& eventlog___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &eventlog_handle,
    0,
    BindingRoutines,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x600016e, /* MIDL Version 6.0.366 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0   /* Reserved5 */
    };
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

