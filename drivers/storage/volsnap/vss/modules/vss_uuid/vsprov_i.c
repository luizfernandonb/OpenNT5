

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for vsprov.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
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

MIDL_DEFINE_GUID(IID, IID_IVssSoftwareSnapshotProvider,0x609e123e,0x2c5a,0x44d3,0x8f,0x01,0x0b,0x1d,0x9a,0x47,0xd1,0xff);


MIDL_DEFINE_GUID(IID, IID_IVssProviderCreateSnapshotSet,0x5F894E5B,0x1E39,0x4778,0x8E,0x23,0x9A,0xBA,0xD9,0xF0,0xE0,0x8C);


MIDL_DEFINE_GUID(IID, IID_IVssProviderNotifications,0xE561901F,0x03A5,0x4afe,0x86,0xD0,0x72,0xBA,0xEE,0xCE,0x70,0x04);


MIDL_DEFINE_GUID(IID, IID_IVssHardwareSnapshotProvider,0x9593A157,0x44E9,0x4344,0xBB,0xEB,0x44,0xFB,0xF9,0xB0,0x6B,0x10);


MIDL_DEFINE_GUID(IID, LIBID_VSSProvider,0x73C8B4C1,0x6E9D,0x4fc2,0xB3,0x04,0x03,0x0E,0xC7,0x63,0xFE,0x81);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



