

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for fhcache.idl:
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

#ifndef __fhcache_h__
#define __fhcache_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFileHandleCache_FWD_DEFINED__
#define __IFileHandleCache_FWD_DEFINED__
typedef interface IFileHandleCache IFileHandleCache;
#endif 	/* __IFileHandleCache_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_fhcache_0000 */
/* [local] */ 

DEFINE_GUID(CLSID_FileHandleCache, 0xa93b88df, 0xef9d, 0x420c, 0xb4, 0x69, 0xce, 0x07, 0x4e, 0xbe, 0x94, 0xbc);
DEFINE_GUID(IID_IFileHandleCache, 0x3017e0e1, 0x94d6, 0x4896, 0xbc, 0x57, 0xb2, 0xdf, 0x75, 0x92, 0xd1, 0x75);
typedef /* [public][public][public][public] */ struct __MIDL___MIDL_itf_fhcache_0000_0001
    {
    DWORD m_dwAccess;
    DWORD m_dwLockType;
    DWORD m_dwLockScope;
    DWORD m_dwSecondsTimeout;
    /* [string][unique] */ LPWSTR m_pwszResourceString;
    /* [string][unique] */ LPWSTR m_pwszOwnerComment;
    } 	SNewLockData;

typedef /* [public][public] */ struct __MIDL___MIDL_itf_fhcache_0000_0002
    {
    DWORD_PTR h;
    DWORD dwProcessID;
    } 	SLockHandleData;



extern RPC_IF_HANDLE __MIDL_itf_fhcache_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fhcache_0000_v0_0_s_ifspec;

#ifndef __IFileHandleCache_INTERFACE_DEFINED__
#define __IFileHandleCache_INTERFACE_DEFINED__

/* interface IFileHandleCache */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IFileHandleCache;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3017e0e1-94d6-4896-bc57-b2df7592d175")
    IFileHandleCache : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HrRegisterWorkerProcess( 
            /* [in] */ DWORD dwProcessId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HrGetGUIDString( 
            /* [in] */ UINT cchBufferLen,
            /* [size_is][out] */ WCHAR *pwszGUIDString,
            /* [out] */ UINT *pcchGUIDString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HrGetNewLockData( 
            /* [in] */ DWORD_PTR hFile,
            /* [in] */ DWORD dwProcessId,
            /* [in] */ DWORD dwSid,
            /* [size_is][in] */ BYTE *pbSid,
            /* [in] */ SNewLockData *pnld,
            /* [in] */ UINT cchBufferLen,
            /* [size_is][out] */ WCHAR *pwszLockToken,
            /* [out] */ UINT *pcchLockToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HrGetLockData( 
            /* [in] */ LARGE_INTEGER liLockID,
            /* [in] */ DWORD dwSid,
            /* [size_is][in] */ BYTE *pbSid,
            /* [string][in][unique] */ LPCWSTR pwszPath,
            /* [in] */ DWORD dwTimeout,
            /* [out] */ SNewLockData *pnld,
            /* [out] */ SLockHandleData *plhd,
            /* [in] */ UINT cchBufferLen,
            /* [size_is][out] */ WCHAR *pwszLockToken,
            /* [out] */ UINT *pcchLockToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HrCheckLockID( 
            /* [in] */ LARGE_INTEGER liLockID,
            /* [in] */ DWORD dwSid,
            /* [size_is][in] */ BYTE *pbSid,
            /* [string][in][unique] */ LPCWSTR pwszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HrDeleteLock( 
            /* [in] */ LARGE_INTEGER liLockID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HrGetAllLockDataForName( 
            /* [string][in][unique] */ LPCWSTR pwszPath,
            /* [in] */ DWORD dwLockType,
            /* [out] */ DWORD *pdwLocksFound,
            /* [size_is][size_is][out] */ SNewLockData **ppNewLockDatas,
            /* [size_is][size_is][out] */ LPWSTR **ppwszLockTokens) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileHandleCacheVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileHandleCache * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileHandleCache * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileHandleCache * This);
        
        HRESULT ( STDMETHODCALLTYPE *HrRegisterWorkerProcess )( 
            IFileHandleCache * This,
            /* [in] */ DWORD dwProcessId);
        
        HRESULT ( STDMETHODCALLTYPE *HrGetGUIDString )( 
            IFileHandleCache * This,
            /* [in] */ UINT cchBufferLen,
            /* [size_is][out] */ WCHAR *pwszGUIDString,
            /* [out] */ UINT *pcchGUIDString);
        
        HRESULT ( STDMETHODCALLTYPE *HrGetNewLockData )( 
            IFileHandleCache * This,
            /* [in] */ DWORD_PTR hFile,
            /* [in] */ DWORD dwProcessId,
            /* [in] */ DWORD dwSid,
            /* [size_is][in] */ BYTE *pbSid,
            /* [in] */ SNewLockData *pnld,
            /* [in] */ UINT cchBufferLen,
            /* [size_is][out] */ WCHAR *pwszLockToken,
            /* [out] */ UINT *pcchLockToken);
        
        HRESULT ( STDMETHODCALLTYPE *HrGetLockData )( 
            IFileHandleCache * This,
            /* [in] */ LARGE_INTEGER liLockID,
            /* [in] */ DWORD dwSid,
            /* [size_is][in] */ BYTE *pbSid,
            /* [string][in][unique] */ LPCWSTR pwszPath,
            /* [in] */ DWORD dwTimeout,
            /* [out] */ SNewLockData *pnld,
            /* [out] */ SLockHandleData *plhd,
            /* [in] */ UINT cchBufferLen,
            /* [size_is][out] */ WCHAR *pwszLockToken,
            /* [out] */ UINT *pcchLockToken);
        
        HRESULT ( STDMETHODCALLTYPE *HrCheckLockID )( 
            IFileHandleCache * This,
            /* [in] */ LARGE_INTEGER liLockID,
            /* [in] */ DWORD dwSid,
            /* [size_is][in] */ BYTE *pbSid,
            /* [string][in][unique] */ LPCWSTR pwszPath);
        
        HRESULT ( STDMETHODCALLTYPE *HrDeleteLock )( 
            IFileHandleCache * This,
            /* [in] */ LARGE_INTEGER liLockID);
        
        HRESULT ( STDMETHODCALLTYPE *HrGetAllLockDataForName )( 
            IFileHandleCache * This,
            /* [string][in][unique] */ LPCWSTR pwszPath,
            /* [in] */ DWORD dwLockType,
            /* [out] */ DWORD *pdwLocksFound,
            /* [size_is][size_is][out] */ SNewLockData **ppNewLockDatas,
            /* [size_is][size_is][out] */ LPWSTR **ppwszLockTokens);
        
        END_INTERFACE
    } IFileHandleCacheVtbl;

    interface IFileHandleCache
    {
        CONST_VTBL struct IFileHandleCacheVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileHandleCache_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFileHandleCache_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFileHandleCache_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFileHandleCache_HrRegisterWorkerProcess(This,dwProcessId)	\
    (This)->lpVtbl -> HrRegisterWorkerProcess(This,dwProcessId)

#define IFileHandleCache_HrGetGUIDString(This,cchBufferLen,pwszGUIDString,pcchGUIDString)	\
    (This)->lpVtbl -> HrGetGUIDString(This,cchBufferLen,pwszGUIDString,pcchGUIDString)

#define IFileHandleCache_HrGetNewLockData(This,hFile,dwProcessId,dwSid,pbSid,pnld,cchBufferLen,pwszLockToken,pcchLockToken)	\
    (This)->lpVtbl -> HrGetNewLockData(This,hFile,dwProcessId,dwSid,pbSid,pnld,cchBufferLen,pwszLockToken,pcchLockToken)

#define IFileHandleCache_HrGetLockData(This,liLockID,dwSid,pbSid,pwszPath,dwTimeout,pnld,plhd,cchBufferLen,pwszLockToken,pcchLockToken)	\
    (This)->lpVtbl -> HrGetLockData(This,liLockID,dwSid,pbSid,pwszPath,dwTimeout,pnld,plhd,cchBufferLen,pwszLockToken,pcchLockToken)

#define IFileHandleCache_HrCheckLockID(This,liLockID,dwSid,pbSid,pwszPath)	\
    (This)->lpVtbl -> HrCheckLockID(This,liLockID,dwSid,pbSid,pwszPath)

#define IFileHandleCache_HrDeleteLock(This,liLockID)	\
    (This)->lpVtbl -> HrDeleteLock(This,liLockID)

#define IFileHandleCache_HrGetAllLockDataForName(This,pwszPath,dwLockType,pdwLocksFound,ppNewLockDatas,ppwszLockTokens)	\
    (This)->lpVtbl -> HrGetAllLockDataForName(This,pwszPath,dwLockType,pdwLocksFound,ppNewLockDatas,ppwszLockTokens)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IFileHandleCache_HrRegisterWorkerProcess_Proxy( 
    IFileHandleCache * This,
    /* [in] */ DWORD dwProcessId);


void __RPC_STUB IFileHandleCache_HrRegisterWorkerProcess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IFileHandleCache_HrGetGUIDString_Proxy( 
    IFileHandleCache * This,
    /* [in] */ UINT cchBufferLen,
    /* [size_is][out] */ WCHAR *pwszGUIDString,
    /* [out] */ UINT *pcchGUIDString);


void __RPC_STUB IFileHandleCache_HrGetGUIDString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IFileHandleCache_HrGetNewLockData_Proxy( 
    IFileHandleCache * This,
    /* [in] */ DWORD_PTR hFile,
    /* [in] */ DWORD dwProcessId,
    /* [in] */ DWORD dwSid,
    /* [size_is][in] */ BYTE *pbSid,
    /* [in] */ SNewLockData *pnld,
    /* [in] */ UINT cchBufferLen,
    /* [size_is][out] */ WCHAR *pwszLockToken,
    /* [out] */ UINT *pcchLockToken);


void __RPC_STUB IFileHandleCache_HrGetNewLockData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IFileHandleCache_HrGetLockData_Proxy( 
    IFileHandleCache * This,
    /* [in] */ LARGE_INTEGER liLockID,
    /* [in] */ DWORD dwSid,
    /* [size_is][in] */ BYTE *pbSid,
    /* [string][in][unique] */ LPCWSTR pwszPath,
    /* [in] */ DWORD dwTimeout,
    /* [out] */ SNewLockData *pnld,
    /* [out] */ SLockHandleData *plhd,
    /* [in] */ UINT cchBufferLen,
    /* [size_is][out] */ WCHAR *pwszLockToken,
    /* [out] */ UINT *pcchLockToken);


void __RPC_STUB IFileHandleCache_HrGetLockData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IFileHandleCache_HrCheckLockID_Proxy( 
    IFileHandleCache * This,
    /* [in] */ LARGE_INTEGER liLockID,
    /* [in] */ DWORD dwSid,
    /* [size_is][in] */ BYTE *pbSid,
    /* [string][in][unique] */ LPCWSTR pwszPath);


void __RPC_STUB IFileHandleCache_HrCheckLockID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IFileHandleCache_HrDeleteLock_Proxy( 
    IFileHandleCache * This,
    /* [in] */ LARGE_INTEGER liLockID);


void __RPC_STUB IFileHandleCache_HrDeleteLock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IFileHandleCache_HrGetAllLockDataForName_Proxy( 
    IFileHandleCache * This,
    /* [string][in][unique] */ LPCWSTR pwszPath,
    /* [in] */ DWORD dwLockType,
    /* [out] */ DWORD *pdwLocksFound,
    /* [size_is][size_is][out] */ SNewLockData **ppNewLockDatas,
    /* [size_is][size_is][out] */ LPWSTR **ppwszLockTokens);


void __RPC_STUB IFileHandleCache_HrGetAllLockDataForName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFileHandleCache_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


