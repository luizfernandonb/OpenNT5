

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for appsrvcs.idl:
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

#ifndef __appsrvcs_h__
#define __appsrvcs_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IApplianceServices_FWD_DEFINED__
#define __IApplianceServices_FWD_DEFINED__
typedef interface IApplianceServices IApplianceServices;
#endif 	/* __IApplianceServices_FWD_DEFINED__ */


#ifndef __ApplianceServices_FWD_DEFINED__
#define __ApplianceServices_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplianceServices ApplianceServices;
#else
typedef struct ApplianceServices ApplianceServices;
#endif /* __cplusplus */

#endif 	/* __ApplianceServices_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IApplianceServices_INTERFACE_DEFINED__
#define __IApplianceServices_INTERFACE_DEFINED__

/* interface IApplianceServices */
/* [unique][dual][uuid][object] */ 

typedef /* [public] */ 
enum _SA_ALERT_TYPE
    {	SA_ALERT_TYPE_MALFUNCTION	= 0,
	SA_ALERT_TYPE_FAILURE	= SA_ALERT_TYPE_MALFUNCTION + 1,
	SA_ALERT_TYPE_ATTENTION	= SA_ALERT_TYPE_FAILURE + 1
    } 	SA_ALERT_TYPE;

typedef /* [public] */ 
enum _SA_ALERT_DURATION
    {	SA_ALERT_DURATION_EVANESCENT	= 0,
	SA_ALERT_DURATION_ETERNAL	= 0x7fffffff
    } 	SA_ALERT_DURATION;

typedef /* [public] */ 
enum _SA_ALERT_FLAGS
    {	SA_ALERT_FLAG_NONE	= 0,
	SA_ALERT_FLAG_SINGLETON	= 0x1,
	SA_ALERT_FLAG_PERSISTENT	= 0x2
    } 	SA_ALERT_FLAGS;


EXTERN_C const IID IID_IApplianceServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("408B0460-B8E5-11D2-A91C-00AA00A71DCA")
    IApplianceServices : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InitializeFromContext( 
            /* [in] */ IUnknown *pContext) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetAppliance( 
            /* [in] */ VARIANT_BOOL bPowerOff) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RaiseAlert( 
            /* [in] */ LONG lAlertType,
            /* [in] */ LONG lAlertId,
            /* [in] */ BSTR bstrAlertLog,
            /* [in] */ BSTR bstrAlertSource,
            /* [in] */ LONG lTimeToLive,
            /* [in] */ VARIANT *pReplacementStrings,
            /* [in] */ VARIANT *pRawData,
            /* [retval][out] */ LONG *pAlertCookie) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearAlert( 
            /* [in] */ LONG lAlertCookie) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearAlertAll( 
            /* [in] */ LONG lAlertID,
            /* [in] */ BSTR bstrAlertLog) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExecuteTask( 
            /* [in] */ BSTR bstrTaskName,
            /* [in] */ IUnknown *pTaskParams) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnableObject( 
            /* [in] */ LONG lObjectType,
            /* [in] */ BSTR bstrObjectName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DisableObject( 
            /* [in] */ LONG lObjectType,
            /* [in] */ BSTR bstrObjectName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetObjectProperty( 
            /* [in] */ LONG lObjectType,
            /* [in] */ BSTR bstrObjectName,
            /* [in] */ BSTR bstrPropertyName,
            /* [retval][out] */ VARIANT *pPropertyValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PutObjectProperty( 
            /* [in] */ LONG lObjectType,
            /* [in] */ BSTR bstrObjectName,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT *pPropertyValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExecuteTaskAsync( 
            /* [in] */ BSTR bstrTaskName,
            /* [in] */ IUnknown *pTaskParams) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RaiseAlertEx( 
            /* [in] */ LONG lAlertType,
            /* [in] */ LONG lAlertId,
            /* [in] */ BSTR bstrAlertLog,
            /* [in] */ BSTR bstrAlertSource,
            /* [in] */ LONG lTimeToLive,
            /* [in] */ VARIANT *pReplacementStrings,
            /* [in] */ VARIANT *pRawData,
            /* [in] */ LONG lAlertFlags,
            /* [retval][out] */ LONG *pAlertCookie) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsAlertPresent( 
            /* [in] */ LONG lAlertId,
            /* [in] */ BSTR bstrAlertLog,
            /* [retval][out] */ VARIANT_BOOL *pvIsPresent) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IApplianceServicesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplianceServices * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplianceServices * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplianceServices * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IApplianceServices * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IApplianceServices * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IApplianceServices * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IApplianceServices * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IApplianceServices * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromContext )( 
            IApplianceServices * This,
            /* [in] */ IUnknown *pContext);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetAppliance )( 
            IApplianceServices * This,
            /* [in] */ VARIANT_BOOL bPowerOff);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RaiseAlert )( 
            IApplianceServices * This,
            /* [in] */ LONG lAlertType,
            /* [in] */ LONG lAlertId,
            /* [in] */ BSTR bstrAlertLog,
            /* [in] */ BSTR bstrAlertSource,
            /* [in] */ LONG lTimeToLive,
            /* [in] */ VARIANT *pReplacementStrings,
            /* [in] */ VARIANT *pRawData,
            /* [retval][out] */ LONG *pAlertCookie);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearAlert )( 
            IApplianceServices * This,
            /* [in] */ LONG lAlertCookie);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearAlertAll )( 
            IApplianceServices * This,
            /* [in] */ LONG lAlertID,
            /* [in] */ BSTR bstrAlertLog);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ExecuteTask )( 
            IApplianceServices * This,
            /* [in] */ BSTR bstrTaskName,
            /* [in] */ IUnknown *pTaskParams);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnableObject )( 
            IApplianceServices * This,
            /* [in] */ LONG lObjectType,
            /* [in] */ BSTR bstrObjectName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DisableObject )( 
            IApplianceServices * This,
            /* [in] */ LONG lObjectType,
            /* [in] */ BSTR bstrObjectName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetObjectProperty )( 
            IApplianceServices * This,
            /* [in] */ LONG lObjectType,
            /* [in] */ BSTR bstrObjectName,
            /* [in] */ BSTR bstrPropertyName,
            /* [retval][out] */ VARIANT *pPropertyValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PutObjectProperty )( 
            IApplianceServices * This,
            /* [in] */ LONG lObjectType,
            /* [in] */ BSTR bstrObjectName,
            /* [in] */ BSTR bstrPropertyName,
            /* [in] */ VARIANT *pPropertyValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ExecuteTaskAsync )( 
            IApplianceServices * This,
            /* [in] */ BSTR bstrTaskName,
            /* [in] */ IUnknown *pTaskParams);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RaiseAlertEx )( 
            IApplianceServices * This,
            /* [in] */ LONG lAlertType,
            /* [in] */ LONG lAlertId,
            /* [in] */ BSTR bstrAlertLog,
            /* [in] */ BSTR bstrAlertSource,
            /* [in] */ LONG lTimeToLive,
            /* [in] */ VARIANT *pReplacementStrings,
            /* [in] */ VARIANT *pRawData,
            /* [in] */ LONG lAlertFlags,
            /* [retval][out] */ LONG *pAlertCookie);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsAlertPresent )( 
            IApplianceServices * This,
            /* [in] */ LONG lAlertId,
            /* [in] */ BSTR bstrAlertLog,
            /* [retval][out] */ VARIANT_BOOL *pvIsPresent);
        
        END_INTERFACE
    } IApplianceServicesVtbl;

    interface IApplianceServices
    {
        CONST_VTBL struct IApplianceServicesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplianceServices_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IApplianceServices_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IApplianceServices_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IApplianceServices_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IApplianceServices_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IApplianceServices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IApplianceServices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IApplianceServices_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define IApplianceServices_InitializeFromContext(This,pContext)	\
    (This)->lpVtbl -> InitializeFromContext(This,pContext)

#define IApplianceServices_ResetAppliance(This,bPowerOff)	\
    (This)->lpVtbl -> ResetAppliance(This,bPowerOff)

#define IApplianceServices_RaiseAlert(This,lAlertType,lAlertId,bstrAlertLog,bstrAlertSource,lTimeToLive,pReplacementStrings,pRawData,pAlertCookie)	\
    (This)->lpVtbl -> RaiseAlert(This,lAlertType,lAlertId,bstrAlertLog,bstrAlertSource,lTimeToLive,pReplacementStrings,pRawData,pAlertCookie)

#define IApplianceServices_ClearAlert(This,lAlertCookie)	\
    (This)->lpVtbl -> ClearAlert(This,lAlertCookie)

#define IApplianceServices_ClearAlertAll(This,lAlertID,bstrAlertLog)	\
    (This)->lpVtbl -> ClearAlertAll(This,lAlertID,bstrAlertLog)

#define IApplianceServices_ExecuteTask(This,bstrTaskName,pTaskParams)	\
    (This)->lpVtbl -> ExecuteTask(This,bstrTaskName,pTaskParams)

#define IApplianceServices_EnableObject(This,lObjectType,bstrObjectName)	\
    (This)->lpVtbl -> EnableObject(This,lObjectType,bstrObjectName)

#define IApplianceServices_DisableObject(This,lObjectType,bstrObjectName)	\
    (This)->lpVtbl -> DisableObject(This,lObjectType,bstrObjectName)

#define IApplianceServices_GetObjectProperty(This,lObjectType,bstrObjectName,bstrPropertyName,pPropertyValue)	\
    (This)->lpVtbl -> GetObjectProperty(This,lObjectType,bstrObjectName,bstrPropertyName,pPropertyValue)

#define IApplianceServices_PutObjectProperty(This,lObjectType,bstrObjectName,bstrPropertyName,pPropertyValue)	\
    (This)->lpVtbl -> PutObjectProperty(This,lObjectType,bstrObjectName,bstrPropertyName,pPropertyValue)

#define IApplianceServices_ExecuteTaskAsync(This,bstrTaskName,pTaskParams)	\
    (This)->lpVtbl -> ExecuteTaskAsync(This,bstrTaskName,pTaskParams)

#define IApplianceServices_RaiseAlertEx(This,lAlertType,lAlertId,bstrAlertLog,bstrAlertSource,lTimeToLive,pReplacementStrings,pRawData,lAlertFlags,pAlertCookie)	\
    (This)->lpVtbl -> RaiseAlertEx(This,lAlertType,lAlertId,bstrAlertLog,bstrAlertSource,lTimeToLive,pReplacementStrings,pRawData,lAlertFlags,pAlertCookie)

#define IApplianceServices_IsAlertPresent(This,lAlertId,bstrAlertLog,pvIsPresent)	\
    (This)->lpVtbl -> IsAlertPresent(This,lAlertId,bstrAlertLog,pvIsPresent)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_Initialize_Proxy( 
    IApplianceServices * This);


void __RPC_STUB IApplianceServices_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_InitializeFromContext_Proxy( 
    IApplianceServices * This,
    /* [in] */ IUnknown *pContext);


void __RPC_STUB IApplianceServices_InitializeFromContext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_ResetAppliance_Proxy( 
    IApplianceServices * This,
    /* [in] */ VARIANT_BOOL bPowerOff);


void __RPC_STUB IApplianceServices_ResetAppliance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_RaiseAlert_Proxy( 
    IApplianceServices * This,
    /* [in] */ LONG lAlertType,
    /* [in] */ LONG lAlertId,
    /* [in] */ BSTR bstrAlertLog,
    /* [in] */ BSTR bstrAlertSource,
    /* [in] */ LONG lTimeToLive,
    /* [in] */ VARIANT *pReplacementStrings,
    /* [in] */ VARIANT *pRawData,
    /* [retval][out] */ LONG *pAlertCookie);


void __RPC_STUB IApplianceServices_RaiseAlert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_ClearAlert_Proxy( 
    IApplianceServices * This,
    /* [in] */ LONG lAlertCookie);


void __RPC_STUB IApplianceServices_ClearAlert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_ClearAlertAll_Proxy( 
    IApplianceServices * This,
    /* [in] */ LONG lAlertID,
    /* [in] */ BSTR bstrAlertLog);


void __RPC_STUB IApplianceServices_ClearAlertAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_ExecuteTask_Proxy( 
    IApplianceServices * This,
    /* [in] */ BSTR bstrTaskName,
    /* [in] */ IUnknown *pTaskParams);


void __RPC_STUB IApplianceServices_ExecuteTask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_EnableObject_Proxy( 
    IApplianceServices * This,
    /* [in] */ LONG lObjectType,
    /* [in] */ BSTR bstrObjectName);


void __RPC_STUB IApplianceServices_EnableObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_DisableObject_Proxy( 
    IApplianceServices * This,
    /* [in] */ LONG lObjectType,
    /* [in] */ BSTR bstrObjectName);


void __RPC_STUB IApplianceServices_DisableObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_GetObjectProperty_Proxy( 
    IApplianceServices * This,
    /* [in] */ LONG lObjectType,
    /* [in] */ BSTR bstrObjectName,
    /* [in] */ BSTR bstrPropertyName,
    /* [retval][out] */ VARIANT *pPropertyValue);


void __RPC_STUB IApplianceServices_GetObjectProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_PutObjectProperty_Proxy( 
    IApplianceServices * This,
    /* [in] */ LONG lObjectType,
    /* [in] */ BSTR bstrObjectName,
    /* [in] */ BSTR bstrPropertyName,
    /* [in] */ VARIANT *pPropertyValue);


void __RPC_STUB IApplianceServices_PutObjectProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_ExecuteTaskAsync_Proxy( 
    IApplianceServices * This,
    /* [in] */ BSTR bstrTaskName,
    /* [in] */ IUnknown *pTaskParams);


void __RPC_STUB IApplianceServices_ExecuteTaskAsync_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_RaiseAlertEx_Proxy( 
    IApplianceServices * This,
    /* [in] */ LONG lAlertType,
    /* [in] */ LONG lAlertId,
    /* [in] */ BSTR bstrAlertLog,
    /* [in] */ BSTR bstrAlertSource,
    /* [in] */ LONG lTimeToLive,
    /* [in] */ VARIANT *pReplacementStrings,
    /* [in] */ VARIANT *pRawData,
    /* [in] */ LONG lAlertFlags,
    /* [retval][out] */ LONG *pAlertCookie);


void __RPC_STUB IApplianceServices_RaiseAlertEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IApplianceServices_IsAlertPresent_Proxy( 
    IApplianceServices * This,
    /* [in] */ LONG lAlertId,
    /* [in] */ BSTR bstrAlertLog,
    /* [retval][out] */ VARIANT_BOOL *pvIsPresent);


void __RPC_STUB IApplianceServices_IsAlertPresent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IApplianceServices_INTERFACE_DEFINED__ */



#ifndef __APPSRVCSLib_LIBRARY_DEFINED__
#define __APPSRVCSLib_LIBRARY_DEFINED__

/* library APPSRVCSLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_APPSRVCSLib;

EXTERN_C const CLSID CLSID_ApplianceServices;

#ifdef __cplusplus

class DECLSPEC_UUID("1BF00631-CB9E-11D2-90C3-00AA00A71DCA")
ApplianceServices;
#endif
#endif /* __APPSRVCSLib_LIBRARY_DEFINED__ */

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


