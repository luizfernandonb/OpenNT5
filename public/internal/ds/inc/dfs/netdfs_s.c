

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for netdfs.idl, dfssrv.acf:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, oldnames, robust
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

#include <string.h>
#include "netdfs.h"

#define TYPE_FORMAT_STRING_SIZE   1017                              
#define PROC_FORMAT_STRING_SIZE   1255                              
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

/* Standard interface: netdfs, ver. 3.0,
   GUID={0x4fc742e0,0x4a10,0x11cf,{0x82,0x73,0x00,0xaa,0x00,0x4a,0xe6,0x73}} */


extern const MIDL_SERVER_INFO netdfs_ServerInfo;

extern RPC_DISPATCH_TABLE netdfs_DispatchTable;

static const RPC_SERVER_INTERFACE netdfs___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x4fc742e0,0x4a10,0x11cf,{0x82,0x73,0x00,0xaa,0x00,0x4a,0xe6,0x73}},{3,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &netdfs_DispatchTable,
    0,
    0,
    0,
    &netdfs_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE netdfs_ServerIfHandle = (RPC_IF_HANDLE)& netdfs___RpcServerInterface;

extern const MIDL_STUB_DESC netdfs_StubDesc;


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

	/* Procedure NetrDfsManagerGetVersion */

			0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 24 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 26 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsAdd */

/* 30 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 32 */	NdrFcLong( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x1 ),	/* 1 */
/* 38 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 40 */	NdrFcShort( 0x8 ),	/* 8 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 46 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DfsEntryPath */

/* 54 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 56 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 58 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ServerName */

/* 60 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ShareName */

/* 66 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter Comment */

/* 72 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 74 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 76 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter Flags */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 84 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 86 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsRemove */

/* 90 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 92 */	NdrFcLong( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x2 ),	/* 2 */
/* 98 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 106 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DfsEntryPath */

/* 114 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 116 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 118 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ServerName */

/* 120 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 124 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter ShareName */

/* 126 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 130 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsSetInfo */

/* 138 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x3 ),	/* 3 */
/* 146 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 152 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 154 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x3 ),	/* 3 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DfsEntryPath */

/* 162 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 164 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 166 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ServerName */

/* 168 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter ShareName */

/* 174 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter Level */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DfsInfo */

/* 186 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 190 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 194 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsGetInfo */

/* 198 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x4 ),	/* 4 */
/* 206 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 212 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 214 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 216 */	NdrFcShort( 0x3 ),	/* 3 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DfsEntryPath */

/* 222 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 224 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 226 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ServerName */

/* 228 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 232 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter ShareName */

/* 234 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 238 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter Level */

/* 240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DfsInfo */

/* 246 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 248 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 250 */	NdrFcShort( 0x17c ),	/* Type Offset=380 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsEnum */

/* 258 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x5 ),	/* 5 */
/* 266 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 268 */	NdrFcShort( 0x2c ),	/* 44 */
/* 270 */	NdrFcShort( 0x24 ),	/* 36 */
/* 272 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 274 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 276 */	NdrFcShort( 0x9 ),	/* 9 */
/* 278 */	NdrFcShort( 0x9 ),	/* 9 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Level */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PrefMaxLen */

/* 288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DfsEnum */

/* 294 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 298 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Parameter ResumeHandle */

/* 300 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	NdrFcShort( 0x32a ),	/* Type Offset=810 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsMove */

/* 312 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x6 ),	/* 6 */
/* 320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 326 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DfsEntryPath */

/* 336 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 338 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 340 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter NewDfsEntryPath */

/* 342 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 346 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsRename */

/* 354 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x7 ),	/* 7 */
/* 362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Path */

/* 378 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 380 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 382 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter NewPath */

/* 384 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 388 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsManagerGetConfigInfo */

/* 396 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 406 */	NdrFcShort( 0x30 ),	/* 48 */
/* 408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 410 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 412 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 414 */	NdrFcShort( 0x1 ),	/* 1 */
/* 416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wszServer */

/* 420 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 422 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 424 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter wszLocalVolumeEntryPath */

/* 426 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 430 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter idLocalVolume */

/* 432 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 436 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter ppRelationInfo */

/* 438 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 440 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 442 */	NdrFcShort( 0x32e ),	/* Type Offset=814 */

	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 446 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsManagerSendSiteInfo */

/* 450 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x9 ),	/* 9 */
/* 458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 464 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 466 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter wszServer */

/* 474 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 476 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 478 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pSiteInfo */

/* 480 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	NdrFcShort( 0x38e ),	/* Type Offset=910 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsAddFtRoot */

/* 492 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0xa ),	/* 10 */
/* 500 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 502 */	NdrFcShort( 0xd ),	/* 13 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 508 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 516 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 518 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 520 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter DcName */

/* 522 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 526 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter RootShare */

/* 528 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 532 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter FtDfsName */

/* 534 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 538 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Comment */

/* 540 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 542 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 544 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ConfigDN */

/* 546 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 548 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 550 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter NewFtDfs */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 556 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter Flags */

/* 558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 560 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppRootList */

/* 564 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 566 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 568 */	NdrFcShort( 0x3aa ),	/* Type Offset=938 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsRemoveFtRoot */

/* 576 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0xb ),	/* 11 */
/* 584 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 592 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 596 */	NdrFcShort( 0x1 ),	/* 1 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 600 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 602 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 604 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter DcName */

/* 606 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 610 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter RootShare */

/* 612 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 614 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 616 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter FtDfsName */

/* 618 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Flags */

/* 624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 626 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppRootList */

/* 630 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 632 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 634 */	NdrFcShort( 0x3aa ),	/* Type Offset=938 */

	/* Return value */

/* 636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 638 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsAddStdRoot */

/* 642 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0xc ),	/* 12 */
/* 650 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 656 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 658 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 666 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 668 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 670 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter RootShare */

/* 672 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Comment */

/* 678 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Flags */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 692 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsRemoveStdRoot */

/* 696 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0xd ),	/* 13 */
/* 704 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 712 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 720 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 722 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 724 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter RootShare */

/* 726 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 730 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Flags */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsManagerInitialize */

/* 744 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0xe ),	/* 14 */
/* 752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 768 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 770 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 772 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Flags */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsAddStdRootForced */

/* 786 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0xf ),	/* 15 */
/* 794 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 800 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 802 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 810 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 812 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 814 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter RootShare */

/* 816 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 820 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Comment */

/* 822 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 826 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Share */

/* 828 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 832 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsGetDcAddress */

/* 840 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x10 ),	/* 16 */
/* 848 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 850 */	NdrFcShort( 0x35 ),	/* 53 */
/* 852 */	NdrFcShort( 0x3d ),	/* 61 */
/* 854 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 864 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 866 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 868 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter DcName */

/* 870 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	NdrFcShort( 0x3de ),	/* Type Offset=990 */

	/* Parameter IsRoot */

/* 876 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 880 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter Timeout */

/* 882 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 890 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsSetDcAddress */

/* 894 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x11 ),	/* 17 */
/* 902 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 904 */	NdrFcShort( 0x10 ),	/* 16 */
/* 906 */	NdrFcShort( 0x8 ),	/* 8 */
/* 908 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 910 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 918 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 920 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 922 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter DcName */

/* 924 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Timeout */

/* 930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Flags */

/* 936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 944 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsFlushFtTable */

/* 948 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x12 ),	/* 18 */
/* 956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 964 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DcName */

/* 972 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 974 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 976 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter wszFtDfsName */

/* 978 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 980 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 982 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 986 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsAdd2 */

/* 990 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x13 ),	/* 19 */
/* 998 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1004 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1006 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DfsEntryPath */

/* 1014 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1016 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1018 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter DcName */

/* 1020 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1022 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1024 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ServerName */

/* 1026 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1028 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1030 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ShareName */

/* 1032 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1034 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1036 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter Comment */

/* 1038 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1040 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1042 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter Flags */

/* 1044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1046 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppRootList */

/* 1050 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1052 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1054 */	NdrFcShort( 0x3aa ),	/* Type Offset=938 */

	/* Return value */

/* 1056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1058 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsRemove2 */

/* 1062 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 1064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1070 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1076 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1078 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1080 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1082 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DfsEntryPath */

/* 1086 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1088 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1090 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter DcName */

/* 1092 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1096 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ServerName */

/* 1098 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1100 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1102 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter ShareName */

/* 1104 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1108 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter ppRootList */

/* 1110 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1112 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1114 */	NdrFcShort( 0x3aa ),	/* Type Offset=938 */

	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1118 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsEnumEx */

/* 1122 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1130 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1132 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1134 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1136 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1138 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1140 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1142 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DfsEntryPath */

/* 1146 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1148 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1150 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter Level */

/* 1152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PrefMaxLen */

/* 1158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DfsEnum */

/* 1164 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1168 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Parameter ResumeHandle */

/* 1170 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1174 */	NdrFcShort( 0x32a ),	/* Type Offset=810 */

	/* Return value */

/* 1176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1178 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsSetInfo2 */

/* 1182 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 1184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1190 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1196 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1198 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1202 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DfsEntryPath */

/* 1206 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1208 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1210 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter DcName */

/* 1212 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1216 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ServerName */

/* 1218 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1222 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter ShareName */

/* 1224 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1226 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1228 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter Level */

/* 1230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1232 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDfsInfo */

/* 1236 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1238 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1240 */	NdrFcShort( 0x3ee ),	/* Type Offset=1006 */

	/* Parameter ppRootList */

/* 1242 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1244 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1246 */	NdrFcShort( 0x3aa ),	/* Type Offset=938 */

	/* Return value */

/* 1248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1250 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1252 */	0x8,		/* FC_LONG */
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
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  8 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0x0,	/* FC_RP */
/* 12 */	NdrFcShort( 0x2 ),	/* Offset= 2 (14) */
/* 14 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 16 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 18 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 20 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 22 */	NdrFcShort( 0x2 ),	/* Offset= 2 (24) */
/* 24 */	NdrFcShort( 0x4 ),	/* 4 */
/* 26 */	NdrFcShort( 0x3007 ),	/* 12295 */
/* 28 */	NdrFcLong( 0x1 ),	/* 1 */
/* 32 */	NdrFcShort( 0x28 ),	/* Offset= 40 (72) */
/* 34 */	NdrFcLong( 0x2 ),	/* 2 */
/* 38 */	NdrFcShort( 0x3a ),	/* Offset= 58 (96) */
/* 40 */	NdrFcLong( 0x3 ),	/* 3 */
/* 44 */	NdrFcShort( 0x58 ),	/* Offset= 88 (132) */
/* 46 */	NdrFcLong( 0x4 ),	/* 4 */
/* 50 */	NdrFcShort( 0xcc ),	/* Offset= 204 (254) */
/* 52 */	NdrFcLong( 0x64 ),	/* 100 */
/* 56 */	NdrFcShort( 0x10 ),	/* Offset= 16 (72) */
/* 58 */	NdrFcLong( 0x65 ),	/* 101 */
/* 62 */	NdrFcShort( 0x130 ),	/* Offset= 304 (366) */
/* 64 */	NdrFcLong( 0x66 ),	/* 102 */
/* 68 */	NdrFcShort( 0x12a ),	/* Offset= 298 (366) */
/* 70 */	NdrFcShort( 0x0 ),	/* Offset= 0 (70) */
/* 72 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 74 */	NdrFcShort( 0x2 ),	/* Offset= 2 (76) */
/* 76 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 78 */	NdrFcShort( 0x4 ),	/* 4 */
/* 80 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 82 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 90 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 92 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 94 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 96 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x10 ),	/* 16 */
/* 104 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 106 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 114 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 116 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 118 */	NdrFcShort( 0x4 ),	/* 4 */
/* 120 */	NdrFcShort( 0x4 ),	/* 4 */
/* 122 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 124 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 126 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 128 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 130 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 132 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 134 */	NdrFcShort( 0x4c ),	/* Offset= 76 (210) */
/* 136 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 138 */	NdrFcShort( 0xc ),	/* 12 */
/* 140 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 142 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 144 */	NdrFcShort( 0x4 ),	/* 4 */
/* 146 */	NdrFcShort( 0x4 ),	/* 4 */
/* 148 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 150 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 152 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 160 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 162 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 164 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 166 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 168 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 170 */	NdrFcShort( 0xc ),	/* 12 */
/* 172 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 174 */	NdrFcShort( 0xc ),	/* 12 */
/* 176 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 178 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 180 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 182 */	NdrFcShort( 0xc ),	/* 12 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x2 ),	/* 2 */
/* 188 */	NdrFcShort( 0x4 ),	/* 4 */
/* 190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 192 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 194 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 202 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 204 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 206 */	0x0,		/* 0 */
			NdrFcShort( 0xffb9 ),	/* Offset= -71 (136) */
			0x5b,		/* FC_END */
/* 210 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 212 */	NdrFcShort( 0x14 ),	/* 20 */
/* 214 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 216 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 224 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 226 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 228 */	NdrFcShort( 0x4 ),	/* 4 */
/* 230 */	NdrFcShort( 0x4 ),	/* 4 */
/* 232 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 234 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 236 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 238 */	NdrFcShort( 0x10 ),	/* 16 */
/* 240 */	NdrFcShort( 0x10 ),	/* 16 */
/* 242 */	0x12, 0x0,	/* FC_UP */
/* 244 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (168) */
/* 246 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 248 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 250 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 252 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 254 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 256 */	NdrFcShort( 0x3e ),	/* Offset= 62 (318) */
/* 258 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 262 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 264 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 266 */	NdrFcShort( 0x10 ),	/* 16 */
/* 268 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 270 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 272 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (258) */
			0x5b,		/* FC_END */
/* 276 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 278 */	NdrFcShort( 0xc ),	/* 12 */
/* 280 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 282 */	NdrFcShort( 0x20 ),	/* 32 */
/* 284 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 286 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 288 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 290 */	NdrFcShort( 0xc ),	/* 12 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x2 ),	/* 2 */
/* 296 */	NdrFcShort( 0x4 ),	/* 4 */
/* 298 */	NdrFcShort( 0x4 ),	/* 4 */
/* 300 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 302 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 310 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 312 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 314 */	0x0,		/* 0 */
			NdrFcShort( 0xff4d ),	/* Offset= -179 (136) */
			0x5b,		/* FC_END */
/* 318 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 320 */	NdrFcShort( 0x28 ),	/* 40 */
/* 322 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 324 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 332 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 334 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 336 */	NdrFcShort( 0x4 ),	/* 4 */
/* 338 */	NdrFcShort( 0x4 ),	/* 4 */
/* 340 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 342 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 344 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 346 */	NdrFcShort( 0x24 ),	/* 36 */
/* 348 */	NdrFcShort( 0x24 ),	/* 36 */
/* 350 */	0x12, 0x0,	/* FC_UP */
/* 352 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (276) */
/* 354 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 356 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 358 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 360 */	0x0,		/* 0 */
			NdrFcShort( 0xff9f ),	/* Offset= -97 (264) */
			0x8,		/* FC_LONG */
/* 364 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 366 */	
			0x12, 0x0,	/* FC_UP */
/* 368 */	NdrFcShort( 0x2 ),	/* Offset= 2 (370) */
/* 370 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 372 */	NdrFcShort( 0x4 ),	/* 4 */
/* 374 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 376 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 378 */	NdrFcShort( 0x2 ),	/* Offset= 2 (380) */
/* 380 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 382 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 386 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 388 */	NdrFcShort( 0xfe94 ),	/* Offset= -364 (24) */
/* 390 */	
			0x12, 0x0,	/* FC_UP */
/* 392 */	NdrFcShort( 0x194 ),	/* Offset= 404 (796) */
/* 394 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 396 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 398 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 400 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 402 */	NdrFcShort( 0x2 ),	/* Offset= 2 (404) */
/* 404 */	NdrFcShort( 0x4 ),	/* 4 */
/* 406 */	NdrFcShort( 0x3006 ),	/* 12294 */
/* 408 */	NdrFcLong( 0x1 ),	/* 1 */
/* 412 */	NdrFcShort( 0x22 ),	/* Offset= 34 (446) */
/* 414 */	NdrFcLong( 0x2 ),	/* 2 */
/* 418 */	NdrFcShort( 0x56 ),	/* Offset= 86 (504) */
/* 420 */	NdrFcLong( 0x3 ),	/* 3 */
/* 424 */	NdrFcShort( 0x92 ),	/* Offset= 146 (570) */
/* 426 */	NdrFcLong( 0x4 ),	/* 4 */
/* 430 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (644) */
/* 432 */	NdrFcLong( 0xc8 ),	/* 200 */
/* 436 */	NdrFcShort( 0xa ),	/* Offset= 10 (446) */
/* 438 */	NdrFcLong( 0x12c ),	/* 300 */
/* 442 */	NdrFcShort( 0x114 ),	/* Offset= 276 (718) */
/* 444 */	NdrFcShort( 0xffff ),	/* Offset= -1 (443) */
/* 446 */	
			0x12, 0x0,	/* FC_UP */
/* 448 */	NdrFcShort( 0x24 ),	/* Offset= 36 (484) */
/* 450 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 452 */	NdrFcShort( 0x4 ),	/* 4 */
/* 454 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 460 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 462 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 464 */	NdrFcShort( 0x4 ),	/* 4 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 476 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 478 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 480 */	0x0,		/* 0 */
			NdrFcShort( 0xfe6b ),	/* Offset= -405 (76) */
			0x5b,		/* FC_END */
/* 484 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 488 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 490 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 492 */	NdrFcShort( 0x4 ),	/* 4 */
/* 494 */	NdrFcShort( 0x4 ),	/* 4 */
/* 496 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 498 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (450) */
/* 500 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 502 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 504 */	
			0x12, 0x0,	/* FC_UP */
/* 506 */	NdrFcShort( 0x2c ),	/* Offset= 44 (550) */
/* 508 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 510 */	NdrFcShort( 0x10 ),	/* 16 */
/* 512 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 518 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 520 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 522 */	NdrFcShort( 0x10 ),	/* 16 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x2 ),	/* 2 */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 534 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 536 */	NdrFcShort( 0x4 ),	/* 4 */
/* 538 */	NdrFcShort( 0x4 ),	/* 4 */
/* 540 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 542 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 544 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 546 */	0x0,		/* 0 */
			NdrFcShort( 0xfe41 ),	/* Offset= -447 (100) */
			0x5b,		/* FC_END */
/* 550 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 554 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 556 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 558 */	NdrFcShort( 0x4 ),	/* 4 */
/* 560 */	NdrFcShort( 0x4 ),	/* 4 */
/* 562 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 564 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (508) */
/* 566 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 568 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 570 */	
			0x12, 0x0,	/* FC_UP */
/* 572 */	NdrFcShort( 0x34 ),	/* Offset= 52 (624) */
/* 574 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 576 */	NdrFcShort( 0x14 ),	/* 20 */
/* 578 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 584 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 586 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 588 */	NdrFcShort( 0x14 ),	/* 20 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x3 ),	/* 3 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 600 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 602 */	NdrFcShort( 0x4 ),	/* 4 */
/* 604 */	NdrFcShort( 0x4 ),	/* 4 */
/* 606 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 608 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 610 */	NdrFcShort( 0x10 ),	/* 16 */
/* 612 */	NdrFcShort( 0x10 ),	/* 16 */
/* 614 */	0x12, 0x0,	/* FC_UP */
/* 616 */	NdrFcShort( 0xfe40 ),	/* Offset= -448 (168) */
/* 618 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 620 */	0x0,		/* 0 */
			NdrFcShort( 0xfe65 ),	/* Offset= -411 (210) */
			0x5b,		/* FC_END */
/* 624 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 628 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 630 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 632 */	NdrFcShort( 0x4 ),	/* 4 */
/* 634 */	NdrFcShort( 0x4 ),	/* 4 */
/* 636 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 638 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (574) */
/* 640 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 642 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 644 */	
			0x12, 0x0,	/* FC_UP */
/* 646 */	NdrFcShort( 0x34 ),	/* Offset= 52 (698) */
/* 648 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 650 */	NdrFcShort( 0x28 ),	/* 40 */
/* 652 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 658 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 660 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 662 */	NdrFcShort( 0x28 ),	/* 40 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x3 ),	/* 3 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 674 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 676 */	NdrFcShort( 0x4 ),	/* 4 */
/* 678 */	NdrFcShort( 0x4 ),	/* 4 */
/* 680 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 682 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 684 */	NdrFcShort( 0x24 ),	/* 36 */
/* 686 */	NdrFcShort( 0x24 ),	/* 36 */
/* 688 */	0x12, 0x0,	/* FC_UP */
/* 690 */	NdrFcShort( 0xfe62 ),	/* Offset= -414 (276) */
/* 692 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 694 */	0x0,		/* 0 */
			NdrFcShort( 0xfe87 ),	/* Offset= -377 (318) */
			0x5b,		/* FC_END */
/* 698 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 702 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 704 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 706 */	NdrFcShort( 0x4 ),	/* 4 */
/* 708 */	NdrFcShort( 0x4 ),	/* 4 */
/* 710 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 712 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (648) */
/* 714 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 716 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 718 */	
			0x12, 0x0,	/* FC_UP */
/* 720 */	NdrFcShort( 0x38 ),	/* Offset= 56 (776) */
/* 722 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 726 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 728 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 730 */	NdrFcShort( 0x4 ),	/* 4 */
/* 732 */	NdrFcShort( 0x4 ),	/* 4 */
/* 734 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 736 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 738 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 740 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 742 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 746 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 752 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 754 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x1 ),	/* 1 */
/* 762 */	NdrFcShort( 0x4 ),	/* 4 */
/* 764 */	NdrFcShort( 0x4 ),	/* 4 */
/* 766 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 768 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 770 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 772 */	0x0,		/* 0 */
			NdrFcShort( 0xffcd ),	/* Offset= -51 (722) */
			0x5b,		/* FC_END */
/* 776 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 780 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 782 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 784 */	NdrFcShort( 0x4 ),	/* 4 */
/* 786 */	NdrFcShort( 0x4 ),	/* 4 */
/* 788 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 790 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (742) */
/* 792 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 794 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 796 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* Offset= 0 (802) */
/* 804 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 806 */	0x0,		/* 0 */
			NdrFcShort( 0xfe63 ),	/* Offset= -413 (394) */
			0x5b,		/* FC_END */
/* 810 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 812 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 814 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 816 */	NdrFcShort( 0x2 ),	/* Offset= 2 (818) */
/* 818 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 820 */	NdrFcShort( 0x2a ),	/* Offset= 42 (862) */
/* 822 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 824 */	NdrFcShort( 0x14 ),	/* 20 */
/* 826 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 828 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 830 */	NdrFcShort( 0x10 ),	/* 16 */
/* 832 */	NdrFcShort( 0x10 ),	/* 16 */
/* 834 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 836 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 838 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 840 */	0x0,		/* 0 */
			NdrFcShort( 0xfdbf ),	/* Offset= -577 (264) */
			0x8,		/* FC_LONG */
/* 844 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 846 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 848 */	NdrFcShort( 0x14 ),	/* 20 */
/* 850 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 852 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 854 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 856 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 858 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (822) */
/* 860 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 862 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 864 */	NdrFcShort( 0x4 ),	/* 4 */
/* 866 */	NdrFcShort( 0xffec ),	/* Offset= -20 (846) */
/* 868 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 870 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 872 */	NdrFcShort( 0x14 ),	/* 20 */
/* 874 */	NdrFcShort( 0x4 ),	/* 4 */
/* 876 */	NdrFcShort( 0x1 ),	/* 1 */
/* 878 */	NdrFcShort( 0x14 ),	/* 20 */
/* 880 */	NdrFcShort( 0x14 ),	/* 20 */
/* 882 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 884 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 886 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 888 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 890 */	
			0x11, 0x0,	/* FC_RP */
/* 892 */	NdrFcShort( 0x12 ),	/* Offset= 18 (910) */
/* 894 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 898 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 900 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 902 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 904 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 906 */	NdrFcShort( 0xff48 ),	/* Offset= -184 (722) */
/* 908 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 910 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 912 */	NdrFcShort( 0x4 ),	/* 4 */
/* 914 */	NdrFcShort( 0xffec ),	/* Offset= -20 (894) */
/* 916 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 918 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 922 */	NdrFcShort( 0x4 ),	/* 4 */
/* 924 */	NdrFcShort( 0x1 ),	/* 1 */
/* 926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 930 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 932 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 934 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 936 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 938 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 940 */	NdrFcShort( 0x2 ),	/* Offset= 2 (942) */
/* 942 */	
			0x12, 0x0,	/* FC_UP */
/* 944 */	NdrFcShort( 0x12 ),	/* Offset= 18 (962) */
/* 946 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 948 */	NdrFcShort( 0x4 ),	/* 4 */
/* 950 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 952 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 954 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 956 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 958 */	NdrFcShort( 0xfc8e ),	/* Offset= -882 (76) */
/* 960 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 962 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 964 */	NdrFcShort( 0x4 ),	/* 4 */
/* 966 */	NdrFcShort( 0xffec ),	/* Offset= -20 (946) */
/* 968 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 970 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 972 */	NdrFcShort( 0x4 ),	/* 4 */
/* 974 */	NdrFcShort( 0x4 ),	/* 4 */
/* 976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 978 */	NdrFcShort( 0x4 ),	/* 4 */
/* 980 */	NdrFcShort( 0x4 ),	/* 4 */
/* 982 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 984 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 986 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 988 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 990 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 992 */	NdrFcShort( 0xfc26 ),	/* Offset= -986 (6) */
/* 994 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 996 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 998 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1000 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1002 */	
			0x11, 0x0,	/* FC_RP */
/* 1004 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1006) */
/* 1006 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1008 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1010 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1012 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1014 */	NdrFcShort( 0xfc22 ),	/* Offset= -990 (24) */

			0x0
        }
    };

static const unsigned short netdfs_FormatStringOffsetTable[] =
    {
    0,
    30,
    90,
    138,
    198,
    258,
    312,
    354,
    396,
    450,
    492,
    576,
    642,
    696,
    744,
    786,
    840,
    894,
    948,
    990,
    1062,
    1122,
    1182
    };


static const MIDL_STUB_DESC netdfs_StubDesc = 
    {
    (void *)& netdfs___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
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

static RPC_DISPATCH_FUNCTION netdfs_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
RPC_DISPATCH_TABLE netdfs_DispatchTable = 
    {
    23,
    netdfs_table
    };

static const SERVER_ROUTINE netdfs_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)NetrDfsManagerGetVersion,
    (SERVER_ROUTINE)NetrDfsAdd,
    (SERVER_ROUTINE)NetrDfsRemove,
    (SERVER_ROUTINE)NetrDfsSetInfo,
    (SERVER_ROUTINE)NetrDfsGetInfo,
    (SERVER_ROUTINE)NetrDfsEnum,
    (SERVER_ROUTINE)NetrDfsMove,
    (SERVER_ROUTINE)NetrDfsRename,
    (SERVER_ROUTINE)NetrDfsManagerGetConfigInfo,
    (SERVER_ROUTINE)NetrDfsManagerSendSiteInfo,
    (SERVER_ROUTINE)NetrDfsAddFtRoot,
    (SERVER_ROUTINE)NetrDfsRemoveFtRoot,
    (SERVER_ROUTINE)NetrDfsAddStdRoot,
    (SERVER_ROUTINE)NetrDfsRemoveStdRoot,
    (SERVER_ROUTINE)NetrDfsManagerInitialize,
    (SERVER_ROUTINE)NetrDfsAddStdRootForced,
    (SERVER_ROUTINE)NetrDfsGetDcAddress,
    (SERVER_ROUTINE)NetrDfsSetDcAddress,
    (SERVER_ROUTINE)NetrDfsFlushFtTable,
    (SERVER_ROUTINE)NetrDfsAdd2,
    (SERVER_ROUTINE)NetrDfsRemove2,
    (SERVER_ROUTINE)NetrDfsEnumEx,
    (SERVER_ROUTINE)NetrDfsSetInfo2
    };

static const MIDL_SERVER_INFO netdfs_ServerInfo = 
    {
    &netdfs_StubDesc,
    netdfs_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    netdfs_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

