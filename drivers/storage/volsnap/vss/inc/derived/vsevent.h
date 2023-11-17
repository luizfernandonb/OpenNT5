

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for vsevent.idl:
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

#ifndef __vsevent_h__
#define __vsevent_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVssWriter_FWD_DEFINED__
#define __IVssWriter_FWD_DEFINED__
typedef interface IVssWriter IVssWriter;
#endif 	/* __IVssWriter_FWD_DEFINED__ */


#ifndef __IVssWriterCallback_FWD_DEFINED__
#define __IVssWriterCallback_FWD_DEFINED__
typedef interface IVssWriterCallback IVssWriterCallback;
#endif 	/* __IVssWriterCallback_FWD_DEFINED__ */


#ifndef __IVssCoordinatorCallback_FWD_DEFINED__
#define __IVssCoordinatorCallback_FWD_DEFINED__
typedef interface IVssCoordinatorCallback IVssCoordinatorCallback;
#endif 	/* __IVssCoordinatorCallback_FWD_DEFINED__ */


#ifndef __VssEvent_FWD_DEFINED__
#define __VssEvent_FWD_DEFINED__

#ifdef __cplusplus
typedef class VssEvent VssEvent;
#else
typedef struct VssEvent VssEvent;
#endif /* __cplusplus */

#endif 	/* __VssEvent_FWD_DEFINED__ */


/* header files for imported files */
#include "EventSys.h"
#include "vss.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_vsevent_0000 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_vsevent_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsevent_0000_v0_0_s_ifspec;

#ifndef __IVssWriter_INTERFACE_DEFINED__
#define __IVssWriter_INTERFACE_DEFINED__

/* interface IVssWriter */
/* [unique][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IVssWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F2B41165-A791-4c1f-9820-8BE45C784E32")
    IVssWriter : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RequestWriterInfo( 
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ BOOL bWriterMetadata,
            /* [in] */ BOOL bWriterState,
            /* [in] */ IDispatch *pWriterCallback) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PrepareForBackup( 
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ IDispatch *pWriterCallback) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PrepareForSnapshot( 
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ BSTR VolumeNamesList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Freeze( 
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ INT nApplicationLevel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Thaw( 
            /* [in] */ BSTR bstrSnapshotSetId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PostSnapshot( 
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ IDispatch *pWriterCallback,
            /* [in] */ BSTR SnapshotDevicesList) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BackupComplete( 
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ IDispatch *pWriterCallback) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BackupShutdown( 
            /* [in] */ BSTR bstrSnapshotSetId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Abort( 
            /* [in] */ BSTR bstrSnapshotSetId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PreRestore( 
            /* [in] */ IDispatch *pWriterCallback) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PostRestore( 
            /* [in] */ IDispatch *pWriterCallback) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVssWriterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVssWriter * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVssWriter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVssWriter * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RequestWriterInfo )( 
            IVssWriter * This,
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ BOOL bWriterMetadata,
            /* [in] */ BOOL bWriterState,
            /* [in] */ IDispatch *pWriterCallback);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PrepareForBackup )( 
            IVssWriter * This,
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ IDispatch *pWriterCallback);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PrepareForSnapshot )( 
            IVssWriter * This,
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ BSTR VolumeNamesList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Freeze )( 
            IVssWriter * This,
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ INT nApplicationLevel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Thaw )( 
            IVssWriter * This,
            /* [in] */ BSTR bstrSnapshotSetId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PostSnapshot )( 
            IVssWriter * This,
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ IDispatch *pWriterCallback,
            /* [in] */ BSTR SnapshotDevicesList);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BackupComplete )( 
            IVssWriter * This,
            /* [in] */ BSTR bstrSnapshotSetId,
            /* [in] */ IDispatch *pWriterCallback);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BackupShutdown )( 
            IVssWriter * This,
            /* [in] */ BSTR bstrSnapshotSetId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IVssWriter * This,
            /* [in] */ BSTR bstrSnapshotSetId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PreRestore )( 
            IVssWriter * This,
            /* [in] */ IDispatch *pWriterCallback);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PostRestore )( 
            IVssWriter * This,
            /* [in] */ IDispatch *pWriterCallback);
        
        END_INTERFACE
    } IVssWriterVtbl;

    interface IVssWriter
    {
        CONST_VTBL struct IVssWriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVssWriter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IVssWriter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IVssWriter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IVssWriter_RequestWriterInfo(This,bstrSnapshotSetId,bWriterMetadata,bWriterState,pWriterCallback)	\
    (This)->lpVtbl -> RequestWriterInfo(This,bstrSnapshotSetId,bWriterMetadata,bWriterState,pWriterCallback)

#define IVssWriter_PrepareForBackup(This,bstrSnapshotSetId,pWriterCallback)	\
    (This)->lpVtbl -> PrepareForBackup(This,bstrSnapshotSetId,pWriterCallback)

#define IVssWriter_PrepareForSnapshot(This,bstrSnapshotSetId,VolumeNamesList)	\
    (This)->lpVtbl -> PrepareForSnapshot(This,bstrSnapshotSetId,VolumeNamesList)

#define IVssWriter_Freeze(This,bstrSnapshotSetId,nApplicationLevel)	\
    (This)->lpVtbl -> Freeze(This,bstrSnapshotSetId,nApplicationLevel)

#define IVssWriter_Thaw(This,bstrSnapshotSetId)	\
    (This)->lpVtbl -> Thaw(This,bstrSnapshotSetId)

#define IVssWriter_PostSnapshot(This,bstrSnapshotSetId,pWriterCallback,SnapshotDevicesList)	\
    (This)->lpVtbl -> PostSnapshot(This,bstrSnapshotSetId,pWriterCallback,SnapshotDevicesList)

#define IVssWriter_BackupComplete(This,bstrSnapshotSetId,pWriterCallback)	\
    (This)->lpVtbl -> BackupComplete(This,bstrSnapshotSetId,pWriterCallback)

#define IVssWriter_BackupShutdown(This,bstrSnapshotSetId)	\
    (This)->lpVtbl -> BackupShutdown(This,bstrSnapshotSetId)

#define IVssWriter_Abort(This,bstrSnapshotSetId)	\
    (This)->lpVtbl -> Abort(This,bstrSnapshotSetId)

#define IVssWriter_PreRestore(This,pWriterCallback)	\
    (This)->lpVtbl -> PreRestore(This,pWriterCallback)

#define IVssWriter_PostRestore(This,pWriterCallback)	\
    (This)->lpVtbl -> PostRestore(This,pWriterCallback)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriter_RequestWriterInfo_Proxy( 
    IVssWriter * This,
    /* [in] */ BSTR bstrSnapshotSetId,
    /* [in] */ BOOL bWriterMetadata,
    /* [in] */ BOOL bWriterState,
    /* [in] */ IDispatch *pWriterCallback);


void __RPC_STUB IVssWriter_RequestWriterInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriter_PrepareForBackup_Proxy( 
    IVssWriter * This,
    /* [in] */ BSTR bstrSnapshotSetId,
    /* [in] */ IDispatch *pWriterCallback);


void __RPC_STUB IVssWriter_PrepareForBackup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriter_PrepareForSnapshot_Proxy( 
    IVssWriter * This,
    /* [in] */ BSTR bstrSnapshotSetId,
    /* [in] */ BSTR VolumeNamesList);


void __RPC_STUB IVssWriter_PrepareForSnapshot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriter_Freeze_Proxy( 
    IVssWriter * This,
    /* [in] */ BSTR bstrSnapshotSetId,
    /* [in] */ INT nApplicationLevel);


void __RPC_STUB IVssWriter_Freeze_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriter_Thaw_Proxy( 
    IVssWriter * This,
    /* [in] */ BSTR bstrSnapshotSetId);


void __RPC_STUB IVssWriter_Thaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriter_PostSnapshot_Proxy( 
    IVssWriter * This,
    /* [in] */ BSTR bstrSnapshotSetId,
    /* [in] */ IDispatch *pWriterCallback,
    /* [in] */ BSTR SnapshotDevicesList);


void __RPC_STUB IVssWriter_PostSnapshot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriter_BackupComplete_Proxy( 
    IVssWriter * This,
    /* [in] */ BSTR bstrSnapshotSetId,
    /* [in] */ IDispatch *pWriterCallback);


void __RPC_STUB IVssWriter_BackupComplete_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriter_BackupShutdown_Proxy( 
    IVssWriter * This,
    /* [in] */ BSTR bstrSnapshotSetId);


void __RPC_STUB IVssWriter_BackupShutdown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriter_Abort_Proxy( 
    IVssWriter * This,
    /* [in] */ BSTR bstrSnapshotSetId);


void __RPC_STUB IVssWriter_Abort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriter_PreRestore_Proxy( 
    IVssWriter * This,
    /* [in] */ IDispatch *pWriterCallback);


void __RPC_STUB IVssWriter_PreRestore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriter_PostRestore_Proxy( 
    IVssWriter * This,
    /* [in] */ IDispatch *pWriterCallback);


void __RPC_STUB IVssWriter_PostRestore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVssWriter_INTERFACE_DEFINED__ */


#ifndef __IVssWriterCallback_INTERFACE_DEFINED__
#define __IVssWriterCallback_INTERFACE_DEFINED__

/* interface IVssWriterCallback */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IVssWriterCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DDAC9818-DD57-4279-82D5-A380A516EF36")
    IVssWriterCallback : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ExposeWriterMetadata( 
            /* [in] */ BSTR WriterInstanceId,
            /* [in] */ BSTR WriterClassId,
            /* [in] */ BSTR bstrWriterName,
            /* [in] */ BSTR strWriterXmlMetadata) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetContent( 
            /* [in] */ BSTR WriterInstanceId,
            /* [out] */ BSTR *pbstrXMLDocContent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetContent( 
            /* [in] */ BSTR WriterInstanceId,
            /* [in] */ BSTR bstrXMLDocContent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBackupState( 
            /* [out] */ BOOL *pbBootableSystemStateBackedUp,
            /* [out] */ BOOL *pbAreComponentsSelected,
            /* [out] */ VSS_BACKUP_TYPE *pBackupType,
            /* [out] */ BOOL *pbPartialFileSupport,
            /* [out] */ LONG *plContext) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRestoreState( 
            /* [out] */ VSS_RESTORE_TYPE *pRestoreType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ExposeCurrentState( 
            /* [in] */ BSTR WriterInstanceId,
            /* [in] */ VSS_WRITER_STATE nCurrentState,
            /* [in] */ HRESULT hrWriterFailure) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVssWriterCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVssWriterCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVssWriterCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVssWriterCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVssWriterCallback * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVssWriterCallback * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVssWriterCallback * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVssWriterCallback * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ExposeWriterMetadata )( 
            IVssWriterCallback * This,
            /* [in] */ BSTR WriterInstanceId,
            /* [in] */ BSTR WriterClassId,
            /* [in] */ BSTR bstrWriterName,
            /* [in] */ BSTR strWriterXmlMetadata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetContent )( 
            IVssWriterCallback * This,
            /* [in] */ BSTR WriterInstanceId,
            /* [out] */ BSTR *pbstrXMLDocContent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetContent )( 
            IVssWriterCallback * This,
            /* [in] */ BSTR WriterInstanceId,
            /* [in] */ BSTR bstrXMLDocContent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBackupState )( 
            IVssWriterCallback * This,
            /* [out] */ BOOL *pbBootableSystemStateBackedUp,
            /* [out] */ BOOL *pbAreComponentsSelected,
            /* [out] */ VSS_BACKUP_TYPE *pBackupType,
            /* [out] */ BOOL *pbPartialFileSupport,
            /* [out] */ LONG *plContext);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRestoreState )( 
            IVssWriterCallback * This,
            /* [out] */ VSS_RESTORE_TYPE *pRestoreType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ExposeCurrentState )( 
            IVssWriterCallback * This,
            /* [in] */ BSTR WriterInstanceId,
            /* [in] */ VSS_WRITER_STATE nCurrentState,
            /* [in] */ HRESULT hrWriterFailure);
        
        END_INTERFACE
    } IVssWriterCallbackVtbl;

    interface IVssWriterCallback
    {
        CONST_VTBL struct IVssWriterCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVssWriterCallback_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IVssWriterCallback_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IVssWriterCallback_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IVssWriterCallback_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IVssWriterCallback_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IVssWriterCallback_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IVssWriterCallback_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IVssWriterCallback_ExposeWriterMetadata(This,WriterInstanceId,WriterClassId,bstrWriterName,strWriterXmlMetadata)	\
    (This)->lpVtbl -> ExposeWriterMetadata(This,WriterInstanceId,WriterClassId,bstrWriterName,strWriterXmlMetadata)

#define IVssWriterCallback_GetContent(This,WriterInstanceId,pbstrXMLDocContent)	\
    (This)->lpVtbl -> GetContent(This,WriterInstanceId,pbstrXMLDocContent)

#define IVssWriterCallback_SetContent(This,WriterInstanceId,bstrXMLDocContent)	\
    (This)->lpVtbl -> SetContent(This,WriterInstanceId,bstrXMLDocContent)

#define IVssWriterCallback_GetBackupState(This,pbBootableSystemStateBackedUp,pbAreComponentsSelected,pBackupType,pbPartialFileSupport,plContext)	\
    (This)->lpVtbl -> GetBackupState(This,pbBootableSystemStateBackedUp,pbAreComponentsSelected,pBackupType,pbPartialFileSupport,plContext)

#define IVssWriterCallback_GetRestoreState(This,pRestoreType)	\
    (This)->lpVtbl -> GetRestoreState(This,pRestoreType)

#define IVssWriterCallback_ExposeCurrentState(This,WriterInstanceId,nCurrentState,hrWriterFailure)	\
    (This)->lpVtbl -> ExposeCurrentState(This,WriterInstanceId,nCurrentState,hrWriterFailure)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriterCallback_ExposeWriterMetadata_Proxy( 
    IVssWriterCallback * This,
    /* [in] */ BSTR WriterInstanceId,
    /* [in] */ BSTR WriterClassId,
    /* [in] */ BSTR bstrWriterName,
    /* [in] */ BSTR strWriterXmlMetadata);


void __RPC_STUB IVssWriterCallback_ExposeWriterMetadata_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriterCallback_GetContent_Proxy( 
    IVssWriterCallback * This,
    /* [in] */ BSTR WriterInstanceId,
    /* [out] */ BSTR *pbstrXMLDocContent);


void __RPC_STUB IVssWriterCallback_GetContent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriterCallback_SetContent_Proxy( 
    IVssWriterCallback * This,
    /* [in] */ BSTR WriterInstanceId,
    /* [in] */ BSTR bstrXMLDocContent);


void __RPC_STUB IVssWriterCallback_SetContent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriterCallback_GetBackupState_Proxy( 
    IVssWriterCallback * This,
    /* [out] */ BOOL *pbBootableSystemStateBackedUp,
    /* [out] */ BOOL *pbAreComponentsSelected,
    /* [out] */ VSS_BACKUP_TYPE *pBackupType,
    /* [out] */ BOOL *pbPartialFileSupport,
    /* [out] */ LONG *plContext);


void __RPC_STUB IVssWriterCallback_GetBackupState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriterCallback_GetRestoreState_Proxy( 
    IVssWriterCallback * This,
    /* [out] */ VSS_RESTORE_TYPE *pRestoreType);


void __RPC_STUB IVssWriterCallback_GetRestoreState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssWriterCallback_ExposeCurrentState_Proxy( 
    IVssWriterCallback * This,
    /* [in] */ BSTR WriterInstanceId,
    /* [in] */ VSS_WRITER_STATE nCurrentState,
    /* [in] */ HRESULT hrWriterFailure);


void __RPC_STUB IVssWriterCallback_ExposeCurrentState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVssWriterCallback_INTERFACE_DEFINED__ */


#ifndef __IVssCoordinatorCallback_INTERFACE_DEFINED__
#define __IVssCoordinatorCallback_INTERFACE_DEFINED__

/* interface IVssCoordinatorCallback */
/* [unique][helpstring][uuid][dual][object] */ 


EXTERN_C const IID IID_IVssCoordinatorCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52946A2D-A7CD-4c1f-82BA-22F0EA17EC4E")
    IVssCoordinatorCallback : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CoordGetContent( 
            /* [in] */ BSTR WriterInstanceId,
            /* [in] */ ULONG cbSid,
            /* [size_is][unique][in] */ BYTE *m_rgbSid,
            /* [out] */ BSTR *pbstrXMLDocContent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CoordSetContent( 
            /* [in] */ BSTR WriterInstanceId,
            /* [in] */ ULONG cbSid,
            /* [size_is][unique][in] */ BYTE *m_rgbSid,
            /* [in] */ BSTR bstrXMLDocContent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CoordGetBackupState( 
            /* [out] */ BOOL *pbBootableSystemStateBackedUp,
            /* [out] */ BOOL *pbAreComponentsSelected,
            /* [out] */ VSS_BACKUP_TYPE *pBackupType,
            /* [out] */ BOOL *pbPartialFileSupport,
            /* [out] */ LONG *plContext) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CoordGetRestoreState( 
            /* [out] */ VSS_RESTORE_TYPE *pRestoreType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVssCoordinatorCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVssCoordinatorCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVssCoordinatorCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVssCoordinatorCallback * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CoordGetContent )( 
            IVssCoordinatorCallback * This,
            /* [in] */ BSTR WriterInstanceId,
            /* [in] */ ULONG cbSid,
            /* [size_is][unique][in] */ BYTE *m_rgbSid,
            /* [out] */ BSTR *pbstrXMLDocContent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CoordSetContent )( 
            IVssCoordinatorCallback * This,
            /* [in] */ BSTR WriterInstanceId,
            /* [in] */ ULONG cbSid,
            /* [size_is][unique][in] */ BYTE *m_rgbSid,
            /* [in] */ BSTR bstrXMLDocContent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CoordGetBackupState )( 
            IVssCoordinatorCallback * This,
            /* [out] */ BOOL *pbBootableSystemStateBackedUp,
            /* [out] */ BOOL *pbAreComponentsSelected,
            /* [out] */ VSS_BACKUP_TYPE *pBackupType,
            /* [out] */ BOOL *pbPartialFileSupport,
            /* [out] */ LONG *plContext);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CoordGetRestoreState )( 
            IVssCoordinatorCallback * This,
            /* [out] */ VSS_RESTORE_TYPE *pRestoreType);
        
        END_INTERFACE
    } IVssCoordinatorCallbackVtbl;

    interface IVssCoordinatorCallback
    {
        CONST_VTBL struct IVssCoordinatorCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVssCoordinatorCallback_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IVssCoordinatorCallback_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IVssCoordinatorCallback_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IVssCoordinatorCallback_CoordGetContent(This,WriterInstanceId,cbSid,m_rgbSid,pbstrXMLDocContent)	\
    (This)->lpVtbl -> CoordGetContent(This,WriterInstanceId,cbSid,m_rgbSid,pbstrXMLDocContent)

#define IVssCoordinatorCallback_CoordSetContent(This,WriterInstanceId,cbSid,m_rgbSid,bstrXMLDocContent)	\
    (This)->lpVtbl -> CoordSetContent(This,WriterInstanceId,cbSid,m_rgbSid,bstrXMLDocContent)

#define IVssCoordinatorCallback_CoordGetBackupState(This,pbBootableSystemStateBackedUp,pbAreComponentsSelected,pBackupType,pbPartialFileSupport,plContext)	\
    (This)->lpVtbl -> CoordGetBackupState(This,pbBootableSystemStateBackedUp,pbAreComponentsSelected,pBackupType,pbPartialFileSupport,plContext)

#define IVssCoordinatorCallback_CoordGetRestoreState(This,pRestoreType)	\
    (This)->lpVtbl -> CoordGetRestoreState(This,pRestoreType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssCoordinatorCallback_CoordGetContent_Proxy( 
    IVssCoordinatorCallback * This,
    /* [in] */ BSTR WriterInstanceId,
    /* [in] */ ULONG cbSid,
    /* [size_is][unique][in] */ BYTE *m_rgbSid,
    /* [out] */ BSTR *pbstrXMLDocContent);


void __RPC_STUB IVssCoordinatorCallback_CoordGetContent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssCoordinatorCallback_CoordSetContent_Proxy( 
    IVssCoordinatorCallback * This,
    /* [in] */ BSTR WriterInstanceId,
    /* [in] */ ULONG cbSid,
    /* [size_is][unique][in] */ BYTE *m_rgbSid,
    /* [in] */ BSTR bstrXMLDocContent);


void __RPC_STUB IVssCoordinatorCallback_CoordSetContent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssCoordinatorCallback_CoordGetBackupState_Proxy( 
    IVssCoordinatorCallback * This,
    /* [out] */ BOOL *pbBootableSystemStateBackedUp,
    /* [out] */ BOOL *pbAreComponentsSelected,
    /* [out] */ VSS_BACKUP_TYPE *pBackupType,
    /* [out] */ BOOL *pbPartialFileSupport,
    /* [out] */ LONG *plContext);


void __RPC_STUB IVssCoordinatorCallback_CoordGetBackupState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IVssCoordinatorCallback_CoordGetRestoreState_Proxy( 
    IVssCoordinatorCallback * This,
    /* [out] */ VSS_RESTORE_TYPE *pRestoreType);


void __RPC_STUB IVssCoordinatorCallback_CoordGetRestoreState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IVssCoordinatorCallback_INTERFACE_DEFINED__ */



#ifndef __VssEventLib_LIBRARY_DEFINED__
#define __VssEventLib_LIBRARY_DEFINED__

/* library VssEventLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_VssEventLib;

EXTERN_C const CLSID CLSID_VssEvent;

#ifdef __cplusplus

class DECLSPEC_UUID("FAF53CC4-BD73-4e36-83F1-2B23F46E513E")
VssEvent;
#endif
#endif /* __VssEventLib_LIBRARY_DEFINED__ */

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


