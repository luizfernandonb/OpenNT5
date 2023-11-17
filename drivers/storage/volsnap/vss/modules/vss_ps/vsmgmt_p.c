

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "vsmgmt.h"

#define TYPE_FORMAT_STRING_SIZE   265                               
#define PROC_FORMAT_STRING_SIZE   559                               
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


extern const MIDL_SERVER_INFO IVssSnapshotMgmt_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssSnapshotMgmt_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVssDifferentialSoftwareSnapshotMgmt_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssDifferentialSoftwareSnapshotMgmt_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVssEnumMgmtObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssEnumMgmtObject_ProxyInfo;



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

	/* Procedure GetProviderMgmtInterface */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x74 ),	/* 116 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ProviderId */

/* 24 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter InterfaceId */

/* 30 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 32 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 34 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter ppItf */

/* 36 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 38 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 40 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryVolumesSupportedForSnapshots */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x4 ),	/* 4 */
/* 56 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 58 */	NdrFcShort( 0x38 ),	/* 56 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 64 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ProviderId */

/* 72 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter lContext */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppEnum */

/* 84 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 86 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 88 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QuerySnapshotsByVolume */

/* 96 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x5 ),	/* 5 */
/* 104 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 106 */	NdrFcShort( 0x30 ),	/* 48 */
/* 108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 110 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszVolumeName */

/* 120 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 124 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter ProviderId */

/* 126 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 130 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter ppEnum */

/* 132 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 134 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 136 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddDiffArea */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x3 ),	/* 3 */
/* 152 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 154 */	NdrFcShort( 0x10 ),	/* 16 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszVolumeName */

/* 168 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter pwszDiffAreaVolumeName */

/* 174 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter llMaximumDiffSpace */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 184 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ChangeDiffAreaMaximumSize */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 202 */	NdrFcShort( 0x10 ),	/* 16 */
/* 204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 206 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszVolumeName */

/* 216 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter pwszDiffAreaVolumeName */

/* 222 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter llMaximumDiffSpace */

/* 228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 232 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 236 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryVolumesSupportedForDiffAreas */

/* 240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x5 ),	/* 5 */
/* 248 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszOriginalVolumeName */

/* 264 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 268 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter ppEnum */

/* 270 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 274 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 278 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryDiffAreasForVolume */

/* 282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x6 ),	/* 6 */
/* 290 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 298 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszVolumeName */

/* 306 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 310 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter ppEnum */

/* 312 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 316 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryDiffAreasOnVolume */

/* 324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x7 ),	/* 7 */
/* 332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 338 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszVolumeName */

/* 348 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 352 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter ppEnum */

/* 354 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 358 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryDiffAreasForSnapshot */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 376 */	NdrFcShort( 0x30 ),	/* 48 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 382 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotId */

/* 390 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 394 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter ppEnum */

/* 396 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 398 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 400 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x3 ),	/* 3 */
/* 416 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 420 */	NdrFcShort( 0x24 ),	/* 36 */
/* 422 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 424 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 426 */	NdrFcShort( 0x2 ),	/* 2 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 438 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 442 */	NdrFcShort( 0xea ),	/* Type Offset=234 */

	/* Parameter pceltFetched */

/* 444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x4 ),	/* 4 */
/* 464 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */

/* 492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x5 ),	/* 5 */
/* 500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 508 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x6 ),	/* 6 */
/* 530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 546 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 550 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 556 */	0x8,		/* FC_LONG */
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
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  4 */	NdrFcShort( 0x8 ),	/* 8 */
/*  6 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/*  8 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 10 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 14 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 16 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (2) */
			0x5b,		/* FC_END */
/* 20 */	
			0x11, 0x0,	/* FC_RP */
/* 22 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (8) */
/* 24 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 26 */	NdrFcShort( 0x2 ),	/* Offset= 2 (28) */
/* 28 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 30 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 32 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 34 */	NdrFcShort( 0x5 ),	/* Corr flags:  early, iid_is, */
/* 36 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 38 */	NdrFcShort( 0x2 ),	/* Offset= 2 (40) */
/* 40 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 42 */	NdrFcLong( 0x1954e6b ),	/* 26562155 */
/* 46 */	NdrFcShort( 0x9254 ),	/* -28076 */
/* 48 */	NdrFcShort( 0x4e6e ),	/* 20078 */
/* 50 */	0x80,		/* 128 */
			0x8c,		/* 140 */
/* 52 */	0xc9,		/* 201 */
			0xe0,		/* 224 */
/* 54 */	0x5d,		/* 93 */
			0x0,		/* 0 */
/* 56 */	0x76,		/* 118 */
			0x96,		/* 150 */
/* 58 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 60 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 64 */	NdrFcShort( 0x2 ),	/* Offset= 2 (66) */
/* 66 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 68 */	NdrFcLong( 0xae1c7110 ),	/* -1373867760 */
/* 72 */	NdrFcShort( 0x2f60 ),	/* 12128 */
/* 74 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 76 */	0x8a,		/* 138 */
			0x39,		/* 57 */
/* 78 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 80 */	0x4f,		/* 79 */
			0x72,		/* 114 */
/* 82 */	0xd8,		/* 216 */
			0xe3,		/* 227 */
/* 84 */	
			0x11, 0x0,	/* FC_RP */
/* 86 */	NdrFcShort( 0x94 ),	/* Offset= 148 (234) */
/* 88 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 90 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 92 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 94 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	NdrFcShort( 0x20 ),	/* 32 */
/* 100 */	NdrFcShort( 0x3 ),	/* 3 */
/* 102 */	NdrFcLong( 0x1 ),	/* 1 */
/* 106 */	NdrFcShort( 0x10 ),	/* Offset= 16 (122) */
/* 108 */	NdrFcLong( 0x2 ),	/* 2 */
/* 112 */	NdrFcShort( 0x28 ),	/* Offset= 40 (152) */
/* 114 */	NdrFcLong( 0x3 ),	/* 3 */
/* 118 */	NdrFcShort( 0x42 ),	/* Offset= 66 (184) */
/* 120 */	NdrFcShort( 0x0 ),	/* Offset= 0 (120) */
/* 122 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 126 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 128 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 136 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 138 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 140 */	NdrFcShort( 0x4 ),	/* 4 */
/* 142 */	NdrFcShort( 0x4 ),	/* 4 */
/* 144 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 146 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 148 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 150 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 152 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 154 */	NdrFcShort( 0x18 ),	/* 24 */
/* 156 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 158 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 166 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 168 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 170 */	NdrFcShort( 0x4 ),	/* 4 */
/* 172 */	NdrFcShort( 0x4 ),	/* 4 */
/* 174 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 176 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 178 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 180 */	0x8,		/* FC_LONG */
			0xb,		/* FC_HYPER */
/* 182 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 184 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 186 */	NdrFcShort( 0x20 ),	/* 32 */
/* 188 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 190 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 198 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 200 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 202 */	NdrFcShort( 0x4 ),	/* 4 */
/* 204 */	NdrFcShort( 0x4 ),	/* 4 */
/* 206 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 208 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 210 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 212 */	0x8,		/* FC_LONG */
			0xb,		/* FC_HYPER */
/* 214 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 216 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 218 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 220 */	NdrFcShort( 0x28 ),	/* 40 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* Offset= 0 (224) */
/* 226 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 228 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 230 */	NdrFcShort( 0xff72 ),	/* Offset= -142 (88) */
/* 232 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 234 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 242 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 244 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 246 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 248 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 250 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 252 */	NdrFcShort( 0xffde ),	/* Offset= -34 (218) */
/* 254 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 256 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 258 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 260 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 262 */	NdrFcShort( 0xff22 ),	/* Offset= -222 (40) */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_vsmgmt_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IVssSnapshotMgmt, ver. 0.0,
   GUID={0xFA7DF749,0x66E7,0x4986,{0xA2,0x7F,0xE2,0xF0,0x4A,0xE5,0x37,0x72}} */

#pragma code_seg(".orpc")
static const unsigned short IVssSnapshotMgmt_FormatStringOffsetTable[] =
    {
    0,
    48,
    96
    };

static const MIDL_STUBLESS_PROXY_INFO IVssSnapshotMgmt_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssSnapshotMgmt_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssSnapshotMgmt_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssSnapshotMgmt_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IVssSnapshotMgmtProxyVtbl = 
{
    &IVssSnapshotMgmt_ProxyInfo,
    &IID_IVssSnapshotMgmt,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssSnapshotMgmt::GetProviderMgmtInterface */ ,
    (void *) (INT_PTR) -1 /* IVssSnapshotMgmt::QueryVolumesSupportedForSnapshots */ ,
    (void *) (INT_PTR) -1 /* IVssSnapshotMgmt::QuerySnapshotsByVolume */
};

const CInterfaceStubVtbl _IVssSnapshotMgmtStubVtbl =
{
    &IID_IVssSnapshotMgmt,
    &IVssSnapshotMgmt_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IVssDifferentialSoftwareSnapshotMgmt, ver. 0.0,
   GUID={0x214A0F28,0xB737,0x4026,{0xB8,0x47,0x4F,0x9E,0x37,0xD7,0x95,0x29}} */

#pragma code_seg(".orpc")
static const unsigned short IVssDifferentialSoftwareSnapshotMgmt_FormatStringOffsetTable[] =
    {
    144,
    192,
    240,
    282,
    324,
    366
    };

static const MIDL_STUBLESS_PROXY_INFO IVssDifferentialSoftwareSnapshotMgmt_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssDifferentialSoftwareSnapshotMgmt_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssDifferentialSoftwareSnapshotMgmt_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssDifferentialSoftwareSnapshotMgmt_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IVssDifferentialSoftwareSnapshotMgmtProxyVtbl = 
{
    &IVssDifferentialSoftwareSnapshotMgmt_ProxyInfo,
    &IID_IVssDifferentialSoftwareSnapshotMgmt,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssDifferentialSoftwareSnapshotMgmt::AddDiffArea */ ,
    (void *) (INT_PTR) -1 /* IVssDifferentialSoftwareSnapshotMgmt::ChangeDiffAreaMaximumSize */ ,
    (void *) (INT_PTR) -1 /* IVssDifferentialSoftwareSnapshotMgmt::QueryVolumesSupportedForDiffAreas */ ,
    (void *) (INT_PTR) -1 /* IVssDifferentialSoftwareSnapshotMgmt::QueryDiffAreasForVolume */ ,
    (void *) (INT_PTR) -1 /* IVssDifferentialSoftwareSnapshotMgmt::QueryDiffAreasOnVolume */ ,
    (void *) (INT_PTR) -1 /* IVssDifferentialSoftwareSnapshotMgmt::QueryDiffAreasForSnapshot */
};

const CInterfaceStubVtbl _IVssDifferentialSoftwareSnapshotMgmtStubVtbl =
{
    &IID_IVssDifferentialSoftwareSnapshotMgmt,
    &IVssDifferentialSoftwareSnapshotMgmt_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IVssEnumMgmtObject, ver. 0.0,
   GUID={0x01954E6B,0x9254,0x4e6e,{0x80,0x8C,0xC9,0xE0,0x5D,0x00,0x76,0x96}} */

#pragma code_seg(".orpc")
static const unsigned short IVssEnumMgmtObject_FormatStringOffsetTable[] =
    {
    408,
    456,
    492,
    522
    };

static const MIDL_STUBLESS_PROXY_INFO IVssEnumMgmtObject_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssEnumMgmtObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssEnumMgmtObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssEnumMgmtObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IVssEnumMgmtObjectProxyVtbl = 
{
    &IVssEnumMgmtObject_ProxyInfo,
    &IID_IVssEnumMgmtObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssEnumMgmtObject::Next */ ,
    (void *) (INT_PTR) -1 /* IVssEnumMgmtObject::Skip */ ,
    (void *) (INT_PTR) -1 /* IVssEnumMgmtObject::Reset */ ,
    (void *) (INT_PTR) -1 /* IVssEnumMgmtObject::Clone */
};

const CInterfaceStubVtbl _IVssEnumMgmtObjectStubVtbl =
{
    &IID_IVssEnumMgmtObject,
    &IVssEnumMgmtObject_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

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

const CInterfaceProxyVtbl * _vsmgmt_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IVssDifferentialSoftwareSnapshotMgmtProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVssSnapshotMgmtProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVssEnumMgmtObjectProxyVtbl,
    0
};

const CInterfaceStubVtbl * _vsmgmt_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IVssDifferentialSoftwareSnapshotMgmtStubVtbl,
    ( CInterfaceStubVtbl *) &_IVssSnapshotMgmtStubVtbl,
    ( CInterfaceStubVtbl *) &_IVssEnumMgmtObjectStubVtbl,
    0
};

PCInterfaceName const _vsmgmt_InterfaceNamesList[] = 
{
    "IVssDifferentialSoftwareSnapshotMgmt",
    "IVssSnapshotMgmt",
    "IVssEnumMgmtObject",
    0
};


#define _vsmgmt_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _vsmgmt, pIID, n)

int __stdcall _vsmgmt_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _vsmgmt, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _vsmgmt, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _vsmgmt, 3, *pIndex )
    
}

const ExtendedProxyFileInfo vsmgmt_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _vsmgmt_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _vsmgmt_StubVtblList,
    (const PCInterfaceName * ) & _vsmgmt_InterfaceNamesList,
    0, // no delegation
    & _vsmgmt_IID_Lookup, 
    3,
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

