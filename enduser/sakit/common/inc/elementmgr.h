

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for elementmgr.idl:
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

#ifndef __elementmgr_h__
#define __elementmgr_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWebElement_FWD_DEFINED__
#define __IWebElement_FWD_DEFINED__
typedef interface IWebElement IWebElement;
#endif 	/* __IWebElement_FWD_DEFINED__ */


#ifndef __IWebElementRetriever_FWD_DEFINED__
#define __IWebElementRetriever_FWD_DEFINED__
typedef interface IWebElementRetriever IWebElementRetriever;
#endif 	/* __IWebElementRetriever_FWD_DEFINED__ */


#ifndef __IWebElementEnum_FWD_DEFINED__
#define __IWebElementEnum_FWD_DEFINED__
typedef interface IWebElementEnum IWebElementEnum;
#endif 	/* __IWebElementEnum_FWD_DEFINED__ */


#ifndef __ElementRetriever_FWD_DEFINED__
#define __ElementRetriever_FWD_DEFINED__

#ifdef __cplusplus
typedef class ElementRetriever ElementRetriever;
#else
typedef struct ElementRetriever ElementRetriever;
#endif /* __cplusplus */

#endif 	/* __ElementRetriever_FWD_DEFINED__ */


#ifndef __IWebElement_FWD_DEFINED__
#define __IWebElement_FWD_DEFINED__
typedef interface IWebElement IWebElement;
#endif 	/* __IWebElement_FWD_DEFINED__ */


#ifndef __IWebElementEnum_FWD_DEFINED__
#define __IWebElementEnum_FWD_DEFINED__
typedef interface IWebElementEnum IWebElementEnum;
#endif 	/* __IWebElementEnum_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IWebElement_INTERFACE_DEFINED__
#define __IWebElement_INTERFACE_DEFINED__

/* interface IWebElement */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0EFC4090-C445-11D2-90BA-00AA00A71DCA")
    IWebElement : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebElement * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebElement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebElement * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebElement * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebElement * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebElement * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebElement * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IWebElement * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ VARIANT *pValue);
        
        END_INTERFACE
    } IWebElementVtbl;

    interface IWebElement
    {
        CONST_VTBL struct IWebElementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebElement_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWebElement_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWebElement_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWebElement_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWebElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWebElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWebElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWebElement_GetProperty(This,bstrName,pValue)	\
    (This)->lpVtbl -> GetProperty(This,bstrName,pValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IWebElement_GetProperty_Proxy( 
    IWebElement * This,
    /* [in] */ BSTR bstrName,
    /* [retval][out] */ VARIANT *pValue);


void __RPC_STUB IWebElement_GetProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebElement_INTERFACE_DEFINED__ */


#ifndef __IWebElementRetriever_INTERFACE_DEFINED__
#define __IWebElementRetriever_INTERFACE_DEFINED__

/* interface IWebElementRetriever */
/* [unique][helpstring][dual][uuid][object] */ 

typedef /* [public] */ 
enum _WEB_ELEMENT_TYPE
    {	WEB_ELEMENT_TYPE_DEFINITION	= 0,
	WEB_ELEMENT_TYPE_PAGE_OBJECT	= WEB_ELEMENT_TYPE_DEFINITION + 1
    } 	WEB_ELEMENT_TYPE;


EXTERN_C const IID IID_IWebElementRetriever;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8C5F0530-C445-11D2-90BA-00AA00A71DCA")
    IWebElementRetriever : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetElements( 
            /* [in] */ LONG lWebElementType,
            /* [in] */ BSTR bstrContainerName,
            /* [retval][out] */ IDispatch **ppElementEnum) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebElementRetrieverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebElementRetriever * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebElementRetriever * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebElementRetriever * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebElementRetriever * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebElementRetriever * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebElementRetriever * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebElementRetriever * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetElements )( 
            IWebElementRetriever * This,
            /* [in] */ LONG lWebElementType,
            /* [in] */ BSTR bstrContainerName,
            /* [retval][out] */ IDispatch **ppElementEnum);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWebElementRetriever * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            IWebElementRetriever * This);
        
        END_INTERFACE
    } IWebElementRetrieverVtbl;

    interface IWebElementRetriever
    {
        CONST_VTBL struct IWebElementRetrieverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebElementRetriever_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWebElementRetriever_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWebElementRetriever_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWebElementRetriever_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWebElementRetriever_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWebElementRetriever_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWebElementRetriever_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWebElementRetriever_GetElements(This,lWebElementType,bstrContainerName,ppElementEnum)	\
    (This)->lpVtbl -> GetElements(This,lWebElementType,bstrContainerName,ppElementEnum)

#define IWebElementRetriever_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define IWebElementRetriever_Shutdown(This)	\
    (This)->lpVtbl -> Shutdown(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IWebElementRetriever_GetElements_Proxy( 
    IWebElementRetriever * This,
    /* [in] */ LONG lWebElementType,
    /* [in] */ BSTR bstrContainerName,
    /* [retval][out] */ IDispatch **ppElementEnum);


void __RPC_STUB IWebElementRetriever_GetElements_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebElementRetriever_Initialize_Proxy( 
    IWebElementRetriever * This);


void __RPC_STUB IWebElementRetriever_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebElementRetriever_Shutdown_Proxy( 
    IWebElementRetriever * This);


void __RPC_STUB IWebElementRetriever_Shutdown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebElementRetriever_INTERFACE_DEFINED__ */


#ifndef __IWebElementEnum_INTERFACE_DEFINED__
#define __IWebElementEnum_INTERFACE_DEFINED__

/* interface IWebElementEnum */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWebElementEnum;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e64b13d0-c611-11d2-bf1e-00105a1f3461")
    IWebElementEnum : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *plCount) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT *Name,
            /* [retval][out] */ IDispatch **pItem) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pEnumVARIANT) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebElementEnumVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebElementEnum * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebElementEnum * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebElementEnum * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWebElementEnum * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWebElementEnum * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWebElementEnum * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWebElementEnum * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IWebElementEnum * This,
            /* [retval][out] */ LONG *plCount);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IWebElementEnum * This,
            /* [in] */ VARIANT *Name,
            /* [retval][out] */ IDispatch **pItem);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IWebElementEnum * This,
            /* [retval][out] */ IUnknown **pEnumVARIANT);
        
        END_INTERFACE
    } IWebElementEnumVtbl;

    interface IWebElementEnum
    {
        CONST_VTBL struct IWebElementEnumVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebElementEnum_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWebElementEnum_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IWebElementEnum_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IWebElementEnum_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IWebElementEnum_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IWebElementEnum_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IWebElementEnum_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IWebElementEnum_get_Count(This,plCount)	\
    (This)->lpVtbl -> get_Count(This,plCount)

#define IWebElementEnum_Item(This,Name,pItem)	\
    (This)->lpVtbl -> Item(This,Name,pItem)

#define IWebElementEnum_get__NewEnum(This,pEnumVARIANT)	\
    (This)->lpVtbl -> get__NewEnum(This,pEnumVARIANT)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IWebElementEnum_get_Count_Proxy( 
    IWebElementEnum * This,
    /* [retval][out] */ LONG *plCount);


void __RPC_STUB IWebElementEnum_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IWebElementEnum_Item_Proxy( 
    IWebElementEnum * This,
    /* [in] */ VARIANT *Name,
    /* [retval][out] */ IDispatch **pItem);


void __RPC_STUB IWebElementEnum_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IWebElementEnum_get__NewEnum_Proxy( 
    IWebElementEnum * This,
    /* [retval][out] */ IUnknown **pEnumVARIANT);


void __RPC_STUB IWebElementEnum_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IWebElementEnum_INTERFACE_DEFINED__ */



#ifndef __ELEMENTMGRLib_LIBRARY_DEFINED__
#define __ELEMENTMGRLib_LIBRARY_DEFINED__

/* library ELEMENTMGRLib */
/* [helpstring][version][uuid] */ 




EXTERN_C const IID LIBID_ELEMENTMGRLib;

EXTERN_C const CLSID CLSID_ElementRetriever;

#ifdef __cplusplus

class DECLSPEC_UUID("9BCEA010-C445-11D2-90BA-00AA00A71DCA")
ElementRetriever;
#endif
#endif /* __ELEMENTMGRLib_LIBRARY_DEFINED__ */

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


