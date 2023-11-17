

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for vscoordint.idl:
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

MIDL_DEFINE_GUID(IID, IID_IVssCoordinator,0xda9f41d4,0x1a5d,0x41d0,0xa6,0x14,0x6d,0xfd,0x78,0xdf,0x5d,0x05);


MIDL_DEFINE_GUID(IID, IID_IVssShim,0xD6222095,0x05C3,0x42f3,0x81,0xD9,0xA4,0xA0,0xCE,0xC0,0x5C,0x26);


MIDL_DEFINE_GUID(IID, IID_IVssAdmin,0x77ED5996,0x2F63,0x11d3,0x8A,0x39,0x00,0xC0,0x4F,0x72,0xD8,0xE3);


MIDL_DEFINE_GUID(IID, LIBID_VSS,0x97AEFDD8,0x2F60,0x11d3,0x8A,0x39,0x00,0xC0,0x4F,0x72,0xD8,0xE3);


MIDL_DEFINE_GUID(CLSID, CLSID_VSSCoordinator,0xE579AB5F,0x1CC4,0x44b4,0xBE,0xD9,0xDE,0x09,0x91,0xFF,0x06,0x23);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



