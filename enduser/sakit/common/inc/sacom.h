

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for sacom.idl:
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

#ifndef __sacom_h__
#define __sacom_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISaNvram_FWD_DEFINED__
#define __ISaNvram_FWD_DEFINED__
typedef interface ISaNvram ISaNvram;
#endif 	/* __ISaNvram_FWD_DEFINED__ */


#ifndef __ISaDisplay_FWD_DEFINED__
#define __ISaDisplay_FWD_DEFINED__
typedef interface ISaDisplay ISaDisplay;
#endif 	/* __ISaDisplay_FWD_DEFINED__ */


#ifndef __ISaKeypad_FWD_DEFINED__
#define __ISaKeypad_FWD_DEFINED__
typedef interface ISaKeypad ISaKeypad;
#endif 	/* __ISaKeypad_FWD_DEFINED__ */


#ifndef __SaNvram_FWD_DEFINED__
#define __SaNvram_FWD_DEFINED__

#ifdef __cplusplus
typedef class SaNvram SaNvram;
#else
typedef struct SaNvram SaNvram;
#endif /* __cplusplus */

#endif 	/* __SaNvram_FWD_DEFINED__ */


#ifndef __SaDisplay_FWD_DEFINED__
#define __SaDisplay_FWD_DEFINED__

#ifdef __cplusplus
typedef class SaDisplay SaDisplay;
#else
typedef struct SaDisplay SaDisplay;
#endif /* __cplusplus */

#endif 	/* __SaDisplay_FWD_DEFINED__ */


#ifndef __SaKeypad_FWD_DEFINED__
#define __SaKeypad_FWD_DEFINED__

#ifdef __cplusplus
typedef class SaKeypad SaKeypad;
#else
typedef struct SaKeypad SaKeypad;
#endif /* __cplusplus */

#endif 	/* __SaKeypad_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ISaNvram_INTERFACE_DEFINED__
#define __ISaNvram_INTERFACE_DEFINED__

/* interface ISaNvram */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISaNvram;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38362A9B-B73B-46D2-BB7A-51A50AC6C571")
    ISaNvram : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InterfaceVersion( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BootCounter( 
            /* [in] */ long Number,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BootCounter( 
            /* [in] */ long Number,
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataSlot( 
            /* [in] */ long Number,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DataSlot( 
            /* [in] */ long Number,
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceId( 
            /* [in] */ long Number,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceId( 
            /* [in] */ long Number,
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISaNvramVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISaNvram * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISaNvram * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISaNvram * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISaNvram * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISaNvram * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISaNvram * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISaNvram * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InterfaceVersion )( 
            ISaNvram * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BootCounter )( 
            ISaNvram * This,
            /* [in] */ long Number,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BootCounter )( 
            ISaNvram * This,
            /* [in] */ long Number,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            ISaNvram * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSlot )( 
            ISaNvram * This,
            /* [in] */ long Number,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSlot )( 
            ISaNvram * This,
            /* [in] */ long Number,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceId )( 
            ISaNvram * This,
            /* [in] */ long Number,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceId )( 
            ISaNvram * This,
            /* [in] */ long Number,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ISaNvramVtbl;

    interface ISaNvram
    {
        CONST_VTBL struct ISaNvramVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISaNvram_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISaNvram_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISaNvram_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISaNvram_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISaNvram_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISaNvram_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISaNvram_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISaNvram_get_InterfaceVersion(This,pVal)	\
    (This)->lpVtbl -> get_InterfaceVersion(This,pVal)

#define ISaNvram_get_BootCounter(This,Number,pVal)	\
    (This)->lpVtbl -> get_BootCounter(This,Number,pVal)

#define ISaNvram_put_BootCounter(This,Number,newVal)	\
    (This)->lpVtbl -> put_BootCounter(This,Number,newVal)

#define ISaNvram_get_Size(This,pVal)	\
    (This)->lpVtbl -> get_Size(This,pVal)

#define ISaNvram_get_DataSlot(This,Number,pVal)	\
    (This)->lpVtbl -> get_DataSlot(This,Number,pVal)

#define ISaNvram_put_DataSlot(This,Number,newVal)	\
    (This)->lpVtbl -> put_DataSlot(This,Number,newVal)

#define ISaNvram_get_DeviceId(This,Number,pVal)	\
    (This)->lpVtbl -> get_DeviceId(This,Number,pVal)

#define ISaNvram_put_DeviceId(This,Number,newVal)	\
    (This)->lpVtbl -> put_DeviceId(This,Number,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaNvram_get_InterfaceVersion_Proxy( 
    ISaNvram * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISaNvram_get_InterfaceVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaNvram_get_BootCounter_Proxy( 
    ISaNvram * This,
    /* [in] */ long Number,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISaNvram_get_BootCounter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISaNvram_put_BootCounter_Proxy( 
    ISaNvram * This,
    /* [in] */ long Number,
    /* [in] */ long newVal);


void __RPC_STUB ISaNvram_put_BootCounter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaNvram_get_Size_Proxy( 
    ISaNvram * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISaNvram_get_Size_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaNvram_get_DataSlot_Proxy( 
    ISaNvram * This,
    /* [in] */ long Number,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISaNvram_get_DataSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISaNvram_put_DataSlot_Proxy( 
    ISaNvram * This,
    /* [in] */ long Number,
    /* [in] */ long newVal);


void __RPC_STUB ISaNvram_put_DataSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaNvram_get_DeviceId_Proxy( 
    ISaNvram * This,
    /* [in] */ long Number,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISaNvram_get_DeviceId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISaNvram_put_DeviceId_Proxy( 
    ISaNvram * This,
    /* [in] */ long Number,
    /* [in] */ long newVal);


void __RPC_STUB ISaNvram_put_DeviceId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISaNvram_INTERFACE_DEFINED__ */


#ifndef __ISaDisplay_INTERFACE_DEFINED__
#define __ISaDisplay_INTERFACE_DEFINED__

/* interface ISaDisplay */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISaDisplay;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17797AF6-E4AA-46EC-B9C5-C5B391FE1921")
    ISaDisplay : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InterfaceVersion( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayType( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CharacterSet( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayHeight( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayWidth( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowMessage( 
            long MsgCode,
            long Width,
            long Height,
            unsigned char *Bits) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowMessageFromFile( 
            long MsgCode,
            BSTR BitmapFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearDisplay( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StoreBitmap( 
            long MessageId,
            long Width,
            long Height,
            unsigned char *Bits) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Lock( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnLock( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReloadRegistryBitmaps( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowRegistryBitmap( 
            long MessageId) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISaDisplayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISaDisplay * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISaDisplay * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISaDisplay * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISaDisplay * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISaDisplay * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISaDisplay * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISaDisplay * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InterfaceVersion )( 
            ISaDisplay * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayType )( 
            ISaDisplay * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CharacterSet )( 
            ISaDisplay * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayHeight )( 
            ISaDisplay * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayWidth )( 
            ISaDisplay * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowMessage )( 
            ISaDisplay * This,
            long MsgCode,
            long Width,
            long Height,
            unsigned char *Bits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowMessageFromFile )( 
            ISaDisplay * This,
            long MsgCode,
            BSTR BitmapFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClearDisplay )( 
            ISaDisplay * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StoreBitmap )( 
            ISaDisplay * This,
            long MessageId,
            long Width,
            long Height,
            unsigned char *Bits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Lock )( 
            ISaDisplay * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnLock )( 
            ISaDisplay * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReloadRegistryBitmaps )( 
            ISaDisplay * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowRegistryBitmap )( 
            ISaDisplay * This,
            long MessageId);
        
        END_INTERFACE
    } ISaDisplayVtbl;

    interface ISaDisplay
    {
        CONST_VTBL struct ISaDisplayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISaDisplay_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISaDisplay_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISaDisplay_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISaDisplay_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISaDisplay_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISaDisplay_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISaDisplay_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISaDisplay_get_InterfaceVersion(This,pVal)	\
    (This)->lpVtbl -> get_InterfaceVersion(This,pVal)

#define ISaDisplay_get_DisplayType(This,pVal)	\
    (This)->lpVtbl -> get_DisplayType(This,pVal)

#define ISaDisplay_get_CharacterSet(This,pVal)	\
    (This)->lpVtbl -> get_CharacterSet(This,pVal)

#define ISaDisplay_get_DisplayHeight(This,pVal)	\
    (This)->lpVtbl -> get_DisplayHeight(This,pVal)

#define ISaDisplay_get_DisplayWidth(This,pVal)	\
    (This)->lpVtbl -> get_DisplayWidth(This,pVal)

#define ISaDisplay_ShowMessage(This,MsgCode,Width,Height,Bits)	\
    (This)->lpVtbl -> ShowMessage(This,MsgCode,Width,Height,Bits)

#define ISaDisplay_ShowMessageFromFile(This,MsgCode,BitmapFileName)	\
    (This)->lpVtbl -> ShowMessageFromFile(This,MsgCode,BitmapFileName)

#define ISaDisplay_ClearDisplay(This)	\
    (This)->lpVtbl -> ClearDisplay(This)

#define ISaDisplay_StoreBitmap(This,MessageId,Width,Height,Bits)	\
    (This)->lpVtbl -> StoreBitmap(This,MessageId,Width,Height,Bits)

#define ISaDisplay_Lock(This)	\
    (This)->lpVtbl -> Lock(This)

#define ISaDisplay_UnLock(This)	\
    (This)->lpVtbl -> UnLock(This)

#define ISaDisplay_ReloadRegistryBitmaps(This)	\
    (This)->lpVtbl -> ReloadRegistryBitmaps(This)

#define ISaDisplay_ShowRegistryBitmap(This,MessageId)	\
    (This)->lpVtbl -> ShowRegistryBitmap(This,MessageId)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaDisplay_get_InterfaceVersion_Proxy( 
    ISaDisplay * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISaDisplay_get_InterfaceVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaDisplay_get_DisplayType_Proxy( 
    ISaDisplay * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISaDisplay_get_DisplayType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaDisplay_get_CharacterSet_Proxy( 
    ISaDisplay * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISaDisplay_get_CharacterSet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaDisplay_get_DisplayHeight_Proxy( 
    ISaDisplay * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISaDisplay_get_DisplayHeight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaDisplay_get_DisplayWidth_Proxy( 
    ISaDisplay * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISaDisplay_get_DisplayWidth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISaDisplay_ShowMessage_Proxy( 
    ISaDisplay * This,
    long MsgCode,
    long Width,
    long Height,
    unsigned char *Bits);


void __RPC_STUB ISaDisplay_ShowMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISaDisplay_ShowMessageFromFile_Proxy( 
    ISaDisplay * This,
    long MsgCode,
    BSTR BitmapFileName);


void __RPC_STUB ISaDisplay_ShowMessageFromFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISaDisplay_ClearDisplay_Proxy( 
    ISaDisplay * This);


void __RPC_STUB ISaDisplay_ClearDisplay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISaDisplay_StoreBitmap_Proxy( 
    ISaDisplay * This,
    long MessageId,
    long Width,
    long Height,
    unsigned char *Bits);


void __RPC_STUB ISaDisplay_StoreBitmap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISaDisplay_Lock_Proxy( 
    ISaDisplay * This);


void __RPC_STUB ISaDisplay_Lock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISaDisplay_UnLock_Proxy( 
    ISaDisplay * This);


void __RPC_STUB ISaDisplay_UnLock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISaDisplay_ReloadRegistryBitmaps_Proxy( 
    ISaDisplay * This);


void __RPC_STUB ISaDisplay_ReloadRegistryBitmaps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISaDisplay_ShowRegistryBitmap_Proxy( 
    ISaDisplay * This,
    long MessageId);


void __RPC_STUB ISaDisplay_ShowRegistryBitmap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISaDisplay_INTERFACE_DEFINED__ */


#ifndef __ISaKeypad_INTERFACE_DEFINED__
#define __ISaKeypad_INTERFACE_DEFINED__

/* interface ISaKeypad */
/* [unique][helpstring][dual][uuid][object] */ 

typedef 
enum _SAKEY
    {	SAKEY_UP	= 1,
	SAKEY_DOWN	= SAKEY_UP + 1,
	SAKEY_LEFT	= SAKEY_DOWN + 1,
	SAKEY_RIGHT	= SAKEY_LEFT + 1,
	SAKEY_ESCAPE	= SAKEY_RIGHT + 1,
	SAKEY_RETURN	= SAKEY_ESCAPE + 1
    } 	SAKEY;


EXTERN_C const IID IID_ISaKeypad;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A6B88613-2668-44EF-A418-109B062301E4")
    ISaKeypad : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InterfaceVersion( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Key( 
            /* [retval][out] */ SAKEY *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISaKeypadVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISaKeypad * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISaKeypad * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISaKeypad * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISaKeypad * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISaKeypad * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISaKeypad * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISaKeypad * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InterfaceVersion )( 
            ISaKeypad * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )( 
            ISaKeypad * This,
            /* [retval][out] */ SAKEY *pVal);
        
        END_INTERFACE
    } ISaKeypadVtbl;

    interface ISaKeypad
    {
        CONST_VTBL struct ISaKeypadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISaKeypad_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISaKeypad_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISaKeypad_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISaKeypad_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISaKeypad_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISaKeypad_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISaKeypad_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISaKeypad_get_InterfaceVersion(This,pVal)	\
    (This)->lpVtbl -> get_InterfaceVersion(This,pVal)

#define ISaKeypad_get_Key(This,pVal)	\
    (This)->lpVtbl -> get_Key(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaKeypad_get_InterfaceVersion_Proxy( 
    ISaKeypad * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB ISaKeypad_get_InterfaceVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISaKeypad_get_Key_Proxy( 
    ISaKeypad * This,
    /* [retval][out] */ SAKEY *pVal);


void __RPC_STUB ISaKeypad_get_Key_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISaKeypad_INTERFACE_DEFINED__ */



#ifndef __SACOMLib_LIBRARY_DEFINED__
#define __SACOMLib_LIBRARY_DEFINED__

/* library SACOMLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SACOMLib;

EXTERN_C const CLSID CLSID_SaNvram;

#ifdef __cplusplus

class DECLSPEC_UUID("1CB8F970-7742-4B1C-8037-66D0CEA2AB57")
SaNvram;
#endif

EXTERN_C const CLSID CLSID_SaDisplay;

#ifdef __cplusplus

class DECLSPEC_UUID("750CE1C2-4BE7-44D7-97BD-164F6CF0D373")
SaDisplay;
#endif

EXTERN_C const CLSID CLSID_SaKeypad;

#ifdef __cplusplus

class DECLSPEC_UUID("59BAE4E1-3604-489A-A601-AC9558A5173D")
SaKeypad;
#endif
#endif /* __SACOMLib_LIBRARY_DEFINED__ */

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


