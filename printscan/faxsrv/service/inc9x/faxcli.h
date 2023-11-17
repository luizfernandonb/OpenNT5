

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for faxcli.idl:
    Os, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, oldnames
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __faxcli_h__
#define __faxcli_h__

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

#ifndef __faxclient_INTERFACE_DEFINED__
#define __faxclient_INTERFACE_DEFINED__

/* interface faxclient */
/* [implicit_handle][unique][version][uuid] */ 

typedef /* [context_handle] */ HANDLE RPC_FAX_HANDLE;

typedef /* [ref] */ RPC_FAX_HANDLE *PRPC_FAX_HANDLE;

/* [fault_status][comm_status] */ error_status_t FAX_OpenConnection( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG64 Context,
    /* [out] */ PRPC_FAX_HANDLE FaxHandle);

/* [fault_status][comm_status] */ error_status_t FAX_ClientEventQueue( 
    /* [in] */ RPC_FAX_HANDLE FaxPortHandle,
    /* [in] */ FAX_EVENT FaxEvent);

/* [fault_status][comm_status] */ error_status_t FAX_CloseConnection( 
    /* [out][in] */ PRPC_FAX_HANDLE FaxHandle);

/* [fault_status][comm_status] */ error_status_t FAX_ClientEventQueueEx( 
    /* [ref][in] */ RPC_FAX_HANDLE hClientContext,
    /* [size_is][ref][in] */ const LPBYTE lpbData,
    /* [range][in] */ DWORD dwDataSize);


extern handle_t fax_handle;


extern RPC_IF_HANDLE faxclient_ClientIfHandle;
extern RPC_IF_HANDLE faxclient_ServerIfHandle;
#endif /* __faxclient_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER RPC_FAX_HANDLE_rundown( RPC_FAX_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


