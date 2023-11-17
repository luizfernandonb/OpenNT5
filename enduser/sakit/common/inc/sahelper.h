

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for sahelper.idl:
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

#ifndef __sahelper_h__
#define __sahelper_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISAHelper_FWD_DEFINED__
#define __ISAHelper_FWD_DEFINED__
typedef interface ISAHelper ISAHelper;
#endif 	/* __ISAHelper_FWD_DEFINED__ */


#ifndef __SAHelper_FWD_DEFINED__
#define __SAHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class SAHelper SAHelper;
#else
typedef struct SAHelper SAHelper;
#endif /* __cplusplus */

#endif 	/* __SAHelper_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __ISAHelper_INTERFACE_DEFINED__
#define __ISAHelper_INTERFACE_DEFINED__

/* interface ISAHelper */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISAHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c1480fa0-13af-11d3-a75a-0050041db0ff")
    ISAHelper : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ExpandFiles( 
            /* [in] */ BSTR bstrCabFileName,
            /* [in] */ BSTR bstrDestDir,
            /* [in] */ BSTR bstrExtractFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE VerifySignature( 
            /* [in] */ BSTR bstrCabFileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UploadFile( 
            /* [in] */ BSTR bstrSrcFile,
            /* [in] */ BSTR bstrDestFile) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE VerifyDiskSpace( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetRegistryValue( 
            /* [in] */ BSTR bstrObjectPathName,
            /* [in] */ BSTR bstrValueName,
            /* [out] */ VARIANT *pValue,
            /* [in] */ UINT ulExpectedType) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetRegistryValue( 
            /* [in] */ BSTR bstrObjectPathName,
            /* [in] */ BSTR bstrValueName,
            /* [out] */ VARIANT *pValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsBootPartitionReady( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsPrimaryOS( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFileSectionKeyValue( 
            /* [in] */ BSTR bstrFileName,
            /* [in] */ BSTR bstrSectionName,
            /* [in] */ BSTR bstrKeyName,
            /* [retval][out] */ BSTR *pbstrKeyValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE VerifyInstallSpace( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsWindowsPowered( 
            /* [retval][out] */ VARIANT_BOOL *pvbIsWindowsPowered) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HostName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HostName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IpAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SubnetMask( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultGateway( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetDynamicIp( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetStaticIp( 
            /* [in] */ BSTR bstrIp,
            /* [in] */ BSTR bstrMask,
            /* [in] */ BSTR bstrGateway) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetAdministratorPassword( 
            /* [retval][out] */ VARIANT_BOOL *pvbSuccess) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsDuplicateMachineName( 
            /* [in] */ BSTR bstrMachineName,
            /* [retval][out] */ VARIANT_BOOL *pvbDuplicate) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsPartOfDomain( 
            /* [retval][out] */ VARIANT_BOOL *pvbDomain) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsDHCPEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pvbDHCPEnabled) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GenerateRandomPassword( 
            /* [in] */ LONG lLength,
            /* [retval][out] */ BSTR *pValPassword) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SAModifyUserPrivilege( 
            /* [in] */ BSTR bstrPrivilegeName,
            /* [in] */ VARIANT_BOOL vbEnable,
            /* [retval][out] */ VARIANT_BOOL *pvbModified) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISAHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISAHelper * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISAHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISAHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISAHelper * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISAHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISAHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISAHelper * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ExpandFiles )( 
            ISAHelper * This,
            /* [in] */ BSTR bstrCabFileName,
            /* [in] */ BSTR bstrDestDir,
            /* [in] */ BSTR bstrExtractFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *VerifySignature )( 
            ISAHelper * This,
            /* [in] */ BSTR bstrCabFileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UploadFile )( 
            ISAHelper * This,
            /* [in] */ BSTR bstrSrcFile,
            /* [in] */ BSTR bstrDestFile);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *VerifyDiskSpace )( 
            ISAHelper * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValue )( 
            ISAHelper * This,
            /* [in] */ BSTR bstrObjectPathName,
            /* [in] */ BSTR bstrValueName,
            /* [out] */ VARIANT *pValue,
            /* [in] */ UINT ulExpectedType);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValue )( 
            ISAHelper * This,
            /* [in] */ BSTR bstrObjectPathName,
            /* [in] */ BSTR bstrValueName,
            /* [out] */ VARIANT *pValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsBootPartitionReady )( 
            ISAHelper * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsPrimaryOS )( 
            ISAHelper * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFileSectionKeyValue )( 
            ISAHelper * This,
            /* [in] */ BSTR bstrFileName,
            /* [in] */ BSTR bstrSectionName,
            /* [in] */ BSTR bstrKeyName,
            /* [retval][out] */ BSTR *pbstrKeyValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *VerifyInstallSpace )( 
            ISAHelper * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsWindowsPowered )( 
            ISAHelper * This,
            /* [retval][out] */ VARIANT_BOOL *pvbIsWindowsPowered);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostName )( 
            ISAHelper * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostName )( 
            ISAHelper * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IpAddress )( 
            ISAHelper * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubnetMask )( 
            ISAHelper * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultGateway )( 
            ISAHelper * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetDynamicIp )( 
            ISAHelper * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetStaticIp )( 
            ISAHelper * This,
            /* [in] */ BSTR bstrIp,
            /* [in] */ BSTR bstrMask,
            /* [in] */ BSTR bstrGateway);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetAdministratorPassword )( 
            ISAHelper * This,
            /* [retval][out] */ VARIANT_BOOL *pvbSuccess);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsDuplicateMachineName )( 
            ISAHelper * This,
            /* [in] */ BSTR bstrMachineName,
            /* [retval][out] */ VARIANT_BOOL *pvbDuplicate);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsPartOfDomain )( 
            ISAHelper * This,
            /* [retval][out] */ VARIANT_BOOL *pvbDomain);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsDHCPEnabled )( 
            ISAHelper * This,
            /* [retval][out] */ VARIANT_BOOL *pvbDHCPEnabled);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GenerateRandomPassword )( 
            ISAHelper * This,
            /* [in] */ LONG lLength,
            /* [retval][out] */ BSTR *pValPassword);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SAModifyUserPrivilege )( 
            ISAHelper * This,
            /* [in] */ BSTR bstrPrivilegeName,
            /* [in] */ VARIANT_BOOL vbEnable,
            /* [retval][out] */ VARIANT_BOOL *pvbModified);
        
        END_INTERFACE
    } ISAHelperVtbl;

    interface ISAHelper
    {
        CONST_VTBL struct ISAHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISAHelper_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISAHelper_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISAHelper_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISAHelper_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISAHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISAHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISAHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISAHelper_ExpandFiles(This,bstrCabFileName,bstrDestDir,bstrExtractFile)	\
    (This)->lpVtbl -> ExpandFiles(This,bstrCabFileName,bstrDestDir,bstrExtractFile)

#define ISAHelper_VerifySignature(This,bstrCabFileName)	\
    (This)->lpVtbl -> VerifySignature(This,bstrCabFileName)

#define ISAHelper_UploadFile(This,bstrSrcFile,bstrDestFile)	\
    (This)->lpVtbl -> UploadFile(This,bstrSrcFile,bstrDestFile)

#define ISAHelper_VerifyDiskSpace(This)	\
    (This)->lpVtbl -> VerifyDiskSpace(This)

#define ISAHelper_GetRegistryValue(This,bstrObjectPathName,bstrValueName,pValue,ulExpectedType)	\
    (This)->lpVtbl -> GetRegistryValue(This,bstrObjectPathName,bstrValueName,pValue,ulExpectedType)

#define ISAHelper_SetRegistryValue(This,bstrObjectPathName,bstrValueName,pValue)	\
    (This)->lpVtbl -> SetRegistryValue(This,bstrObjectPathName,bstrValueName,pValue)

#define ISAHelper_IsBootPartitionReady(This)	\
    (This)->lpVtbl -> IsBootPartitionReady(This)

#define ISAHelper_IsPrimaryOS(This)	\
    (This)->lpVtbl -> IsPrimaryOS(This)

#define ISAHelper_GetFileSectionKeyValue(This,bstrFileName,bstrSectionName,bstrKeyName,pbstrKeyValue)	\
    (This)->lpVtbl -> GetFileSectionKeyValue(This,bstrFileName,bstrSectionName,bstrKeyName,pbstrKeyValue)

#define ISAHelper_VerifyInstallSpace(This)	\
    (This)->lpVtbl -> VerifyInstallSpace(This)

#define ISAHelper_IsWindowsPowered(This,pvbIsWindowsPowered)	\
    (This)->lpVtbl -> IsWindowsPowered(This,pvbIsWindowsPowered)

#define ISAHelper_get_HostName(This,pVal)	\
    (This)->lpVtbl -> get_HostName(This,pVal)

#define ISAHelper_put_HostName(This,newVal)	\
    (This)->lpVtbl -> put_HostName(This,newVal)

#define ISAHelper_get_IpAddress(This,pVal)	\
    (This)->lpVtbl -> get_IpAddress(This,pVal)

#define ISAHelper_get_SubnetMask(This,pVal)	\
    (This)->lpVtbl -> get_SubnetMask(This,pVal)

#define ISAHelper_get_DefaultGateway(This,pVal)	\
    (This)->lpVtbl -> get_DefaultGateway(This,pVal)

#define ISAHelper_SetDynamicIp(This)	\
    (This)->lpVtbl -> SetDynamicIp(This)

#define ISAHelper_SetStaticIp(This,bstrIp,bstrMask,bstrGateway)	\
    (This)->lpVtbl -> SetStaticIp(This,bstrIp,bstrMask,bstrGateway)

#define ISAHelper_ResetAdministratorPassword(This,pvbSuccess)	\
    (This)->lpVtbl -> ResetAdministratorPassword(This,pvbSuccess)

#define ISAHelper_IsDuplicateMachineName(This,bstrMachineName,pvbDuplicate)	\
    (This)->lpVtbl -> IsDuplicateMachineName(This,bstrMachineName,pvbDuplicate)

#define ISAHelper_IsPartOfDomain(This,pvbDomain)	\
    (This)->lpVtbl -> IsPartOfDomain(This,pvbDomain)

#define ISAHelper_IsDHCPEnabled(This,pvbDHCPEnabled)	\
    (This)->lpVtbl -> IsDHCPEnabled(This,pvbDHCPEnabled)

#define ISAHelper_GenerateRandomPassword(This,lLength,pValPassword)	\
    (This)->lpVtbl -> GenerateRandomPassword(This,lLength,pValPassword)

#define ISAHelper_SAModifyUserPrivilege(This,bstrPrivilegeName,vbEnable,pvbModified)	\
    (This)->lpVtbl -> SAModifyUserPrivilege(This,bstrPrivilegeName,vbEnable,pvbModified)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_ExpandFiles_Proxy( 
    ISAHelper * This,
    /* [in] */ BSTR bstrCabFileName,
    /* [in] */ BSTR bstrDestDir,
    /* [in] */ BSTR bstrExtractFile);


void __RPC_STUB ISAHelper_ExpandFiles_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_VerifySignature_Proxy( 
    ISAHelper * This,
    /* [in] */ BSTR bstrCabFileName);


void __RPC_STUB ISAHelper_VerifySignature_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_UploadFile_Proxy( 
    ISAHelper * This,
    /* [in] */ BSTR bstrSrcFile,
    /* [in] */ BSTR bstrDestFile);


void __RPC_STUB ISAHelper_UploadFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_VerifyDiskSpace_Proxy( 
    ISAHelper * This);


void __RPC_STUB ISAHelper_VerifyDiskSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_GetRegistryValue_Proxy( 
    ISAHelper * This,
    /* [in] */ BSTR bstrObjectPathName,
    /* [in] */ BSTR bstrValueName,
    /* [out] */ VARIANT *pValue,
    /* [in] */ UINT ulExpectedType);


void __RPC_STUB ISAHelper_GetRegistryValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_SetRegistryValue_Proxy( 
    ISAHelper * This,
    /* [in] */ BSTR bstrObjectPathName,
    /* [in] */ BSTR bstrValueName,
    /* [out] */ VARIANT *pValue);


void __RPC_STUB ISAHelper_SetRegistryValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_IsBootPartitionReady_Proxy( 
    ISAHelper * This);


void __RPC_STUB ISAHelper_IsBootPartitionReady_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_IsPrimaryOS_Proxy( 
    ISAHelper * This);


void __RPC_STUB ISAHelper_IsPrimaryOS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_GetFileSectionKeyValue_Proxy( 
    ISAHelper * This,
    /* [in] */ BSTR bstrFileName,
    /* [in] */ BSTR bstrSectionName,
    /* [in] */ BSTR bstrKeyName,
    /* [retval][out] */ BSTR *pbstrKeyValue);


void __RPC_STUB ISAHelper_GetFileSectionKeyValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_VerifyInstallSpace_Proxy( 
    ISAHelper * This);


void __RPC_STUB ISAHelper_VerifyInstallSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_IsWindowsPowered_Proxy( 
    ISAHelper * This,
    /* [retval][out] */ VARIANT_BOOL *pvbIsWindowsPowered);


void __RPC_STUB ISAHelper_IsWindowsPowered_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ISAHelper_get_HostName_Proxy( 
    ISAHelper * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISAHelper_get_HostName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE ISAHelper_put_HostName_Proxy( 
    ISAHelper * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB ISAHelper_put_HostName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ISAHelper_get_IpAddress_Proxy( 
    ISAHelper * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISAHelper_get_IpAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ISAHelper_get_SubnetMask_Proxy( 
    ISAHelper * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISAHelper_get_SubnetMask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE ISAHelper_get_DefaultGateway_Proxy( 
    ISAHelper * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB ISAHelper_get_DefaultGateway_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_SetDynamicIp_Proxy( 
    ISAHelper * This);


void __RPC_STUB ISAHelper_SetDynamicIp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_SetStaticIp_Proxy( 
    ISAHelper * This,
    /* [in] */ BSTR bstrIp,
    /* [in] */ BSTR bstrMask,
    /* [in] */ BSTR bstrGateway);


void __RPC_STUB ISAHelper_SetStaticIp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_ResetAdministratorPassword_Proxy( 
    ISAHelper * This,
    /* [retval][out] */ VARIANT_BOOL *pvbSuccess);


void __RPC_STUB ISAHelper_ResetAdministratorPassword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_IsDuplicateMachineName_Proxy( 
    ISAHelper * This,
    /* [in] */ BSTR bstrMachineName,
    /* [retval][out] */ VARIANT_BOOL *pvbDuplicate);


void __RPC_STUB ISAHelper_IsDuplicateMachineName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_IsPartOfDomain_Proxy( 
    ISAHelper * This,
    /* [retval][out] */ VARIANT_BOOL *pvbDomain);


void __RPC_STUB ISAHelper_IsPartOfDomain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_IsDHCPEnabled_Proxy( 
    ISAHelper * This,
    /* [retval][out] */ VARIANT_BOOL *pvbDHCPEnabled);


void __RPC_STUB ISAHelper_IsDHCPEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_GenerateRandomPassword_Proxy( 
    ISAHelper * This,
    /* [in] */ LONG lLength,
    /* [retval][out] */ BSTR *pValPassword);


void __RPC_STUB ISAHelper_GenerateRandomPassword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISAHelper_SAModifyUserPrivilege_Proxy( 
    ISAHelper * This,
    /* [in] */ BSTR bstrPrivilegeName,
    /* [in] */ VARIANT_BOOL vbEnable,
    /* [retval][out] */ VARIANT_BOOL *pvbModified);


void __RPC_STUB ISAHelper_SAModifyUserPrivilege_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISAHelper_INTERFACE_DEFINED__ */



#ifndef __SAHelperLib_LIBRARY_DEFINED__
#define __SAHelperLib_LIBRARY_DEFINED__

/* library SAHelperLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SAHelperLib;

EXTERN_C const CLSID CLSID_SAHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("ff1728b0-13ae-11d3-a75a-0050041db0ff")
SAHelper;
#endif
#endif /* __SAHelperLib_LIBRARY_DEFINED__ */

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


