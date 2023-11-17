

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for applianceobject.idl:
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

#ifndef __applianceobject_h__
#define __applianceobject_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IApplianceObject_FWD_DEFINED__
#define __IApplianceObject_FWD_DEFINED__
typedef interface IApplianceObject IApplianceObject;
#endif 	/* __IApplianceObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_applianceobject_0000 */
/* [local] */ 

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



extern RPC_IF_HANDLE __MIDL_itf_applianceobject_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_applianceobject_0000_v0_0_s_ifspec;

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


