

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for audiosrv.idl:
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

#include <string.h>
#include "audiosrv.h"

#define TYPE_FORMAT_STRING_SIZE   193                               
#define PROC_FORMAT_STRING_SIZE   617                               
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

/* Standard interface: AudioSrv, ver. 1.0,
   GUID={0x3faf4738,0x3a21,0x4307,{0xb4,0x6c,0xfd,0xda,0x9b,0xb8,0xc0,0xd5}} */


extern const MIDL_SERVER_INFO AudioSrv_ServerInfo;
static RPC_PROTSEQ_ENDPOINT __RpcProtseqEndpoint[] = 
    {
    {(unsigned char *) "ncalrpc", (unsigned char *) "AudioSrv"}
    };


extern RPC_DISPATCH_TABLE AudioSrv_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE AudioSrv___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x3faf4738,0x3a21,0x4307,{0xb4,0x6c,0xfd,0xda,0x9b,0xb8,0xc0,0xd5}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &AudioSrv_v1_0_DispatchTable,
    1,
    __RpcProtseqEndpoint,
    0,
    &AudioSrv_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE AudioSrv_v1_0_s_ifspec = (RPC_IF_HANDLE)& AudioSrv___RpcServerInterface;

extern const MIDL_STUB_DESC AudioSrv_StubDesc;

extern const NDR_RUNDOWN RundownRoutines[];

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

	/* Procedure s_gfxCreateZoneFactoriesList */

			0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppDiList */

/* 24 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_gfxCreateGfxFactoriesList */

/* 36 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 52 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pZoneDi */

/* 60 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 62 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 64 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Parameter ppDiList */

/* 66 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_gfxCreateGfxList */

/* 78 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x2 ),	/* 2 */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 94 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 96 */	NdrFcShort( 0x1 ),	/* 1 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pZoneDi */

/* 102 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 104 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 106 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Parameter ppGfxList */

/* 108 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_gfxRemoveGfx */

/* 120 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x3 ),	/* 3 */
/* 128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Id */

/* 144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 146 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_gfxAddGfx */

/* 156 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x4 ),	/* 4 */
/* 164 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 166 */	NdrFcShort( 0x10 ),	/* 16 */
/* 168 */	NdrFcShort( 0x24 ),	/* 36 */
/* 170 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 172 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ZoneFactoryDi */

/* 180 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 182 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 184 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Parameter GfxFactoryDi */

/* 186 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 190 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Parameter Type */

/* 192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Order */

/* 198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNewId */

/* 204 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 206 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_gfxModifyGfx */

/* 216 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x5 ),	/* 5 */
/* 224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 226 */	NdrFcShort( 0x10 ),	/* 16 */
/* 228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Id */

/* 240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 242 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Order */

/* 246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_gfxOpenGfx */

/* 258 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x6 ),	/* 6 */
/* 266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 268 */	NdrFcShort( 0x10 ),	/* 16 */
/* 270 */	NdrFcShort( 0x24 ),	/* 36 */
/* 272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessId */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwGfxId */

/* 288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFileHandle */

/* 294 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_gfxLogon */

/* 306 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x7 ),	/* 7 */
/* 314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 316 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 318 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 326 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hBinding */

/* 334 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_gfxLogoff */


	/* Parameter dwProcessId */

/* 340 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 348 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 356 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure s_winmmRegisterSessionNotificationEvent */

/* 364 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x9 ),	/* 9 */
/* 372 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 374 */	NdrFcShort( 0x10 ),	/* 16 */
/* 376 */	NdrFcShort( 0x40 ),	/* 64 */
/* 378 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 380 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessId */

/* 388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 390 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hEvent */

/* 394 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 396 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phSessionNotification */

/* 400 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 402 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 404 */	NdrFcShort( 0xa0 ),	/* Type Offset=160 */

	/* Return value */

/* 406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 408 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_winmmUnregisterSessionNotification */

/* 412 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0xa ),	/* 10 */
/* 420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 422 */	0x30,		/* FC_BIND_CONTEXT */
			0xe8,		/* Ctxt flags:  via ptr, in, out, strict, */
/* 424 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 426 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 428 */	NdrFcShort( 0x38 ),	/* 56 */
/* 430 */	NdrFcShort( 0x40 ),	/* 64 */
/* 432 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 434 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phSessionNotification */

/* 442 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 444 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 446 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Return value */

/* 448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_winmmSessionConnectState */

/* 454 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0xb ),	/* 11 */
/* 462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 466 */	NdrFcShort( 0x24 ),	/* 36 */
/* 468 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 470 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessId */

/* 478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 480 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ConnectState */

/* 484 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_wdmDriverOpenDrvRegKey */

/* 496 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0xc ),	/* 12 */
/* 504 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 506 */	NdrFcShort( 0x10 ),	/* 16 */
/* 508 */	NdrFcShort( 0x24 ),	/* 36 */
/* 510 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 512 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwProcessId */

/* 520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 522 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DeviceInterface */

/* 526 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 530 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Parameter samDesired */

/* 532 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 534 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phkey */

/* 538 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 546 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure s_winmmAdvisePreferredDeviceChange */

/* 550 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0xd ),	/* 13 */
/* 558 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 566 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure s_winmmGetPnpInfo */

/* 574 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0xe ),	/* 14 */
/* 582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x24 ),	/* 36 */
/* 588 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 590 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pcbPnpInfo */

/* 598 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 600 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PnpInfo */

/* 604 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 608 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Return value */

/* 610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 612 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 614 */	0x8,		/* FC_LONG */
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
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0x22 ),	/* Offset= 34 (42) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 12 */	NdrFcShort( 0x4 ),	/* 4 */
/* 14 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 22 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 24 */	NdrFcShort( 0x4 ),	/* 4 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x1 ),	/* 1 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x0 ),	/* 0 */
/* 34 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 36 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 38 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 40 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 42 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 44 */	NdrFcShort( 0x4 ),	/* 4 */
/* 46 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (10) */
/* 48 */	NdrFcShort( 0x0 ),	/* Offset= 0 (48) */
/* 50 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 52 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 54 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 56 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 58 */	NdrFcShort( 0x2 ),	/* Offset= 2 (60) */
/* 60 */	
			0x12, 0x0,	/* FC_UP */
/* 62 */	NdrFcShort( 0x3e ),	/* Offset= 62 (124) */
/* 64 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 66 */	NdrFcShort( 0x8 ),	/* 8 */
/* 68 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 70 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 72 */	NdrFcShort( 0x10 ),	/* 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 76 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 78 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (64) */
			0x5b,		/* FC_END */
/* 82 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 84 */	NdrFcShort( 0x20 ),	/* 32 */
/* 86 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 88 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 90 */	NdrFcShort( 0x4 ),	/* 4 */
/* 92 */	NdrFcShort( 0x4 ),	/* 4 */
/* 94 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 96 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 98 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 100 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 102 */	0x0,		/* 0 */
			NdrFcShort( 0xffdf ),	/* Offset= -33 (70) */
			0x8,		/* FC_LONG */
/* 106 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 108 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0x20 ),	/* 32 */
/* 112 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 114 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 116 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 118 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0xffda ),	/* Offset= -38 (82) */
/* 122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 124 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 126 */	NdrFcShort( 0x4 ),	/* 4 */
/* 128 */	NdrFcShort( 0xffec ),	/* Offset= -20 (108) */
/* 130 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 132 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 134 */	NdrFcShort( 0x20 ),	/* 32 */
/* 136 */	NdrFcShort( 0x4 ),	/* 4 */
/* 138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 146 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 148 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 150 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 152 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 154 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 156 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 158 */	NdrFcShort( 0x2 ),	/* Offset= 2 (160) */
/* 160 */	0x30,		/* FC_BIND_CONTEXT */
			0xa8,		/* Ctxt flags:  via ptr, out, strict, */
/* 162 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 164 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 166 */	NdrFcShort( 0x2 ),	/* Offset= 2 (168) */
/* 168 */	0x30,		/* FC_BIND_CONTEXT */
			0xe9,		/* Ctxt flags:  via ptr, in, out, strict, can't be null */
/* 170 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 172 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (176) */
/* 176 */	
			0x12, 0x0,	/* FC_UP */
/* 178 */	NdrFcShort( 0x2 ),	/* Offset= 2 (180) */
/* 180 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 184 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 186 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 188 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 190 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    HANDLE_SESSIONNOTIFICATION_rundown
    };


static const unsigned short AudioSrv_FormatStringOffsetTable[] =
    {
    0,
    36,
    78,
    120,
    156,
    216,
    258,
    306,
    340,
    364,
    412,
    454,
    496,
    550,
    574
    };


static const MIDL_STUB_DESC AudioSrv_StubDesc = 
    {
    (void *)& AudioSrv___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
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

static RPC_DISPATCH_FUNCTION AudioSrv_table[] =
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
    0
    };
RPC_DISPATCH_TABLE AudioSrv_v1_0_DispatchTable = 
    {
    15,
    AudioSrv_table
    };

static const SERVER_ROUTINE AudioSrv_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)s_gfxCreateZoneFactoriesList,
    (SERVER_ROUTINE)s_gfxCreateGfxFactoriesList,
    (SERVER_ROUTINE)s_gfxCreateGfxList,
    (SERVER_ROUTINE)s_gfxRemoveGfx,
    (SERVER_ROUTINE)s_gfxAddGfx,
    (SERVER_ROUTINE)s_gfxModifyGfx,
    (SERVER_ROUTINE)s_gfxOpenGfx,
    (SERVER_ROUTINE)s_gfxLogon,
    (SERVER_ROUTINE)s_gfxLogoff,
    (SERVER_ROUTINE)s_winmmRegisterSessionNotificationEvent,
    (SERVER_ROUTINE)s_winmmUnregisterSessionNotification,
    (SERVER_ROUTINE)s_winmmSessionConnectState,
    (SERVER_ROUTINE)s_wdmDriverOpenDrvRegKey,
    (SERVER_ROUTINE)s_winmmAdvisePreferredDeviceChange,
    (SERVER_ROUTINE)s_winmmGetPnpInfo
    };

static const MIDL_SERVER_INFO AudioSrv_ServerInfo = 
    {
    &AudioSrv_StubDesc,
    AudioSrv_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    AudioSrv_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

