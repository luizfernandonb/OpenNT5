

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for ocarpt.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
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

#ifndef __ocarpt_h__
#define __ocarpt_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IOcarptMain_FWD_DEFINED__
#define __IOcarptMain_FWD_DEFINED__
typedef interface IOcarptMain IOcarptMain;
#endif 	/* __IOcarptMain_FWD_DEFINED__ */


#ifndef __OcarptMain_FWD_DEFINED__
#define __OcarptMain_FWD_DEFINED__

#ifdef __cplusplus
typedef class OcarptMain OcarptMain;
#else
typedef struct OcarptMain OcarptMain;
#endif /* __cplusplus */

#endif 	/* __OcarptMain_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __IOcarptMain_INTERFACE_DEFINED__
#define __IOcarptMain_INTERFACE_DEFINED__

/* interface IOcarptMain */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IOcarptMain;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("53E2D7B5-EC6C-4FF7-80F2-1CE5FD6544CE")
    IOcarptMain : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Upload( 
            /* [in] */ BSTR *SourceFile,
            /* [in] */ BSTR *DestFile,
            /* [in] */ BSTR *Langage,
            /* [in] */ BSTR *OptionCode,
            /* [in] */ int ConvetToMini,
            /* [retval][out] */ VARIANT *ReturnCode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search( 
            /* [retval][out] */ VARIANT *pvFileList) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Browse( 
            /* [in] */ BSTR *pbstrTitle,
            /* [in] */ BSTR *Lang,
            /* [retval][out] */ VARIANT *Path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ValidateDump( 
            /* [in] */ BSTR *FileName,
            /* [retval][out] */ VARIANT *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RetrieveFileContents( 
            /* [in] */ BSTR *FileName,
            /* [retval][out] */ VARIANT *pvContents) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUploadStatus( 
            /* [retval][out] */ VARIANT *PercentDone) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUploadResult( 
            /* [retval][out] */ VARIANT *UploadResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CancelUpload( 
            /* [retval][out] */ VARIANT *ReturnCode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IOcarptMainVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOcarptMain * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOcarptMain * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOcarptMain * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOcarptMain * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOcarptMain * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOcarptMain * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOcarptMain * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Upload )( 
            IOcarptMain * This,
            /* [in] */ BSTR *SourceFile,
            /* [in] */ BSTR *DestFile,
            /* [in] */ BSTR *Langage,
            /* [in] */ BSTR *OptionCode,
            /* [in] */ int ConvetToMini,
            /* [retval][out] */ VARIANT *ReturnCode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Search )( 
            IOcarptMain * This,
            /* [retval][out] */ VARIANT *pvFileList);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Browse )( 
            IOcarptMain * This,
            /* [in] */ BSTR *pbstrTitle,
            /* [in] */ BSTR *Lang,
            /* [retval][out] */ VARIANT *Path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ValidateDump )( 
            IOcarptMain * This,
            /* [in] */ BSTR *FileName,
            /* [retval][out] */ VARIANT *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RetrieveFileContents )( 
            IOcarptMain * This,
            /* [in] */ BSTR *FileName,
            /* [retval][out] */ VARIANT *pvContents);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUploadStatus )( 
            IOcarptMain * This,
            /* [retval][out] */ VARIANT *PercentDone);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUploadResult )( 
            IOcarptMain * This,
            /* [retval][out] */ VARIANT *UploadResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CancelUpload )( 
            IOcarptMain * This,
            /* [retval][out] */ VARIANT *ReturnCode);
        
        END_INTERFACE
    } IOcarptMainVtbl;

    interface IOcarptMain
    {
        CONST_VTBL struct IOcarptMainVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOcarptMain_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IOcarptMain_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IOcarptMain_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IOcarptMain_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IOcarptMain_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IOcarptMain_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IOcarptMain_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IOcarptMain_Upload(This,SourceFile,DestFile,Langage,OptionCode,ConvetToMini,ReturnCode)	\
    (This)->lpVtbl -> Upload(This,SourceFile,DestFile,Langage,OptionCode,ConvetToMini,ReturnCode)

#define IOcarptMain_Search(This,pvFileList)	\
    (This)->lpVtbl -> Search(This,pvFileList)

#define IOcarptMain_Browse(This,pbstrTitle,Lang,Path)	\
    (This)->lpVtbl -> Browse(This,pbstrTitle,Lang,Path)

#define IOcarptMain_ValidateDump(This,FileName,Result)	\
    (This)->lpVtbl -> ValidateDump(This,FileName,Result)

#define IOcarptMain_RetrieveFileContents(This,FileName,pvContents)	\
    (This)->lpVtbl -> RetrieveFileContents(This,FileName,pvContents)

#define IOcarptMain_GetUploadStatus(This,PercentDone)	\
    (This)->lpVtbl -> GetUploadStatus(This,PercentDone)

#define IOcarptMain_GetUploadResult(This,UploadResult)	\
    (This)->lpVtbl -> GetUploadResult(This,UploadResult)

#define IOcarptMain_CancelUpload(This,ReturnCode)	\
    (This)->lpVtbl -> CancelUpload(This,ReturnCode)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOcarptMain_Upload_Proxy( 
    IOcarptMain * This,
    /* [in] */ BSTR *SourceFile,
    /* [in] */ BSTR *DestFile,
    /* [in] */ BSTR *Langage,
    /* [in] */ BSTR *OptionCode,
    /* [in] */ int ConvetToMini,
    /* [retval][out] */ VARIANT *ReturnCode);


void __RPC_STUB IOcarptMain_Upload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOcarptMain_Search_Proxy( 
    IOcarptMain * This,
    /* [retval][out] */ VARIANT *pvFileList);


void __RPC_STUB IOcarptMain_Search_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOcarptMain_Browse_Proxy( 
    IOcarptMain * This,
    /* [in] */ BSTR *pbstrTitle,
    /* [in] */ BSTR *Lang,
    /* [retval][out] */ VARIANT *Path);


void __RPC_STUB IOcarptMain_Browse_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOcarptMain_ValidateDump_Proxy( 
    IOcarptMain * This,
    /* [in] */ BSTR *FileName,
    /* [retval][out] */ VARIANT *Result);


void __RPC_STUB IOcarptMain_ValidateDump_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOcarptMain_RetrieveFileContents_Proxy( 
    IOcarptMain * This,
    /* [in] */ BSTR *FileName,
    /* [retval][out] */ VARIANT *pvContents);


void __RPC_STUB IOcarptMain_RetrieveFileContents_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOcarptMain_GetUploadStatus_Proxy( 
    IOcarptMain * This,
    /* [retval][out] */ VARIANT *PercentDone);


void __RPC_STUB IOcarptMain_GetUploadStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOcarptMain_GetUploadResult_Proxy( 
    IOcarptMain * This,
    /* [retval][out] */ VARIANT *UploadResult);


void __RPC_STUB IOcarptMain_GetUploadResult_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOcarptMain_CancelUpload_Proxy( 
    IOcarptMain * This,
    /* [retval][out] */ VARIANT *ReturnCode);


void __RPC_STUB IOcarptMain_CancelUpload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IOcarptMain_INTERFACE_DEFINED__ */



#ifndef __OCARPTLib_LIBRARY_DEFINED__
#define __OCARPTLib_LIBRARY_DEFINED__

/* library OCARPTLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_OCARPTLib;

EXTERN_C const CLSID CLSID_OcarptMain;

#ifdef __cplusplus

class DECLSPEC_UUID("D68DAEED-C2A6-4C6F-9365-4676B173D8EF")
OcarptMain;
#endif
#endif /* __OCARPTLib_LIBRARY_DEFINED__ */

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


