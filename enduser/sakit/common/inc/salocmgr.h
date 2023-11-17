

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for salocmgr.idl:
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


#ifndef __salocmgr_h__
#define __salocmgr_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISALocInfo_FWD_DEFINED__
#define __ISALocInfo_FWD_DEFINED__
typedef interface ISALocInfo ISALocInfo;
#endif 	/* __ISALocInfo_FWD_DEFINED__ */


#ifndef __LocalizationManager_FWD_DEFINED__
#define __LocalizationManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class LocalizationManager LocalizationManager;
#else
typedef struct LocalizationManager LocalizationManager;
#endif /* __cplusplus */

#endif 	/* __LocalizationManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __SALocMgrLib_LIBRARY_DEFINED__
#define __SALocMgrLib_LIBRARY_DEFINED__

/* library SALocMgrLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SALocMgrLib;

#ifndef __ISALocInfo_INTERFACE_DEFINED__
#define __ISALocInfo_INTERFACE_DEFINED__

/* interface ISALocInfo */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISALocInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("167ded48-c5d8-11d2-a7a9-00c04fc33f05")
    ISALocInfo : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ BSTR szSourceId,
            /* [in] */ LONG MessageId,
            /* [in] */ VARIANT *pReplacementStrings,
            /* [retval][out] */ BSTR *pstrMessage) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetLanguages( 
            /* [out] */ VARIANT *pvstrLangDisplayNames,
            /* [out] */ VARIANT *pvstrLangISONames,
            /* [out] */ VARIANT *pvstrLangCharSets,
            /* [out] */ VARIANT *pviLangCodePages,
            /* [out] */ VARIANT *pviLangIDs,
            /* [retval][out] */ unsigned long *pulCurLangIndex) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetLangChangeCallBack( 
            /* [in] */ IUnknown *pLangChange) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_fAutoConfigDone( 
            /* [retval][out] */ VARIANT_BOOL *pvbAutoConfigDone) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentCharSet( 
            /* [retval][out] */ BSTR *pbstrCharSet) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentCodePage( 
            /* [retval][out] */ VARIANT *pvtiCodePage) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CurrentLangID( 
            /* [retval][out] */ VARIANT *pvtiLangID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISALocInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISALocInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISALocInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISALocInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISALocInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISALocInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISALocInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISALocInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetString )( 
            ISALocInfo * This,
            /* [in] */ BSTR szSourceId,
            /* [in] */ LONG MessageId,
            /* [in] */ VARIANT *pReplacementStrings,
            /* [retval][out] */ BSTR *pstrMessage);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetLanguages )( 
            ISALocInfo * This,
            /* [out] */ VARIANT *pvstrLangDisplayNames,
            /* [out] */ VARIANT *pvstrLangISONames,
            /* [out] */ VARIANT *pvstrLangCharSets,
            /* [out] */ VARIANT *pviLangCodePages,
            /* [out] */ VARIANT *pviLangIDs,
            /* [retval][out] */ unsigned long *pulCurLangIndex);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetLangChangeCallBack )( 
            ISALocInfo * This,
            /* [in] */ IUnknown *pLangChange);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_fAutoConfigDone )( 
            ISALocInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pvbAutoConfigDone);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCharSet )( 
            ISALocInfo * This,
            /* [retval][out] */ BSTR *pbstrCharSet);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCodePage )( 
            ISALocInfo * This,
            /* [retval][out] */ VARIANT *pvtiCodePage);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLangID )( 
            ISALocInfo * This,
            /* [retval][out] */ VARIANT *pvtiLangID);
        
        END_INTERFACE
    } ISALocInfoVtbl;

    interface ISALocInfo
    {
        CONST_VTBL struct ISALocInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISALocInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISALocInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISALocInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISALocInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISALocInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISALocInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISALocInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISALocInfo_GetString(This,szSourceId,MessageId,pReplacementStrings,pstrMessage)	\
    (This)->lpVtbl -> GetString(This,szSourceId,MessageId,pReplacementStrings,pstrMessage)

#define ISALocInfo_GetLanguages(This,pvstrLangDisplayNames,pvstrLangISONames,pvstrLangCharSets,pviLangCodePages,pviLangIDs,pulCurLangIndex)	\
    (This)->lpVtbl -> GetLanguages(This,pvstrLangDisplayNames,pvstrLangISONames,pvstrLangCharSets,pviLangCodePages,pviLangIDs,pulCurLangIndex)

#define ISALocInfo_SetLangChangeCallBack(This,pLangChange)	\
    (This)->lpVtbl -> SetLangChangeCallBack(This,pLangChange)

#define ISALocInfo_get_fAutoConfigDone(This,pvbAutoConfigDone)	\
    (This)->lpVtbl -> get_fAutoConfigDone(This,pvbAutoConfigDone)

#define ISALocInfo_get_CurrentCharSet(This,pbstrCharSet)	\
    (This)->lpVtbl -> get_CurrentCharSet(This,pbstrCharSet)

#define ISALocInfo_get_CurrentCodePage(This,pvtiCodePage)	\
    (This)->lpVtbl -> get_CurrentCodePage(This,pvtiCodePage)

#define ISALocInfo_get_CurrentLangID(This,pvtiLangID)	\
    (This)->lpVtbl -> get_CurrentLangID(This,pvtiLangID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE ISALocInfo_GetString_Proxy( 
    ISALocInfo * This,
    /* [in] */ BSTR szSourceId,
    /* [in] */ LONG MessageId,
    /* [in] */ VARIANT *pReplacementStrings,
    /* [retval][out] */ BSTR *pstrMessage);


void __RPC_STUB ISALocInfo_GetString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISALocInfo_GetLanguages_Proxy( 
    ISALocInfo * This,
    /* [out] */ VARIANT *pvstrLangDisplayNames,
    /* [out] */ VARIANT *pvstrLangISONames,
    /* [out] */ VARIANT *pvstrLangCharSets,
    /* [out] */ VARIANT *pviLangCodePages,
    /* [out] */ VARIANT *pviLangIDs,
    /* [retval][out] */ unsigned long *pulCurLangIndex);


void __RPC_STUB ISALocInfo_GetLanguages_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISALocInfo_SetLangChangeCallBack_Proxy( 
    ISALocInfo * This,
    /* [in] */ IUnknown *pLangChange);


void __RPC_STUB ISALocInfo_SetLangChangeCallBack_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE ISALocInfo_get_fAutoConfigDone_Proxy( 
    ISALocInfo * This,
    /* [retval][out] */ VARIANT_BOOL *pvbAutoConfigDone);


void __RPC_STUB ISALocInfo_get_fAutoConfigDone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE ISALocInfo_get_CurrentCharSet_Proxy( 
    ISALocInfo * This,
    /* [retval][out] */ BSTR *pbstrCharSet);


void __RPC_STUB ISALocInfo_get_CurrentCharSet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE ISALocInfo_get_CurrentCodePage_Proxy( 
    ISALocInfo * This,
    /* [retval][out] */ VARIANT *pvtiCodePage);


void __RPC_STUB ISALocInfo_get_CurrentCodePage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE ISALocInfo_get_CurrentLangID_Proxy( 
    ISALocInfo * This,
    /* [retval][out] */ VARIANT *pvtiLangID);


void __RPC_STUB ISALocInfo_get_CurrentLangID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISALocInfo_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_LocalizationManager;

#ifdef __cplusplus

class DECLSPEC_UUID("15ae80b2-c5d8-11d2-a7a9-00c04fc33f05")
LocalizationManager;
#endif
#endif /* __SALocMgrLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


