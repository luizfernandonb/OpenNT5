

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for servicecontrol.idl:
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __servicecontrol_h__
#define __servicecontrol_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IApplianceObjectManagerStatus_FWD_DEFINED__
#define __IApplianceObjectManagerStatus_FWD_DEFINED__
typedef interface IApplianceObjectManagerStatus IApplianceObjectManagerStatus;
#endif 	/* __IApplianceObjectManagerStatus_FWD_DEFINED__ */


#ifndef __IApplianceObjectManager_FWD_DEFINED__
#define __IApplianceObjectManager_FWD_DEFINED__
typedef interface IApplianceObjectManager IApplianceObjectManager;
#endif 	/* __IApplianceObjectManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_servicecontrol_0000 */
/* [local] */ 

typedef 
enum _APPLIANCE_OBJECT_MANAGER_STATUS
    {	OBJECT_MANAGER_INITIALIZED	= 0,
	OBJECT_MANAGER_SHUTDOWN	= OBJECT_MANAGER_INITIALIZED + 1,
	OBJECT_MANAGER_INOPERABLE	= OBJECT_MANAGER_SHUTDOWN + 1
    } 	APPLIANCE_OBJECT_MANAGER_STATUS;



extern RPC_IF_HANDLE __MIDL_itf_servicecontrol_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_servicecontrol_0000_v0_0_s_ifspec;

#ifndef __IApplianceObjectManagerStatus_INTERFACE_DEFINED__
#define __IApplianceObjectManagerStatus_INTERFACE_DEFINED__

/* interface IApplianceObjectManagerStatus */
/* [hidden][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IApplianceObjectManagerStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0555bc40-363c-11d3-bfbc-00105a1f3461")
    IApplianceObjectManagerStatus : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetManagerStatus( 
            /* [in] */ APPLIANCE_OBJECT_MANAGER_STATUS eStatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IApplianceObjectManagerStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplianceObjectManagerStatus * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplianceObjectManagerStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplianceObjectManagerStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IApplianceObjectManagerStatus * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IApplianceObjectManagerStatus * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IApplianceObjectManagerStatus * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IApplianceObjectManagerStatus * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetManagerStatus )( 
            IApplianceObjectManagerStatus * This,
            /* [in] */ APPLIANCE_OBJECT_MANAGER_STATUS eStatus);
        
        END_INTERFACE
    } IApplianceObjectManagerStatusVtbl;

    interface IApplianceObjectManagerStatus
    {
        CONST_VTBL struct IApplianceObjectManagerStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplianceObjectManagerStatus_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IApplianceObjectManagerStatus_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IApplianceObjectManagerStatus_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IApplianceObjectManagerStatus_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IApplianceObjectManagerStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IApplianceObjectManagerStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IApplianceObjectManagerStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IApplianceObjectManagerStatus_SetManagerStatus(This,eStatus)	\
    (This)->lpVtbl -> SetManagerStatus(This,eStatus)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObjectManagerStatus_SetManagerStatus_Proxy( 
    IApplianceObjectManagerStatus * This,
    /* [in] */ APPLIANCE_OBJECT_MANAGER_STATUS eStatus);


void __RPC_STUB IApplianceObjectManagerStatus_SetManagerStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IApplianceObjectManagerStatus_INTERFACE_DEFINED__ */


#ifndef __IApplianceObjectManager_INTERFACE_DEFINED__
#define __IApplianceObjectManager_INTERFACE_DEFINED__

/* interface IApplianceObjectManager */
/* [hidden][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IApplianceObjectManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("427f7b10-cbb6-11d2-90c3-00aa00a71dca")
    IApplianceObjectManager : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InitializeManager( 
            /* [in] */ IApplianceObjectManagerStatus *pObjMgrStatus) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShutdownManager( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IApplianceObjectManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplianceObjectManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplianceObjectManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplianceObjectManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IApplianceObjectManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IApplianceObjectManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IApplianceObjectManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IApplianceObjectManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *InitializeManager )( 
            IApplianceObjectManager * This,
            /* [in] */ IApplianceObjectManagerStatus *pObjMgrStatus);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShutdownManager )( 
            IApplianceObjectManager * This);
        
        END_INTERFACE
    } IApplianceObjectManagerVtbl;

    interface IApplianceObjectManager
    {
        CONST_VTBL struct IApplianceObjectManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplianceObjectManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IApplianceObjectManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IApplianceObjectManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IApplianceObjectManager_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IApplianceObjectManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IApplianceObjectManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IApplianceObjectManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IApplianceObjectManager_InitializeManager(This,pObjMgrStatus)	\
    (This)->lpVtbl -> InitializeManager(This,pObjMgrStatus)

#define IApplianceObjectManager_ShutdownManager(This)	\
    (This)->lpVtbl -> ShutdownManager(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObjectManager_InitializeManager_Proxy( 
    IApplianceObjectManager * This,
    /* [in] */ IApplianceObjectManagerStatus *pObjMgrStatus);


void __RPC_STUB IApplianceObjectManager_InitializeManager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObjectManager_ShutdownManager_Proxy( 
    IApplianceObjectManager * This);


void __RPC_STUB IApplianceObjectManager_ShutdownManager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IApplianceObjectManager_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


