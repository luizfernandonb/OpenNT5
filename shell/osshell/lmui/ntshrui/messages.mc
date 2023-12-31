;//+-------------------------------------------------------------------------
;//
;//  Microsoft Windows
;//  Copyright (C) Microsoft Corporation, 1992 - 1993.
;//
;//  File:      messages.mc
;//
;//  Contents:  Main message file
;//
;//  History:   dd-mmm-yy Author    Comment
;//             21-Apr-95 BruceFo	Added to ntshrui
;//
;//  Notes:
;// A .mc file is compiled by the MC tool to generate a .h file and
;// a .rc (resource compiler script) file.
;//
;// Comments in .mc files start with a ";".
;// Comment lines are generated directly in the .h file, without
;// the leading ";"
;//
;// See mc.hlp for more help on .mc files and the MC tool.
;//
;//--------------------------------------------------------------------------


;#ifndef __MESSAGES_H__
;#define __MESSAGES_H__

MessageIdTypedef=HRESULT

SeverityNames=(Success=0x0:STATUS_SEVERITY_SUCCESS
               CoError=0x2:STATUS_SEVERITY_COERROR
              )

;#ifdef FACILITY_NULL
;#undef FACILITY_NULL
;#endif
;#ifdef FACILITY_RPC
;#undef FACILITY_RPC
;#endif
;#ifdef FACILITY_DISPATCH
;#undef FACILITY_DISPATCH
;#endif
;#ifdef FACILITY_STORAGE
;#undef FACILITY_STORAGE
;#endif
;#ifdef FACILITY_ITF
;#undef FACILITY_ITF
;#endif
;#ifdef FACILITY_WIN32
;#undef FACILITY_WIN32
;#endif
;#ifdef FACILITY_WINDOWS
;#undef FACILITY_WINDOWS
;#endif
FacilityNames=(Null=0x0:FACILITY_NULL
               Rpc=0x1:FACILITY_RPC
               Dispatch=0x2:FACILITY_DISPATCH
               Storage=0x3:FACILITY_STORAGE
               Interface=0x4:FACILITY_ITF
               Win32=0x7:FACILITY_WIN32
               Windows=0x8:FACILITY_WINDOWS
              )

;//--------------------------------------------------------------------------
;//	Success messages
;//--------------------------------------------------------------------------

MessageId=0x100 Facility=Null Severity=Success SymbolicName=MSG_STOPSHARECONNS
Language=English
There are %1!d! user(s) connected to %2. If you stop sharing %2, they will be disconnected. Do you want to continue?
.

MessageId= Facility=Null Severity=Success SymbolicName=MSG_STOPSHAREOPENS
Language=English
There are %1!d! file(s) open by %2!d! user(s) connected to %3. If you stop sharing %3, the files will close, which may cause these users to lose data. Do you want to continue?
.

MessageId= Facility=Null Severity=Success SymbolicName=MSG_RMDIRCONFIRM
Language=English
You are sharing %1 as %2. Others may be using files in this folder. If you delete the folder, it will no longer be shared. Are you sure you want to delete it?
.

MessageId= Facility=Null Severity=Success SymbolicName=MSG_MVDIRCONFIRM
Language=English
You are sharing %1 as %2. The folder will not be shared after you move or rename it. Are you sure you want to continue?
.

MessageId= Facility=Null Severity=Success SymbolicName=MSG_RESHARENAMECONFIRM
Language=English
You are already sharing %1 using the name %2. Do you want to share %3 using the name %2 instead?
.

MessageId= Facility=Null Severity=Success SymbolicName=MSG_MULTIDEL
Language=English
This folder is shared more than once. Are you sure you wish to remove all these shares?
.

MessageId= Facility=Null Severity=Success SymbolicName=MSG_LONGNAMECONFIRM
Language=English
If the share name is longer than 12 characters, this folder cannot be accessed by computers running Windows 98SE, Windows Millenium Edition, Windows NT 4.0, or earlier operating systems. To make the folder fully accessible, name it using 12 characters or fewer.

Do you want to use the share name "%1" anyway?
.

;//--------------------------------------------------------------------------
;//	Error messages
;// BUGBUG: get rid of hex numbered error message!
;//--------------------------------------------------------------------------

MessageId= Facility=Null Severity=CoError SymbolicName=IERR_UNKNOWN
Language=English
Unknown error 0x%1!08lx!.
.

MessageId= Facility=Null Severity=CoError SymbolicName=IERR_CANT_ADD_SHARE
Language=English
An error occurred while trying to share %1. %2
The shared resource was not created at this time.
.

MessageId= Facility=Null Severity=CoError SymbolicName=IERR_CANT_MODIFY_SHARE
Language=English
An error occurred while trying to modify share %1. %2
.

MessageId= Facility=Null Severity=CoError SymbolicName=IERR_CANT_DEL_SHARE
Language=English
An error occurred while trying to delete share %1. %2
.

MessageId= Facility=Null Severity=CoError SymbolicName=IERR_NOACLEDITOR
Language=English
Error invoking the security editor.
.

MessageId= Facility=Null Severity=CoError SymbolicName=IERR_BlankShareName
Language=English
You must type a share name for this resource.
.

MessageId= Facility=Null Severity=CoError SymbolicName=IERR_InvalidShareName
Language=English
The share name contains invalid characters.
.

MessageId= Facility=Null Severity=CoError SymbolicName=IERR_InaccessibleByDos
Language=English
The share name %1 is not accessible from some MS-DOS workstations. Are you sure you want to use the share name?
.

MessageId= Facility=Null Severity=CoError SymbolicName=IERR_AlreadyExists
Language=English
The share name %1 already exists for this resource. Please choose another share name.
.

MessageId= Facility=Null Severity=CoError SymbolicName=IERR_AdminShare
Language=English
This has been shared for administrative purposes. The permissions cannot be set.
.

MessageId= Facility=Null Severity=CoError SymbolicName=IERR_SpecialShare
Language=English
The share names ADMIN$ and IPC$ are reserved and may not be used.
.

;//--------------------------------------------------------------------------
;//	JonN 4/4/01 328512
;// Explorer Sharing Tab (NTSHRUI) should popup warning on deleting
;// SYSVOL,NETLOGON and C$, D$... shares
;//--------------------------------------------------------------------------
MessageId= Facility=Null Severity=Success SymbolicName=MSG_DELSPECIALSHARE
Language=English
This share is required for the machine to act properly as a domain controller. Removing it will cause a loss of functionality on all clients that this domain controller serves.  Are you sure you wish to stop sharing %1?
.

MessageId= Facility=Null Severity=Success SymbolicName=MSG_DELADMINSHARE
Language=English
This share was created for administrative purposes only.  The share will reappear when the Server service is stopped and restarted or the computer is rebooted.  Are you sure you wish to stop sharing %1?
.

;#endif // __MESSAGES_H__
