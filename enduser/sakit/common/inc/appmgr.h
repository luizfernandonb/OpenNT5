

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for appmgr.idl:
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


#ifndef __appmgr_h__
#define __appmgr_h__

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


#ifndef __IApplianceTask_FWD_DEFINED__
#define __IApplianceTask_FWD_DEFINED__
typedef interface IApplianceTask IApplianceTask;
#endif 	/* __IApplianceTask_FWD_DEFINED__ */


#ifndef __IApplianceObject_FWD_DEFINED__
#define __IApplianceObject_FWD_DEFINED__
typedef interface IApplianceObject IApplianceObject;
#endif 	/* __IApplianceObject_FWD_DEFINED__ */


#ifndef __IResourceRetriever_FWD_DEFINED__
#define __IResourceRetriever_FWD_DEFINED__
typedef interface IResourceRetriever IResourceRetriever;
#endif 	/* __IResourceRetriever_FWD_DEFINED__ */


#ifndef __ApplianceManager_FWD_DEFINED__
#define __ApplianceManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplianceManager ApplianceManager;
#else
typedef struct ApplianceManager ApplianceManager;
#endif /* __cplusplus */

#endif 	/* __ApplianceManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "wbemcli.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __APPMGRLib_LIBRARY_DEFINED__
#define __APPMGRLib_LIBRARY_DEFINED__

/* library APPMGRLib */
/* [helpstring][version][uuid] */ 

typedef 
enum _APPLIANCE_OBJECT_MANAGER_STATUS
    {	OBJECT_MANAGER_INITIALIZED	= 0,
	OBJECT_MANAGER_SHUTDOWN	= OBJECT_MANAGER_INITIALIZED + 1,
	OBJECT_MANAGER_INOPERABLE	= OBJECT_MANAGER_SHUTDOWN + 1
    } 	APPLIANCE_OBJECT_MANAGER_STATUS;

typedef /* [public] */ 
enum _SA_TASK_RESULT
    {	SA_TASK_RESULT_COMMIT	= 0,
	SA_TASK_RESULT_ROLLBACK	= SA_TASK_RESULT_COMMIT + 1
    } 	SA_TASK_RESULT;

typedef /* [public] */ 
enum _SA_OBJECT_TYPE
    {	SA_OBJECT_TYPE_ALERT	= 0,
	SA_OBJECT_TYPE_SERVICE	= SA_OBJECT_TYPE_ALERT + 1,
	SA_OBJECT_TYPE_TASK	= SA_OBJECT_TYPE_SERVICE + 1,
	SA_OBJECT_TYPE_USER	= SA_OBJECT_TYPE_TASK + 1,
	SA_OBJECT_TYPE_APPMGR	= SA_OBJECT_TYPE_USER + 1,
	SA_OBJECT_TYPE_ALL	= SA_OBJECT_TYPE_APPMGR + 1
    } 	SA_OBJECT_TYPE;

typedef /* [public] */ enum _SA_OBJECT_TYPE *PSA_OBJECT_TYPE;

typedef /* [public] */ 
enum _SA_OBJECT_CONTROL
    {	SA_OBJECT_CONTROL_CAN_DISABLE	= 0x1,
	SA_OBJECT_CONTROL_CAN_PERSIST	= 0x2,
	SA_OBJECT_CONTROL_CAN_LOCK	= 0x4
    } 	SA_OBJECT_CONTROL;

typedef /* [public] */ enum _SA_OBJECT_CONTROL *PSA_OBJECT_CONTROL;

typedef /* [public] */ 
enum _SA_OBJECT_STATUS
    {	SA_OBJECT_STATUS_ENABLED	= 0,
	SA_OBJECT_STATUS_DISABLED	= SA_OBJECT_STATUS_ENABLED + 1
    } 	SA_OBJECT_STATUS;

typedef /* [public] */ enum _SA_OBJECT_STATUS *PSA_OBJECT_STATUS;


EXTERN_C const IID LIBID_APPMGRLib;

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


#ifndef __IApplianceTask_INTERFACE_DEFINED__
#define __IApplianceTask_INTERFACE_DEFINED__

/* interface IApplianceTask */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IApplianceTask;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("845066C0-B8E2-11D2-A91C-00AA00A71DCA")
    IApplianceTask : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OnTaskExecute( 
            /* [in] */ IUnknown *pTaskContext) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OnTaskComplete( 
            /* [in] */ IUnknown *pTaskContext,
            /* [in] */ LONG lTaskResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IApplianceTaskVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplianceTask * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplianceTask * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplianceTask * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IApplianceTask * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IApplianceTask * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IApplianceTask * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IApplianceTask * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OnTaskExecute )( 
            IApplianceTask * This,
            /* [in] */ IUnknown *pTaskContext);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OnTaskComplete )( 
            IApplianceTask * This,
            /* [in] */ IUnknown *pTaskContext,
            /* [in] */ LONG lTaskResult);
        
        END_INTERFACE
    } IApplianceTaskVtbl;

    interface IApplianceTask
    {
        CONST_VTBL struct IApplianceTaskVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplianceTask_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IApplianceTask_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IApplianceTask_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IApplianceTask_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IApplianceTask_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IApplianceTask_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IApplianceTask_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IApplianceTask_OnTaskExecute(This,pTaskContext)	\
    (This)->lpVtbl -> OnTaskExecute(This,pTaskContext)

#define IApplianceTask_OnTaskComplete(This,pTaskContext,lTaskResult)	\
    (This)->lpVtbl -> OnTaskComplete(This,pTaskContext,lTaskResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceTask_OnTaskExecute_Proxy( 
    IApplianceTask * This,
    /* [in] */ IUnknown *pTaskContext);


void __RPC_STUB IApplianceTask_OnTaskExecute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceTask_OnTaskComplete_Proxy( 
    IApplianceTask * This,
    /* [in] */ IUnknown *pTaskContext,
    /* [in] */ LONG lTaskResult);


void __RPC_STUB IApplianceTask_OnTaskComplete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IApplianceTask_INTERFACE_DEFINED__ */


#ifndef __IApplianceObject_INTERFACE_DEFINED__
#define __IApplianceObject_INTERFACE_DEFINED__

/* interface IApplianceObject */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IApplianceObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DC1AE3B0-B818-11D2-A91C-00AA00A71DCA")
    IApplianceObject : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR pszPropertyName,
            /* [retval][out] */ VARIANT *pPropertyValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PutProperty( 
            /* [in] */ BSTR pszPropertyName,
            /* [in] */ VARIANT *pPropertyValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveProperties( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RestoreProperties( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LockObject( 
            /* [retval][out] */ IUnknown **ppLock) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Enable( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disable( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IApplianceObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplianceObject * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplianceObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplianceObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IApplianceObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IApplianceObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IApplianceObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IApplianceObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IApplianceObject * This,
            /* [in] */ BSTR pszPropertyName,
            /* [retval][out] */ VARIANT *pPropertyValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PutProperty )( 
            IApplianceObject * This,
            /* [in] */ BSTR pszPropertyName,
            /* [in] */ VARIANT *pPropertyValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveProperties )( 
            IApplianceObject * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RestoreProperties )( 
            IApplianceObject * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LockObject )( 
            IApplianceObject * This,
            /* [retval][out] */ IUnknown **ppLock);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IApplianceObject * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            IApplianceObject * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Enable )( 
            IApplianceObject * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disable )( 
            IApplianceObject * This);
        
        END_INTERFACE
    } IApplianceObjectVtbl;

    interface IApplianceObject
    {
        CONST_VTBL struct IApplianceObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplianceObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IApplianceObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IApplianceObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IApplianceObject_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IApplianceObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IApplianceObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IApplianceObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IApplianceObject_GetProperty(This,pszPropertyName,pPropertyValue)	\
    (This)->lpVtbl -> GetProperty(This,pszPropertyName,pPropertyValue)

#define IApplianceObject_PutProperty(This,pszPropertyName,pPropertyValue)	\
    (This)->lpVtbl -> PutProperty(This,pszPropertyName,pPropertyValue)

#define IApplianceObject_SaveProperties(This)	\
    (This)->lpVtbl -> SaveProperties(This)

#define IApplianceObject_RestoreProperties(This)	\
    (This)->lpVtbl -> RestoreProperties(This)

#define IApplianceObject_LockObject(This,ppLock)	\
    (This)->lpVtbl -> LockObject(This,ppLock)

#define IApplianceObject_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define IApplianceObject_Shutdown(This)	\
    (This)->lpVtbl -> Shutdown(This)

#define IApplianceObject_Enable(This)	\
    (This)->lpVtbl -> Enable(This)

#define IApplianceObject_Disable(This)	\
    (This)->lpVtbl -> Disable(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObject_GetProperty_Proxy( 
    IApplianceObject * This,
    /* [in] */ BSTR pszPropertyName,
    /* [retval][out] */ VARIANT *pPropertyValue);


void __RPC_STUB IApplianceObject_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObject_PutProperty_Proxy( 
    IApplianceObject * This,
    /* [in] */ BSTR pszPropertyName,
    /* [in] */ VARIANT *pPropertyValue);


void __RPC_STUB IApplianceObject_PutProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObject_SaveProperties_Proxy( 
    IApplianceObject * This);


void __RPC_STUB IApplianceObject_SaveProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObject_RestoreProperties_Proxy( 
    IApplianceObject * This);


void __RPC_STUB IApplianceObject_RestoreProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObject_LockObject_Proxy( 
    IApplianceObject * This,
    /* [retval][out] */ IUnknown **ppLock);


void __RPC_STUB IApplianceObject_LockObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObject_Initialize_Proxy( 
    IApplianceObject * This);


void __RPC_STUB IApplianceObject_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObject_Shutdown_Proxy( 
    IApplianceObject * This);


void __RPC_STUB IApplianceObject_Shutdown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObject_Enable_Proxy( 
    IApplianceObject * This);


void __RPC_STUB IApplianceObject_Enable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceObject_Disable_Proxy( 
    IApplianceObject * This);


void __RPC_STUB IApplianceObject_Disable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IApplianceObject_INTERFACE_DEFINED__ */


#ifndef __IResourceRetriever_INTERFACE_DEFINED__
#define __IResourceRetriever_INTERFACE_DEFINED__

/* interface IResourceRetriever */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IResourceRetriever;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B66C1A0-B81A-11D2-A91C-00AA00A71DCA")
    IResourceRetriever : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetResourceTypes( 
            /* [retval][out] */ VARIANT *pResourceTypes) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetResources( 
            /* [in] */ VARIANT *pResourceTypes,
            /* [retval][out] */ IUnknown **ppResources) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IResourceRetrieverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IResourceRetriever * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IResourceRetriever * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IResourceRetriever * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IResourceRetriever * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IResourceRetriever * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IResourceRetriever * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IResourceRetriever * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetResourceTypes )( 
            IResourceRetriever * This,
            /* [retval][out] */ VARIANT *pResourceTypes);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetResources )( 
            IResourceRetriever * This,
            /* [in] */ VARIANT *pResourceTypes,
            /* [retval][out] */ IUnknown **ppResources);
        
        END_INTERFACE
    } IResourceRetrieverVtbl;

    interface IResourceRetriever
    {
        CONST_VTBL struct IResourceRetrieverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IResourceRetriever_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IResourceRetriever_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IResourceRetriever_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IResourceRetriever_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IResourceRetriever_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IResourceRetriever_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IResourceRetriever_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IResourceRetriever_GetResourceTypes(This,pResourceTypes)	\
    (This)->lpVtbl -> GetResourceTypes(This,pResourceTypes)

#define IResourceRetriever_GetResources(This,pResourceTypes,ppResources)	\
    (This)->lpVtbl -> GetResources(This,pResourceTypes,ppResources)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IResourceRetriever_GetResourceTypes_Proxy( 
    IResourceRetriever * This,
    /* [retval][out] */ VARIANT *pResourceTypes);


void __RPC_STUB IResourceRetriever_GetResourceTypes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IResourceRetriever_GetResources_Proxy( 
    IResourceRetriever * This,
    /* [in] */ VARIANT *pResourceTypes,
    /* [retval][out] */ IUnknown **ppResources);


void __RPC_STUB IResourceRetriever_GetResources_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IResourceRetriever_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ApplianceManager;

#ifdef __cplusplus

class DECLSPEC_UUID("BAF0B9D0-BF0B-11D2-90B6-00AA00A71DCA")
ApplianceManager;
#endif
#endif /* __APPMGRLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


