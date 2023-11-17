

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for salangchange.idl:
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

#ifndef __salangchange_h__
#define __salangchange_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISALangChange_FWD_DEFINED__
#define __ISALangChange_FWD_DEFINED__
typedef interface ISALangChange ISALangChange;
#endif 	/* __ISALangChange_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ISALangChange_INTERFACE_DEFINED__
#define __ISALangChange_INTERFACE_DEFINED__

/* interface ISALangChange */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISALangChange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("585375E7-6D91-4fe4-BA47-C6E9DC68A545")
    ISALangChange : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InformChange( 
            /* [in] */ BSTR bstrLangDisplayName,
            /* [in] */ BSTR bstrLangISOName,
            /* [in] */ unsigned long ulLangID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISALangChangeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISALangChange * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISALangChange * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISALangChange * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISALangChange * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISALangChange * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISALangChange * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISALangChange * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *InformChange )( 
            ISALangChange * This,
            /* [in] */ BSTR bstrLangDisplayName,
            /* [in] */ BSTR bstrLangISOName,
            /* [in] */ unsigned long ulLangID);
        
        END_INTERFACE
    } ISALangChangeVtbl;

    interface ISALangChange
    {
        CONST_VTBL struct ISALangChangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISALangChange_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISALangChange_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISALangChange_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISALangChange_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISALangChange_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISALangChange_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISALangChange_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISALangChange_InformChange(This,bstrLangDisplayName,bstrLangISOName,ulLangID)	\
    (This)->lpVtbl -> InformChange(This,bstrLangDisplayName,bstrLangISOName,ulLangID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE ISALangChange_InformChange_Proxy( 
    ISALangChange * This,
    /* [in] */ BSTR bstrLangDisplayName,
    /* [in] */ BSTR bstrLangISOName,
    /* [in] */ unsigned long ulLangID);


void __RPC_STUB ISALangChange_InformChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISALangChange_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


