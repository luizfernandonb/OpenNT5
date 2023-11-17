

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for initsrvc.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data , no_format_optimization
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


#ifndef __initsrvc_h__
#define __initsrvc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __InitService_FWD_DEFINED__
#define __InitService_FWD_DEFINED__

#ifdef __cplusplus
typedef class InitService InitService;
#else
typedef struct InitService InitService;
#endif /* __cplusplus */

#endif 	/* __InitService_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "applianceobject.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __INITSRVCLib_LIBRARY_DEFINED__
#define __INITSRVCLib_LIBRARY_DEFINED__

/* library INITSRVCLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_INITSRVCLib;

EXTERN_C const CLSID CLSID_InitService;

#ifdef __cplusplus

class DECLSPEC_UUID("1836a370-38a0-11d3-bfbf-00105a1f3461")
InitService;
#endif
#endif /* __INITSRVCLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


