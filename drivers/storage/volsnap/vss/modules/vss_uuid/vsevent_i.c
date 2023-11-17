

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for vsevent.idl:
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

MIDL_DEFINE_GUID(IID, IID_IVssWriter,0xF2B41165,0xA791,0x4c1f,0x98,0x20,0x8B,0xE4,0x5C,0x78,0x4E,0x32);


MIDL_DEFINE_GUID(IID, IID_IVssWriterCallback,0xDDAC9818,0xDD57,0x4279,0x82,0xD5,0xA3,0x80,0xA5,0x16,0xEF,0x36);


MIDL_DEFINE_GUID(IID, IID_IVssCoordinatorCallback,0x52946A2D,0xA7CD,0x4c1f,0x82,0xBA,0x22,0xF0,0xEA,0x17,0xEC,0x4E);


MIDL_DEFINE_GUID(IID, LIBID_VssEventLib,0x3DE641EF,0x0556,0x4d4a,0x98,0xD5,0x7D,0xBD,0x8A,0xD5,0xD7,0x0F);


MIDL_DEFINE_GUID(CLSID, CLSID_VssEvent,0xFAF53CC4,0xBD73,0x4e36,0x83,0xF1,0x2B,0x23,0xF4,0x6E,0x51,0x3E);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



