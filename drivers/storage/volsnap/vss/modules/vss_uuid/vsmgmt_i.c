

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for vsmgmt.idl:
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

MIDL_DEFINE_GUID(IID, IID_IVssSnapshotMgmt,0xFA7DF749,0x66E7,0x4986,0xA2,0x7F,0xE2,0xF0,0x4A,0xE5,0x37,0x72);


MIDL_DEFINE_GUID(IID, IID_IVssDifferentialSoftwareSnapshotMgmt,0x214A0F28,0xB737,0x4026,0xB8,0x47,0x4F,0x9E,0x37,0xD7,0x95,0x29);


MIDL_DEFINE_GUID(IID, IID_IVssEnumMgmtObject,0x01954E6B,0x9254,0x4e6e,0x80,0x8C,0xC9,0xE0,0x5D,0x00,0x76,0x96);


MIDL_DEFINE_GUID(IID, LIBID_VSMGMT,0x84015C41,0x291D,0x49e6,0xBF,0x7F,0xDD,0x40,0xAE,0x93,0x63,0x2B);


MIDL_DEFINE_GUID(CLSID, CLSID_VssSnapshotMgmt,0x0B5A2C52,0x3EB9,0x470a,0x96,0xE2,0x6C,0x6D,0x45,0x70,0xE4,0x0F);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



