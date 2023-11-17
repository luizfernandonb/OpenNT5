

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Thu Nov 16 12:12:50 2023
 */
/* Compiler settings for .\svcctl.idl:
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
#include "svcctl.h"

#define TYPE_FORMAT_STRING_SIZE   1015                              
#define PROC_FORMAT_STRING_SIZE   2959                              
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

/* Standard interface: svcctl, ver. 2.0,
   GUID={0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}} */


extern const MIDL_SERVER_INFO svcctl_ServerInfo;

extern RPC_DISPATCH_TABLE svcctl_DispatchTable;

static const RPC_SERVER_INTERFACE svcctl___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}},{2,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &svcctl_DispatchTable,
    0,
    0,
    0,
    &svcctl_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE svcctl_ServerIfHandle = (RPC_IF_HANDLE)& svcctl___RpcServerInterface;

extern const MIDL_STUB_DESC svcctl_StubDesc;

extern const NDR_RUNDOWN RundownRoutines[];
extern const EXPR_EVAL ExprEvalRoutines[];

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

	/* Procedure RCloseServiceHandle */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0xe8,		/* Ctxt flags:  via ptr, in, out, strict, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x38 ),	/* 56 */
/* 18 */	NdrFcShort( 0x40 ),	/* 64 */
/* 20 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 22 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCObject */

/* 30 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 32 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 34 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RControlService */

/* 42 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x1 ),	/* 1 */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 54 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 56 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 58 */	NdrFcShort( 0x2c ),	/* 44 */
/* 60 */	NdrFcShort( 0x48 ),	/* 72 */
/* 62 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 64 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 72 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 74 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 76 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwControl */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceStatus */

/* 84 */	NdrFcShort( 0x8112 ),	/* Flags:  must free, out, simple ref, srv alloc size=32 */
/* 86 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 88 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RDeleteService */

/* 96 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x2 ),	/* 2 */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 108 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 110 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 112 */	NdrFcShort( 0x24 ),	/* 36 */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 118 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 126 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 128 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 130 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RLockServiceDatabase */

/* 138 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x3 ),	/* 3 */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 150 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 152 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 154 */	NdrFcShort( 0x24 ),	/* 36 */
/* 156 */	NdrFcShort( 0x40 ),	/* 64 */
/* 158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 168 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 170 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 172 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpLock */

/* 174 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Return value */

/* 180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceObjectSecurity */

/* 186 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x4 ),	/* 4 */
/* 194 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 196 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 198 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 200 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 202 */	NdrFcShort( 0x34 ),	/* 52 */
/* 204 */	NdrFcShort( 0x24 ),	/* 36 */
/* 206 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 208 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 210 */	NdrFcShort( 0x1 ),	/* 1 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 216 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 218 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 220 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwSecurityInformation */

/* 222 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpSecurityDescriptor */

/* 228 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 232 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter cbBufSize */

/* 234 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 238 */	NdrFcShort( 0x36 ),	/* 54 */

	/* Parameter pcbBytesNeeded */

/* 240 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 242 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 248 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RSetServiceObjectSecurity */

/* 252 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x5 ),	/* 5 */
/* 260 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 262 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 264 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 266 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 268 */	NdrFcShort( 0x34 ),	/* 52 */
/* 270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 272 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 274 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 282 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 284 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 286 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwSecurityInformation */

/* 288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpSecurityDescriptor */

/* 294 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 298 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter cbBufSize */

/* 300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceStatus */

/* 312 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x6 ),	/* 6 */
/* 320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 322 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 324 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 326 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 328 */	NdrFcShort( 0x24 ),	/* 36 */
/* 330 */	NdrFcShort( 0x48 ),	/* 72 */
/* 332 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 334 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 342 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 344 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 346 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceStatus */

/* 348 */	NdrFcShort( 0x8112 ),	/* Flags:  must free, out, simple ref, srv alloc size=32 */
/* 350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 352 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RSetServiceStatus */

/* 360 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x7 ),	/* 7 */
/* 368 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 370 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 372 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 374 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 376 */	NdrFcShort( 0x64 ),	/* 100 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 382 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServiceStatus */

/* 390 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 392 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 394 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceStatus */

/* 396 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 400 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RUnlockServiceDatabase */

/* 408 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 418 */	0x30,		/* FC_BIND_CONTEXT */
			0xe8,		/* Ctxt flags:  via ptr, in, out, strict, */
/* 420 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 422 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 424 */	NdrFcShort( 0x38 ),	/* 56 */
/* 426 */	NdrFcShort( 0x40 ),	/* 64 */
/* 428 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 430 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Lock */

/* 438 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 440 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 442 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */

	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RNotifyBootConfigStatus */

/* 450 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x9 ),	/* 9 */
/* 458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 460 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 462 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 464 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 470 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lpMachineName */

/* 480 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 482 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 484 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter BootAcceptable */

/* 486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RI_ScSetServiceBitsW */

/* 498 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0xa ),	/* 10 */
/* 506 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 508 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 510 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 512 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 514 */	NdrFcShort( 0x3c ),	/* 60 */
/* 516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 518 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 520 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServiceStatus */

/* 528 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 530 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 532 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceBits */

/* 534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bSetBitsOn */

/* 540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bUpdateImmediately */

/* 546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszTransportName */

/* 552 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 554 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 556 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Return value */

/* 558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 560 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RChangeServiceConfigW */

/* 564 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0xb ),	/* 11 */
/* 572 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 574 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 576 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 578 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 580 */	NdrFcShort( 0x68 ),	/* 104 */
/* 582 */	NdrFcShort( 0x24 ),	/* 36 */
/* 584 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xe,		/* 14 */
/* 586 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x2 ),	/* 2 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 594 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 596 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 598 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceType */

/* 600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwStartType */

/* 606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwErrorControl */

/* 612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 614 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBinaryPathName */

/* 618 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 620 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 622 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter lpLoadOrderGroup */

/* 624 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 626 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 628 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter lpdwTagId */

/* 630 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 632 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 634 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter lpDependencies */

/* 636 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 638 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 640 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter dwDependSize */

/* 642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 644 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceStartName */

/* 648 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 650 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 652 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter lpPassword */

/* 654 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 656 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 658 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter dwPwSize */

/* 660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 662 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpDisplayName */

/* 666 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 668 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 670 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Return value */

/* 672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 674 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RCreateServiceW */

/* 678 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0xc ),	/* 12 */
/* 686 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 688 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 690 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 692 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 694 */	NdrFcShort( 0x70 ),	/* 112 */
/* 696 */	NdrFcShort( 0x5c ),	/* 92 */
/* 698 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x11,		/* 17 */
/* 700 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x2 ),	/* 2 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 708 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 710 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 712 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 714 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 718 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter lpDisplayName */

/* 720 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 724 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter dwDesiredAccess */

/* 726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceType */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwStartType */

/* 738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 740 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwErrorControl */

/* 744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 746 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBinaryPathName */

/* 750 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 752 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 754 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter lpLoadOrderGroup */

/* 756 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 758 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 760 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter lpdwTagId */

/* 762 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 764 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 766 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter lpDependencies */

/* 768 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 770 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 772 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter dwDependSize */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceStartName */

/* 780 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 782 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 784 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter lpPassword */

/* 786 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 788 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 790 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter dwPwSize */

/* 792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 794 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceHandle */

/* 798 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 800 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 802 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 806 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumDependentServicesW */

/* 810 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0xd ),	/* 13 */
/* 818 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 820 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 822 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 824 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 826 */	NdrFcShort( 0x34 ),	/* 52 */
/* 828 */	NdrFcShort( 0x40 ),	/* 64 */
/* 830 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 832 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 834 */	NdrFcShort( 0x1 ),	/* 1 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 840 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 842 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 844 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceState */

/* 846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServices */

/* 852 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 856 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter cbBufSize */

/* 858 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 862 */	NdrFcShort( 0x94 ),	/* 148 */

	/* Parameter pcbBytesNeeded */

/* 864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServicesReturned */

/* 870 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 872 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 878 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumServicesStatusW */

/* 882 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0xe ),	/* 14 */
/* 890 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 892 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 894 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 896 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 898 */	NdrFcShort( 0x58 ),	/* 88 */
/* 900 */	NdrFcShort( 0x5c ),	/* 92 */
/* 902 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x9,		/* 9 */
/* 904 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 912 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 914 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 916 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceType */

/* 918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceState */

/* 924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 926 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 930 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 934 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter cbBufSize */

/* 936 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 938 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 940 */	NdrFcShort( 0xae ),	/* 174 */

	/* Parameter pcbBytesNeeded */

/* 942 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 944 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServicesReturned */

/* 948 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 950 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpResumeIndex */

/* 954 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 956 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 958 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 962 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ROpenSCManagerW */

/* 966 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0xf ),	/* 15 */
/* 974 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 976 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 978 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 980 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 984 */	NdrFcShort( 0x40 ),	/* 64 */
/* 986 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lpMachineName */

/* 996 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 998 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1000 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter lpDatabaseName */

/* 1002 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1006 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter dwDesiredAccess */

/* 1008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1010 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpScHandle */

/* 1014 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1018 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 1020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1022 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ROpenServiceW */

/* 1026 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1034 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1036 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1038 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1040 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1042 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1044 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1046 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1048 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1056 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1058 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1060 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 1062 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1066 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter dwDesiredAccess */

/* 1068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceHandle */

/* 1074 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1078 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceConfigW */

/* 1086 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1094 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1096 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1098 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1100 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1102 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1104 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1106 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1108 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 1116 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1118 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1120 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceConfig */

/* 1122 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1126 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Parameter cbBufSize */

/* 1128 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1132 */	NdrFcShort( 0x10e ),	/* 270 */

	/* Parameter pcbBytesNeeded */

/* 1134 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceLockStatusW */

/* 1146 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1154 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1156 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1158 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1160 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1162 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1164 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1166 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1168 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1176 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1178 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1180 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpLockStatus */

/* 1182 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1186 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Parameter cbBufSize */

/* 1188 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1192 */	NdrFcShort( 0x138 ),	/* 312 */

	/* Parameter pcbBytesNeeded */

/* 1194 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1202 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RStartServiceW */

/* 1206 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1214 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1216 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1218 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1220 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1222 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1226 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1228 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 1236 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1238 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1240 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter argc */

/* 1242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter argv */

/* 1248 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1250 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1252 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */

	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1256 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RGetServiceDisplayNameW */

/* 1260 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1268 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1270 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1272 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1274 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1276 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1278 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1280 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1282 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1290 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1292 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1294 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 1296 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1300 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter lpDisplayName */

/* 1302 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1306 */	NdrFcShort( 0x180 ),	/* Type Offset=384 */

	/* Parameter lpcchBuffer */

/* 1308 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1310 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1312 */	NdrFcShort( 0x18c ),	/* Type Offset=396 */

	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RGetServiceKeyNameW */

/* 1320 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1328 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1330 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1332 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1334 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1336 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1338 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1340 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1342 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1344 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1350 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1352 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1354 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpDisplayName */

/* 1356 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1360 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter lpServiceName */

/* 1362 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1366 */	NdrFcShort( 0x19a ),	/* Type Offset=410 */

	/* Parameter lpcchBuffer */

/* 1368 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 1370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1372 */	NdrFcShort( 0x1a6 ),	/* Type Offset=422 */

	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1376 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RI_ScSetServiceBitsA */

/* 1380 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1388 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1390 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1392 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1394 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1396 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1400 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1402 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hServiceStatus */

/* 1410 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1412 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1414 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceBits */

/* 1416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bSetBitsOn */

/* 1422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bUpdateImmediately */

/* 1428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszTransportName */

/* 1434 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1436 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1438 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Return value */

/* 1440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1442 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RChangeServiceConfigA */

/* 1446 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1454 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1456 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1458 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1460 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1462 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1464 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1466 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xe,		/* 14 */
/* 1468 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 1476 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1478 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1480 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceType */

/* 1482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1484 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwStartType */

/* 1488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1490 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwErrorControl */

/* 1494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBinaryPathName */

/* 1500 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1502 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1504 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter lpLoadOrderGroup */

/* 1506 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1508 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1510 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter lpdwTagId */

/* 1512 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1514 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1516 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter lpDependencies */

/* 1518 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1520 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1522 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter dwDependSize */

/* 1524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1526 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceStartName */

/* 1530 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1532 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1534 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter lpPassword */

/* 1536 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1538 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1540 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter dwPwSize */

/* 1542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1544 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpDisplayName */

/* 1548 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1550 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1552 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Return value */

/* 1554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1556 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RCreateServiceA */

/* 1560 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1568 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 1570 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1572 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1574 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1576 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1578 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1580 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x11,		/* 17 */
/* 1582 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1586 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1590 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1592 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1594 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 1596 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1600 */	NdrFcShort( 0x1b6 ),	/* Type Offset=438 */

	/* Parameter lpDisplayName */

/* 1602 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1606 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter dwDesiredAccess */

/* 1608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceType */

/* 1614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1616 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwStartType */

/* 1620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1622 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwErrorControl */

/* 1626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1628 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBinaryPathName */

/* 1632 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1634 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1636 */	NdrFcShort( 0x1b6 ),	/* Type Offset=438 */

	/* Parameter lpLoadOrderGroup */

/* 1638 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1640 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1642 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter lpdwTagId */

/* 1644 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1646 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1648 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter lpDependencies */

/* 1650 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1652 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1654 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter dwDependSize */

/* 1656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1658 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceStartName */

/* 1662 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1664 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1666 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter lpPassword */

/* 1668 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1670 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 1672 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter dwPwSize */

/* 1674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1676 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceHandle */

/* 1680 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1682 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 1684 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 1686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1688 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumDependentServicesA */

/* 1692 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1700 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1702 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1704 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1706 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1708 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1710 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1712 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 1714 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 1722 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1724 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1726 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceState */

/* 1728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServices */

/* 1734 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1738 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter cbBufSize */

/* 1740 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1744 */	NdrFcShort( 0x1b8 ),	/* 440 */

	/* Parameter pcbBytesNeeded */

/* 1746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1748 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServicesReturned */

/* 1752 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1754 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1760 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumServicesStatusA */

/* 1764 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1772 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1774 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1776 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1778 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1780 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1782 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1784 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x9,		/* 9 */
/* 1786 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1788 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1794 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1796 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1798 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceType */

/* 1800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceState */

/* 1806 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 1812 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1816 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter cbBufSize */

/* 1818 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1820 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1822 */	NdrFcShort( 0x1c2 ),	/* 450 */

	/* Parameter pcbBytesNeeded */

/* 1824 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1826 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServicesReturned */

/* 1830 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1832 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpResumeIndex */

/* 1836 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1838 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1840 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Return value */

/* 1842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1844 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ROpenSCManagerA */

/* 1848 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1854 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1856 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1858 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 1860 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1862 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 1864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1866 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1868 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1870 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter lpMachineName */

/* 1878 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1880 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1882 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter lpDatabaseName */

/* 1884 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1888 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter dwDesiredAccess */

/* 1890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1892 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpScHandle */

/* 1896 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1898 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1900 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 1902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1904 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ROpenServiceA */

/* 1908 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1916 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1918 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1920 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1922 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1924 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1926 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1928 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1930 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 1938 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1940 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1942 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 1944 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1948 */	NdrFcShort( 0x1b6 ),	/* Type Offset=438 */

	/* Parameter dwDesiredAccess */

/* 1950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServiceHandle */

/* 1956 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1960 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 1962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1964 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceConfigA */

/* 1968 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1976 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1978 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 1980 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1982 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1984 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1986 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1988 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1990 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 1998 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2000 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2002 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceConfig */

/* 2004 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2006 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2008 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Parameter cbBufSize */

/* 2010 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2012 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2014 */	NdrFcShort( 0x21a ),	/* 538 */

	/* Parameter pcbBytesNeeded */

/* 2016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2018 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2024 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceLockStatusA */

/* 2028 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2034 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2036 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2038 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2040 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2042 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2044 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2046 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2048 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 2050 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2058 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2060 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2062 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpLockStatus */

/* 2064 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2068 */	NdrFcShort( 0x23a ),	/* Type Offset=570 */

	/* Parameter cbBufSize */

/* 2070 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2074 */	NdrFcShort( 0x244 ),	/* 580 */

	/* Parameter pcbBytesNeeded */

/* 2076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2084 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RStartServiceA */

/* 2088 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2094 */	NdrFcShort( 0x1f ),	/* 31 */
/* 2096 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2098 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2100 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2102 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2104 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2108 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2110 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2118 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2120 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2122 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter argc */

/* 2124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter argv */

/* 2130 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2134 */	NdrFcShort( 0x24e ),	/* Type Offset=590 */

	/* Return value */

/* 2136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RGetServiceDisplayNameA */

/* 2142 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2150 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2152 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2154 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2156 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2158 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2160 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2162 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2164 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2172 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2176 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpServiceName */

/* 2178 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2182 */	NdrFcShort( 0x1b6 ),	/* Type Offset=438 */

	/* Parameter lpDisplayName */

/* 2184 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2188 */	NdrFcShort( 0x28c ),	/* Type Offset=652 */

	/* Parameter lpcchBuffer */

/* 2190 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 2192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2194 */	NdrFcShort( 0x298 ),	/* Type Offset=664 */

	/* Return value */

/* 2196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2198 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RGetServiceKeyNameA */

/* 2202 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2210 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2212 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2214 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2216 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2218 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2220 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2222 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2224 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2226 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2232 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2234 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2236 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lpDisplayName */

/* 2238 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2242 */	NdrFcShort( 0x1b6 ),	/* Type Offset=438 */

	/* Parameter lpKeyName */

/* 2244 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2248 */	NdrFcShort( 0x2a6 ),	/* Type Offset=678 */

	/* Parameter lpcchBuffer */

/* 2250 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 2252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2254 */	NdrFcShort( 0x2b2 ),	/* Type Offset=690 */

	/* Return value */

/* 2256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2258 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RI_ScGetCurrentGroupStateW */

/* 2262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2270 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2272 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2274 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2276 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2278 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2280 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2282 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2292 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2294 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2296 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pszGroupName */

/* 2298 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2302 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter pdwCurrentState */

/* 2304 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumServiceGroupW */

/* 2316 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2324 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2326 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2328 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2330 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2332 */	NdrFcShort( 0x58 ),	/* 88 */
/* 2334 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2336 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 2338 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2340 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2346 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2348 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2350 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwServiceType */

/* 2352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2354 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceState */

/* 2358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2360 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2364 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2366 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2368 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter cbBufSize */

/* 2370 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2372 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2374 */	NdrFcShort( 0x2bc ),	/* 700 */

	/* Parameter pcbBytesNeeded */

/* 2376 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2378 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServicesReturned */

/* 2382 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2384 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpResumeIndex */

/* 2388 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 2390 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2392 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter pszGroupName */

/* 2394 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2396 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2398 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Return value */

/* 2400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2402 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RChangeServiceConfig2A */

/* 2406 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2414 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2416 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2418 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2420 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2422 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2426 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2428 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2436 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2438 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2440 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Info */

/* 2442 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2446 */	NdrFcShort( 0x32e ),	/* Type Offset=814 */

	/* Return value */

/* 2448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RChangeServiceConfig2W */

/* 2454 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2462 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2464 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2466 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2468 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2470 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2474 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2476 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2480 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2484 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2486 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2488 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Info */

/* 2490 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2492 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2494 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Return value */

/* 2496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceConfig2A */

/* 2502 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2510 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2512 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2514 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2516 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2518 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2520 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2522 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2524 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2532 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2534 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2536 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwInfoLevel */

/* 2538 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2540 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2544 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2548 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter cbBufSize */

/* 2550 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2552 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2554 */	NdrFcShort( 0x39a ),	/* 922 */

	/* Parameter pcbBytesNeeded */

/* 2556 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2558 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2564 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceConfig2W */

/* 2568 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2576 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2578 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2580 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2582 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2584 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2586 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2588 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2590 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2598 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2600 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2602 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter dwInfoLevel */

/* 2604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2610 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2612 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2614 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter cbBufSize */

/* 2616 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2618 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2620 */	NdrFcShort( 0x3a4 ),	/* 932 */

	/* Parameter pcbBytesNeeded */

/* 2622 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2624 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2630 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RQueryServiceStatusEx */

/* 2634 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2642 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2644 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2646 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2648 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2650 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2652 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2654 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2656 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hService */

/* 2664 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2666 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2668 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InfoLevel */

/* 2670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2672 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2674 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2676 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2678 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2680 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter cbBufSize */

/* 2682 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2686 */	NdrFcShort( 0x3ae ),	/* 942 */

	/* Parameter pcbBytesNeeded */

/* 2688 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2690 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2696 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumServicesStatusExA */

/* 2700 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2708 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2710 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2712 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2714 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2716 */	NdrFcShort( 0x60 ),	/* 96 */
/* 2718 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2720 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 2722 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2730 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2732 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2734 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InfoLevel */

/* 2736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2738 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2740 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter dwServiceType */

/* 2742 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2744 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceState */

/* 2748 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2750 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2754 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2756 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2758 */	NdrFcShort( 0x3bc ),	/* Type Offset=956 */

	/* Parameter cbBufSize */

/* 2760 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2762 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2764 */	NdrFcShort( 0x3c8 ),	/* 968 */

	/* Parameter pcbBytesNeeded */

/* 2766 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2768 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServicesReturned */

/* 2772 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2774 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpResumeIndex */

/* 2778 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 2780 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2782 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter pszGroupName */

/* 2784 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2786 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2788 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Return value */

/* 2790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2792 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure REnumServicesStatusExW */

/* 2796 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2802 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2804 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2806 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2808 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2810 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2812 */	NdrFcShort( 0x60 ),	/* 96 */
/* 2814 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2816 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 2818 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2820 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2826 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2828 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2830 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InfoLevel */

/* 2832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2834 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2836 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter dwServiceType */

/* 2838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2840 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwServiceState */

/* 2844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2846 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 2850 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2852 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2854 */	NdrFcShort( 0x3bc ),	/* Type Offset=956 */

	/* Parameter cbBufSize */

/* 2856 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2858 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2860 */	NdrFcShort( 0x3d2 ),	/* 978 */

	/* Parameter pcbBytesNeeded */

/* 2862 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2864 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpServicesReturned */

/* 2868 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2870 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpResumeIndex */

/* 2874 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 2876 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2878 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter pszGroupName */

/* 2880 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2882 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2884 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Return value */

/* 2886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2888 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RI_ScSendTSMessage */

/* 2892 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2900 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2902 */	0x30,		/* FC_BIND_CONTEXT */
			0x48,		/* Ctxt flags:  in, strict, */
/* 2904 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2906 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2908 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2912 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2914 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hSCManager */

/* 2922 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2924 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2926 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter OpCode */

/* 2928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2930 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwEvent */

/* 2934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2936 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbData */

/* 2940 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2942 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2944 */	NdrFcShort( 0x3dc ),	/* 988 */

	/* Parameter lpData */

/* 2946 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2948 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2950 */	NdrFcShort( 0x3ea ),	/* Type Offset=1002 */

	/* Return value */

/* 2952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2954 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2956 */	0x8,		/* FC_LONG */
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
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0xe9,		/* Ctxt flags:  via ptr, in, out, strict, can't be null */
/*  8 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x49,		/* Ctxt flags:  in, strict, can't be null */
/* 12 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 14 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 16 */	NdrFcShort( 0x2 ),	/* Offset= 2 (18) */
/* 18 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x1c ),	/* 28 */
/* 22 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 28 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 30 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 32 */	NdrFcShort( 0x2 ),	/* Offset= 2 (34) */
/* 34 */	0x30,		/* FC_BIND_CONTEXT */
			0xa8,		/* Ctxt flags:  via ptr, out, strict, */
/* 36 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 38 */	
			0x11, 0x0,	/* FC_RP */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 44 */	NdrFcShort( 0x1 ),	/* 1 */
/* 46 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 48 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 50 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 52 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 54 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 56 */	NdrFcLong( 0x0 ),	/* 0 */
/* 60 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 64 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 66 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 68 */	
			0x11, 0x0,	/* FC_RP */
/* 70 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (18) */
/* 72 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 74 */	NdrFcShort( 0x2 ),	/* Offset= 2 (76) */
/* 76 */	0x30,		/* FC_BIND_CONTEXT */
			0xe9,		/* Ctxt flags:  via ptr, in, out, strict, can't be null */
/* 78 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 80 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 82 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 86 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 88 */	
			0x12, 0x0,	/* FC_UP */
/* 90 */	NdrFcShort( 0x2 ),	/* Offset= 2 (92) */
/* 92 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 94 */	NdrFcShort( 0x1 ),	/* 1 */
/* 96 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 98 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 100 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 102 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 104 */	
			0x12, 0x0,	/* FC_UP */
/* 106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (108) */
/* 108 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 112 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 114 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 116 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 118 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 120 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 122 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 124 */	
			0x12, 0x0,	/* FC_UP */
/* 126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (128) */
/* 128 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 132 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 134 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 136 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 138 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 140 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 142 */	NdrFcShort( 0x2 ),	/* Offset= 2 (144) */
/* 144 */	0x30,		/* FC_BIND_CONTEXT */
			0xa8,		/* Ctxt flags:  via ptr, out, strict, */
/* 146 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 148 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 154 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 158 */	
			0x11, 0x0,	/* FC_RP */
/* 160 */	NdrFcShort( 0x2 ),	/* Offset= 2 (162) */
/* 162 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 166 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 168 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 170 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 172 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 174 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 184 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 186 */	NdrFcShort( 0x2 ),	/* Offset= 2 (188) */
/* 188 */	0x30,		/* FC_BIND_CONTEXT */
			0xa8,		/* Ctxt flags:  via ptr, out, strict, */
/* 190 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 192 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 194 */	NdrFcShort( 0x24 ),	/* 36 */
/* 196 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 198 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 200 */	NdrFcShort( 0xc ),	/* 12 */
/* 202 */	NdrFcShort( 0xc ),	/* 12 */
/* 204 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 206 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 208 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 210 */	NdrFcShort( 0x10 ),	/* 16 */
/* 212 */	NdrFcShort( 0x10 ),	/* 16 */
/* 214 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 216 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 218 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 220 */	NdrFcShort( 0x18 ),	/* 24 */
/* 222 */	NdrFcShort( 0x18 ),	/* 24 */
/* 224 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 226 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 228 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 230 */	NdrFcShort( 0x1c ),	/* 28 */
/* 232 */	NdrFcShort( 0x1c ),	/* 28 */
/* 234 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 236 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 238 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 240 */	NdrFcShort( 0x20 ),	/* 32 */
/* 242 */	NdrFcShort( 0x20 ),	/* 32 */
/* 244 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 246 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 248 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 250 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 252 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 254 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 256 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 258 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 260 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 262 */	0x28,		/* 40 */
			0x0,		/* 0 */
/* 264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 266 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 268 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (192) */
/* 270 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 280 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 282 */	NdrFcShort( 0xc ),	/* 12 */
/* 284 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 286 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 288 */	NdrFcShort( 0x4 ),	/* 4 */
/* 290 */	NdrFcShort( 0x4 ),	/* 4 */
/* 292 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 294 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 296 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 298 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 300 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 302 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 304 */	0x28,		/* 40 */
			0x0,		/* 0 */
/* 306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 308 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 310 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (280) */
/* 312 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 322 */	
			0x12, 0x0,	/* FC_UP */
/* 324 */	NdrFcShort( 0x16 ),	/* Offset= 22 (346) */
/* 326 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 328 */	NdrFcShort( 0x4 ),	/* 4 */
/* 330 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 332 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 340 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 342 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 344 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 346 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 348 */	NdrFcShort( 0x4 ),	/* 4 */
/* 350 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 354 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 356 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 358 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 360 */	NdrFcShort( 0x4 ),	/* 4 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 372 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 374 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 376 */	0x0,		/* 0 */
			NdrFcShort( 0xffcd ),	/* Offset= -51 (326) */
			0x5b,		/* FC_END */
/* 380 */	
			0x11, 0x0,	/* FC_RP */
/* 382 */	NdrFcShort( 0x2 ),	/* Offset= 2 (384) */
/* 384 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 386 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 392 */	
			0x11, 0x0,	/* FC_RP */
/* 394 */	NdrFcShort( 0x2 ),	/* Offset= 2 (396) */
/* 396 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 406 */	
			0x11, 0x0,	/* FC_RP */
/* 408 */	NdrFcShort( 0x2 ),	/* Offset= 2 (410) */
/* 410 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 412 */	0x20,		/* Corr desc:  parameter,  */
			0x59,		/* FC_CALLBACK */
/* 414 */	NdrFcShort( 0x1 ),	/* 1 */
/* 416 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 418 */	
			0x11, 0x0,	/* FC_RP */
/* 420 */	NdrFcShort( 0x2 ),	/* Offset= 2 (422) */
/* 422 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 428 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 432 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 434 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 436 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 438 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 440 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 446 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 450 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 460 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 462 */	NdrFcShort( 0x24 ),	/* 36 */
/* 464 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 466 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 468 */	NdrFcShort( 0xc ),	/* 12 */
/* 470 */	NdrFcShort( 0xc ),	/* 12 */
/* 472 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 474 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 476 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 478 */	NdrFcShort( 0x10 ),	/* 16 */
/* 480 */	NdrFcShort( 0x10 ),	/* 16 */
/* 482 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 484 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 486 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 488 */	NdrFcShort( 0x18 ),	/* 24 */
/* 490 */	NdrFcShort( 0x18 ),	/* 24 */
/* 492 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 494 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 496 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 498 */	NdrFcShort( 0x1c ),	/* 28 */
/* 500 */	NdrFcShort( 0x1c ),	/* 28 */
/* 502 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 504 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 506 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 508 */	NdrFcShort( 0x20 ),	/* 32 */
/* 510 */	NdrFcShort( 0x20 ),	/* 32 */
/* 512 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 514 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 516 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 518 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 520 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 522 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 524 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 526 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 528 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 530 */	0x28,		/* 40 */
			0x0,		/* 0 */
/* 532 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 534 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 536 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (460) */
/* 538 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 544 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 548 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 550 */	NdrFcShort( 0xc ),	/* 12 */
/* 552 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 554 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 556 */	NdrFcShort( 0x4 ),	/* 4 */
/* 558 */	NdrFcShort( 0x4 ),	/* 4 */
/* 560 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 562 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 564 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 566 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 568 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 570 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 572 */	0x28,		/* 40 */
			0x0,		/* 0 */
/* 574 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 576 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 578 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (548) */
/* 580 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 586 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 590 */	
			0x12, 0x0,	/* FC_UP */
/* 592 */	NdrFcShort( 0x16 ),	/* Offset= 22 (614) */
/* 594 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 596 */	NdrFcShort( 0x4 ),	/* 4 */
/* 598 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 600 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 608 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 610 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 612 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 614 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 616 */	NdrFcShort( 0x4 ),	/* 4 */
/* 618 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 622 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 624 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 626 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 628 */	NdrFcShort( 0x4 ),	/* 4 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x1 ),	/* 1 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 640 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 642 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 644 */	0x0,		/* 0 */
			NdrFcShort( 0xffcd ),	/* Offset= -51 (594) */
			0x5b,		/* FC_END */
/* 648 */	
			0x11, 0x0,	/* FC_RP */
/* 650 */	NdrFcShort( 0x2 ),	/* Offset= 2 (652) */
/* 652 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 654 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 658 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 660 */	
			0x11, 0x0,	/* FC_RP */
/* 662 */	NdrFcShort( 0x2 ),	/* Offset= 2 (664) */
/* 664 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 670 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 674 */	
			0x11, 0x0,	/* FC_RP */
/* 676 */	NdrFcShort( 0x2 ),	/* Offset= 2 (678) */
/* 678 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 680 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 682 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 684 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 686 */	
			0x11, 0x0,	/* FC_RP */
/* 688 */	NdrFcShort( 0x2 ),	/* Offset= 2 (690) */
/* 690 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 696 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 700 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 706 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 710 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 712 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 714 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 716 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 718 */	NdrFcShort( 0x2 ),	/* Offset= 2 (720) */
/* 720 */	NdrFcShort( 0x4 ),	/* 4 */
/* 722 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 724 */	NdrFcLong( 0x1 ),	/* 1 */
/* 728 */	NdrFcShort( 0xa ),	/* Offset= 10 (738) */
/* 730 */	NdrFcLong( 0x2 ),	/* 2 */
/* 734 */	NdrFcShort( 0x8 ),	/* Offset= 8 (742) */
/* 736 */	NdrFcShort( 0xffff ),	/* Offset= -1 (735) */
/* 738 */	
			0x12, 0x0,	/* FC_UP */
/* 740 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (594) */
/* 742 */	
			0x12, 0x0,	/* FC_UP */
/* 744 */	NdrFcShort( 0x1a ),	/* Offset= 26 (770) */
/* 746 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 750 */	0xe,		/* FC_ENUM32 */
			0x8,		/* FC_LONG */
/* 752 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 754 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 760 */	NdrFcShort( 0xc ),	/* 12 */
/* 762 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 764 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 766 */	NdrFcShort( 0xffec ),	/* Offset= -20 (746) */
/* 768 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 770 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 772 */	NdrFcShort( 0x14 ),	/* 20 */
/* 774 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 776 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 778 */	NdrFcShort( 0x4 ),	/* 4 */
/* 780 */	NdrFcShort( 0x4 ),	/* 4 */
/* 782 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 784 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 786 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 794 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 796 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 798 */	NdrFcShort( 0x10 ),	/* 16 */
/* 800 */	NdrFcShort( 0x10 ),	/* 16 */
/* 802 */	0x12, 0x0,	/* FC_UP */
/* 804 */	NdrFcShort( 0xffce ),	/* Offset= -50 (754) */
/* 806 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 808 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 810 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 812 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 814 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x0 ),	/* Offset= 0 (820) */
/* 822 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 824 */	0x0,		/* 0 */
			NdrFcShort( 0xff8d ),	/* Offset= -115 (710) */
			0x5b,		/* FC_END */
/* 828 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 830 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 832 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 834 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 836 */	NdrFcShort( 0x2 ),	/* Offset= 2 (838) */
/* 838 */	NdrFcShort( 0x4 ),	/* 4 */
/* 840 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 842 */	NdrFcLong( 0x1 ),	/* 1 */
/* 846 */	NdrFcShort( 0xa ),	/* Offset= 10 (856) */
/* 848 */	NdrFcLong( 0x2 ),	/* 2 */
/* 852 */	NdrFcShort( 0x8 ),	/* Offset= 8 (860) */
/* 854 */	NdrFcShort( 0xffff ),	/* Offset= -1 (853) */
/* 856 */	
			0x12, 0x0,	/* FC_UP */
/* 858 */	NdrFcShort( 0xfdec ),	/* Offset= -532 (326) */
/* 860 */	
			0x12, 0x0,	/* FC_UP */
/* 862 */	NdrFcShort( 0x2 ),	/* Offset= 2 (864) */
/* 864 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 866 */	NdrFcShort( 0x14 ),	/* 20 */
/* 868 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 870 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 872 */	NdrFcShort( 0x4 ),	/* 4 */
/* 874 */	NdrFcShort( 0x4 ),	/* 4 */
/* 876 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 878 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 880 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 886 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 888 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 890 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 892 */	NdrFcShort( 0x10 ),	/* 16 */
/* 894 */	NdrFcShort( 0x10 ),	/* 16 */
/* 896 */	0x12, 0x0,	/* FC_UP */
/* 898 */	NdrFcShort( 0xff70 ),	/* Offset= -144 (754) */
/* 900 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 902 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 904 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 906 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 908 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* Offset= 0 (914) */
/* 916 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 918 */	0x0,		/* 0 */
			NdrFcShort( 0xffa5 ),	/* Offset= -91 (828) */
			0x5b,		/* FC_END */
/* 922 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 928 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 932 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 938 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 942 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 952 */	
			0x11, 0x0,	/* FC_RP */
/* 954 */	NdrFcShort( 0x2 ),	/* Offset= 2 (956) */
/* 956 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 960 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 962 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 964 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 966 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 968 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 974 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 978 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 988 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 994 */	NdrFcLong( 0x8 ),	/* 8 */
/* 998 */	
			0x11, 0x0,	/* FC_RP */
/* 1000 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1002) */
/* 1002 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1006 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1010 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1012 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    SC_RPC_HANDLE_rundown
    ,SC_RPC_LOCK_rundown
    };


static void __RPC_USER svcctl_RGetServiceDisplayNameWExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        NDR_SCONTEXT hSCManager;
        wchar_t *lpServiceName;
        wchar_t *lpDisplayName;
        LPBOUNDED_DWORD lpcchBuffer;
        DWORD _RetVal;
        };
    #pragma pack()
    struct _PARAM_STRUCT *pS	=	( struct _PARAM_STRUCT * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( *pS->lpcchBuffer + 1 );
}

static void __RPC_USER svcctl_RGetServiceKeyNameWExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        NDR_SCONTEXT hSCManager;
        wchar_t *lpDisplayName;
        wchar_t *lpServiceName;
        LPBOUNDED_DWORD lpcchBuffer;
        DWORD _RetVal;
        };
    #pragma pack()
    struct _PARAM_STRUCT *pS	=	( struct _PARAM_STRUCT * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( *pS->lpcchBuffer + 1 );
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    svcctl_RGetServiceDisplayNameWExprEval_0000
    ,svcctl_RGetServiceKeyNameWExprEval_0001
    };


static const unsigned short svcctl_FormatStringOffsetTable[] =
    {
    0,
    42,
    96,
    138,
    186,
    252,
    312,
    360,
    408,
    450,
    498,
    564,
    678,
    810,
    882,
    966,
    1026,
    1086,
    1146,
    1206,
    1260,
    1320,
    1380,
    1446,
    1560,
    1692,
    1764,
    1848,
    1908,
    1968,
    2028,
    2088,
    2142,
    2202,
    2262,
    2316,
    2406,
    2454,
    2502,
    2568,
    2634,
    2700,
    2796,
    2892
    };


static const MIDL_STUB_DESC svcctl_StubDesc = 
    {
    (void *)& svcctl___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    ExprEvalRoutines,
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

static RPC_DISPATCH_FUNCTION svcctl_table[] =
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
RPC_DISPATCH_TABLE svcctl_DispatchTable = 
    {
    44,
    svcctl_table
    };

static const SERVER_ROUTINE svcctl_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)RCloseServiceHandle,
    (SERVER_ROUTINE)RControlService,
    (SERVER_ROUTINE)RDeleteService,
    (SERVER_ROUTINE)RLockServiceDatabase,
    (SERVER_ROUTINE)RQueryServiceObjectSecurity,
    (SERVER_ROUTINE)RSetServiceObjectSecurity,
    (SERVER_ROUTINE)RQueryServiceStatus,
    (SERVER_ROUTINE)RSetServiceStatus,
    (SERVER_ROUTINE)RUnlockServiceDatabase,
    (SERVER_ROUTINE)RNotifyBootConfigStatus,
    (SERVER_ROUTINE)RI_ScSetServiceBitsW,
    (SERVER_ROUTINE)RChangeServiceConfigW,
    (SERVER_ROUTINE)RCreateServiceW,
    (SERVER_ROUTINE)REnumDependentServicesW,
    (SERVER_ROUTINE)REnumServicesStatusW,
    (SERVER_ROUTINE)ROpenSCManagerW,
    (SERVER_ROUTINE)ROpenServiceW,
    (SERVER_ROUTINE)RQueryServiceConfigW,
    (SERVER_ROUTINE)RQueryServiceLockStatusW,
    (SERVER_ROUTINE)RStartServiceW,
    (SERVER_ROUTINE)RGetServiceDisplayNameW,
    (SERVER_ROUTINE)RGetServiceKeyNameW,
    (SERVER_ROUTINE)RI_ScSetServiceBitsA,
    (SERVER_ROUTINE)RChangeServiceConfigA,
    (SERVER_ROUTINE)RCreateServiceA,
    (SERVER_ROUTINE)REnumDependentServicesA,
    (SERVER_ROUTINE)REnumServicesStatusA,
    (SERVER_ROUTINE)ROpenSCManagerA,
    (SERVER_ROUTINE)ROpenServiceA,
    (SERVER_ROUTINE)RQueryServiceConfigA,
    (SERVER_ROUTINE)RQueryServiceLockStatusA,
    (SERVER_ROUTINE)RStartServiceA,
    (SERVER_ROUTINE)RGetServiceDisplayNameA,
    (SERVER_ROUTINE)RGetServiceKeyNameA,
    (SERVER_ROUTINE)RI_ScGetCurrentGroupStateW,
    (SERVER_ROUTINE)REnumServiceGroupW,
    (SERVER_ROUTINE)RChangeServiceConfig2A,
    (SERVER_ROUTINE)RChangeServiceConfig2W,
    (SERVER_ROUTINE)RQueryServiceConfig2A,
    (SERVER_ROUTINE)RQueryServiceConfig2W,
    (SERVER_ROUTINE)RQueryServiceStatusEx,
    (SERVER_ROUTINE)REnumServicesStatusExA,
    (SERVER_ROUTINE)REnumServicesStatusExW,
    (SERVER_ROUTINE)RI_ScSendTSMessage
    };

static const MIDL_SERVER_INFO svcctl_ServerInfo = 
    {
    &svcctl_StubDesc,
    svcctl_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    svcctl_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

