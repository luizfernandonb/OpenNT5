

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for datime.idl:
    Oicf, W0, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
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

MIDL_DEFINE_GUID(IID, LIBID_TIME,0x33adbfcc,0x3e0d,0x11d2,0xb9,0x48,0x00,0xc0,0x4f,0xa3,0x21,0x95);


MIDL_DEFINE_GUID(IID, IID_ITIMEElement,0xe53dc05c,0x3f93,0x11d2,0xb9,0x48,0x00,0xc0,0x4f,0xa3,0x21,0x95);


MIDL_DEFINE_GUID(IID, IID_ITIMEDAElementRenderSite,0x7a6af9a0,0x9355,0x11d2,0x80,0xba,0x00,0xc0,0x4f,0xa3,0x21,0x95);


MIDL_DEFINE_GUID(IID, IID_ITIMEDAElementRender,0x9e328494,0x9354,0x11d2,0x80,0xba,0x00,0xc0,0x4f,0xa3,0x21,0x95);


MIDL_DEFINE_GUID(IID, IID_ITIMEDAElement,0x17c7a570,0x4d53,0x11d2,0xb9,0x54,0x00,0xc0,0x4f,0xa3,0x21,0x95);


MIDL_DEFINE_GUID(IID, IID_ITIMEBodyElement,0x111c45f0,0x4de9,0x11d2,0xb9,0x54,0x00,0xc0,0x4f,0xa3,0x21,0x95);


MIDL_DEFINE_GUID(IID, IID_ITIMEMediaElement,0x68675562,0x53ab,0x11d2,0xb9,0x55,0x30,0x78,0x30,0x2c,0x20,0x30);


MIDL_DEFINE_GUID(IID, IID_ITIMEFactory,0x423e9da4,0x3e0d,0x11d2,0xb9,0x48,0x00,0xc0,0x4f,0xa3,0x21,0x95);


MIDL_DEFINE_GUID(IID, IID_ITIMEElementCollection,0x1C00BC3A,0x5E1C,0x11d2,0xB2,0x52,0x00,0xA0,0xC9,0x0D,0x61,0x11);


MIDL_DEFINE_GUID(IID, IID_ITIMEMediaPlayer,0xE6FAA0B2,0x69FE,0x11d2,0xB2,0x59,0x00,0xA0,0xC9,0x0D,0x61,0x11);


MIDL_DEFINE_GUID(IID, DIID_TIMEMediaPlayerEvents,0x4539E412,0x7813,0x11d2,0xB2,0x5F,0x00,0xA0,0xC9,0x0D,0x61,0x11);


MIDL_DEFINE_GUID(IID, IID_ITIMEMMFactory,0x73BA8F8A,0x80E0,0x11d2,0xB2,0x63,0x00,0xA0,0xC9,0x0D,0x61,0x11);


MIDL_DEFINE_GUID(CLSID, CLSID_TIMEMMFactory,0x33FDA1EA,0x80DF,0x11d2,0xB2,0x63,0x00,0xA0,0xC9,0x0D,0x61,0x11);


MIDL_DEFINE_GUID(CLSID, CLSID_TIMEFactory,0x476c391c,0x3e0d,0x11d2,0xb9,0x48,0x00,0xc0,0x4f,0xa3,0x21,0x95);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



