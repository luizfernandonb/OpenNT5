;/**********************************************************************/
;/**                       Microsoft Windows NT                       **/
;/**                Copyright(c) Microsoft Corp., 1993                **/
;/**********************************************************************/
;
;/*
;    msg.h
;
;    This file is generated by the MC tool from the MSG.MC message
;    file.
;
;
;    FILE HISTORY:
;        KeithMo     19-Mar-1993 Created.
;
;*/
;
;
;#ifndef _MSG_H_
;#define _MSG_H_
;

SeverityNames=(Success=0x0
               Informational=0x1
               Warning=0x2
               Error=0x3
              )

Messageid=1 Severity=Error SymbolicName=FTPD_EVENT_CANNOT_INITIALIZE_SECURITY
Language=English
FTP Server could not initialize its security.  The data is the error.
.

Messageid=3 Severity=Error SymbolicName=FTPD_EVENT_CANNOT_INITIALIZE_WINSOCK
Language=English
FTP Server could not initialize the socket library.  The data is the error.
.

Messageid=4 Severity=Error SymbolicName=FTPD_EVENT_OUT_OF_MEMORY
Language=English
FTP Server was unable to initialize due to a shortage of available memory.  The data is the error.
.

Messageid=5 Severity=Error SymbolicName=FTPD_EVENT_CANNOT_LOCATE_FTP
Language=English
FTP Server could not locate the FTP/TCP service.  The data is the error.
.

Messageid=6 Severity=Error SymbolicName=FTPD_EVENT_CANNOT_CREATE_CONNECTION_SOCKET
Language=English
FTP Server could not create the main connection socket.  The data is the error.
.

Messageid=7 Severity=Error SymbolicName=FTPD_EVENT_CANNOT_CREATE_CONNECTION_THREAD
Language=English
FTP Server could not create the main connection thread.  The data is the error.
.

MessageId=8 Severity=Error SymbolicName=FTPD_EVENT_CANNOT_CREATE_CLIENT_THREAD
Language=English
FTP Server could not create a client worker thread for user at host %1.  The connection to this user is terminated.  The data is the error.
.

MessageId=9 Severity=Error SymbolicName=FTPD_EVENT_SYSTEM_CALL_FAILED
Language=English
A call to a system service failed unexpectedly.  The data is the error.
.

MessageId=10 Severity=Warning SymbolicName=FTPD_EVENT_CLIENT_TIMEOUT
Language=English
User %1 at host %2 has timed-out after %3 seconds of inactivity.
.

Messageid=11 Severity=Informational SymbolicName=FTPD_EVENT_ANONYMOUS_LOGON
Language=English
Anonymous logon request received from %1 at host %2.
.

Messageid=12 Severity=Informational SymbolicName=FTPD_EVENT_NONANONYMOUS_LOGON
Language=English
User logon request received from %1 at host %2.
.

Messageid=13 Severity=Warning SymbolicName=FTPD_EVENT_BAD_HOME_DIRECTORY
Language=English
User %1 failed to log on, could not access the home directory %2.
.

Messageid=14 Severity=Warning SymbolicName=FTPD_EVENT_RETRO_ACCESS_DENIED
Language=English
User %1 denied access to the current directory %2 due to a security change.
.

Messageid=15 Severity=Error SymbolicName=FTP_PASVPORT_MB_ACCESS_FAILED
Language=English
Failed to read metabase property PassivePortRange under the FTP Service node %1.
.

Messageid=16 Severity=Error SymbolicName=FTP_PASVPORT_INVALID_VALUE
Language=English
The FTP Service configuration property PassivePortRange has invalid value: %1.
.

;
;#endif  // _MSG_H_
;
