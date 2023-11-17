

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for apsvc.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
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


#ifndef __apsvc_h__
#define __apsvc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __WINHTTP_AUTOPROXY_SERVICE_INTERFACE_DEFINED__
#define __WINHTTP_AUTOPROXY_SERVICE_INTERFACE_DEFINED__

/* interface WINHTTP_AUTOPROXY_SERVICE */
/* [auto_handle][version][uuid] */ 

typedef struct _SESSION_OPTIONS
    {
    unsigned int nResolveTimeout;
    unsigned int nConnectTimeout;
    unsigned int nConnectRetries;
    unsigned int nSendTimeout;
    unsigned int nReceiveTimeout;
    } 	SESSION_OPTIONS;

typedef struct _SESSION_OPTIONS *P_SESSION_OPTIONS;

typedef struct _AUTOPROXY_OPTIONS
    {
    unsigned long dwFlags;
    unsigned long dwAutoDetectFlags;
    /* [string] */ const wchar_t *lpszAutoConfigUrl;
    int *lpvReserved;
    unsigned long dwReserved;
    int fAutoLogonIfChallenged;
    } 	AUTOPROXY_OPTIONS;

typedef struct _AUTOPROXY_OPTIONS *P_AUTOPROXY_OPTIONS;

typedef struct _AUTOPROXY_RESULT
    {
    unsigned long dwAccessType;
    /* [string] */ wchar_t *lpszProxy;
    /* [string] */ wchar_t *lpszProxyBypass;
    } 	AUTOPROXY_RESULT;

typedef struct _AUTOPROXY_RESULT *P_AUTOPROXY_RESULT;

/* client prototype */
/* [async] */ void  ClientGetProxyForUrl( 
    /* [in] */ PRPC_ASYNC_STATE GetProxyForUrl_AsyncHandle,
    /* [in] */ handle_t hBinding,
    /* [string][in] */ const wchar_t *pcwszUrl,
    /* [in] */ const P_AUTOPROXY_OPTIONS pAutoProxyOptions,
    /* [in] */ const P_SESSION_OPTIONS pSessionOptions,
    /* [out][in] */ P_AUTOPROXY_RESULT pAutoProxyResult,
    /* [out][in] */ unsigned long *pdwLastError);
/* server prototype */
/* [async] */ void  GetProxyForUrl( 
    /* [in] */ PRPC_ASYNC_STATE GetProxyForUrl_AsyncHandle,
    /* [in] */ handle_t hBinding,
    /* [string][in] */ const wchar_t *pcwszUrl,
    /* [in] */ const P_AUTOPROXY_OPTIONS pAutoProxyOptions,
    /* [in] */ const P_SESSION_OPTIONS pSessionOptions,
    /* [out][in] */ P_AUTOPROXY_RESULT pAutoProxyResult,
    /* [out][in] */ unsigned long *pdwLastError);



extern RPC_IF_HANDLE ClientWINHTTP_AUTOPROXY_SERVICE_v5_1_c_ifspec;
extern RPC_IF_HANDLE WINHTTP_AUTOPROXY_SERVICE_v5_1_c_ifspec;
extern RPC_IF_HANDLE WINHTTP_AUTOPROXY_SERVICE_v5_1_s_ifspec;
#endif /* __WINHTTP_AUTOPROXY_SERVICE_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


