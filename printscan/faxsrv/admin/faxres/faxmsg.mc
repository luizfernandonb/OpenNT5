;/*--
;Copyright (c) 2001  Microsoft Corporation
;
;Module Name:
;
;    faxmsg.mc
;
;Abstract:
;
;    This file contains the message definitions for the fax routing dll and the fax service exe.
;
;Author:
;
;
;    1.Wesley Witt (wesw) 7-Mar-1997
;	 2.Wesley Witt (wesw) 12-January-1996	
;
;Revision History:
;
;	1.copied from faxrtmsg.mc
;	2.copied from faxsvmsg.mc
;
;Notes:
;
;--*/
;

;
;/*	1: FXSROUTE.dll messages  */
;

SeverityNames=(Success=0x0:STATUS_SEVERITY_SUCCESS
               Informational=0x1:STATUS_SEVERITY_INFORMATIONAL
               Warning=0x2:STATUS_SEVERITY_WARNING
               Error=0x3:STATUS_SEVERITY_ERROR
              )

MessageId=0x3001
Severity=Informational
SymbolicName=MSG_MAIL_MSG_BODY
Language=English
Sender: %1

Caller ID: %2
Recipient name: %3
Pages: %4!ld!
Transmission start time: %5
Transmission duration: %6
Device name: %7
.

MessageId=0x3002
Severity=Informational
SymbolicName=MSG_SUBJECT_LINE
Language=English
Fax server %1 received a new fax from %2.%0
.

;
;/*	2: FXSSVC.exe messages */
;

SeverityNames=(Success=0x0:STATUS_SEVERITY_SUCCESS
               Informational=0x1:STATUS_SEVERITY_INFORMATIONAL
               Warning=0x2:STATUS_SEVERITY_WARNING
               Error=0x3:STATUS_SEVERITY_ERROR
              )



MessageId=0x1007
Severity=Informational
SymbolicName=MSG_DR_SINGLE_SUBJECT
Language=English
Fax %1was successfully sent to %2 at %3.%0
.

MessageId=0x1008
Severity=Informational
SymbolicName=MSG_NDR_SINGLE_SUBJECT
Language=English
Fax %1failed to send to %2 at %3 (%4).%0
.

MessageId=0x1009
Severity=Informational
SymbolicName=MSG_DR_BROADCAST_SUBJECT
Language=English
Fax %1was successfully sent to %2 and all other recipients.%0
.

MessageId=0x100A
Severity=Informational
SymbolicName=MSG_NDR_BROADCAST_SUBJECT
Language=English
Fax %1was not successfully sent to %2!d! recipients. Canceled: %3!d! recipient(s). Failed: %4!d! recipient(s).%0
.

MessageId=0x100B
Severity=Informational
SymbolicName=MSG_DR_SINGLE_BODY
Language=English

%1
Fax submitted: %2
To server: %3
Transmission started: %4
Transmission end: %5
Number of retries: %6!ld!
Number of pages: %7!ld!
.

MessageId=0x100C
Severity=Informational
SymbolicName=MSG_NDR_SINGLE_BODY
Language=English

%1
Fax submitted: %2
To server: %3
Transmission started: %4
Transmission end: %5
Number of retries: %6!ld!
Number of pages: %7!ld!
Last error: %8
.

MessageId=0x100D
Severity=Informational
SymbolicName=MSG_DR_BROADCAST_BODY
Language=English

%1
Fax submitted: %2
To server: %3
Number of pages: %4!ld!
.

MessageId=0x100E
Severity=Informational
SymbolicName=MSG_NDR_BROADCAST_BODY
Language=English

%1
Fax submitted: %2
To server: %3
Number of pages: %4!ld!
.

MessageId=0x100F
Severity=Informational
SymbolicName=MSG_DR_SINGLE_SUBJECT_NONAME
Language=English
Fax %1was successfully sent to %3.%0
.

MessageId=0x1010
Severity=Informational
SymbolicName=MSG_NDR_SINGLE_SUBJECT_NONAME
Language=English
Fax %1failed to send to %3 (%4).%0
.

MessageId=0x1011
Severity=Informational
SymbolicName=MSG_BRANDING_FULL
Language=English
%1  FROM: %2  TO: %3   PAGE: %0
.

MessageId=0x1012
Severity=Informational
SymbolicName=MSG_BRANDING_SHORT
Language=English
%1  FROM: %2   PAGE: %0
.

MessageId=0x1013
Severity=Informational
SymbolicName=MSG_BRANDING_END
Language=English
OF%0
.

MessageId=0x1014
Severity=Informational
SymbolicName=MSG_DR_BROADCAST_HTML_BODY
Language=English
%1 <BR>
Fax submitted: %2 <BR>
To server: %3 <BR>
Number of pages: %4!ld!
.

MessageId=0x1015
Severity=Informational
SymbolicName=MSG_NDR_BROADCAST_HTML_BODY
Language=English
%1 <BR>
Fax submitted: %2 <BR>
To server: %3 <BR>
Number of pages: %4!ld!
.
