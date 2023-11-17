

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for appliancetask.idl:
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

#ifndef __appliancetask_h__
#define __appliancetask_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IApplianceTask_FWD_DEFINED__
#define __IApplianceTask_FWD_DEFINED__
typedef interface IApplianceTask IApplianceTask;
#endif 	/* __IApplianceTask_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_appliancetask_0000 */
/* [local] */ 

typedef /* [public] */ 
enum _SA_TASK_RESULT
    {	SA_TASK_RESULT_COMMIT	= 0,
	SA_TASK_RESULT_ROLLBACK	= SA_TASK_RESULT_COMMIT + 1
    } 	SA_TASK_RESULT;



extern RPC_IF_HANDLE __MIDL_itf_appliancetask_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appliancetask_0000_v0_0_s_ifspec;

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


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


