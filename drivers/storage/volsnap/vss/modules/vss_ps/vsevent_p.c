

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "vsevent.h"

#define TYPE_FORMAT_STRING_SIZE   99                                
#define PROC_FORMAT_STRING_SIZE   937                               
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


extern const MIDL_SERVER_INFO IVssWriter_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssWriter_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVssWriterCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssWriterCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVssCoordinatorCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVssCoordinatorCallback_ProxyInfo;


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

	/* Procedure RequestWriterInfo */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 16 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSnapshotSetId */

/* 24 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bWriterMetadata */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bWriterState */

/* 36 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pWriterCallback */

/* 42 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 48 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 50 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PrepareForBackup */

/* 54 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 56 */	NdrFcLong( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x4 ),	/* 4 */
/* 62 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x8 ),	/* 8 */
/* 68 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 70 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x1 ),	/* 1 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSnapshotSetId */

/* 78 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 80 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 82 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pWriterCallback */

/* 84 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 86 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 88 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PrepareForSnapshot */

/* 96 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x5 ),	/* 5 */
/* 104 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 110 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 112 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x2 ),	/* 2 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSnapshotSetId */

/* 120 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 124 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter VolumeNamesList */

/* 126 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 130 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Freeze */

/* 138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x6 ),	/* 6 */
/* 146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 152 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 154 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSnapshotSetId */

/* 162 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 166 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nApplicationLevel */

/* 168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Thaw */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x7 ),	/* 7 */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 196 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSnapshotSetId */

/* 204 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PostSnapshot */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 230 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 232 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x2 ),	/* 2 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSnapshotSetId */

/* 240 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pWriterCallback */

/* 246 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter SnapshotDevicesList */

/* 252 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 256 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BackupComplete */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x9 ),	/* 9 */
/* 272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 280 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSnapshotSetId */

/* 288 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pWriterCallback */

/* 294 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 298 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BackupShutdown */

/* 306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0xa ),	/* 10 */
/* 314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 320 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 322 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSnapshotSetId */

/* 330 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 334 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Abort */

/* 342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0xb ),	/* 11 */
/* 350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 356 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 358 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x1 ),	/* 1 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSnapshotSetId */

/* 366 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 370 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PreRestore */

/* 378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0xc ),	/* 12 */
/* 386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 392 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 394 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWriterCallback */

/* 402 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 406 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PostRestore */

/* 414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0xd ),	/* 13 */
/* 422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 428 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 430 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWriterCallback */

/* 438 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 442 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExposeWriterMetadata */

/* 450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x7 ),	/* 7 */
/* 458 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 464 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 466 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x4 ),	/* 4 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter WriterInstanceId */

/* 474 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 478 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter WriterClassId */

/* 480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 484 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrWriterName */

/* 486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 488 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 490 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter strWriterXmlMetadata */

/* 492 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 496 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 500 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContent */

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 518 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 520 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter WriterInstanceId */

/* 528 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 532 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pbstrXMLDocContent */

/* 534 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 538 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 542 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContent */

/* 546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x9 ),	/* 9 */
/* 554 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 560 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 562 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x2 ),	/* 2 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter WriterInstanceId */

/* 570 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 574 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXMLDocContent */

/* 576 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 578 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 580 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBackupState */

/* 588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0xa ),	/* 10 */
/* 596 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x92 ),	/* 146 */
/* 602 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 604 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbBootableSystemStateBackedUp */

/* 612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbAreComponentsSelected */

/* 618 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBackupType */

/* 624 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 626 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 628 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter pbPartialFileSupport */

/* 630 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 632 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plContext */

/* 636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 638 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRestoreState */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0xb ),	/* 11 */
/* 656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x22 ),	/* 34 */
/* 662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pRestoreType */

/* 672 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExposeCurrentState */

/* 684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0xc ),	/* 12 */
/* 692 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 694 */	NdrFcShort( 0xe ),	/* 14 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 700 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter WriterInstanceId */

/* 708 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 712 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nCurrentState */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 718 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter hrWriterFailure */

/* 720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 728 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CoordGetContent */

/* 732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x3 ),	/* 3 */
/* 740 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 746 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 748 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 752 */	NdrFcShort( 0x2 ),	/* 2 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter WriterInstanceId */

/* 756 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 760 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter cbSid */

/* 762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 764 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter m_rgbSid */

/* 768 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 770 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 772 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter pbstrXMLDocContent */

/* 774 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 776 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 778 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 782 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CoordSetContent */

/* 786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x4 ),	/* 4 */
/* 794 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 800 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 802 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x3 ),	/* 3 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter WriterInstanceId */

/* 810 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 812 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 814 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter cbSid */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter m_rgbSid */

/* 822 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 826 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter bstrXMLDocContent */

/* 828 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 830 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 832 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 836 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CoordGetBackupState */

/* 840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x5 ),	/* 5 */
/* 848 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x92 ),	/* 146 */
/* 854 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbBootableSystemStateBackedUp */

/* 864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbAreComponentsSelected */

/* 870 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBackupType */

/* 876 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 880 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter pbPartialFileSupport */

/* 882 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 884 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plContext */

/* 888 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 890 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 896 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CoordGetRestoreState */

/* 900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x6 ),	/* 6 */
/* 908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x22 ),	/* 34 */
/* 914 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 916 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pRestoreType */

/* 924 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 934 */	0x8,		/* FC_LONG */
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
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 40 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 50 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 52 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 54 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 56 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 58 */	NdrFcShort( 0x6 ),	/* Offset= 6 (64) */
/* 60 */	
			0x13, 0x0,	/* FC_OP */
/* 62 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (18) */
/* 64 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x4 ),	/* 4 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (60) */
/* 74 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 76 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 80 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 82 */	
			0x12, 0x0,	/* FC_UP */
/* 84 */	NdrFcShort( 0x2 ),	/* Offset= 2 (86) */
/* 86 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 88 */	NdrFcShort( 0x1 ),	/* 1 */
/* 90 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 92 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 94 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 96 */	0x1,		/* FC_BYTE */
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



/* Standard interface: __MIDL_itf_vsevent_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IVssWriter, ver. 0.0,
   GUID={0xF2B41165,0xA791,0x4c1f,{0x98,0x20,0x8B,0xE4,0x5C,0x78,0x4E,0x32}} */

#pragma code_seg(".orpc")
static const unsigned short IVssWriter_FormatStringOffsetTable[] =
    {
    0,
    54,
    96,
    138,
    180,
    216,
    264,
    306,
    342,
    378,
    414
    };

static const MIDL_STUBLESS_PROXY_INFO IVssWriter_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssWriter_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssWriter_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssWriter_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IVssWriterProxyVtbl = 
{
    &IVssWriter_ProxyInfo,
    &IID_IVssWriter,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssWriter::RequestWriterInfo */ ,
    (void *) (INT_PTR) -1 /* IVssWriter::PrepareForBackup */ ,
    (void *) (INT_PTR) -1 /* IVssWriter::PrepareForSnapshot */ ,
    (void *) (INT_PTR) -1 /* IVssWriter::Freeze */ ,
    (void *) (INT_PTR) -1 /* IVssWriter::Thaw */ ,
    (void *) (INT_PTR) -1 /* IVssWriter::PostSnapshot */ ,
    (void *) (INT_PTR) -1 /* IVssWriter::BackupComplete */ ,
    (void *) (INT_PTR) -1 /* IVssWriter::BackupShutdown */ ,
    (void *) (INT_PTR) -1 /* IVssWriter::Abort */ ,
    (void *) (INT_PTR) -1 /* IVssWriter::PreRestore */ ,
    (void *) (INT_PTR) -1 /* IVssWriter::PostRestore */
};

const CInterfaceStubVtbl _IVssWriterStubVtbl =
{
    &IID_IVssWriter,
    &IVssWriter_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IVssWriterCallback, ver. 0.0,
   GUID={0xDDAC9818,0xDD57,0x4279,{0x82,0xD5,0xA3,0x80,0xA5,0x16,0xEF,0x36}} */

#pragma code_seg(".orpc")
static const unsigned short IVssWriterCallback_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    450,
    504,
    546,
    588,
    648,
    684
    };

static const MIDL_STUBLESS_PROXY_INFO IVssWriterCallback_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssWriterCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssWriterCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssWriterCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IVssWriterCallbackProxyVtbl = 
{
    &IVssWriterCallback_ProxyInfo,
    &IID_IVssWriterCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IVssWriterCallback::ExposeWriterMetadata */ ,
    (void *) (INT_PTR) -1 /* IVssWriterCallback::GetContent */ ,
    (void *) (INT_PTR) -1 /* IVssWriterCallback::SetContent */ ,
    (void *) (INT_PTR) -1 /* IVssWriterCallback::GetBackupState */ ,
    (void *) (INT_PTR) -1 /* IVssWriterCallback::GetRestoreState */ ,
    (void *) (INT_PTR) -1 /* IVssWriterCallback::ExposeCurrentState */
};


static const PRPC_STUB_FUNCTION IVssWriterCallback_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVssWriterCallbackStubVtbl =
{
    &IID_IVssWriterCallback,
    &IVssWriterCallback_ServerInfo,
    13,
    &IVssWriterCallback_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IVssCoordinatorCallback, ver. 0.0,
   GUID={0x52946A2D,0xA7CD,0x4c1f,{0x82,0xBA,0x22,0xF0,0xEA,0x17,0xEC,0x4E}} */

#pragma code_seg(".orpc")
static const unsigned short IVssCoordinatorCallback_FormatStringOffsetTable[] =
    {
    732,
    786,
    840,
    900
    };

static const MIDL_STUBLESS_PROXY_INFO IVssCoordinatorCallback_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IVssCoordinatorCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVssCoordinatorCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IVssCoordinatorCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IVssCoordinatorCallbackProxyVtbl = 
{
    &IVssCoordinatorCallback_ProxyInfo,
    &IID_IVssCoordinatorCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IVssCoordinatorCallback::CoordGetContent */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinatorCallback::CoordSetContent */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinatorCallback::CoordGetBackupState */ ,
    (void *) (INT_PTR) -1 /* IVssCoordinatorCallback::CoordGetRestoreState */
};

const CInterfaceStubVtbl _IVssCoordinatorCallbackStubVtbl =
{
    &IID_IVssCoordinatorCallback,
    &IVssCoordinatorCallback_ServerInfo,
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

const CInterfaceProxyVtbl * _vsevent_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IVssWriterCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVssCoordinatorCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVssWriterProxyVtbl,
    0
};

const CInterfaceStubVtbl * _vsevent_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IVssWriterCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_IVssCoordinatorCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_IVssWriterStubVtbl,
    0
};

PCInterfaceName const _vsevent_InterfaceNamesList[] = 
{
    "IVssWriterCallback",
    "IVssCoordinatorCallback",
    "IVssWriter",
    0
};

const IID *  _vsevent_BaseIIDList[] = 
{
    &IID_IDispatch,
    0,
    0,
    0
};


#define _vsevent_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _vsevent, pIID, n)

int __stdcall _vsevent_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _vsevent, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _vsevent, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _vsevent, 3, *pIndex )
    
}

const ExtendedProxyFileInfo vsevent_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _vsevent_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _vsevent_StubVtblList,
    (const PCInterfaceName * ) & _vsevent_InterfaceNamesList,
    (const IID ** ) & _vsevent_BaseIIDList,
    & _vsevent_IID_Lookup, 
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

