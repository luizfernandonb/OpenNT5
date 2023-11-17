

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for taskctx.idl:
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

#ifndef __taskctx_h__
#define __taskctx_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITaskContext_FWD_DEFINED__
#define __ITaskContext_FWD_DEFINED__
typedef interface ITaskContext ITaskContext;
#endif 	/* __ITaskContext_FWD_DEFINED__ */


#ifndef __TaskContext_FWD_DEFINED__
#define __TaskContext_FWD_DEFINED__

#ifdef __cplusplus
typedef class TaskContext TaskContext;
#else
typedef struct TaskContext TaskContext;
#endif /* __cplusplus */

#endif 	/* __TaskContext_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ITaskContext_INTERFACE_DEFINED__
#define __ITaskContext_INTERFACE_DEFINED__

/* interface ITaskContext */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ITaskContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96C637B0-B8DE-11D2-A91C-00AA00A71DCA")
    ITaskContext : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetParameter( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetParameter( 
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT *pValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveParameters( 
            /* [in] */ BSTR bstrObjName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RestoreParameters( 
            /* [in] */ BSTR bstrObjName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IUnknown **ppTaskContext) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveParameter( 
            /* [in] */ BSTR bstrName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITaskContextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITaskContext * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITaskContext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITaskContext * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITaskContext * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITaskContext * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITaskContext * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITaskContext * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetParameter )( 
            ITaskContext * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetParameter )( 
            ITaskContext * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ VARIANT *pValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveParameters )( 
            ITaskContext * This,
            /* [in] */ BSTR bstrObjName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RestoreParameters )( 
            ITaskContext * This,
            /* [in] */ BSTR bstrObjName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ITaskContext * This,
            /* [retval][out] */ IUnknown **ppTaskContext);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RemoveParameter )( 
            ITaskContext * This,
            /* [in] */ BSTR bstrName);
        
        END_INTERFACE
    } ITaskContextVtbl;

    interface ITaskContext
    {
        CONST_VTBL struct ITaskContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITaskContext_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITaskContext_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITaskContext_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITaskContext_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITaskContext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITaskContext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITaskContext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITaskContext_GetParameter(This,bstrName,pValue)	\
    (This)->lpVtbl -> GetParameter(This,bstrName,pValue)

#define ITaskContext_SetParameter(This,bstrName,pValue)	\
    (This)->lpVtbl -> SetParameter(This,bstrName,pValue)

#define ITaskContext_SaveParameters(This,bstrObjName)	\
    (This)->lpVtbl -> SaveParameters(This,bstrObjName)

#define ITaskContext_RestoreParameters(This,bstrObjName)	\
    (This)->lpVtbl -> RestoreParameters(This,bstrObjName)

#define ITaskContext_Clone(This,ppTaskContext)	\
    (This)->lpVtbl -> Clone(This,ppTaskContext)

#define ITaskContext_RemoveParameter(This,bstrName)	\
    (This)->lpVtbl -> RemoveParameter(This,bstrName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE ITaskContext_GetParameter_Proxy( 
    ITaskContext * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ VARIANT *pValue);


void __RPC_STUB ITaskContext_GetParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITaskContext_SetParameter_Proxy( 
    ITaskContext * This,
    /* [in] */ BSTR bstrName,
    /* [in] */ VARIANT *pValue);


void __RPC_STUB ITaskContext_SetParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITaskContext_SaveParameters_Proxy( 
    ITaskContext * This,
    /* [in] */ BSTR bstrObjName);


void __RPC_STUB ITaskContext_SaveParameters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITaskContext_RestoreParameters_Proxy( 
    ITaskContext * This,
    /* [in] */ BSTR bstrObjName);


void __RPC_STUB ITaskContext_RestoreParameters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITaskContext_Clone_Proxy( 
    ITaskContext * This,
    /* [retval][out] */ IUnknown **ppTaskContext);


void __RPC_STUB ITaskContext_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITaskContext_RemoveParameter_Proxy( 
    ITaskContext * This,
    /* [in] */ BSTR bstrName);


void __RPC_STUB ITaskContext_RemoveParameter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITaskContext_INTERFACE_DEFINED__ */



#ifndef __TASKCTXLib_LIBRARY_DEFINED__
#define __TASKCTXLib_LIBRARY_DEFINED__

/* library TASKCTXLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TASKCTXLib;

EXTERN_C const CLSID CLSID_TaskContext;

#ifdef __cplusplus

class DECLSPEC_UUID("84DA8800-CB46-11D2-BF23-00105A1F3461")
TaskContext;
#endif
#endif /* __TASKCTXLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


