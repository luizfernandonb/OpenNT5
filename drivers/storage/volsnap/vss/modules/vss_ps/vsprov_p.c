

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "vsprov.h"

#define TYPE_FORMAT_STRING_SIZE   1467                              
#define PROC_FORMAT_STRING_SIZE   1105                              
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


extern const MIDL_SERVER_INFO IVssSoftwareSnapshotProvider_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssSoftwareSnapshotProvider_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVssProviderCreateSnapshotSet_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssProviderCreateSnapshotSet_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVssProviderNotifications_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssProviderNotifications_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVssHardwareSnapshotProvider_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssHardwareSnapshotProvider_ProxyInfo;


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

	/* Procedure GetSnapshotProperties */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 46 */	NdrFcShort( 0x30 ),	/* 48 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotId */

/* 60 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter pProp */

/* 66 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 68 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 70 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Query */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x5 ),	/* 5 */
/* 86 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 88 */	NdrFcShort( 0x3c ),	/* 60 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 94 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter QueriedObjectId */

/* 102 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 106 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter eQueriedObjectType */

/* 108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 110 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 112 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter eReturnedObjectsType */

/* 114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 116 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 118 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ppEnum */

/* 120 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 122 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 124 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteSnapshots */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x6 ),	/* 6 */
/* 140 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 142 */	NdrFcShort( 0x3e ),	/* 62 */
/* 144 */	NdrFcShort( 0x68 ),	/* 104 */
/* 146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SourceObjectId */

/* 156 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter eSourceObjectType */

/* 162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 164 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 166 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter bForceDelete */

/* 168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 170 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plDeletedSnapshots */

/* 174 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 176 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNondeletedSnapshotID */

/* 180 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 182 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 184 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BeginPrepareSnapshot */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x7 ),	/* 7 */
/* 200 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 202 */	NdrFcShort( 0x68 ),	/* 104 */
/* 204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 206 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotSetId */

/* 216 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter SnapshotId */

/* 222 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 226 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter pwszVolumeName */

/* 228 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 230 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 232 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Parameter lNewContext */

/* 234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 236 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 242 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsVolumeSupported */

/* 246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x24 ),	/* 36 */
/* 260 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 262 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszVolumeName */

/* 270 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 274 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Parameter pbSupportedByThisProvider */

/* 276 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 278 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsVolumeSnapshotted */

/* 288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x9 ),	/* 9 */
/* 296 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x40 ),	/* 64 */
/* 302 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 304 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszVolumeName */

/* 312 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 316 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Parameter pbSnapshotsPresent */

/* 318 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 320 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plSnapshotCompatibility */

/* 324 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 326 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSnapshotProperty */

/* 336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0xa ),	/* 10 */
/* 344 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 346 */	NdrFcShort( 0x36 ),	/* 54 */
/* 348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 350 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 352 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x20 ),	/* 32 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotId */

/* 360 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 364 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter eSnapshotPropertyId */

/* 366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 370 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter vProperty */

/* 372 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 374 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 376 */	NdrFcShort( 0x45e ),	/* Type Offset=1118 */

	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RevertToSnapshot */

/* 384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0xb ),	/* 11 */
/* 392 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 394 */	NdrFcShort( 0x30 ),	/* 48 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotId */

/* 408 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryRevertStatus */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0xc ),	/* 12 */
/* 428 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 434 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pwszVolume */

/* 444 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Parameter ppAsync */

/* 450 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 454 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndPrepareSnapshots */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x3 ),	/* 3 */
/* 470 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 472 */	NdrFcShort( 0x30 ),	/* 48 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 478 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotSetId */

/* 486 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 494 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PreCommitSnapshots */

/* 498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x4 ),	/* 4 */
/* 506 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 508 */	NdrFcShort( 0x30 ),	/* 48 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotSetId */

/* 522 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 526 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 530 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CommitSnapshots */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x5 ),	/* 5 */
/* 542 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 544 */	NdrFcShort( 0x30 ),	/* 48 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 550 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotSetId */

/* 558 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 562 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 566 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PostCommitSnapshots */

/* 570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x6 ),	/* 6 */
/* 578 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 580 */	NdrFcShort( 0x38 ),	/* 56 */
/* 582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 584 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotSetId */

/* 594 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 598 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter lSnapshotsCount */

/* 600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 602 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PreFinalCommitSnapshots */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x7 ),	/* 7 */
/* 620 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 622 */	NdrFcShort( 0x30 ),	/* 48 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotSetId */

/* 636 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PostFinalCommitSnapshots */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 656 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 658 */	NdrFcShort( 0x30 ),	/* 48 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotSetId */

/* 672 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AbortSnapshots */

/* 684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x9 ),	/* 9 */
/* 692 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 694 */	NdrFcShort( 0x30 ),	/* 48 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 700 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotSetId */

/* 708 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 712 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 716 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnLoad */

/* 720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x3 ),	/* 3 */
/* 728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 734 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 736 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCallback */

/* 744 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 748 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUnload */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x4 ),	/* 4 */
/* 764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 772 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bForceUnload */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AreLunsSupported */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x3 ),	/* 3 */
/* 800 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 802 */	NdrFcShort( 0x10 ),	/* 16 */
/* 804 */	NdrFcShort( 0x24 ),	/* 36 */
/* 806 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 808 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 810 */	NdrFcShort( 0x6 ),	/* 6 */
/* 812 */	NdrFcShort( 0x7 ),	/* 7 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lLunCount */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lContext */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgwszDevices */

/* 828 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 832 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter pLunInformation */

/* 834 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 838 */	NdrFcShort( 0x55a ),	/* Type Offset=1370 */

	/* Parameter pbIsSupported */

/* 840 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 842 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 848 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FillInLunInfo */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x4 ),	/* 4 */
/* 860 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x24 ),	/* 36 */
/* 866 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 868 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 870 */	NdrFcShort( 0x5 ),	/* 5 */
/* 872 */	NdrFcShort( 0x5 ),	/* 5 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wszDeviceName */

/* 876 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 880 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Parameter pLunInfo */

/* 882 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 886 */	NdrFcShort( 0x528 ),	/* Type Offset=1320 */

	/* Parameter pbIsSupported */

/* 888 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 890 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BeginPrepareSnapshot */

/* 900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x5 ),	/* 5 */
/* 908 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 910 */	NdrFcShort( 0x70 ),	/* 112 */
/* 912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 914 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 916 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 918 */	NdrFcShort( 0x6 ),	/* 6 */
/* 920 */	NdrFcShort( 0x7 ),	/* 7 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SnapshotSetId */

/* 924 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter SnapshotId */

/* 930 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 932 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 934 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter lContext */

/* 936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 938 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lLunCount */

/* 942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 944 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgDeviceNames */

/* 948 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 950 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 952 */	NdrFcShort( 0x574 ),	/* Type Offset=1396 */

	/* Parameter rgLunInformation */

/* 954 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 956 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 958 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 962 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTargetLuns */

/* 966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x6 ),	/* 6 */
/* 974 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 980 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 982 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 984 */	NdrFcShort( 0x6 ),	/* 6 */
/* 986 */	NdrFcShort( 0xd ),	/* 13 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lLunCount */

/* 990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgDeviceNames */

/* 996 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1000 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter rgSourceLuns */

/* 1002 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1006 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Parameter rgDestinationLuns */

/* 1008 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1010 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1012 */	NdrFcShort( 0x55a ),	/* Type Offset=1370 */

	/* Return value */

/* 1014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1016 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LocateLuns */

/* 1020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1028 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1036 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lLunCount */

/* 1044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgSourceLuns */

/* 1050 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1054 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Return value */

/* 1056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnLunEmpty */

/* 1062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1070 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1076 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1078 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wszDeviceName */

/* 1086 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1090 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Parameter pInformation */

/* 1092 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1094 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1096 */	NdrFcShort( 0x5b6 ),	/* Type Offset=1462 */

	/* Return value */

/* 1098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1102 */	0x8,		/* FC_LONG */
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
/* 22 */	NdrFcShort( 0x2 ),	/* Offset= 2 (24) */
/* 24 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 26 */	NdrFcShort( 0x60 ),	/* 96 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */
/* 30 */	NdrFcShort( 0x1a ),	/* Offset= 26 (56) */
/* 32 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 34 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (8) */
/* 36 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 38 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (8) */
/* 40 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 42 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 44 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 46 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 48 */	0x0,		/* 0 */
			NdrFcShort( 0xffd7 ),	/* Offset= -41 (8) */
			0x8,		/* FC_LONG */
/* 52 */	0xb,		/* FC_HYPER */
			0xd,		/* FC_ENUM16 */
/* 54 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 56 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 58 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 60 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 62 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 64 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 66 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 68 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 70 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 72 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 74 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 76 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 78 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 80 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 82 */	NdrFcShort( 0x2 ),	/* Offset= 2 (84) */
/* 84 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 86 */	NdrFcLong( 0xae1c7110 ),	/* -1373867760 */
/* 90 */	NdrFcShort( 0x2f60 ),	/* 12128 */
/* 92 */	NdrFcShort( 0x11d3 ),	/* 4563 */
/* 94 */	0x8a,		/* 138 */
			0x39,		/* 57 */
/* 96 */	0x0,		/* 0 */
			0xc0,		/* 192 */
/* 98 */	0x4f,		/* 79 */
			0x72,		/* 114 */
/* 100 */	0xd8,		/* 216 */
			0xe3,		/* 227 */
/* 102 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 104 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 106 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 108 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (8) */
/* 110 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 112 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 114 */	
			0x12, 0x0,	/* FC_UP */
/* 116 */	NdrFcShort( 0x3d6 ),	/* Offset= 982 (1098) */
/* 118 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 120 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 122 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 124 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (128) */
/* 128 */	NdrFcShort( 0x10 ),	/* 16 */
/* 130 */	NdrFcShort( 0x2f ),	/* 47 */
/* 132 */	NdrFcLong( 0x14 ),	/* 20 */
/* 136 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 138 */	NdrFcLong( 0x3 ),	/* 3 */
/* 142 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 144 */	NdrFcLong( 0x11 ),	/* 17 */
/* 148 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 150 */	NdrFcLong( 0x2 ),	/* 2 */
/* 154 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 156 */	NdrFcLong( 0x4 ),	/* 4 */
/* 160 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 162 */	NdrFcLong( 0x5 ),	/* 5 */
/* 166 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 168 */	NdrFcLong( 0xb ),	/* 11 */
/* 172 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 174 */	NdrFcLong( 0xa ),	/* 10 */
/* 178 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 180 */	NdrFcLong( 0x6 ),	/* 6 */
/* 184 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (416) */
/* 186 */	NdrFcLong( 0x7 ),	/* 7 */
/* 190 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 192 */	NdrFcLong( 0x8 ),	/* 8 */
/* 196 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (422) */
/* 198 */	NdrFcLong( 0xd ),	/* 13 */
/* 202 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (448) */
/* 204 */	NdrFcLong( 0x9 ),	/* 9 */
/* 208 */	NdrFcShort( 0x102 ),	/* Offset= 258 (466) */
/* 210 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 214 */	NdrFcShort( 0x10e ),	/* Offset= 270 (484) */
/* 216 */	NdrFcLong( 0x24 ),	/* 36 */
/* 220 */	NdrFcShort( 0x324 ),	/* Offset= 804 (1024) */
/* 222 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 226 */	NdrFcShort( 0x31e ),	/* Offset= 798 (1024) */
/* 228 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 232 */	NdrFcShort( 0x31c ),	/* Offset= 796 (1028) */
/* 234 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 238 */	NdrFcShort( 0x31a ),	/* Offset= 794 (1032) */
/* 240 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 244 */	NdrFcShort( 0x318 ),	/* Offset= 792 (1036) */
/* 246 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 250 */	NdrFcShort( 0x316 ),	/* Offset= 790 (1040) */
/* 252 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 256 */	NdrFcShort( 0x314 ),	/* Offset= 788 (1044) */
/* 258 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 262 */	NdrFcShort( 0x312 ),	/* Offset= 786 (1048) */
/* 264 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 268 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (1032) */
/* 270 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 274 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (1036) */
/* 276 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 280 */	NdrFcShort( 0x304 ),	/* Offset= 772 (1052) */
/* 282 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 286 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (1048) */
/* 288 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 292 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (1056) */
/* 294 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 298 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (1060) */
/* 300 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 304 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (1064) */
/* 306 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 310 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (1068) */
/* 312 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 316 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (1072) */
/* 318 */	NdrFcLong( 0x10 ),	/* 16 */
/* 322 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 324 */	NdrFcLong( 0x12 ),	/* 18 */
/* 328 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 330 */	NdrFcLong( 0x13 ),	/* 19 */
/* 334 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 336 */	NdrFcLong( 0x15 ),	/* 21 */
/* 340 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 342 */	NdrFcLong( 0x16 ),	/* 22 */
/* 346 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 348 */	NdrFcLong( 0x17 ),	/* 23 */
/* 352 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 354 */	NdrFcLong( 0xe ),	/* 14 */
/* 358 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (1080) */
/* 360 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 364 */	NdrFcShort( 0x2d6 ),	/* Offset= 726 (1090) */
/* 366 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 370 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (1094) */
/* 372 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 376 */	NdrFcShort( 0x290 ),	/* Offset= 656 (1032) */
/* 378 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 382 */	NdrFcShort( 0x28e ),	/* Offset= 654 (1036) */
/* 384 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 388 */	NdrFcShort( 0x28c ),	/* Offset= 652 (1040) */
/* 390 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 394 */	NdrFcShort( 0x282 ),	/* Offset= 642 (1036) */
/* 396 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 400 */	NdrFcShort( 0x27c ),	/* Offset= 636 (1036) */
/* 402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* Offset= 0 (406) */
/* 408 */	NdrFcLong( 0x1 ),	/* 1 */
/* 412 */	NdrFcShort( 0x0 ),	/* Offset= 0 (412) */
/* 414 */	NdrFcShort( 0xffff ),	/* Offset= -1 (413) */
/* 416 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 420 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 422 */	
			0x12, 0x0,	/* FC_UP */
/* 424 */	NdrFcShort( 0xe ),	/* Offset= 14 (438) */
/* 426 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 428 */	NdrFcShort( 0x2 ),	/* 2 */
/* 430 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 432 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 434 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 436 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 438 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 442 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (426) */
/* 444 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 446 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 448 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 460 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 462 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 464 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 466 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 468 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 478 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 480 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 482 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 484 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 486 */	NdrFcShort( 0x2 ),	/* Offset= 2 (488) */
/* 488 */	
			0x12, 0x0,	/* FC_UP */
/* 490 */	NdrFcShort( 0x204 ),	/* Offset= 516 (1006) */
/* 492 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 494 */	NdrFcShort( 0x18 ),	/* 24 */
/* 496 */	NdrFcShort( 0xa ),	/* 10 */
/* 498 */	NdrFcLong( 0x8 ),	/* 8 */
/* 502 */	NdrFcShort( 0x5a ),	/* Offset= 90 (592) */
/* 504 */	NdrFcLong( 0xd ),	/* 13 */
/* 508 */	NdrFcShort( 0x7e ),	/* Offset= 126 (634) */
/* 510 */	NdrFcLong( 0x9 ),	/* 9 */
/* 514 */	NdrFcShort( 0x9e ),	/* Offset= 158 (672) */
/* 516 */	NdrFcLong( 0xc ),	/* 12 */
/* 520 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (720) */
/* 522 */	NdrFcLong( 0x24 ),	/* 36 */
/* 526 */	NdrFcShort( 0x124 ),	/* Offset= 292 (818) */
/* 528 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 532 */	NdrFcShort( 0x12e ),	/* Offset= 302 (834) */
/* 534 */	NdrFcLong( 0x10 ),	/* 16 */
/* 538 */	NdrFcShort( 0x148 ),	/* Offset= 328 (866) */
/* 540 */	NdrFcLong( 0x2 ),	/* 2 */
/* 544 */	NdrFcShort( 0x162 ),	/* Offset= 354 (898) */
/* 546 */	NdrFcLong( 0x3 ),	/* 3 */
/* 550 */	NdrFcShort( 0x17c ),	/* Offset= 380 (930) */
/* 552 */	NdrFcLong( 0x14 ),	/* 20 */
/* 556 */	NdrFcShort( 0x196 ),	/* Offset= 406 (962) */
/* 558 */	NdrFcShort( 0xffff ),	/* Offset= -1 (557) */
/* 560 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 562 */	NdrFcShort( 0x4 ),	/* 4 */
/* 564 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 570 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 572 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 574 */	NdrFcShort( 0x4 ),	/* 4 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x1 ),	/* 1 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	0x12, 0x0,	/* FC_UP */
/* 586 */	NdrFcShort( 0xff6c ),	/* Offset= -148 (438) */
/* 588 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 590 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 592 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 596 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 598 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 600 */	NdrFcShort( 0x4 ),	/* 4 */
/* 602 */	NdrFcShort( 0x4 ),	/* 4 */
/* 604 */	0x11, 0x0,	/* FC_RP */
/* 606 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (560) */
/* 608 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 610 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 612 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 622 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 626 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 628 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 630 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (448) */
/* 632 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 634 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x6 ),	/* Offset= 6 (646) */
/* 642 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 644 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 646 */	
			0x11, 0x0,	/* FC_RP */
/* 648 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (612) */
/* 650 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 660 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 664 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 666 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 668 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (466) */
/* 670 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 672 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x6 ),	/* Offset= 6 (684) */
/* 680 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 682 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 684 */	
			0x11, 0x0,	/* FC_RP */
/* 686 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (650) */
/* 688 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 690 */	NdrFcShort( 0x4 ),	/* 4 */
/* 692 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 698 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 700 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 702 */	NdrFcShort( 0x4 ),	/* 4 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	0x12, 0x0,	/* FC_UP */
/* 714 */	NdrFcShort( 0x180 ),	/* Offset= 384 (1098) */
/* 716 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 718 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 720 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x6 ),	/* Offset= 6 (732) */
/* 728 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 730 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 732 */	
			0x11, 0x0,	/* FC_RP */
/* 734 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (688) */
/* 736 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 738 */	NdrFcLong( 0x2f ),	/* 47 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 748 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 750 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 752 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 754 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 758 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 760 */	NdrFcShort( 0x4 ),	/* 4 */
/* 762 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 764 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 766 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 768 */	NdrFcShort( 0x10 ),	/* 16 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0xa ),	/* Offset= 10 (782) */
/* 774 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 776 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 778 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (736) */
/* 780 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 782 */	
			0x12, 0x0,	/* FC_UP */
/* 784 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (754) */
/* 786 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 788 */	NdrFcShort( 0x4 ),	/* 4 */
/* 790 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 796 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 798 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 800 */	NdrFcShort( 0x4 ),	/* 4 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	0x12, 0x0,	/* FC_UP */
/* 812 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (766) */
/* 814 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 816 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 818 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x6 ),	/* Offset= 6 (830) */
/* 826 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 828 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 830 */	
			0x11, 0x0,	/* FC_RP */
/* 832 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (786) */
/* 834 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 836 */	NdrFcShort( 0x18 ),	/* 24 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0xa ),	/* Offset= 10 (850) */
/* 842 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 844 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 846 */	NdrFcShort( 0xfcba ),	/* Offset= -838 (8) */
/* 848 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 850 */	
			0x11, 0x0,	/* FC_RP */
/* 852 */	NdrFcShort( 0xff10 ),	/* Offset= -240 (612) */
/* 854 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 858 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 864 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 866 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 870 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 872 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 874 */	NdrFcShort( 0x4 ),	/* 4 */
/* 876 */	NdrFcShort( 0x4 ),	/* 4 */
/* 878 */	0x12, 0x0,	/* FC_UP */
/* 880 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (854) */
/* 882 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 884 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 886 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 888 */	NdrFcShort( 0x2 ),	/* 2 */
/* 890 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 896 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 898 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 902 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 904 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 906 */	NdrFcShort( 0x4 ),	/* 4 */
/* 908 */	NdrFcShort( 0x4 ),	/* 4 */
/* 910 */	0x12, 0x0,	/* FC_UP */
/* 912 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (886) */
/* 914 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 916 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 918 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 920 */	NdrFcShort( 0x4 ),	/* 4 */
/* 922 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 928 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 930 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 934 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 936 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 938 */	NdrFcShort( 0x4 ),	/* 4 */
/* 940 */	NdrFcShort( 0x4 ),	/* 4 */
/* 942 */	0x12, 0x0,	/* FC_UP */
/* 944 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (918) */
/* 946 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 948 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 950 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 954 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 960 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 962 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 966 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 968 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 970 */	NdrFcShort( 0x4 ),	/* 4 */
/* 972 */	NdrFcShort( 0x4 ),	/* 4 */
/* 974 */	0x12, 0x0,	/* FC_UP */
/* 976 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (950) */
/* 978 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 980 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 982 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 986 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 988 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 990 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 994 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 996 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 998 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1000 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1002 */	NdrFcShort( 0xffec ),	/* Offset= -20 (982) */
/* 1004 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1006 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1008 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1010 */	NdrFcShort( 0xffec ),	/* Offset= -20 (990) */
/* 1012 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1012) */
/* 1014 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1016 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1018 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1020 */	NdrFcShort( 0xfdf0 ),	/* Offset= -528 (492) */
/* 1022 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1024 */	
			0x12, 0x0,	/* FC_UP */
/* 1026 */	NdrFcShort( 0xfefc ),	/* Offset= -260 (766) */
/* 1028 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1030 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1032 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1034 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1036 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1038 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1040 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1042 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1044 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1046 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1048 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1050 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1052 */	
			0x12, 0x0,	/* FC_UP */
/* 1054 */	NdrFcShort( 0xfd82 ),	/* Offset= -638 (416) */
/* 1056 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1058 */	NdrFcShort( 0xfd84 ),	/* Offset= -636 (422) */
/* 1060 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1062 */	NdrFcShort( 0xfd9a ),	/* Offset= -614 (448) */
/* 1064 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1066 */	NdrFcShort( 0xfda8 ),	/* Offset= -600 (466) */
/* 1068 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1070 */	NdrFcShort( 0xfdb6 ),	/* Offset= -586 (484) */
/* 1072 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1074 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1076) */
/* 1076 */	
			0x12, 0x0,	/* FC_UP */
/* 1078 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1098) */
/* 1080 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1082 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1084 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1086 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1088 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1090 */	
			0x12, 0x0,	/* FC_UP */
/* 1092 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1080) */
/* 1094 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1096 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1098 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1100 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1104) */
/* 1106 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1108 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1110 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1112 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1114 */	NdrFcShort( 0xfc1c ),	/* Offset= -996 (118) */
/* 1116 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1118 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0xfc0c ),	/* Offset= -1012 (114) */
/* 1128 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1132) */
/* 1132 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1134 */	NdrFcLong( 0x507c37b4 ),	/* 1350318004 */
/* 1138 */	NdrFcShort( 0xcf5b ),	/* -12453 */
/* 1140 */	NdrFcShort( 0x4e95 ),	/* 20117 */
/* 1142 */	0xb0,		/* 176 */
			0xaf,		/* 175 */
/* 1144 */	0x14,		/* 20 */
			0xeb,		/* 235 */
/* 1146 */	0x97,		/* 151 */
			0x67,		/* 103 */
/* 1148 */	0x46,		/* 70 */
			0x7e,		/* 126 */
/* 1150 */	
			0x12, 0x0,	/* FC_UP */
/* 1152 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1154) */
/* 1154 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1158 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1162 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1164 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1166 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1168 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1180 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1182 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1184 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1186 */	
			0x11, 0x0,	/* FC_RP */
/* 1188 */	NdrFcShort( 0xb6 ),	/* Offset= 182 (1370) */
/* 1190 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1194 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1198 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1200 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1202 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1216) */
/* 1210 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 1212 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1214 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1216 */	
			0x13, 0x0,	/* FC_OP */
/* 1218 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (1190) */
/* 1220 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1226 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1228 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1230 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1234 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1236 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1238 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1202) */
/* 1240 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1242 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1244 */	NdrFcShort( 0xc ),	/* 12 */
/* 1246 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1248 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1254 */	0x13, 0x0,	/* FC_OP */
/* 1256 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1220) */
/* 1258 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1260 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1262 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1264 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1268 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1270 */	NdrFcShort( 0xc ),	/* 12 */
/* 1272 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1274 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1276 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1278 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1290) */
/* 1284 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 1286 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1288 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1290 */	
			0x13, 0x0,	/* FC_OP */
/* 1292 */	NdrFcShort( 0xfde6 ),	/* Offset= -538 (754) */
/* 1294 */	
			0x13, 0x0,	/* FC_OP */
/* 1296 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1264) */
/* 1298 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1304 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1306 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1308 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1312 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1314 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1316 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1276) */
/* 1318 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1320 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1322 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1350) */
/* 1328 */	0x8,		/* FC_LONG */
			0x1,		/* FC_BYTE */
/* 1330 */	0x1,		/* FC_BYTE */
			0x3e,		/* FC_STRUCTPAD2 */
/* 1332 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 1334 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1336 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1338 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1340 */	NdrFcShort( 0xfacc ),	/* Offset= -1332 (8) */
/* 1342 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1344 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (1242) */
/* 1346 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1348 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1350 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1352 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1354 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1356 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1358 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1360 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1362 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1364 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1366 */	
			0x13, 0x0,	/* FC_OP */
/* 1368 */	NdrFcShort( 0xffba ),	/* Offset= -70 (1298) */
/* 1370 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1378 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1380 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1384 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1386 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1388 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (1320) */
/* 1390 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1392 */	
			0x11, 0x0,	/* FC_RP */
/* 1394 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (1320) */
/* 1396 */	
			0x12, 0x0,	/* FC_UP */
/* 1398 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1400) */
/* 1400 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1402 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1404 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1406 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1408 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1410 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1412 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1414 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1426 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1428 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1430 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1432 */	
			0x11, 0x0,	/* FC_RP */
/* 1434 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1436) */
/* 1436 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1442 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1444 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1446 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1450 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1452 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1454 */	NdrFcShort( 0xff7a ),	/* Offset= -134 (1320) */
/* 1456 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1458 */	
			0x12, 0x0,	/* FC_UP */
/* 1460 */	NdrFcShort( 0xffa6 ),	/* Offset= -90 (1370) */
/* 1462 */	
			0x12, 0x0,	/* FC_UP */
/* 1464 */	NdrFcShort( 0xff70 ),	/* Offset= -144 (1320) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Standard interface: __MIDL_itf_vsprov_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IVssSoftwareSnapshotProvider, ver. 0.0,
   GUID={0x609e123e,0x2c5a,0x44d3,{0x8f,0x01,0x0b,0x1d,0x9a,0x47,0xd1,0xff}} */

#pragma code_seg(".orpc")
static const unsigned short IVssSoftwareSnapshotProvider_FormatStringOffsetTable[] =
    {
    0,
    36,
    78,
    132,
    192,
    246,
    288,
    336,
    384,
    420
    };

static const MIDL_STUBLESS_PROXY_INFO IVssSoftwareSnapshotProvider_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssSoftwareSnapshotProvider_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssSoftwareSnapshotProvider_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssSoftwareSnapshotProvider_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IVssSoftwareSnapshotProviderProxyVtbl = 
{
    &IVssSoftwareSnapshotProvider_ProxyInfo,
    &IID_IVssSoftwareSnapshotProvider,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssSoftwareSnapshotProvider::SetContext */ ,
    (void *) (INT_PTR) -1 /* IVssSoftwareSnapshotProvider::GetSnapshotProperties */ ,
    (void *) (INT_PTR) -1 /* IVssSoftwareSnapshotProvider::Query */ ,
    (void *) (INT_PTR) -1 /* IVssSoftwareSnapshotProvider::DeleteSnapshots */ ,
    (void *) (INT_PTR) -1 /* IVssSoftwareSnapshotProvider::BeginPrepareSnapshot */ ,
    (void *) (INT_PTR) -1 /* IVssSoftwareSnapshotProvider::IsVolumeSupported */ ,
    (void *) (INT_PTR) -1 /* IVssSoftwareSnapshotProvider::IsVolumeSnapshotted */ ,
    (void *) (INT_PTR) -1 /* IVssSoftwareSnapshotProvider::SetSnapshotProperty */ ,
    (void *) (INT_PTR) -1 /* IVssSoftwareSnapshotProvider::RevertToSnapshot */ ,
    (void *) (INT_PTR) -1 /* IVssSoftwareSnapshotProvider::QueryRevertStatus */
};

const CInterfaceStubVtbl _IVssSoftwareSnapshotProviderStubVtbl =
{
    &IID_IVssSoftwareSnapshotProvider,
    &IVssSoftwareSnapshotProvider_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IVssProviderCreateSnapshotSet, ver. 0.0,
   GUID={0x5F894E5B,0x1E39,0x4778,{0x8E,0x23,0x9A,0xBA,0xD9,0xF0,0xE0,0x8C}} */

#pragma code_seg(".orpc")
static const unsigned short IVssProviderCreateSnapshotSet_FormatStringOffsetTable[] =
    {
    462,
    498,
    534,
    570,
    612,
    648,
    684
    };

static const MIDL_STUBLESS_PROXY_INFO IVssProviderCreateSnapshotSet_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssProviderCreateSnapshotSet_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssProviderCreateSnapshotSet_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssProviderCreateSnapshotSet_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IVssProviderCreateSnapshotSetProxyVtbl = 
{
    &IVssProviderCreateSnapshotSet_ProxyInfo,
    &IID_IVssProviderCreateSnapshotSet,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssProviderCreateSnapshotSet::EndPrepareSnapshots */ ,
    (void *) (INT_PTR) -1 /* IVssProviderCreateSnapshotSet::PreCommitSnapshots */ ,
    (void *) (INT_PTR) -1 /* IVssProviderCreateSnapshotSet::CommitSnapshots */ ,
    (void *) (INT_PTR) -1 /* IVssProviderCreateSnapshotSet::PostCommitSnapshots */ ,
    (void *) (INT_PTR) -1 /* IVssProviderCreateSnapshotSet::PreFinalCommitSnapshots */ ,
    (void *) (INT_PTR) -1 /* IVssProviderCreateSnapshotSet::PostFinalCommitSnapshots */ ,
    (void *) (INT_PTR) -1 /* IVssProviderCreateSnapshotSet::AbortSnapshots */
};

const CInterfaceStubVtbl _IVssProviderCreateSnapshotSetStubVtbl =
{
    &IID_IVssProviderCreateSnapshotSet,
    &IVssProviderCreateSnapshotSet_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IVssProviderNotifications, ver. 0.0,
   GUID={0xE561901F,0x03A5,0x4afe,{0x86,0xD0,0x72,0xBA,0xEE,0xCE,0x70,0x04}} */

#pragma code_seg(".orpc")
static const unsigned short IVssProviderNotifications_FormatStringOffsetTable[] =
    {
    720,
    756
    };

static const MIDL_STUBLESS_PROXY_INFO IVssProviderNotifications_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssProviderNotifications_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssProviderNotifications_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssProviderNotifications_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IVssProviderNotificationsProxyVtbl = 
{
    &IVssProviderNotifications_ProxyInfo,
    &IID_IVssProviderNotifications,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssProviderNotifications::OnLoad */ ,
    (void *) (INT_PTR) -1 /* IVssProviderNotifications::OnUnload */
};

const CInterfaceStubVtbl _IVssProviderNotificationsStubVtbl =
{
    &IID_IVssProviderNotifications,
    &IVssProviderNotifications_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IVssHardwareSnapshotProvider, ver. 0.0,
   GUID={0x9593A157,0x44E9,0x4344,{0xBB,0xEB,0x44,0xFB,0xF9,0xB0,0x6B,0x10}} */

#pragma code_seg(".orpc")
static const unsigned short IVssHardwareSnapshotProvider_FormatStringOffsetTable[] =
    {
    792,
    852,
    900,
    966,
    1020,
    1062
    };

static const MIDL_STUBLESS_PROXY_INFO IVssHardwareSnapshotProvider_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssHardwareSnapshotProvider_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssHardwareSnapshotProvider_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssHardwareSnapshotProvider_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IVssHardwareSnapshotProviderProxyVtbl = 
{
    &IVssHardwareSnapshotProvider_ProxyInfo,
    &IID_IVssHardwareSnapshotProvider,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssHardwareSnapshotProvider::AreLunsSupported */ ,
    (void *) (INT_PTR) -1 /* IVssHardwareSnapshotProvider::FillInLunInfo */ ,
    (void *) (INT_PTR) -1 /* IVssHardwareSnapshotProvider::BeginPrepareSnapshot */ ,
    (void *) (INT_PTR) -1 /* IVssHardwareSnapshotProvider::GetTargetLuns */ ,
    (void *) (INT_PTR) -1 /* IVssHardwareSnapshotProvider::LocateLuns */ ,
    (void *) (INT_PTR) -1 /* IVssHardwareSnapshotProvider::OnLunEmpty */
};

const CInterfaceStubVtbl _IVssHardwareSnapshotProviderStubVtbl =
{
    &IID_IVssHardwareSnapshotProvider,
    &IVssHardwareSnapshotProvider_ServerInfo,
    9,
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

const CInterfaceProxyVtbl * _vsprov_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IVssProviderNotificationsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVssSoftwareSnapshotProviderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVssHardwareSnapshotProviderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVssProviderCreateSnapshotSetProxyVtbl,
    0
};

const CInterfaceStubVtbl * _vsprov_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IVssProviderNotificationsStubVtbl,
    ( CInterfaceStubVtbl *) &_IVssSoftwareSnapshotProviderStubVtbl,
    ( CInterfaceStubVtbl *) &_IVssHardwareSnapshotProviderStubVtbl,
    ( CInterfaceStubVtbl *) &_IVssProviderCreateSnapshotSetStubVtbl,
    0
};

PCInterfaceName const _vsprov_InterfaceNamesList[] = 
{
    "IVssProviderNotifications",
    "IVssSoftwareSnapshotProvider",
    "IVssHardwareSnapshotProvider",
    "IVssProviderCreateSnapshotSet",
    0
};


#define _vsprov_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _vsprov, pIID, n)

int __stdcall _vsprov_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _vsprov, 4, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _vsprov, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _vsprov, 4, *pIndex )
    
}

const ExtendedProxyFileInfo vsprov_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _vsprov_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _vsprov_StubVtblList,
    (const PCInterfaceName * ) & _vsprov_InterfaceNamesList,
    0, // no delegation
    & _vsprov_IID_Lookup, 
    4,
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

