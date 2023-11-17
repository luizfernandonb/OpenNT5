

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

MIDL_DEFINE_GUID(IID, LIBID_SATransport,0xc4d1bf46,0x9195,0x44d0,0xac,0xac,0x6b,0x11,0x5a,0x17,0x7b,0x0d);


MIDL_DEFINE_GUID(CLSID, CLSID_SATransport,0x8b5a91c6,0xe588,0x4956,0xaf,0xe1,0xfc,0x9e,0x74,0x4c,0x8e,0xa3);


MIDL_DEFINE_GUID(IID, IID_ISAMessage,0x00a124d1,0xe449,0x4ff7,0xbd,0xc7,0x43,0x10,0xea,0x7b,0x8d,0x22);


MIDL_DEFINE_GUID(IID, IID_ISATarget,0x887088c1,0x3ca2,0x42ca,0xb5,0x3f,0x4d,0xc7,0x36,0xd5,0x32,0x24);


MIDL_DEFINE_GUID(IID, IID_ISANotify,0x66d8a865,0xa32d,0x49b1,0x82,0xaa,0xc4,0x35,0x0b,0xc9,0x30,0xfb);


MIDL_DEFINE_GUID(IID, IID_ISASession,0x77805032,0x07cc,0x492a,0x93,0xf4,0xcf,0x58,0x63,0x81,0x77,0x28);


MIDL_DEFINE_GUID(IID, IID_ISATransport,0x014f4c1a,0xa87a,0x4bfb,0xb5,0x41,0xd6,0x6d,0x24,0x75,0xf4,0xec);


MIDL_DEFINE_GUID(IID, IID_ISAGroup,0xc0b3a8b0,0xc06d,0x45be,0x99,0x00,0x44,0xe9,0x0e,0xd9,0x8b,0x96);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



