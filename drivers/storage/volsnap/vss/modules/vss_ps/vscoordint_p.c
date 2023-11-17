

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "vscoordint.h"

#define TYPE_FORMAT_STRING_SIZE   255                               
#define PROC_FORMAT_STRING_SIZE   943                               
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

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


extern const MIDL_SERVER_INFO IVssCoordinator_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssCoordinator_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVssShim_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssShim_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVssAdmin_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssAdmin_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

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

	/* Procedure SetContext */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lContext */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartSnapshotSet */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x4c ),	/* 76 */
/* 50 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSnapshotSetId */

/* 60 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddToSnapshotSet */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x5 ),	/* 5 */
/* 80 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 82 */	NdrFcShort( 0x30 ),	/* 48 */
/* 84 */	NdrFcShort( 0x4c ),	/* 76 */
/* 86 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszVolumeName */

/* 96 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter ProviderId */

/* 102 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter pSnapshotId */

/* 108 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 110 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 112 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoSnapshotSet */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x6 ),	/* 6 */
/* 128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWriterCallback */

/* 144 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 148 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppAsync */

/* 150 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 154 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSnapshotProperties */

/* 162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x7 ),	/* 7 */
/* 170 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 172 */	NdrFcShort( 0x30 ),	/* 48 */
/* 174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 176 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 178 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotId */

/* 186 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 190 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter pProp */

/* 192 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 194 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 196 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 200 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExposeSnapshot */

/* 204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 212 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 214 */	NdrFcShort( 0x38 ),	/* 56 */
/* 216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 218 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotId */

/* 228 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 232 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter wszPathFromRoot */

/* 234 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 236 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 238 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter lAttributes */

/* 240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 242 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wszExpose */

/* 246 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 248 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 250 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter pwszExposed */

/* 252 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 254 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 256 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ImportSnapshots */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x9 ),	/* 9 */
/* 272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 280 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXMLSnapshotSet */

/* 288 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter ppAsync */

/* 294 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 298 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Query */

/* 306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0xa ),	/* 10 */
/* 314 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 316 */	NdrFcShort( 0x3c ),	/* 60 */
/* 318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 320 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 322 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter QueriedObjectId */

/* 330 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 334 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter eQueriedObjectType */

/* 336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 338 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 340 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter eReturnedObjectsType */

/* 342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 344 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 346 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppEnum */

/* 348 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 350 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 352 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 356 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteSnapshots */

/* 360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0xb ),	/* 11 */
/* 368 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 370 */	NdrFcShort( 0x3e ),	/* 62 */
/* 372 */	NdrFcShort( 0x68 ),	/* 104 */
/* 374 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 376 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SourceObjectId */

/* 384 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 388 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter eSourceObjectType */

/* 390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 392 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 394 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter bForceDelete */

/* 396 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 398 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plDeletedSnapshots */

/* 402 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 404 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNondeletedSnapshotID */

/* 408 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 410 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 412 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BreakSnapshotSet */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0xc ),	/* 12 */
/* 428 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 430 */	NdrFcShort( 0x30 ),	/* 48 */
/* 432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotSetId */

/* 444 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RevertToSnapshot */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0xd ),	/* 13 */
/* 464 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 466 */	NdrFcShort( 0x38 ),	/* 56 */
/* 468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotId */

/* 480 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter bForceDismount */

/* 486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 488 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 494 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryRevertStatus */

/* 498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0xe ),	/* 14 */
/* 506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszVolume */

/* 522 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 526 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter ppAsync */

/* 528 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 532 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsVolumeSupported */

/* 540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0xf ),	/* 15 */
/* 548 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 550 */	NdrFcShort( 0x30 ),	/* 48 */
/* 552 */	NdrFcShort( 0x24 ),	/* 36 */
/* 554 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 556 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ProviderId */

/* 564 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 568 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter pwszVolumeName */

/* 570 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 572 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 574 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter pbSupportedByThisProvider */

/* 576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 578 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 584 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsVolumeSnapshotted */

/* 588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x10 ),	/* 16 */
/* 596 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 598 */	NdrFcShort( 0x30 ),	/* 48 */
/* 600 */	NdrFcShort( 0x40 ),	/* 64 */
/* 602 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 604 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ProviderId */

/* 612 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 616 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter pwszVolumeName */

/* 618 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 620 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 622 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter pbSnapshotsPresent */

/* 624 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 626 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plSnapshotCompatibility */

/* 630 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 632 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 638 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetWriterInstances */

/* 642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x11 ),	/* 17 */
/* 650 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 656 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 658 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x1 ),	/* 1 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lWriterInstanceIdCount */

/* 666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 668 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgWriterInstanceId */

/* 672 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 674 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 676 */	NdrFcShort( 0xc6 ),	/* Type Offset=198 */

	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SimulateSnapshotFreeze */

/* 684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x3 ),	/* 3 */
/* 692 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 694 */	NdrFcShort( 0x40 ),	/* 64 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 700 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter guidSnapshotSetId */

/* 708 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 712 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ulOptionFlags */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ulVolumeCount */

/* 720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 722 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppwszVolumeNamesArray */

/* 726 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 728 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 730 */	NdrFcShort( 0xda ),	/* Type Offset=218 */

	/* Parameter ppAsync */

/* 732 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 734 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 736 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 740 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnregisterProvider */


	/* Procedure SimulateSnapshotThaw */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x4 ),	/* 4 */
/* 752 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 754 */	NdrFcShort( 0x30 ),	/* 48 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ProviderId */


	/* Parameter guidSnapshotSetId */

/* 768 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 772 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */


	/* Return value */

/* 774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 776 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WaitForSubscribingCompletion */

/* 780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x5 ),	/* 5 */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 794 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 796 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterProvider */

/* 810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x3 ),	/* 3 */
/* 818 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 820 */	NdrFcShort( 0x96 ),	/* 150 */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 826 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pProviderId */

/* 834 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 838 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ClassId */

/* 840 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 842 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 844 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter pwszProviderName */

/* 846 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 848 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 850 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter eProviderType */

/* 852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 854 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 856 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pwszProviderVersion */

/* 858 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 860 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 862 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter ProviderVersionId */

/* 864 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 866 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 868 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 872 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryProviders */

/* 876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x5 ),	/* 5 */
/* 884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 890 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 892 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppEnum */

/* 900 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 904 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Return value */

/* 906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AbortAllSnapshotsInProgress */

/* 912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x6 ),	/* 6 */
/* 920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 926 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 928 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 940 */	0x8,		/* FC_LONG */
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
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x8 ),	/* Offset= 8 (12) */
/*  6 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 12 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 14 */	NdrFcShort( 0x10 ),	/* 16 */
/* 16 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 18 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 20 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (6) */
			0x5b,		/* FC_END */
/* 24 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 26 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 28 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 30 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x0 ),	/* 0 */
/* 38 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 40 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 42 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 44 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 46 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 52 */	NdrFcLong( 0x507c37b4 ),	/* 1350318004 */
/* 56 */	NdrFcShort( 0xcf5b ),	/* -12453 */
/* 58 */	NdrFcShort( 0x4e95 ),	/* 20117 */
/* 60 */	0xb0,		/* 176 */
			0xaf,		/* 175 */
/* 62 */	0x14,		/* 20 */
			0xeb,		/* 235 */
/* 64 */	0x97,		/* 151 */
			0x67,		/* 103 */
/* 66 */	0x46,		/* 70 */
			0x7e,		/* 126 */
/* 68 */	
			0x11, 0x0,	/* FC_RP */
/* 70 */	NdrFcShort( 0x2 ),	/* Offset= 2 (72) */
/* 72 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 74 */	NdrFcShort( 0x60 ),	/* 96 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x1a ),	/* Offset= 26 (104) */
/* 80 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 82 */	NdrFcShort( 0xffba ),	/* Offset= -70 (12) */
/* 84 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 86 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (12) */
/* 88 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 90 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 92 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 94 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 96 */	0x0,		/* 0 */
			NdrFcShort( 0xffab ),	/* Offset= -85 (12) */
			0x8,		/* FC_LONG */
/* 100 */	0xb,		/* FC_HYPER */
			0xd,		/* FC_ENUM16 */
/* 102 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 104 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 106 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 108 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 110 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 112 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 114 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 116 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 118 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 120 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 122 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 124 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 126 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 128 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (132) */
/* 132 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 134 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 136 */	
			0x12, 0x0,	/* FC_UP */
/* 138 */	NdrFcShort( 0xe ),	/* Offset= 14 (152) */
/* 140 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 142 */	NdrFcShort( 0x2 ),	/* 2 */
/* 144 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 146 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 148 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 150 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 152 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (140) */
/* 158 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 160 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 162 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x4 ),	/* 4 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0xffde ),	/* Offset= -34 (136) */
/* 172 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (176) */
/* 176 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 178 */	NdrFcLong( 0xae1c7110 ),	/* -1373867760 */
/* 182 */	NdrFcShort( 0x2f60 ),	/* 12128 */
/* 184 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 186 */	0x8a,		/* 138 */
			0x39,		/* 57 */
/* 188 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 190 */	0x4f,		/* 79 */
			0x72,		/* 114 */
/* 192 */	0xd8,		/* 216 */
			0xe3,		/* 227 */
/* 194 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 196 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 198 */	
			0x12, 0x0,	/* FC_UP */
/* 200 */	NdrFcShort( 0x2 ),	/* Offset= 2 (202) */
/* 202 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 206 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 210 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 212 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 214 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (12) */
/* 216 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 218 */	
			0x12, 0x0,	/* FC_UP */
/* 220 */	NdrFcShort( 0x2 ),	/* Offset= 2 (222) */
/* 222 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 224 */	NdrFcShort( 0x4 ),	/* 4 */
/* 226 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 228 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 230 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 232 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 234 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 236 */	NdrFcShort( 0x4 ),	/* 4 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 248 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 250 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 252 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IVssCoordinator, ver. 0.0,
   GUID={0xda9f41d4,0x1a5d,0x41d0,{0xa6,0x14,0x6d,0xfd,0x78,0xdf,0x5d,0x05}} */

#pragma code_seg(".orpc")
static const unsigned short IVssCoordinator_FormatStringOffsetTable[] =
    {
    0,
    36,
    72,
    120,
    162,
    204,
    264,
    306,
    360,
    420,
    456,
    498,
    540,
    588,
    642
    };

static const MIDL_STUBLESS_PROXY_INFO IVssCoordinator_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssCoordinator_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssCoordinator_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssCoordinator_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IVssCoordinatorProxyVtbl = 
{
    &IVssCoordinator_ProxyInfo,
    &IID_IVssCoordinator,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::SetContext */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::StartSnapshotSet */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::AddToSnapshotSet */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::DoSnapshotSet */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::GetSnapshotProperties */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::ExposeSnapshot */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::ImportSnapshots */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::Query */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::DeleteSnapshots */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::BreakSnapshotSet */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::RevertToSnapshot */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::QueryRevertStatus */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::IsVolumeSupported */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::IsVolumeSnapshotted */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinator::SetWriterInstances */
};

const CInterfaceStubVtbl _IVssCoordinatorStubVtbl =
{
    &IID_IVssCoordinator,
    &IVssCoordinator_ServerInfo,
    18,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IVssShim, ver. 0.0,
   GUID={0xD6222095,0x05C3,0x42f3,{0x81,0xD9,0xA4,0xA0,0xCE,0xC0,0x5C,0x26}} */

#pragma code_seg(".orpc")
static const unsigned short IVssShim_FormatStringOffsetTable[] =
    {
    684,
    744,
    780
    };

static const MIDL_STUBLESS_PROXY_INFO IVssShim_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssShim_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssShim_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssShim_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IVssShimProxyVtbl = 
{
    &IVssShim_ProxyInfo,
    &IID_IVssShim,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssShim::SimulateSnapshotFreeze */ ,
    (void *) (INT_PTR) -1 /* IVssShim::SimulateSnapshotThaw */ ,
    (void *) (INT_PTR) -1 /* IVssShim::WaitForSubscribingCompletion */
};

const CInterfaceStubVtbl _IVssShimStubVtbl =
{
    &IID_IVssShim,
    &IVssShim_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IVssAdmin, ver. 0.0,
   GUID={0x77ED5996,0x2F63,0x11d3,{0x8A,0x39,0x00,0xC0,0x4F,0x72,0xD8,0xE3}} */

#pragma code_seg(".orpc")
static const unsigned short IVssAdmin_FormatStringOffsetTable[] =
    {
    810,
    744,
    876,
    912
    };

static const MIDL_STUBLESS_PROXY_INFO IVssAdmin_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssAdmin_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssAdmin_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssAdmin_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IVssAdminProxyVtbl = 
{
    &IVssAdmin_ProxyInfo,
    &IID_IVssAdmin,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssAdmin::RegisterProvider */ ,
    (void *) (INT_PTR) -1 /* IVssAdmin::UnregisterProvider */ ,
    (void *) (INT_PTR) -1 /* IVssAdmin::QueryProviders */ ,
    (void *) (INT_PTR) -1 /* IVssAdmin::AbortAllSnapshotsInProgress */
};

const CInterfaceStubVtbl _IVssAdminStubVtbl =
{
    &IID_IVssAdmin,
    &IVssAdmin_ServerInfo,
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
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0   /* Reserved5 */
    };

const CInterfaceProxyVtbl * _vscoordint_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IVssShimProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVssAdminProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVssCoordinatorProxyVtbl,
    0
};

const CInterfaceStubVtbl * _vscoordint_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IVssShimStubVtbl,
    ( CInterfaceStubVtbl *) &_IVssAdminStubVtbl,
    ( CInterfaceStubVtbl *) &_IVssCoordinatorStubVtbl,
    0
};

PCInterfaceName const _vscoordint_InterfaceNamesList[] = 
{
    "IVssShim",
    "IVssAdmin",
    "IVssCoordinator",
    0
};


#define _vscoordint_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _vscoordint, pIID, n)

int __stdcall _vscoordint_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _vscoordint, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _vscoordint, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _vscoordint, 3, *pIndex )
    
}

const ExtendedProxyFileInfo vscoordint_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _vscoordint_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _vscoordint_StubVtblList,
    (const PCInterfaceName * ) & _vscoordint_InterfaceNamesList,
    0, // no delegation
    & _vscoordint_IID_Lookup, 
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

