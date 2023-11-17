

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for applianceresource.idl:
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

#ifndef __applianceresource_h__
#define __applianceresource_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IResourceRetriever_FWD_DEFINED__
#define __IResourceRetriever_FWD_DEFINED__
typedef interface IResourceRetriever IResourceRetriever;
#endif 	/* __IResourceRetriever_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

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


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


