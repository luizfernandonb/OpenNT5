;/**********************************************************************/
;/**                       Microsoft Windows NT                       **/
;/**                Copyright(c) Microsoft Corp., 1993                **/
;/**********************************************************************/
;
;/*
;    ssincmsg.h
;
;    This file is generated by the MC tool from the SSINCMSG.MC message
;    file.
;
;
;    FILE HISTORY:
;        MingLu     11-Apr-1993 Created.
;
;    Note: ssinc messages have been modified the way that all of them
;    will ignore file and URL names. It is to assure that there are no security
;    issues such as allowing cross site scripting attack or exposing
;    physical paths to files
; 
;
;*/
;
;
;#ifndef _SSINCMSG_H_
;#define _SSINCMSG_H_
;

SeverityNames=(Success=0x0
               Informational=0x1
               Warning=0x2
               Error=0x3
              )


Messageid=2501 Severity=Error SymbolicName=SSINCMSG_ERROR_HANDLING_FILE
Language=English
<B>Error processing SSI file</B><BR>
.

Messageid=2502 Severity=Error SymbolicName=SSINCMSG_INVALID_TAG
Language=English
<B>Invalid SSI Tag</B><BR>
.

Messageid=2503 Severity=Error SymbolicName=SSINCMSG_CANT_DO_FLASTMOD
Language=English
<B>Cannot perform flastmod(): Win32 Error Code = %2!.20s!</B><BR>
.

Messageid=2504 Severity=Error SymbolicName=SSINCMSG_CANT_DO_FSIZE
Language=English
<B>Cannot perform fsize(): Win32 Error Code = %2!.20s!</B><BR>
.

Messageid=2505 Severity=Error SymbolicName=SSINCMSG_CANT_FIND_VARIABLE
Language=English
<B>Variable '%1!.40s!' cannot be found</B><BR>
.

Messageid=2506 Severity=Error SymbolicName=SSINCMSG_CANT_EVALUATE_VARIABLE
Language=English
<B>Variable '%1!.40s!' cannot be evaluated</B><BR>
.

Messageid=2507 Severity=Error SymbolicName=SSINCMSG_NOT_SUPPORTED
Language=English
<B>SSI feature not supported</B><BR>
.

Messageid=2508 Severity=Error SymbolicName=SSINCMSG_REQUEST_ERROR
Language=English
<B>Error handling SSI File :  Win32 Error Code = %2!.20s!</B><BR>
.

Messageid=2509 Severity=Error SymbolicName=SSINCMSG_LOG_ERROR
Language=English
<B>Failed to process SSI file</B><BR>
.

Messageid=2510 Severity=Error SymbolicName=SSINCMSG_CANT_EXEC_CMD
Language=English
<B>Failed to execute CMD :  Win32 Error Code = %2!.20s!</B><BR>
.

Messageid=2511 Severity=Error SymbolicName=SSINCMSG_CANT_EXEC_CGI
Language=English
<B>Failed to execute CGI :  Win32 Error Code = %2!.20s!</B><BR>
.

Messageid=2512 Severity=Error SymbolicName=SSINCMSG_CANT_EXEC_ISA
Language=English
<B>Failed to execute ISAPI extension :  Win32 Error Code = %2!.20s!</B><BR>
.

Messageid=2513 Severity=Error SymbolicName=SSINCMSG_NO_EXECUTE_PERMISSION
Language=English
<B>Cannot #EXEC file due to lack of EXECUTE permission</B><BR>
.

Messageid=2514 Severity=Error SymbolicName=SSINCMSG_ACCESS_DENIED
Language=English
<B>Cannot process file due to access denied</B><BR>
.

Messageid=2515 Severity=Error SymbolicName=SSINCMSG_MAX_NESTED_INCLUDES
Language=English
<B>A server side include file has included itself or the maximum depth of server side includes has been exceeded.</B><BR>
.

Messageid=2516 Severity=Error SymbolicName=SSINCMSG_CMD_NOT_ENABLED
Language=English
<B>The CMD option is not enabled for #EXEC calls</B><BR>
.

Messageid=2517 Severity=Error SymbolicName=SSINCMSG_EXEC_DISABLED
Language=English
<B>#EXEC calls have been disabled for this virtual path</B><BR>
.

Messageid=2518 Severity=Error SymbolicName=SSINCMSG_ERROR_RECURSIVE_INCLUDE
Language=English
<B>There is a recursive #INCLUDE chain</B><BR>
.

Messageid=2519 Severity=Error SymbolicName=SSINCMSG_CANT_EXEC_CGI_REPORT_HTTP_STATUS
Language=English
<B>Failed to execute script:  Http Status Code = %2!.20s!</B><BR>
.

;
;#endif  // _SSINCMSG_H_
;


