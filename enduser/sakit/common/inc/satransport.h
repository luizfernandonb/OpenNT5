

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for satransport.idl:
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

#ifndef __satransport_h__
#define __satransport_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SATransport_FWD_DEFINED__
#define __SATransport_FWD_DEFINED__

#ifdef __cplusplus
typedef class SATransport SATransport;
#else
typedef struct SATransport SATransport;
#endif /* __cplusplus */

#endif 	/* __SATransport_FWD_DEFINED__ */


#ifndef __ISAMessage_FWD_DEFINED__
#define __ISAMessage_FWD_DEFINED__
typedef interface ISAMessage ISAMessage;
#endif 	/* __ISAMessage_FWD_DEFINED__ */


#ifndef __ISATarget_FWD_DEFINED__
#define __ISATarget_FWD_DEFINED__
typedef interface ISATarget ISATarget;
#endif 	/* __ISATarget_FWD_DEFINED__ */


#ifndef __ISANotify_FWD_DEFINED__
#define __ISANotify_FWD_DEFINED__
typedef interface ISANotify ISANotify;
#endif 	/* __ISANotify_FWD_DEFINED__ */


#ifndef __ISASession_FWD_DEFINED__
#define __ISASession_FWD_DEFINED__
typedef interface ISASession ISASession;
#endif 	/* __ISASession_FWD_DEFINED__ */


#ifndef __ISATransport_FWD_DEFINED__
#define __ISATransport_FWD_DEFINED__
typedef interface ISATransport ISATransport;
#endif 	/* __ISATransport_FWD_DEFINED__ */


#ifndef __ISAGroup_FWD_DEFINED__
#define __ISAGroup_FWD_DEFINED__
typedef interface ISAGroup ISAGroup;
#endif 	/* __ISAGroup_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_satransport_0000 */
/* [local] */ 

typedef struct tag_MUID
    {
    unsigned long Id[ 5 ];
    } 	MUID;

inline bool IsSyncMessage( MUID & x) { return ( x.Id[0] > 0);}


extern RPC_IF_HANDLE __MIDL_itf_satransport_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_satransport_0000_v0_0_s_ifspec;


#ifndef __SATransport_LIBRARY_DEFINED__
#define __SATransport_LIBRARY_DEFINED__

/* library SATransport */
/* [uuid] */ 

typedef /* [v1_enum] */ 
enum tag_SASTATUSCODE
    {	SA_S_OK	= 0,
	SA_S_SEND_COMPLETE_WITH_ERROR	= 0x40001,
	SA_S_SEND_NODE_COMPLETE	= 0x40002,
	SA_S_SEND_COMPLETE	= 0x40003,
	SA_S_RECV_COMPLETE	= 0x40004,
	SA_E_FAILED	= 0x80041001,
	SA_E_RECV_IN_USE	= 0x80041002,
	SA_E_ACCESS_DENIED	= 0x80041003,
	SA_E_SEND_NODE_FAILED	= 0x80041005,
	SA_E_SEND_FAILED	= 0x80041006,
	SA_E_SEND_TIME_OUT	= 0x80041007
    } 	SASTATUSCODE;


EXTERN_C const IID LIBID_SATransport;

EXTERN_C const CLSID CLSID_SATransport;

#ifdef __cplusplus

class DECLSPEC_UUID("8b5a91c6-e588-4956-afe1-fc9e744c8ea3")
SATransport;
#endif
#endif /* __SATransport_LIBRARY_DEFINED__ */

#ifndef __ISAMessage_INTERFACE_DEFINED__
#define __ISAMessage_INTERFACE_DEFINED__

/* interface ISAMessage */
/* [object][uuid][local] */ 


EXTERN_C const IID IID_ISAMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00a124d1-e449-4ff7-bdc7-4310ea7b8d22")
    ISAMessage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSAMessage( 
            /* [in] */ byte *pByte,
            /* [in] */ DWORD Size,
            /* [in] */ MUID *MsgId) = 0;
        
        virtual const byte *STDMETHODCALLTYPE GetSAMessage( 
            /* [out] */ DWORD *pSize,
            /* [out] */ MUID *pMsgId) = 0;
        
        virtual const LPWSTR STDMETHODCALLTYPE GetSourceName( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISAMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISAMessage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISAMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISAMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetSAMessage )( 
            ISAMessage * This,
            /* [in] */ byte *pByte,
            /* [in] */ DWORD Size,
            /* [in] */ MUID *MsgId);
        
        const byte *( STDMETHODCALLTYPE *GetSAMessage )( 
            ISAMessage * This,
            /* [out] */ DWORD *pSize,
            /* [out] */ MUID *pMsgId);
        
        const LPWSTR ( STDMETHODCALLTYPE *GetSourceName )( 
            ISAMessage * This);
        
        END_INTERFACE
    } ISAMessageVtbl;

    interface ISAMessage
    {
        CONST_VTBL struct ISAMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISAMessage_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISAMessage_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISAMessage_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISAMessage_SetSAMessage(This,pByte,Size,MsgId)	\
    (This)->lpVtbl -> SetSAMessage(This,pByte,Size,MsgId)

#define ISAMessage_GetSAMessage(This,pSize,pMsgId)	\
    (This)->lpVtbl -> GetSAMessage(This,pSize,pMsgId)

#define ISAMessage_GetSourceName(This)	\
    (This)->lpVtbl -> GetSourceName(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISAMessage_SetSAMessage_Proxy( 
    ISAMessage * This,
    /* [in] */ byte *pByte,
    /* [in] */ DWORD Size,
    /* [in] */ MUID *MsgId);


void __RPC_STUB ISAMessage_SetSAMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


const byte *STDMETHODCALLTYPE ISAMessage_GetSAMessage_Proxy( 
    ISAMessage * This,
    /* [out] */ DWORD *pSize,
    /* [out] */ MUID *pMsgId);


void __RPC_STUB ISAMessage_GetSAMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


const LPWSTR STDMETHODCALLTYPE ISAMessage_GetSourceName_Proxy( 
    ISAMessage * This);


void __RPC_STUB ISAMessage_GetSourceName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISAMessage_INTERFACE_DEFINED__ */


#ifndef __ISATarget_INTERFACE_DEFINED__
#define __ISATarget_INTERFACE_DEFINED__

/* interface ISATarget */
/* [object][uuid][local] */ 


EXTERN_C const IID IID_ISATarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("887088c1-3ca2-42ca-b53f-4dc736d53224")
    ISATarget : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddTarget( 
            /* [in] */ BSTR Name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddTargetMember( 
            /* [in] */ BSTR MemberName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNext( 
            /* [out] */ BSTR *pName,
            /* [out] */ long *CompletionStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetMemberEnum( void) = 0;
        
        virtual DWORD STDMETHODCALLTYPE MemberCount( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISATargetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISATarget * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISATarget * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISATarget * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTarget )( 
            ISATarget * This,
            /* [in] */ BSTR Name);
        
        HRESULT ( STDMETHODCALLTYPE *AddTargetMember )( 
            ISATarget * This,
            /* [in] */ BSTR MemberName);
        
        HRESULT ( STDMETHODCALLTYPE *GetNext )( 
            ISATarget * This,
            /* [out] */ BSTR *pName,
            /* [out] */ long *CompletionStatus);
        
        HRESULT ( STDMETHODCALLTYPE *ResetMemberEnum )( 
            ISATarget * This);
        
        DWORD ( STDMETHODCALLTYPE *MemberCount )( 
            ISATarget * This);
        
        END_INTERFACE
    } ISATargetVtbl;

    interface ISATarget
    {
        CONST_VTBL struct ISATargetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISATarget_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISATarget_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISATarget_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISATarget_AddTarget(This,Name)	\
    (This)->lpVtbl -> AddTarget(This,Name)

#define ISATarget_AddTargetMember(This,MemberName)	\
    (This)->lpVtbl -> AddTargetMember(This,MemberName)

#define ISATarget_GetNext(This,pName,CompletionStatus)	\
    (This)->lpVtbl -> GetNext(This,pName,CompletionStatus)

#define ISATarget_ResetMemberEnum(This)	\
    (This)->lpVtbl -> ResetMemberEnum(This)

#define ISATarget_MemberCount(This)	\
    (This)->lpVtbl -> MemberCount(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISATarget_AddTarget_Proxy( 
    ISATarget * This,
    /* [in] */ BSTR Name);


void __RPC_STUB ISATarget_AddTarget_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISATarget_AddTargetMember_Proxy( 
    ISATarget * This,
    /* [in] */ BSTR MemberName);


void __RPC_STUB ISATarget_AddTargetMember_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISATarget_GetNext_Proxy( 
    ISATarget * This,
    /* [out] */ BSTR *pName,
    /* [out] */ long *CompletionStatus);


void __RPC_STUB ISATarget_GetNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISATarget_ResetMemberEnum_Proxy( 
    ISATarget * This);


void __RPC_STUB ISATarget_ResetMemberEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


DWORD STDMETHODCALLTYPE ISATarget_MemberCount_Proxy( 
    ISATarget * This);


void __RPC_STUB ISATarget_MemberCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISATarget_INTERFACE_DEFINED__ */


#ifndef __ISANotify_INTERFACE_DEFINED__
#define __ISANotify_INTERFACE_DEFINED__

/* interface ISANotify */
/* [object][uuid][local] */ 


EXTERN_C const IID IID_ISANotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66d8a865-a32d-49b1-82aa-c4350bc930fb")
    ISANotify : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ ISAMessage *pMessage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStatus( 
            /* [in] */ BSTR NodeName,
            /* [in] */ long Status,
            /* [in] */ ISATarget *pTarget) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISANotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISANotify * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISANotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISANotify * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            ISANotify * This,
            /* [in] */ ISAMessage *pMessage);
        
        HRESULT ( STDMETHODCALLTYPE *SetStatus )( 
            ISANotify * This,
            /* [in] */ BSTR NodeName,
            /* [in] */ long Status,
            /* [in] */ ISATarget *pTarget);
        
        END_INTERFACE
    } ISANotifyVtbl;

    interface ISANotify
    {
        CONST_VTBL struct ISANotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISANotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISANotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISANotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISANotify_Notify(This,pMessage)	\
    (This)->lpVtbl -> Notify(This,pMessage)

#define ISANotify_SetStatus(This,NodeName,Status,pTarget)	\
    (This)->lpVtbl -> SetStatus(This,NodeName,Status,pTarget)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISANotify_Notify_Proxy( 
    ISANotify * This,
    /* [in] */ ISAMessage *pMessage);


void __RPC_STUB ISANotify_Notify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISANotify_SetStatus_Proxy( 
    ISANotify * This,
    /* [in] */ BSTR NodeName,
    /* [in] */ long Status,
    /* [in] */ ISATarget *pTarget);


void __RPC_STUB ISANotify_SetStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISANotify_INTERFACE_DEFINED__ */


#ifndef __ISASession_INTERFACE_DEFINED__
#define __ISASession_INTERFACE_DEFINED__

/* interface ISASession */
/* [object][uuid][local] */ 


EXTERN_C const IID IID_ISASession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77805032-07cc-492a-93f4-cf5863817728")
    ISASession : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Send( 
            /* [in] */ ISAMessage *pMessage,
            /* [in] */ ISATarget *pTarget,
            /* [in] */ ISANotify *pNotify) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Receive( 
            /* [in] */ ISANotify *pNotify) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ BSTR NodeName,
            /* [in] */ ISAMessage *pMessage,
            /* [out] */ ISAMessage **ppMessage,
            /* [defaultvalue][in] */ DWORD dwMilliseconds = 15000) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISASessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISASession * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISASession * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISASession * This);
        
        HRESULT ( STDMETHODCALLTYPE *Send )( 
            ISASession * This,
            /* [in] */ ISAMessage *pMessage,
            /* [in] */ ISATarget *pTarget,
            /* [in] */ ISANotify *pNotify);
        
        HRESULT ( STDMETHODCALLTYPE *Receive )( 
            ISASession * This,
            /* [in] */ ISANotify *pNotify);
        
        HRESULT ( STDMETHODCALLTYPE *Execute )( 
            ISASession * This,
            /* [in] */ BSTR NodeName,
            /* [in] */ ISAMessage *pMessage,
            /* [out] */ ISAMessage **ppMessage,
            /* [defaultvalue][in] */ DWORD dwMilliseconds);
        
        END_INTERFACE
    } ISASessionVtbl;

    interface ISASession
    {
        CONST_VTBL struct ISASessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISASession_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISASession_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISASession_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISASession_Send(This,pMessage,pTarget,pNotify)	\
    (This)->lpVtbl -> Send(This,pMessage,pTarget,pNotify)

#define ISASession_Receive(This,pNotify)	\
    (This)->lpVtbl -> Receive(This,pNotify)

#define ISASession_Execute(This,NodeName,pMessage,ppMessage,dwMilliseconds)	\
    (This)->lpVtbl -> Execute(This,NodeName,pMessage,ppMessage,dwMilliseconds)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISASession_Send_Proxy( 
    ISASession * This,
    /* [in] */ ISAMessage *pMessage,
    /* [in] */ ISATarget *pTarget,
    /* [in] */ ISANotify *pNotify);


void __RPC_STUB ISASession_Send_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISASession_Receive_Proxy( 
    ISASession * This,
    /* [in] */ ISANotify *pNotify);


void __RPC_STUB ISASession_Receive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISASession_Execute_Proxy( 
    ISASession * This,
    /* [in] */ BSTR NodeName,
    /* [in] */ ISAMessage *pMessage,
    /* [out] */ ISAMessage **ppMessage,
    /* [defaultvalue][in] */ DWORD dwMilliseconds);


void __RPC_STUB ISASession_Execute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISASession_INTERFACE_DEFINED__ */


#ifndef __ISATransport_INTERFACE_DEFINED__
#define __ISATransport_INTERFACE_DEFINED__

/* interface ISATransport */
/* [object][uuid][local] */ 


EXTERN_C const IID IID_ISATransport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("014f4c1a-a87a-4bfb-b541-d66d2475f4ec")
    ISATransport : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ short ReceivePort,
            /* [in] */ short DestinationPort,
            /* [in] */ BSTR IpAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateSession( 
            /* [in] */ long Impersonate,
            /* [out] */ ISASession **ppSession) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelNotify( 
            /* [in] */ ISANotify *pNotify) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTarget( 
            /* [out] */ ISATarget **ppTarget) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateMessage( 
            /* [out] */ ISAMessage **ppMessage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISATransportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISATransport * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISATransport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISATransport * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ISATransport * This,
            /* [in] */ short ReceivePort,
            /* [in] */ short DestinationPort,
            /* [in] */ BSTR IpAddress);
        
        HRESULT ( STDMETHODCALLTYPE *CreateSession )( 
            ISATransport * This,
            /* [in] */ long Impersonate,
            /* [out] */ ISASession **ppSession);
        
        HRESULT ( STDMETHODCALLTYPE *CancelNotify )( 
            ISATransport * This,
            /* [in] */ ISANotify *pNotify);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTarget )( 
            ISATransport * This,
            /* [out] */ ISATarget **ppTarget);
        
        HRESULT ( STDMETHODCALLTYPE *CreateMessage )( 
            ISATransport * This,
            /* [out] */ ISAMessage **ppMessage);
        
        END_INTERFACE
    } ISATransportVtbl;

    interface ISATransport
    {
        CONST_VTBL struct ISATransportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISATransport_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISATransport_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISATransport_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISATransport_Initialize(This,ReceivePort,DestinationPort,IpAddress)	\
    (This)->lpVtbl -> Initialize(This,ReceivePort,DestinationPort,IpAddress)

#define ISATransport_CreateSession(This,Impersonate,ppSession)	\
    (This)->lpVtbl -> CreateSession(This,Impersonate,ppSession)

#define ISATransport_CancelNotify(This,pNotify)	\
    (This)->lpVtbl -> CancelNotify(This,pNotify)

#define ISATransport_CreateTarget(This,ppTarget)	\
    (This)->lpVtbl -> CreateTarget(This,ppTarget)

#define ISATransport_CreateMessage(This,ppMessage)	\
    (This)->lpVtbl -> CreateMessage(This,ppMessage)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISATransport_Initialize_Proxy( 
    ISATransport * This,
    /* [in] */ short ReceivePort,
    /* [in] */ short DestinationPort,
    /* [in] */ BSTR IpAddress);


void __RPC_STUB ISATransport_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISATransport_CreateSession_Proxy( 
    ISATransport * This,
    /* [in] */ long Impersonate,
    /* [out] */ ISASession **ppSession);


void __RPC_STUB ISATransport_CreateSession_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISATransport_CancelNotify_Proxy( 
    ISATransport * This,
    /* [in] */ ISANotify *pNotify);


void __RPC_STUB ISATransport_CancelNotify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISATransport_CreateTarget_Proxy( 
    ISATransport * This,
    /* [out] */ ISATarget **ppTarget);


void __RPC_STUB ISATransport_CreateTarget_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISATransport_CreateMessage_Proxy( 
    ISATransport * This,
    /* [out] */ ISAMessage **ppMessage);


void __RPC_STUB ISATransport_CreateMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISATransport_INTERFACE_DEFINED__ */


#ifndef __ISAGroup_INTERFACE_DEFINED__
#define __ISAGroup_INTERFACE_DEFINED__

/* interface ISAGroup */
/* [object][uuid][local] */ 


EXTERN_C const IID IID_ISAGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c0b3a8b0-c06d-45be-9900-44e90ed98b96")
    ISAGroup : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateGroup( 
            /* [out] */ BSTR *pGroupAddr,
            /* [out] */ BSTR *pGroupID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE JoinGroup( 
            /* [in] */ BSTR GroupAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LeaveGroup( 
            /* [in] */ BSTR GroupAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteGroup( 
            /* [in] */ BSTR GroupAddr,
            /* [in] */ BSTR GroupID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Registry2Madcap( 
            /* [in] */ DWORD DhcpServerIpAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Madcap2Registry( 
            /* [in] */ DWORD DhcpServerIpAddr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISAGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISAGroup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISAGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISAGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateGroup )( 
            ISAGroup * This,
            /* [out] */ BSTR *pGroupAddr,
            /* [out] */ BSTR *pGroupID);
        
        HRESULT ( STDMETHODCALLTYPE *JoinGroup )( 
            ISAGroup * This,
            /* [in] */ BSTR GroupAddr);
        
        HRESULT ( STDMETHODCALLTYPE *LeaveGroup )( 
            ISAGroup * This,
            /* [in] */ BSTR GroupAddr);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteGroup )( 
            ISAGroup * This,
            /* [in] */ BSTR GroupAddr,
            /* [in] */ BSTR GroupID);
        
        HRESULT ( STDMETHODCALLTYPE *Registry2Madcap )( 
            ISAGroup * This,
            /* [in] */ DWORD DhcpServerIpAddr);
        
        HRESULT ( STDMETHODCALLTYPE *Madcap2Registry )( 
            ISAGroup * This,
            /* [in] */ DWORD DhcpServerIpAddr);
        
        END_INTERFACE
    } ISAGroupVtbl;

    interface ISAGroup
    {
        CONST_VTBL struct ISAGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISAGroup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISAGroup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISAGroup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISAGroup_CreateGroup(This,pGroupAddr,pGroupID)	\
    (This)->lpVtbl -> CreateGroup(This,pGroupAddr,pGroupID)

#define ISAGroup_JoinGroup(This,GroupAddr)	\
    (This)->lpVtbl -> JoinGroup(This,GroupAddr)

#define ISAGroup_LeaveGroup(This,GroupAddr)	\
    (This)->lpVtbl -> LeaveGroup(This,GroupAddr)

#define ISAGroup_DeleteGroup(This,GroupAddr,GroupID)	\
    (This)->lpVtbl -> DeleteGroup(This,GroupAddr,GroupID)

#define ISAGroup_Registry2Madcap(This,DhcpServerIpAddr)	\
    (This)->lpVtbl -> Registry2Madcap(This,DhcpServerIpAddr)

#define ISAGroup_Madcap2Registry(This,DhcpServerIpAddr)	\
    (This)->lpVtbl -> Madcap2Registry(This,DhcpServerIpAddr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ISAGroup_CreateGroup_Proxy( 
    ISAGroup * This,
    /* [out] */ BSTR *pGroupAddr,
    /* [out] */ BSTR *pGroupID);


void __RPC_STUB ISAGroup_CreateGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISAGroup_JoinGroup_Proxy( 
    ISAGroup * This,
    /* [in] */ BSTR GroupAddr);


void __RPC_STUB ISAGroup_JoinGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISAGroup_LeaveGroup_Proxy( 
    ISAGroup * This,
    /* [in] */ BSTR GroupAddr);


void __RPC_STUB ISAGroup_LeaveGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISAGroup_DeleteGroup_Proxy( 
    ISAGroup * This,
    /* [in] */ BSTR GroupAddr,
    /* [in] */ BSTR GroupID);


void __RPC_STUB ISAGroup_DeleteGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISAGroup_Registry2Madcap_Proxy( 
    ISAGroup * This,
    /* [in] */ DWORD DhcpServerIpAddr);


void __RPC_STUB ISAGroup_Registry2Madcap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ISAGroup_Madcap2Registry_Proxy( 
    ISAGroup * This,
    /* [in] */ DWORD DhcpServerIpAddr);


void __RPC_STUB ISAGroup_Madcap2Registry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISAGroup_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


