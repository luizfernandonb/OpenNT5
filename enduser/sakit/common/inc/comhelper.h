

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for comhelper.idl:
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

#ifndef __comhelper_h__
#define __comhelper_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __INetworkTools_FWD_DEFINED__
#define __INetworkTools_FWD_DEFINED__
typedef interface INetworkTools INetworkTools;
#endif 	/* __INetworkTools_FWD_DEFINED__ */


#ifndef __IAccountNames_FWD_DEFINED__
#define __IAccountNames_FWD_DEFINED__
typedef interface IAccountNames IAccountNames;
#endif 	/* __IAccountNames_FWD_DEFINED__ */


#ifndef __INetWorks_FWD_DEFINED__
#define __INetWorks_FWD_DEFINED__
typedef interface INetWorks INetWorks;
#endif 	/* __INetWorks_FWD_DEFINED__ */


#ifndef __IComputer_FWD_DEFINED__
#define __IComputer_FWD_DEFINED__
typedef interface IComputer IComputer;
#endif 	/* __IComputer_FWD_DEFINED__ */


#ifndef __ILocalSetting_FWD_DEFINED__
#define __ILocalSetting_FWD_DEFINED__
typedef interface ILocalSetting ILocalSetting;
#endif 	/* __ILocalSetting_FWD_DEFINED__ */


#ifndef __ISystemSetting_FWD_DEFINED__
#define __ISystemSetting_FWD_DEFINED__
typedef interface ISystemSetting ISystemSetting;
#endif 	/* __ISystemSetting_FWD_DEFINED__ */


#ifndef __IBackup_FWD_DEFINED__
#define __IBackup_FWD_DEFINED__
typedef interface IBackup IBackup;
#endif 	/* __IBackup_FWD_DEFINED__ */


#ifndef __IReboot_FWD_DEFINED__
#define __IReboot_FWD_DEFINED__
typedef interface IReboot IReboot;
#endif 	/* __IReboot_FWD_DEFINED__ */


#ifndef __ICryptRandom_FWD_DEFINED__
#define __ICryptRandom_FWD_DEFINED__
typedef interface ICryptRandom ICryptRandom;
#endif 	/* __ICryptRandom_FWD_DEFINED__ */


#ifndef __NetWorks_FWD_DEFINED__
#define __NetWorks_FWD_DEFINED__

#ifdef __cplusplus
typedef class NetWorks NetWorks;
#else
typedef struct NetWorks NetWorks;
#endif /* __cplusplus */

#endif 	/* __NetWorks_FWD_DEFINED__ */


#ifndef __Computer_FWD_DEFINED__
#define __Computer_FWD_DEFINED__

#ifdef __cplusplus
typedef class Computer Computer;
#else
typedef struct Computer Computer;
#endif /* __cplusplus */

#endif 	/* __Computer_FWD_DEFINED__ */


#ifndef __LocalSetting_FWD_DEFINED__
#define __LocalSetting_FWD_DEFINED__

#ifdef __cplusplus
typedef class LocalSetting LocalSetting;
#else
typedef struct LocalSetting LocalSetting;
#endif /* __cplusplus */

#endif 	/* __LocalSetting_FWD_DEFINED__ */


#ifndef __SystemSetting_FWD_DEFINED__
#define __SystemSetting_FWD_DEFINED__

#ifdef __cplusplus
typedef class SystemSetting SystemSetting;
#else
typedef struct SystemSetting SystemSetting;
#endif /* __cplusplus */

#endif 	/* __SystemSetting_FWD_DEFINED__ */


#ifndef __Backup_FWD_DEFINED__
#define __Backup_FWD_DEFINED__

#ifdef __cplusplus
typedef class Backup Backup;
#else
typedef struct Backup Backup;
#endif /* __cplusplus */

#endif 	/* __Backup_FWD_DEFINED__ */


#ifndef __Reboot_FWD_DEFINED__
#define __Reboot_FWD_DEFINED__

#ifdef __cplusplus
typedef class Reboot Reboot;
#else
typedef struct Reboot Reboot;
#endif /* __cplusplus */

#endif 	/* __Reboot_FWD_DEFINED__ */


#ifndef __AccountNames_FWD_DEFINED__
#define __AccountNames_FWD_DEFINED__

#ifdef __cplusplus
typedef class AccountNames AccountNames;
#else
typedef struct AccountNames AccountNames;
#endif /* __cplusplus */

#endif 	/* __AccountNames_FWD_DEFINED__ */


#ifndef __NetworkTools_FWD_DEFINED__
#define __NetworkTools_FWD_DEFINED__

#ifdef __cplusplus
typedef class NetworkTools NetworkTools;
#else
typedef struct NetworkTools NetworkTools;
#endif /* __cplusplus */

#endif 	/* __NetworkTools_FWD_DEFINED__ */


#ifndef __CryptRandom_FWD_DEFINED__
#define __CryptRandom_FWD_DEFINED__

#ifdef __cplusplus
typedef class CryptRandom CryptRandom;
#else
typedef struct CryptRandom CryptRandom;
#endif /* __cplusplus */

#endif 	/* __CryptRandom_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_comhelper_0000 */
/* [local] */ 









extern RPC_IF_HANDLE __MIDL_itf_comhelper_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comhelper_0000_v0_0_s_ifspec;

#ifndef __INetworkTools_INTERFACE_DEFINED__
#define __INetworkTools_INTERFACE_DEFINED__

/* interface INetworkTools */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_INetworkTools;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C844CA86-7B60-4460-A0A6-74FEC5ED508F")
    INetworkTools : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Ping( 
            /* [in] */ BSTR bstrIP,
            /* [retval][out] */ BOOL *bFoundSystem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INetworkToolsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INetworkTools * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INetworkTools * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INetworkTools * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INetworkTools * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INetworkTools * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INetworkTools * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INetworkTools * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Ping )( 
            INetworkTools * This,
            /* [in] */ BSTR bstrIP,
            /* [retval][out] */ BOOL *bFoundSystem);
        
        END_INTERFACE
    } INetworkToolsVtbl;

    interface INetworkTools
    {
        CONST_VTBL struct INetworkToolsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetworkTools_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INetworkTools_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INetworkTools_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INetworkTools_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define INetworkTools_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define INetworkTools_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define INetworkTools_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define INetworkTools_Ping(This,bstrIP,bFoundSystem)	\
    (This)->lpVtbl -> Ping(This,bstrIP,bFoundSystem)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE INetworkTools_Ping_Proxy( 
    INetworkTools * This,
    /* [in] */ BSTR bstrIP,
    /* [retval][out] */ BOOL *bFoundSystem);


void __RPC_STUB INetworkTools_Ping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INetworkTools_INTERFACE_DEFINED__ */


#ifndef __IAccountNames_INTERFACE_DEFINED__
#define __IAccountNames_INTERFACE_DEFINED__

/* interface IAccountNames */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAccountNames;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD3235EE-4BAD-4306-AEE0-BCFAE2A67074")
    IAccountNames : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Translate( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Everyone( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Administrator( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Administrators( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Guest( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Guests( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE System( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAccountNamesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAccountNames * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAccountNames * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAccountNames * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAccountNames * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAccountNames * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAccountNames * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAccountNames * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Translate )( 
            IAccountNames * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Everyone )( 
            IAccountNames * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Administrator )( 
            IAccountNames * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Administrators )( 
            IAccountNames * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Guest )( 
            IAccountNames * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Guests )( 
            IAccountNames * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *System )( 
            IAccountNames * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        END_INTERFACE
    } IAccountNamesVtbl;

    interface IAccountNames
    {
        CONST_VTBL struct IAccountNamesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAccountNames_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAccountNames_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAccountNames_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAccountNames_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAccountNames_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAccountNames_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAccountNames_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAccountNames_Translate(This,Name,pbstrName)	\
    (This)->lpVtbl -> Translate(This,Name,pbstrName)

#define IAccountNames_Everyone(This,pbstrName)	\
    (This)->lpVtbl -> Everyone(This,pbstrName)

#define IAccountNames_Administrator(This,pbstrName)	\
    (This)->lpVtbl -> Administrator(This,pbstrName)

#define IAccountNames_Administrators(This,pbstrName)	\
    (This)->lpVtbl -> Administrators(This,pbstrName)

#define IAccountNames_Guest(This,pbstrName)	\
    (This)->lpVtbl -> Guest(This,pbstrName)

#define IAccountNames_Guests(This,pbstrName)	\
    (This)->lpVtbl -> Guests(This,pbstrName)

#define IAccountNames_System(This,pbstrName)	\
    (This)->lpVtbl -> System(This,pbstrName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAccountNames_Translate_Proxy( 
    IAccountNames * This,
    /* [in] */ BSTR Name,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IAccountNames_Translate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAccountNames_Everyone_Proxy( 
    IAccountNames * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IAccountNames_Everyone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAccountNames_Administrator_Proxy( 
    IAccountNames * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IAccountNames_Administrator_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAccountNames_Administrators_Proxy( 
    IAccountNames * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IAccountNames_Administrators_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAccountNames_Guest_Proxy( 
    IAccountNames * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IAccountNames_Guest_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAccountNames_Guests_Proxy( 
    IAccountNames * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IAccountNames_Guests_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAccountNames_System_Proxy( 
    IAccountNames * This,
    /* [retval][out] */ BSTR *pbstrName);


void __RPC_STUB IAccountNames_System_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAccountNames_INTERFACE_DEFINED__ */


#ifndef __INetWorks_INTERFACE_DEFINED__
#define __INetWorks_INTERFACE_DEFINED__

/* interface INetWorks */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_INetWorks;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43D38498-732C-4405-9210-F9E51C5CCB3D")
    INetWorks : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumNics( 
            /* [retval][out] */ VARIANT *pvarNicNames) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumProtocol( 
            /* [in] */ BSTR Name,
            /* [out] */ VARIANT *ProtocolName,
            /* [out] */ VARIANT *IsBonded) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetNicProtocol( 
            /* [in] */ BSTR NicName,
            /* [in] */ BSTR ProtocolName,
            /* [in] */ BOOL bind) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INetWorksVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INetWorks * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INetWorks * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INetWorks * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INetWorks * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INetWorks * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INetWorks * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INetWorks * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumNics )( 
            INetWorks * This,
            /* [retval][out] */ VARIANT *pvarNicNames);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumProtocol )( 
            INetWorks * This,
            /* [in] */ BSTR Name,
            /* [out] */ VARIANT *ProtocolName,
            /* [out] */ VARIANT *IsBonded);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetNicProtocol )( 
            INetWorks * This,
            /* [in] */ BSTR NicName,
            /* [in] */ BSTR ProtocolName,
            /* [in] */ BOOL bind);
        
        END_INTERFACE
    } INetWorksVtbl;

    interface INetWorks
    {
        CONST_VTBL struct INetWorksVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetWorks_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define INetWorks_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define INetWorks_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define INetWorks_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define INetWorks_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define INetWorks_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define INetWorks_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define INetWorks_EnumNics(This,pvarNicNames)	\
    (This)->lpVtbl -> EnumNics(This,pvarNicNames)

#define INetWorks_EnumProtocol(This,Name,ProtocolName,IsBonded)	\
    (This)->lpVtbl -> EnumProtocol(This,Name,ProtocolName,IsBonded)

#define INetWorks_SetNicProtocol(This,NicName,ProtocolName,bind)	\
    (This)->lpVtbl -> SetNicProtocol(This,NicName,ProtocolName,bind)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE INetWorks_EnumNics_Proxy( 
    INetWorks * This,
    /* [retval][out] */ VARIANT *pvarNicNames);


void __RPC_STUB INetWorks_EnumNics_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE INetWorks_EnumProtocol_Proxy( 
    INetWorks * This,
    /* [in] */ BSTR Name,
    /* [out] */ VARIANT *ProtocolName,
    /* [out] */ VARIANT *IsBonded);


void __RPC_STUB INetWorks_EnumProtocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE INetWorks_SetNicProtocol_Proxy( 
    INetWorks * This,
    /* [in] */ BSTR NicName,
    /* [in] */ BSTR ProtocolName,
    /* [in] */ BOOL bind);


void __RPC_STUB INetWorks_SetNicProtocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __INetWorks_INTERFACE_DEFINED__ */


#ifndef __IComputer_INTERFACE_DEFINED__
#define __IComputer_INTERFACE_DEFINED__

/* interface IComputer */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IComputer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("58D819BD-AD45-4E85-B317-4D22B4B9F597")
    IComputer : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ComputerName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ComputerName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FullQualifiedComputerName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FullQualifiedComputerName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkgroupName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WorkgroupName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DomainName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DomainName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumTrustedDomains( 
            /* [retval][out] */ VARIANT *pvarTDomains) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LogonInfo( 
            /* [in] */ BSTR UserName,
            /* [in] */ BSTR Password) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IComputerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComputer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComputer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComputer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComputer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComputer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComputer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComputer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComputerName )( 
            IComputer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ComputerName )( 
            IComputer * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullQualifiedComputerName )( 
            IComputer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullQualifiedComputerName )( 
            IComputer * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkgroupName )( 
            IComputer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WorkgroupName )( 
            IComputer * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DomainName )( 
            IComputer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DomainName )( 
            IComputer * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumTrustedDomains )( 
            IComputer * This,
            /* [retval][out] */ VARIANT *pvarTDomains);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LogonInfo )( 
            IComputer * This,
            /* [in] */ BSTR UserName,
            /* [in] */ BSTR Password);
        
        END_INTERFACE
    } IComputerVtbl;

    interface IComputer
    {
        CONST_VTBL struct IComputerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComputer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IComputer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IComputer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IComputer_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IComputer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IComputer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IComputer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IComputer_get_ComputerName(This,pVal)	\
    (This)->lpVtbl -> get_ComputerName(This,pVal)

#define IComputer_put_ComputerName(This,newVal)	\
    (This)->lpVtbl -> put_ComputerName(This,newVal)

#define IComputer_get_FullQualifiedComputerName(This,pVal)	\
    (This)->lpVtbl -> get_FullQualifiedComputerName(This,pVal)

#define IComputer_put_FullQualifiedComputerName(This,newVal)	\
    (This)->lpVtbl -> put_FullQualifiedComputerName(This,newVal)

#define IComputer_get_WorkgroupName(This,pVal)	\
    (This)->lpVtbl -> get_WorkgroupName(This,pVal)

#define IComputer_put_WorkgroupName(This,newVal)	\
    (This)->lpVtbl -> put_WorkgroupName(This,newVal)

#define IComputer_get_DomainName(This,pVal)	\
    (This)->lpVtbl -> get_DomainName(This,pVal)

#define IComputer_put_DomainName(This,newVal)	\
    (This)->lpVtbl -> put_DomainName(This,newVal)

#define IComputer_EnumTrustedDomains(This,pvarTDomains)	\
    (This)->lpVtbl -> EnumTrustedDomains(This,pvarTDomains)

#define IComputer_LogonInfo(This,UserName,Password)	\
    (This)->lpVtbl -> LogonInfo(This,UserName,Password)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IComputer_get_ComputerName_Proxy( 
    IComputer * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IComputer_get_ComputerName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IComputer_put_ComputerName_Proxy( 
    IComputer * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IComputer_put_ComputerName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IComputer_get_FullQualifiedComputerName_Proxy( 
    IComputer * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IComputer_get_FullQualifiedComputerName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IComputer_put_FullQualifiedComputerName_Proxy( 
    IComputer * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IComputer_put_FullQualifiedComputerName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IComputer_get_WorkgroupName_Proxy( 
    IComputer * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IComputer_get_WorkgroupName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IComputer_put_WorkgroupName_Proxy( 
    IComputer * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IComputer_put_WorkgroupName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IComputer_get_DomainName_Proxy( 
    IComputer * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IComputer_get_DomainName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IComputer_put_DomainName_Proxy( 
    IComputer * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IComputer_put_DomainName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IComputer_EnumTrustedDomains_Proxy( 
    IComputer * This,
    /* [retval][out] */ VARIANT *pvarTDomains);


void __RPC_STUB IComputer_EnumTrustedDomains_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IComputer_LogonInfo_Proxy( 
    IComputer * This,
    /* [in] */ BSTR UserName,
    /* [in] */ BSTR Password);


void __RPC_STUB IComputer_LogonInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IComputer_INTERFACE_DEFINED__ */


#ifndef __ILocalSetting_INTERFACE_DEFINED__
#define __ILocalSetting_INTERFACE_DEFINED__

/* interface ILocalSetting */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ILocalSetting;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A0AEDA3-5F50-42A6-922E-B4F2F2E67016")
    ILocalSetting : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Language( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Language( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Time( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Time( 
            /* [in] */ DATE newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimeZone( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TimeZone( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumTimeZones( 
            /* [retval][out] */ VARIANT *pvarTZones) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILocalSettingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILocalSetting * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILocalSetting * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILocalSetting * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILocalSetting * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILocalSetting * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILocalSetting * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILocalSetting * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Language )( 
            ILocalSetting * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Language )( 
            ILocalSetting * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            ILocalSetting * This,
            /* [retval][out] */ DATE *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            ILocalSetting * This,
            /* [in] */ DATE newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeZone )( 
            ILocalSetting * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimeZone )( 
            ILocalSetting * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumTimeZones )( 
            ILocalSetting * This,
            /* [retval][out] */ VARIANT *pvarTZones);
        
        END_INTERFACE
    } ILocalSettingVtbl;

    interface ILocalSetting
    {
        CONST_VTBL struct ILocalSettingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILocalSetting_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ILocalSetting_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ILocalSetting_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ILocalSetting_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ILocalSetting_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ILocalSetting_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ILocalSetting_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ILocalSetting_get_Language(This,pVal)	\
    (This)->lpVtbl -> get_Language(This,pVal)

#define ILocalSetting_put_Language(This,newVal)	\
    (This)->lpVtbl -> put_Language(This,newVal)

#define ILocalSetting_get_Time(This,pVal)	\
    (This)->lpVtbl -> get_Time(This,pVal)

#define ILocalSetting_put_Time(This,newVal)	\
    (This)->lpVtbl -> put_Time(This,newVal)

#define ILocalSetting_get_TimeZone(This,pVal)	\
    (This)->lpVtbl -> get_TimeZone(This,pVal)

#define ILocalSetting_put_TimeZone(This,newVal)	\
    (This)->lpVtbl -> put_TimeZone(This,newVal)

#define ILocalSetting_EnumTimeZones(This,pvarTZones)	\
    (This)->lpVtbl -> EnumTimeZones(This,pvarTZones)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ILocalSetting_get_Language_Proxy( 
    ILocalSetting * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ILocalSetting_get_Language_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ILocalSetting_put_Language_Proxy( 
    ILocalSetting * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ILocalSetting_put_Language_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ILocalSetting_get_Time_Proxy( 
    ILocalSetting * This,
    /* [retval][out] */ DATE *pVal);


void __RPC_STUB ILocalSetting_get_Time_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ILocalSetting_put_Time_Proxy( 
    ILocalSetting * This,
    /* [in] */ DATE newVal);


void __RPC_STUB ILocalSetting_put_Time_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ILocalSetting_get_TimeZone_Proxy( 
    ILocalSetting * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ILocalSetting_get_TimeZone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ILocalSetting_put_TimeZone_Proxy( 
    ILocalSetting * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ILocalSetting_put_TimeZone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ILocalSetting_EnumTimeZones_Proxy( 
    ILocalSetting * This,
    /* [retval][out] */ VARIANT *pvarTZones);


void __RPC_STUB ILocalSetting_EnumTimeZones_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILocalSetting_INTERFACE_DEFINED__ */


#ifndef __ISystemSetting_INTERFACE_DEFINED__
#define __ISystemSetting_INTERFACE_DEFINED__

/* interface ISystemSetting */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISystemSetting;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1EC2C8EE-AD0E-4066-9C4E-6707DFF66848")
    ISystemSetting : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NetWorks( 
            /* [retval][out] */ INetWorks **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Computer( 
            /* [retval][out] */ IComputer **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LocalSetting( 
            /* [retval][out] */ ILocalSetting **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Apply( 
            /* [in] */ BOOL bDeferReboot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsRebootRequired( 
            /* [out] */ VARIANT *WarningMessage,
            /* [retval][out] */ BOOL *Reboot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            /* [in] */ DWORD dwMilliSecs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISystemSettingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISystemSetting * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISystemSetting * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISystemSetting * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISystemSetting * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISystemSetting * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISystemSetting * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISystemSetting * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NetWorks )( 
            ISystemSetting * This,
            /* [retval][out] */ INetWorks **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Computer )( 
            ISystemSetting * This,
            /* [retval][out] */ IComputer **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocalSetting )( 
            ISystemSetting * This,
            /* [retval][out] */ ILocalSetting **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Apply )( 
            ISystemSetting * This,
            /* [in] */ BOOL bDeferReboot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsRebootRequired )( 
            ISystemSetting * This,
            /* [out] */ VARIANT *WarningMessage,
            /* [retval][out] */ BOOL *Reboot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            ISystemSetting * This,
            /* [in] */ DWORD dwMilliSecs);
        
        END_INTERFACE
    } ISystemSettingVtbl;

    interface ISystemSetting
    {
        CONST_VTBL struct ISystemSettingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISystemSetting_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISystemSetting_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISystemSetting_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISystemSetting_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISystemSetting_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISystemSetting_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISystemSetting_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISystemSetting_get_NetWorks(This,pVal)	\
    (This)->lpVtbl -> get_NetWorks(This,pVal)

#define ISystemSetting_get_Computer(This,pVal)	\
    (This)->lpVtbl -> get_Computer(This,pVal)

#define ISystemSetting_get_LocalSetting(This,pVal)	\
    (This)->lpVtbl -> get_LocalSetting(This,pVal)

#define ISystemSetting_Apply(This,bDeferReboot)	\
    (This)->lpVtbl -> Apply(This,bDeferReboot)

#define ISystemSetting_IsRebootRequired(This,WarningMessage,Reboot)	\
    (This)->lpVtbl -> IsRebootRequired(This,WarningMessage,Reboot)

#define ISystemSetting_Sleep(This,dwMilliSecs)	\
    (This)->lpVtbl -> Sleep(This,dwMilliSecs)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISystemSetting_get_NetWorks_Proxy( 
    ISystemSetting * This,
    /* [retval][out] */ INetWorks **pVal);


void __RPC_STUB ISystemSetting_get_NetWorks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISystemSetting_get_Computer_Proxy( 
    ISystemSetting * This,
    /* [retval][out] */ IComputer **pVal);


void __RPC_STUB ISystemSetting_get_Computer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISystemSetting_get_LocalSetting_Proxy( 
    ISystemSetting * This,
    /* [retval][out] */ ILocalSetting **pVal);


void __RPC_STUB ISystemSetting_get_LocalSetting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISystemSetting_Apply_Proxy( 
    ISystemSetting * This,
    /* [in] */ BOOL bDeferReboot);


void __RPC_STUB ISystemSetting_Apply_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISystemSetting_IsRebootRequired_Proxy( 
    ISystemSetting * This,
    /* [out] */ VARIANT *WarningMessage,
    /* [retval][out] */ BOOL *Reboot);


void __RPC_STUB ISystemSetting_IsRebootRequired_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISystemSetting_Sleep_Proxy( 
    ISystemSetting * This,
    /* [in] */ DWORD dwMilliSecs);


void __RPC_STUB ISystemSetting_Sleep_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISystemSetting_INTERFACE_DEFINED__ */


#ifndef __IBackup_INTERFACE_DEFINED__
#define __IBackup_INTERFACE_DEFINED__

/* interface IBackup */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IBackup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3D56A25D-6A2F-4FF1-ADD4-3E0748404E80")
    IBackup : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Backup( 
            /* [in] */ BSTR BackupDirName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Restore( 
            /* [in] */ BSTR RestoreFromDirName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumBackupDirNames( 
            /* [out] */ VARIANT *BackupDirNames,
            /* [out] */ VARIANT *DirDates,
            /* [out] */ VARIANT *DirFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteBackup( 
            /* [in] */ BSTR BackupDirName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBackupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBackup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBackup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBackup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBackup * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBackup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBackup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBackup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Backup )( 
            IBackup * This,
            /* [in] */ BSTR BackupDirName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Restore )( 
            IBackup * This,
            /* [in] */ BSTR RestoreFromDirName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumBackupDirNames )( 
            IBackup * This,
            /* [out] */ VARIANT *BackupDirNames,
            /* [out] */ VARIANT *DirDates,
            /* [out] */ VARIANT *DirFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteBackup )( 
            IBackup * This,
            /* [in] */ BSTR BackupDirName);
        
        END_INTERFACE
    } IBackupVtbl;

    interface IBackup
    {
        CONST_VTBL struct IBackupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBackup_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBackup_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBackup_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBackup_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IBackup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IBackup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IBackup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IBackup_Backup(This,BackupDirName)	\
    (This)->lpVtbl -> Backup(This,BackupDirName)

#define IBackup_Restore(This,RestoreFromDirName)	\
    (This)->lpVtbl -> Restore(This,RestoreFromDirName)

#define IBackup_EnumBackupDirNames(This,BackupDirNames,DirDates,DirFlags)	\
    (This)->lpVtbl -> EnumBackupDirNames(This,BackupDirNames,DirDates,DirFlags)

#define IBackup_DeleteBackup(This,BackupDirName)	\
    (This)->lpVtbl -> DeleteBackup(This,BackupDirName)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBackup_Backup_Proxy( 
    IBackup * This,
    /* [in] */ BSTR BackupDirName);


void __RPC_STUB IBackup_Backup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBackup_Restore_Proxy( 
    IBackup * This,
    /* [in] */ BSTR RestoreFromDirName);


void __RPC_STUB IBackup_Restore_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBackup_EnumBackupDirNames_Proxy( 
    IBackup * This,
    /* [out] */ VARIANT *BackupDirNames,
    /* [out] */ VARIANT *DirDates,
    /* [out] */ VARIANT *DirFlags);


void __RPC_STUB IBackup_EnumBackupDirNames_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBackup_DeleteBackup_Proxy( 
    IBackup * This,
    /* [in] */ BSTR BackupDirName);


void __RPC_STUB IBackup_DeleteBackup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBackup_INTERFACE_DEFINED__ */


#ifndef __IReboot_INTERFACE_DEFINED__
#define __IReboot_INTERFACE_DEFINED__

/* interface IReboot */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IReboot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D75C7A2D-0F68-4DA5-B7EA-F201F3B3995C")
    IReboot : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Shutdown( 
            /* [in] */ BOOL RebootFlag) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRebootVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReboot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReboot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReboot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IReboot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IReboot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IReboot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IReboot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            IReboot * This,
            /* [in] */ BOOL RebootFlag);
        
        END_INTERFACE
    } IRebootVtbl;

    interface IReboot
    {
        CONST_VTBL struct IRebootVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReboot_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IReboot_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IReboot_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IReboot_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IReboot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IReboot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IReboot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IReboot_Shutdown(This,RebootFlag)	\
    (This)->lpVtbl -> Shutdown(This,RebootFlag)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IReboot_Shutdown_Proxy( 
    IReboot * This,
    /* [in] */ BOOL RebootFlag);


void __RPC_STUB IReboot_Shutdown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IReboot_INTERFACE_DEFINED__ */


#ifndef __ICryptRandom_INTERFACE_DEFINED__
#define __ICryptRandom_INTERFACE_DEFINED__

/* interface ICryptRandom */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICryptRandom;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CDEB3E42-8496-4c62-9F6E-6E9C4BE88FF8")
    ICryptRandom : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRandomHexString( 
            /* [in] */ long EffectiveByteSize,
            /* [retval][out] */ BSTR *RandomData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICryptRandomVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICryptRandom * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICryptRandom * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICryptRandom * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICryptRandom * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICryptRandom * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICryptRandom * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICryptRandom * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRandomHexString )( 
            ICryptRandom * This,
            /* [in] */ long EffectiveByteSize,
            /* [retval][out] */ BSTR *RandomData);
        
        END_INTERFACE
    } ICryptRandomVtbl;

    interface ICryptRandom
    {
        CONST_VTBL struct ICryptRandomVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICryptRandom_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICryptRandom_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICryptRandom_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICryptRandom_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICryptRandom_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICryptRandom_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICryptRandom_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICryptRandom_GetRandomHexString(This,EffectiveByteSize,RandomData)	\
    (This)->lpVtbl -> GetRandomHexString(This,EffectiveByteSize,RandomData)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICryptRandom_GetRandomHexString_Proxy( 
    ICryptRandom * This,
    /* [in] */ long EffectiveByteSize,
    /* [retval][out] */ BSTR *RandomData);


void __RPC_STUB ICryptRandom_GetRandomHexString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICryptRandom_INTERFACE_DEFINED__ */



#ifndef __COMHELPERLib_LIBRARY_DEFINED__
#define __COMHELPERLib_LIBRARY_DEFINED__

/* library COMHELPERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_COMHELPERLib;

EXTERN_C const CLSID CLSID_NetWorks;

#ifdef __cplusplus

class DECLSPEC_UUID("0F0B086F-C590-4C6A-95AD-9343116D07EF")
NetWorks;
#endif

EXTERN_C const CLSID CLSID_Computer;

#ifdef __cplusplus

class DECLSPEC_UUID("D9826F8B-4DF6-48DE-BC62-704BDB455C46")
Computer;
#endif

EXTERN_C const CLSID CLSID_LocalSetting;

#ifdef __cplusplus

class DECLSPEC_UUID("6FD26469-1C45-4C0F-9A3A-0EDBE3C3C11F")
LocalSetting;
#endif

EXTERN_C const CLSID CLSID_SystemSetting;

#ifdef __cplusplus

class DECLSPEC_UUID("5BC6115D-C1AA-4132-8221-3A2DDAD679C3")
SystemSetting;
#endif

EXTERN_C const CLSID CLSID_Backup;

#ifdef __cplusplus

class DECLSPEC_UUID("C1EF95AF-E3C9-4562-A45C-4F3E8D9C41E1")
Backup;
#endif

EXTERN_C const CLSID CLSID_Reboot;

#ifdef __cplusplus

class DECLSPEC_UUID("9AAF3A87-A3F8-412D-AF08-DF930865B06B")
Reboot;
#endif

EXTERN_C const CLSID CLSID_AccountNames;

#ifdef __cplusplus

class DECLSPEC_UUID("ACC458EE-8076-4A41-A96E-173AA6133487")
AccountNames;
#endif

EXTERN_C const CLSID CLSID_NetworkTools;

#ifdef __cplusplus

class DECLSPEC_UUID("1A6CA650-71FB-4224-BDD5-603693F66D64")
NetworkTools;
#endif

EXTERN_C const CLSID CLSID_CryptRandom;

#ifdef __cplusplus

class DECLSPEC_UUID("14F570F9-5026-41d9-B04A-10B42F3167E3")
CryptRandom;
#endif
#endif /* __COMHELPERLib_LIBRARY_DEFINED__ */

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


