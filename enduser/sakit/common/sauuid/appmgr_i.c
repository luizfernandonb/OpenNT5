

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for appmgr.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_APPMGRLib,0x6CBECC10,0xBF0A,0x11D2,0x90,0xB6,0x00,0xAA,0x00,0xA7,0x1D,0xCA);


MIDL_DEFINE_GUID(IID, IID_IApplianceObjectManagerStatus,0x0555bc40,0x363c,0x11d3,0xbf,0xbc,0x00,0x10,0x5a,0x1f,0x34,0x61);


MIDL_DEFINE_GUID(IID, IID_IApplianceObjectManager,0x427f7b10,0xcbb6,0x11d2,0x90,0xc3,0x00,0xaa,0x00,0xa7,0x1d,0xca);


MIDL_DEFINE_GUID(IID, IID_IApplianceTask,0x845066C0,0xB8E2,0x11D2,0xA9,0x1C,0x00,0xAA,0x00,0xA7,0x1D,0xCA);


MIDL_DEFINE_GUID(IID, IID_IApplianceObject,0xDC1AE3B0,0xB818,0x11D2,0xA9,0x1C,0x00,0xAA,0x00,0xA7,0x1D,0xCA);


MIDL_DEFINE_GUID(IID, IID_IResourceRetriever,0x3B66C1A0,0xB81A,0x11D2,0xA9,0x1C,0x00,0xAA,0x00,0xA7,0x1D,0xCA);


MIDL_DEFINE_GUID(CLSID, CLSID_ApplianceManager,0xBAF0B9D0,0xBF0B,0x11D2,0x90,0xB6,0x00,0xAA,0x00,0xA7,0x1D,0xCA);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



