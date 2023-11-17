

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Thu Nov 16 12:12:50 2023
 */
/* Compiler settings for .\svcctl.idl:
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


#ifndef __svcctl_h__
#define __svcctl_h__

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

#ifndef __svcctl_INTERFACE_DEFINED__
#define __svcctl_INTERFACE_DEFINED__

/* interface svcctl */
/* [implicit_handle][strict_context_handle][unique][ms_union][version][uuid] */ 



typedef /* [handle] */ wchar_t *SVCCTL_HANDLEW;

typedef /* [handle] */ LPSTR SVCCTL_HANDLEA;

typedef /* [context_handle] */ PVOID SC_RPC_HANDLE;

typedef /* [context_handle] */ PVOID SC_RPC_LOCK;

typedef SC_RPC_HANDLE *LPSC_RPC_HANDLE;

typedef SC_RPC_LOCK *LPSC_RPC_LOCK;

typedef struct _STRING_PTRSA
    {
    /* [string] */ LPSTR StringPtr;
    } 	STRING_PTRSA;

typedef struct _STRING_PTRSA *PSTRING_PTRSA;

typedef struct _STRING_PTRSA *LPSTRING_PTRSA;

typedef struct _STRING_PTRSW
    {
    /* [string] */ wchar_t *StringPtr;
    } 	STRING_PTRSW;

typedef struct _STRING_PTRSW *PSTRING_PTRSW;

typedef struct _STRING_PTRSW *LPSTRING_PTRSW;

typedef /* [range] */ DWORD BOUNDED_DWORD;

typedef BOUNDED_DWORD *LPBOUNDED_DWORD;

DWORD RCloseServiceHandle( 
    /* [out][in] */ LPSC_RPC_HANDLE hSCObject);

DWORD RControlService( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwControl,
    /* [out] */ LPSERVICE_STATUS lpServiceStatus);

DWORD RDeleteService( 
    /* [in] */ SC_RPC_HANDLE hService);

DWORD RLockServiceDatabase( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [out] */ LPSC_RPC_LOCK lpLock);

DWORD RQueryServiceObjectSecurity( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ SECURITY_INFORMATION dwSecurityInformation,
    /* [size_is][out] */ LPBYTE lpSecurityDescriptor,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RSetServiceObjectSecurity( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ SECURITY_INFORMATION dwSecurityInformation,
    /* [size_is][in] */ LPBYTE lpSecurityDescriptor,
    /* [in] */ DWORD cbBufSize);

DWORD RQueryServiceStatus( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [out] */ LPSERVICE_STATUS lpServiceStatus);

DWORD RSetServiceStatus( 
    /* [in] */ SC_RPC_HANDLE hServiceStatus,
    /* [in] */ LPSERVICE_STATUS lpServiceStatus);

DWORD RUnlockServiceDatabase( 
    /* [out][in] */ LPSC_RPC_LOCK Lock);

DWORD RNotifyBootConfigStatus( 
    /* [unique][string][in] */ SVCCTL_HANDLEW lpMachineName,
    /* [in] */ DWORD BootAcceptable);

DWORD RI_ScSetServiceBitsW( 
    /* [in] */ SC_RPC_HANDLE hServiceStatus,
    /* [in] */ DWORD dwServiceBits,
    /* [in] */ DWORD bSetBitsOn,
    /* [in] */ DWORD bUpdateImmediately,
    /* [unique][string][in] */ wchar_t *pszTransportName);

DWORD RChangeServiceConfigW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwStartType,
    /* [in] */ DWORD dwErrorControl,
    /* [unique][string][in] */ wchar_t *lpBinaryPathName,
    /* [unique][string][in] */ wchar_t *lpLoadOrderGroup,
    /* [unique][out][in] */ LPDWORD lpdwTagId,
    /* [size_is][unique][in] */ LPBYTE lpDependencies,
    /* [in] */ DWORD dwDependSize,
    /* [unique][string][in] */ wchar_t *lpServiceStartName,
    /* [size_is][unique][in] */ LPBYTE lpPassword,
    /* [in] */ DWORD dwPwSize,
    /* [unique][string][in] */ wchar_t *lpDisplayName);

DWORD RCreateServiceW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ wchar_t *lpServiceName,
    /* [unique][string][in] */ wchar_t *lpDisplayName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwStartType,
    /* [in] */ DWORD dwErrorControl,
    /* [string][in] */ wchar_t *lpBinaryPathName,
    /* [unique][string][in] */ wchar_t *lpLoadOrderGroup,
    /* [unique][out][in] */ LPDWORD lpdwTagId,
    /* [size_is][unique][in] */ LPBYTE lpDependencies,
    /* [in] */ DWORD dwDependSize,
    /* [unique][string][in] */ wchar_t *lpServiceStartName,
    /* [size_is][unique][in] */ LPBYTE lpPassword,
    /* [in] */ DWORD dwPwSize,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle);

DWORD REnumDependentServicesW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpServices,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned);

DWORD REnumServicesStatusW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned,
    /* [unique][out][in] */ LPDWORD lpResumeIndex);

DWORD ROpenSCManagerW( 
    /* [unique][string][in] */ SVCCTL_HANDLEW lpMachineName,
    /* [unique][string][in] */ wchar_t *lpDatabaseName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpScHandle);

DWORD ROpenServiceW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ wchar_t *lpServiceName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle);

DWORD RQueryServiceConfigW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [byte_count][out] */ LPQUERY_SERVICE_CONFIGW lpServiceConfig,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RQueryServiceLockStatusW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [byte_count][out] */ LPQUERY_SERVICE_LOCK_STATUSW lpLockStatus,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RStartServiceW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD argc,
    /* [size_is][unique][in] */ LPSTRING_PTRSW argv);

DWORD RGetServiceDisplayNameW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ wchar_t *lpServiceName,
    /* [size_is][string][out] */ wchar_t *lpDisplayName,
    /* [out][in] */ LPBOUNDED_DWORD lpcchBuffer);

DWORD RGetServiceKeyNameW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ wchar_t *lpDisplayName,
    /* [size_is][string][out] */ wchar_t *lpServiceName,
    /* [out][in] */ LPBOUNDED_DWORD lpcchBuffer);

DWORD RI_ScSetServiceBitsA( 
    /* [in] */ SC_RPC_HANDLE hServiceStatus,
    /* [in] */ DWORD dwServiceBits,
    /* [in] */ DWORD bSetBitsOn,
    /* [in] */ DWORD bUpdateImmediately,
    /* [unique][string][out][in] */ LPSTR pszTransportName);

DWORD RChangeServiceConfigA( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwStartType,
    /* [in] */ DWORD dwErrorControl,
    /* [unique][string][in] */ LPSTR lpBinaryPathName,
    /* [unique][string][in] */ LPSTR lpLoadOrderGroup,
    /* [unique][out][in] */ LPDWORD lpdwTagId,
    /* [size_is][unique][in] */ LPBYTE lpDependencies,
    /* [in] */ DWORD dwDependSize,
    /* [unique][string][in] */ LPSTR lpServiceStartName,
    /* [size_is][unique][in] */ LPBYTE lpPassword,
    /* [in] */ DWORD dwPwSize,
    /* [unique][string][in] */ LPSTR lpDisplayName);

DWORD RCreateServiceA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ LPSTR lpServiceName,
    /* [unique][string][in] */ LPSTR lpDisplayName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwStartType,
    /* [in] */ DWORD dwErrorControl,
    /* [string][in] */ LPSTR lpBinaryPathName,
    /* [unique][string][in] */ LPSTR lpLoadOrderGroup,
    /* [unique][out][in] */ LPDWORD lpdwTagId,
    /* [size_is][unique][in] */ LPBYTE lpDependencies,
    /* [in] */ DWORD dwDependSize,
    /* [unique][string][in] */ LPSTR lpServiceStartName,
    /* [size_is][unique][in] */ LPBYTE lpPassword,
    /* [in] */ DWORD dwPwSize,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle);

DWORD REnumDependentServicesA( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpServices,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned);

DWORD REnumServicesStatusA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned,
    /* [unique][out][in] */ LPDWORD lpResumeIndex);

DWORD ROpenSCManagerA( 
    /* [unique][string][in] */ SVCCTL_HANDLEA lpMachineName,
    /* [unique][string][in] */ LPSTR lpDatabaseName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpScHandle);

DWORD ROpenServiceA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ LPSTR lpServiceName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle);

DWORD RQueryServiceConfigA( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [byte_count][out] */ LPQUERY_SERVICE_CONFIGA lpServiceConfig,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RQueryServiceLockStatusA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [byte_count][out] */ LPQUERY_SERVICE_LOCK_STATUSA lpLockStatus,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RStartServiceA( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD argc,
    /* [size_is][unique][in] */ LPSTRING_PTRSA argv);

DWORD RGetServiceDisplayNameA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ LPSTR lpServiceName,
    /* [size_is][string][out] */ LPSTR lpDisplayName,
    /* [out][in] */ LPBOUNDED_DWORD lpcchBuffer);

DWORD RGetServiceKeyNameA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ LPSTR lpDisplayName,
    /* [size_is][string][out] */ LPSTR lpKeyName,
    /* [out][in] */ LPBOUNDED_DWORD lpcchBuffer);

DWORD RI_ScGetCurrentGroupStateW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [unique][string][in] */ wchar_t *pszGroupName,
    /* [out] */ LPDWORD pdwCurrentState);

DWORD REnumServiceGroupW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned,
    /* [unique][out][in] */ LPDWORD lpResumeIndex,
    /* [unique][string][in] */ LPCWSTR pszGroupName);

typedef struct _SC_RPC_CONFIG_INFOA
    {
    DWORD dwInfoLevel;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ LPSERVICE_DESCRIPTIONA psd;
        /* [case()] */ LPSERVICE_FAILURE_ACTIONSA psfa;
        } 	;
    } 	SC_RPC_CONFIG_INFOA;

typedef struct _SC_RPC_CONFIG_INFOW
    {
    DWORD dwInfoLevel;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ LPSERVICE_DESCRIPTIONW psd;
        /* [case()] */ LPSERVICE_FAILURE_ACTIONSW psfa;
        } 	;
    } 	SC_RPC_CONFIG_INFOW;

DWORD RChangeServiceConfig2A( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ SC_RPC_CONFIG_INFOA Info);

DWORD RChangeServiceConfig2W( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ SC_RPC_CONFIG_INFOW Info);

DWORD RQueryServiceConfig2A( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwInfoLevel,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RQueryServiceConfig2W( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwInfoLevel,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RQueryServiceStatusEx( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ SC_STATUS_TYPE InfoLevel,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD REnumServicesStatusExA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ SC_ENUM_TYPE InfoLevel,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned,
    /* [unique][out][in] */ LPDWORD lpResumeIndex,
    /* [unique][string][in] */ LPCSTR pszGroupName);

DWORD REnumServicesStatusExW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ SC_ENUM_TYPE InfoLevel,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [range][in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned,
    /* [unique][out][in] */ LPDWORD lpResumeIndex,
    /* [unique][string][in] */ LPCWSTR pszGroupName);

DWORD RI_ScSendTSMessage( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ DWORD OpCode,
    /* [in] */ DWORD dwEvent,
    /* [range][in] */ DWORD cbData,
    /* [size_is][in] */ LPBYTE lpData);


extern handle_t svcctl_handle;


extern RPC_IF_HANDLE svcctl_ClientIfHandle;
extern RPC_IF_HANDLE svcctl_ServerIfHandle;
#endif /* __svcctl_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER SVCCTL_HANDLEW_bind  ( SVCCTL_HANDLEW );
void     __RPC_USER SVCCTL_HANDLEW_unbind( SVCCTL_HANDLEW, handle_t );
handle_t __RPC_USER SVCCTL_HANDLEA_bind  ( SVCCTL_HANDLEA );
void     __RPC_USER SVCCTL_HANDLEA_unbind( SVCCTL_HANDLEA, handle_t );

void __RPC_USER SC_RPC_HANDLE_rundown( SC_RPC_HANDLE );
void __RPC_USER SC_RPC_LOCK_rundown( SC_RPC_LOCK );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


