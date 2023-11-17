

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __elf_h__
#define __elf_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "imports.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __eventlog_INTERFACE_DEFINED__
#define __eventlog_INTERFACE_DEFINED__

/* interface eventlog */
/* [implicit_handle][strict_context_handle][unique][ms_union][version][uuid] */ 

typedef UNICODE_STRING RPC_UNICODE_STRING;

typedef UNICODE_STRING *PRPC_UNICODE_STRING;

typedef struct _RPC_SID
    {
    UCHAR Revision;
    UCHAR SubAuthorityCount;
    SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
    /* [size_is] */ ULONG SubAuthority[ 1 ];
    } 	RPC_SID;

typedef struct _RPC_SID *PRPC_SID;

typedef struct _RPC_SID **PPRPC_SID;

typedef struct _RPC_STRING
    {
    USHORT Length;
    USHORT MaximumLength;
    /* [size_is] */ PCHAR Buffer;
    } 	RPC_STRING;

typedef struct _RPC_STRING *PRPC_STRING;

typedef struct _RPC_STRING RPC_ANSI_STRING;

typedef struct _RPC_STRING *PRPC_ANSI_STRING;

typedef struct _RPC_CLIENT_ID
    {
    ULONG UniqueProcess;
    ULONG UniqueThread;
    } 	RPC_CLIENT_ID;

typedef struct _RPC_CLIENT_ID *PRPC_CLIENT_ID;

typedef /* [unique][handle] */ LPWSTR EVENTLOG_HANDLE_W;

typedef /* [unique][handle] */ LPSTR EVENTLOG_HANDLE_A;

typedef /* [range] */ unsigned long RULONG;

typedef /* [context_handle] */ struct _IELF_HANDLE
    {
    LIST_ENTRY Next;
    ULONG Signature;
    ULONG Flags;
    ULONG GrantedAccess;
    ATOM Atom;
    ULONG SeekRecordPos;
    ULONG SeekBytePos;
    ULONG MajorVersion;
    ULONG MinorVersion;
    DWORD dwNotifyRequests;
    ULONG NameLength;
    /* [size_is] */ WCHAR Name[ 1 ];
    } 	*IELF_HANDLE;

typedef IELF_HANDLE *PIELF_HANDLE;

NTSTATUS ElfrClearELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_UNICODE_STRING BackupFileName);

NTSTATUS ElfrBackupELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName);

NTSTATUS ElfrCloseEL( 
    /* [out][in] */ PIELF_HANDLE LogHandle);

NTSTATUS ElfrDeregisterEventSource( 
    /* [out][in] */ PIELF_HANDLE LogHandle);

NTSTATUS ElfrNumberOfRecords( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ PULONG NumberOfRecords);

NTSTATUS ElfrOldestRecord( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ PULONG OldestRecordNumber);

NTSTATUS ElfrChangeNotify( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ RPC_CLIENT_ID ClientId,
    /* [in] */ ULONG Event);

NTSTATUS ElfrOpenELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

NTSTATUS ElfrRegisterEventSourceW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

NTSTATUS ElfrOpenBELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

NTSTATUS ElfrReadELW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG ReadFlags,
    /* [in] */ ULONG RecordOffset,
    /* [range][in] */ ULONG NumberOfBytesToRead,
    /* [size_is][out] */ PBYTE Buffer,
    /* [out] */ PULONG NumberOfBytesRead,
    /* [out] */ PULONG MinNumberOfBytesNeeded);

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
    /* [unique][out][in] */ PULONG TimeWritten);

NTSTATUS ElfrClearELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_STRING BackupFileName);

NTSTATUS ElfrBackupELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_STRING BackupFileName);

NTSTATUS ElfrOpenELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

NTSTATUS ElfrRegisterEventSourceA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

NTSTATUS ElfrOpenBELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING FileName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle);

NTSTATUS ElfrReadELA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG ReadFlags,
    /* [in] */ ULONG RecordOffset,
    /* [range][in] */ ULONG NumberOfBytesToRead,
    /* [size_is][out] */ PBYTE Buffer,
    /* [out] */ PULONG NumberOfBytesRead,
    /* [out] */ PULONG MinNumberOfBytesNeeded);

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
    /* [unique][out][in] */ PULONG TimeWritten);


NTSTATUS ElfrRegisterClusterSvc( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [out] */ RULONG *pulSize,
    /* [size_is][size_is][out] */ BYTE **ppPackedEventInfo);

NTSTATUS ElfrDeregisterClusterSvc( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName);

NTSTATUS ElfrWriteClusterEvents( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [range][in] */ ULONG ulSize,
    /* [size_is][in] */ BYTE *pBuffer);

NTSTATUS ElfrGetLogInformation( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG InfoLevel,
    /* [size_is][out] */ PBYTE lpBuffer,
    /* [range][in] */ ULONG cbBufSize,
    /* [out] */ PULONG pcbBytesNeeded);

NTSTATUS ElfrFlushEL( 
    /* [in] */ IELF_HANDLE LogHandle);


extern handle_t eventlog_handle;


extern RPC_IF_HANDLE eventlog_ClientIfHandle;
extern RPC_IF_HANDLE eventlog_ServerIfHandle;
#endif /* __eventlog_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER EVENTLOG_HANDLE_W_bind  ( EVENTLOG_HANDLE_W );
void     __RPC_USER EVENTLOG_HANDLE_W_unbind( EVENTLOG_HANDLE_W, handle_t );
handle_t __RPC_USER EVENTLOG_HANDLE_A_bind  ( EVENTLOG_HANDLE_A );
void     __RPC_USER EVENTLOG_HANDLE_A_unbind( EVENTLOG_HANDLE_A, handle_t );

void __RPC_USER IELF_HANDLE_rundown( IELF_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


