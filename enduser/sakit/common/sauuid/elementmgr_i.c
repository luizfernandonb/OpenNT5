

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IWebElement,0x0EFC4090,0xC445,0x11D2,0x90,0xBA,0x00,0xAA,0x00,0xA7,0x1D,0xCA);


MIDL_DEFINE_GUID(IID, IID_IWebElementRetriever,0x8C5F0530,0xC445,0x11D2,0x90,0xBA,0x00,0xAA,0x00,0xA7,0x1D,0xCA);


MIDL_DEFINE_GUID(IID, IID_IWebElementEnum,0xe64b13d0,0xc611,0x11d2,0xbf,0x1e,0x00,0x10,0x5a,0x1f,0x34,0x61);


MIDL_DEFINE_GUID(IID, LIBID_ELEMENTMGRLib,0xFEC47820,0xC444,0x11D2,0x90,0xBA,0x00,0xAA,0x00,0xA7,0x1D,0xCA);


MIDL_DEFINE_GUID(CLSID, CLSID_ElementRetriever,0x9BCEA010,0xC445,0x11D2,0x90,0xBA,0x00,0xAA,0x00,0xA7,0x1D,0xCA);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



