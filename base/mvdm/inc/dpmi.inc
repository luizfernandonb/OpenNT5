ifdef WOW_x86
include vint.inc
endif
include bop.inc

LDT_SIZE	EQU	1FFFH 
InitDosxRM	EQU	0 
InitDosx	EQU	1 
InitLDT	EQU	2 
GetFastBopAddress	EQU	3 
InitIDT	EQU	4 
InitExceptionHandlers	EQU	5 
InitApp	EQU	6 
TerminateApp	EQU	7 
DpmiInUse	EQU	8 
DpmiNoLongerInUse	EQU	9 
DPMISwitchToProtectedMode	EQU	10  
DPMISwitchToRealMode	EQU	11 
SetAltRegs	EQU	12 
IntHandlerIret	EQU	13 
IntHandlerIretd	EQU	14 
FaultHandlerIret	EQU	15 
FaultHandlerIretd	EQU	16 
DpmiUnhandledException	EQU	17 
RMCallBackCall	EQU	18 
ReflectIntrToPM	EQU	19 
ReflectIntrToV86	EQU	20 
InitPmStackInfo	EQU	21 
VcdPmSvcCall32	EQU	22 
SetDescriptorTableEntries	EQU	23 
ResetLDTUserBase	EQU	24 
XlatInt21Call	EQU	25 
Int31Entry	EQU	26 
Int31Call	EQU	27 
HungAppIretAndExit	EQU	28 
MAX_DPMI_BOP_FUNC	EQU	HungAppIretAndExit + 1 
DPMIBOP macro SubFun
    BOP BOP_DPMI
    db SubFun
    endm

