

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for vss.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */
#pragma warning( disable: 4211 )  /* redefine extent to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "vss.h"

#define TYPE_FORMAT_STRING_SIZE   209                               
#define PROC_FORMAT_STRING_SIZE   223                               
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVssEnumObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssEnumObject_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVssAsync_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssAsync_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Next */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x2 ),	/* 2 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 30 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x9c ),	/* Type Offset=156 */

	/* Parameter pceltFetched */

/* 36 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Wait */


	/* Procedure Skip */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x4 ),	/* 4 */
/* 56 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 58 */	NdrFcShort( 0x8 ),	/* 8 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 64 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwMilliseconds */


	/* Parameter celt */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x5 ),	/* 5 */
/* 92 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x6 ),	/* 6 */
/* 122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 128 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 138 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cancel */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x3 ),	/* 3 */
/* 158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryStatus */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x5 ),	/* 5 */
/* 188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 190 */	NdrFcShort( 0x1c ),	/* 28 */
/* 192 */	NdrFcShort( 0x40 ),	/* 64 */
/* 194 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 196 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pHrResult */

/* 204 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pReserved */

/* 210 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x98 ),	/* Offset= 152 (156) */
/*  6 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/*  8 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 10 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 12 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 14 */	NdrFcShort( 0x2 ),	/* Offset= 2 (16) */
/* 16 */	NdrFcShort( 0x60 ),	/* 96 */
/* 18 */	NdrFcShort( 0x2 ),	/* 2 */
/* 20 */	NdrFcLong( 0x3 ),	/* 3 */
/* 24 */	NdrFcShort( 0x1c ),	/* Offset= 28 (52) */
/* 26 */	NdrFcLong( 0x4 ),	/* 4 */
/* 30 */	NdrFcShort( 0x4e ),	/* Offset= 78 (108) */
/* 32 */	NdrFcShort( 0x0 ),	/* Offset= 0 (32) */
/* 34 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
/* 38 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 40 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 42 */	NdrFcShort( 0x10 ),	/* 16 */
/* 44 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 46 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 48 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (34) */
			0x5b,		/* FC_END */
/* 52 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 54 */	NdrFcShort( 0x60 ),	/* 96 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x1a ),	/* Offset= 26 (84) */
/* 60 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 62 */	NdrFcShort( 0xffea ),	/* Offset= -22 (40) */
/* 64 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 66 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (40) */
/* 68 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 70 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 72 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 74 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 76 */	0x0,		/* 0 */
			NdrFcShort( 0xffdb ),	/* Offset= -37 (40) */
			0x8,		/* FC_LONG */
/* 80 */	0xb,		/* FC_HYPER */
			0xd,		/* FC_ENUM16 */
/* 82 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 84 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 86 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 88 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 90 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 92 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 94 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 96 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 98 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 100 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 102 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 104 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 106 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 108 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0x3c ),	/* 60 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x12 ),	/* Offset= 18 (132) */
/* 116 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 118 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (40) */
/* 120 */	0x36,		/* FC_POINTER */
			0xd,		/* FC_ENUM16 */
/* 122 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 124 */	0x0,		/* 0 */
			NdrFcShort( 0xffab ),	/* Offset= -85 (40) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 128 */	0x0,		/* 0 */
			NdrFcShort( 0xffa7 ),	/* Offset= -89 (40) */
			0x5b,		/* FC_END */
/* 132 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 134 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 136 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 138 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 140 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 142 */	NdrFcShort( 0x68 ),	/* 104 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* Offset= 0 (146) */
/* 148 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 150 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 152 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (6) */
/* 154 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 156 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 164 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 166 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 170 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 172 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 174 */	NdrFcShort( 0xffde ),	/* Offset= -34 (140) */
/* 176 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 178 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 180 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 182 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 184 */	NdrFcShort( 0x2 ),	/* Offset= 2 (186) */
/* 186 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 188 */	NdrFcLong( 0xae1c7110 ),	/* -1373867760 */
/* 192 */	NdrFcShort( 0x2f60 ),	/* 12128 */
/* 194 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 196 */	0x8a,		/* 138 */
			0x39,		/* 57 */
/* 198 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 200 */	0x4f,		/* 79 */
			0x72,		/* 114 */
/* 202 */	0xd8,		/* 216 */
			0xe3,		/* 227 */
/* 204 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 206 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_vss_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IVssEnumObject, ver. 0.0,
   GUID={0xAE1C7110,0x2F60,0x11d3,{0x8A,0x39,0x00,0xC0,0x4F,0x72,0xD8,0xE3}} */

#pragma code_seg(".orpc")
static const unsigned short IVssEnumObject_FormatStringOffsetTable[] =
    {
    0,
    48,
    84,
    114
    };

static const MIDL_STUBLESS_PROXY_INFO IVssEnumObject_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssEnumObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssEnumObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssEnumObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IVssEnumObjectProxyVtbl = 
{
    &IVssEnumObject_ProxyInfo,
    &IID_IVssEnumObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssEnumObject::Next */ ,
    (void *) (INT_PTR) -1 /* IVssEnumObject::Skip */ ,
    (void *) (INT_PTR) -1 /* IVssEnumObject::Reset */ ,
    (void *) (INT_PTR) -1 /* IVssEnumObject::Clone */
};

const CInterfaceStubVtbl _IVssEnumObjectStubVtbl =
{
    &IID_IVssEnumObject,
    &IVssEnumObject_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IVssAsync, ver. 0.0,
   GUID={0x507C37B4,0xCF5B,0x4e95,{0xB0,0xAF,0x14,0xEB,0x97,0x67,0x46,0x7E}} */

#pragma code_seg(".orpc")
static const unsigned short IVssAsync_FormatStringOffsetTable[] =
    {
    150,
    48,
    180
    };

static const MIDL_STUBLESS_PROXY_INFO IVssAsync_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssAsync_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssAsync_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssAsync_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IVssAsyncProxyVtbl = 
{
    &IVssAsync_ProxyInfo,
    &IID_IVssAsync,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssAsync::Cancel */ ,
    (void *) (INT_PTR) -1 /* IVssAsync::Wait */ ,
    (void *) (INT_PTR) -1 /* IVssAsync::QueryStatus */
};

const CInterfaceStubVtbl _IVssAsyncStubVtbl =
{
    &IID_IVssAsync,
    &IVssAsync_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_vss_0259, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x600016e, /* MIDL Version 6.0.366 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0   /* Reserved5 */
    };

const CInterfaceProxyVtbl * _vss_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IVssEnumObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVssAsyncProxyVtbl,
    0
};

const CInterfaceStubVtbl * _vss_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IVssEnumObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IVssAsyncStubVtbl,
    0
};

PCInterfaceName const _vss_InterfaceNamesList[] = 
{
    "IVssEnumObject",
    "IVssAsync",
    0
};


#define _vss_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _vss, pIID, n)

int __stdcall _vss_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _vss, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _vss, 2, *pIndex )
    
}

const ExtendedProxyFileInfo vss_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _vss_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _vss_StubVtblList,
    (const PCInterfaceName * ) & _vss_InterfaceNamesList,
    0, // no delegation
    & _vss_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

