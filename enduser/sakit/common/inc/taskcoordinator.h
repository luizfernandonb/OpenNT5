

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for taskcoordinator.idl:
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


#ifndef __taskcoordinator_h__
#define __taskcoordinator_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __TaskCoordinator_FWD_DEFINED__
#define __TaskCoordinator_FWD_DEFINED__

#ifdef __cplusplus
typedef class TaskCoordinator TaskCoordinator;
#else
typedef struct TaskCoordinator TaskCoordinator;
#endif /* __cplusplus */

#endif 	/* __TaskCoordinator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "appliancetask.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __TASKCOORDINATORLib_LIBRARY_DEFINED__
#define __TASKCOORDINATORLib_LIBRARY_DEFINED__

/* library TASKCOORDINATORLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TASKCOORDINATORLib;

EXTERN_C const CLSID CLSID_TaskCoordinator;

#ifdef __cplusplus

class DECLSPEC_UUID("3A205C9E-0C7E-11D3-BF75-00105A1F3461")
TaskCoordinator;
#endif
#endif /* __TASKCOORDINATORLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


