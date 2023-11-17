

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for apsvc.idl:
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
#include "apsvc.h"

#define TYPE_FORMAT_STRING_SIZE   99                                
#define PROC_FORMAT_STRING_SIZE   65                                
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

/* Standard interface: WINHTTP_AUTOPROXY_SERVICE, ver. 5.1,
   GUID={0x3473dd4d,0x2e88,0x4006,{0x9c,0xba,0x22,0x57,0x09,0x09,0xdd,0x10}} */


extern const MIDL_SERVER_INFO WINHTTP_AUTOPROXY_SERVICE_ServerInfo;

extern RPC_DISPATCH_TABLE WINHTTP_AUTOPROXY_SERVICE_v5_1_DispatchTable;

static const RPC_SERVER_INTERFACE WINHTTP_AUTOPROXY_SERVICE___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x3473dd4d,0x2e88,0x4006,{0x9c,0xba,0x22,0x57,0x09,0x09,0xdd,0x10}},{5,1}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &WINHTTP_AUTOPROXY_SERVICE_v5_1_DispatchTable,
    0,
    0,
    0,
    &WINHTTP_AUTOPROXY_SERVICE_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE WINHTTP_AUTOPROXY_SERVICE_v5_1_s_ifspec = (RPC_IF_HANDLE)& WINHTTP_AUTOPROXY_SERVICE___RpcServerInterface;

extern const MIDL_STUB_DESC WINHTTP_AUTOPROXY_SERVICE_StubDesc;


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   [async] attribute, /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetProxyForUrl */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14 */	NdrFcShort( 0x54 ),	/* 84 */
/* 16 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18 */	0xc7,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, has async handle */
			0x6,		/* 6 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hBinding */

/* 28 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 30 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 32 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pcwszUrl */

/* 34 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 36 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 38 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pAutoProxyOptions */

/* 40 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 42 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 44 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter pSessionOptions */

/* 46 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 48 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 50 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Parameter pAutoProxyResult */

/* 52 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 54 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 56 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwLastError */

/* 58 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 60 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 62 */	0x8,		/* FC_LONG */
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
			0x11, 0x0,	/* FC_RP */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 12 */	NdrFcShort( 0x18 ),	/* 24 */
/* 14 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 16 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 18 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 24 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 26 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 28 */	NdrFcShort( 0xc ),	/* 12 */
/* 30 */	NdrFcShort( 0xc ),	/* 12 */
/* 32 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 34 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 36 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 38 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 40 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 42 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 44 */	
			0x11, 0x0,	/* FC_RP */
/* 46 */	NdrFcShort( 0x2 ),	/* Offset= 2 (48) */
/* 48 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x14 ),	/* 20 */
/* 52 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 54 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 56 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 58 */	
			0x11, 0x0,	/* FC_RP */
/* 60 */	NdrFcShort( 0x2 ),	/* Offset= 2 (62) */
/* 62 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 64 */	NdrFcShort( 0xc ),	/* 12 */
/* 66 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 68 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 70 */	NdrFcShort( 0x4 ),	/* 4 */
/* 72 */	NdrFcShort( 0x4 ),	/* 4 */
/* 74 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 76 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 80 */	NdrFcShort( 0x8 ),	/* 8 */
/* 82 */	NdrFcShort( 0x8 ),	/* 8 */
/* 84 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 86 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 88 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 90 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 92 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 94 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 96 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short WINHTTP_AUTOPROXY_SERVICE_FormatStringOffsetTable[] =
    {
    0
    };


static const MIDL_STUB_DESC WINHTTP_AUTOPROXY_SERVICE_StubDesc = 
    {
    (void *)& WINHTTP_AUTOPROXY_SERVICE___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION WINHTTP_AUTOPROXY_SERVICE_table[] =
    {
    NdrAsyncServerCall,
    0
    };
RPC_DISPATCH_TABLE WINHTTP_AUTOPROXY_SERVICE_v5_1_DispatchTable = 
    {
    1,
    WINHTTP_AUTOPROXY_SERVICE_table
    };

static const SERVER_ROUTINE WINHTTP_AUTOPROXY_SERVICE_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)GetProxyForUrl
    };

static const MIDL_SERVER_INFO WINHTTP_AUTOPROXY_SERVICE_ServerInfo = 
    {
    &WINHTTP_AUTOPROXY_SERVICE_StubDesc,
    WINHTTP_AUTOPROXY_SERVICE_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    WINHTTP_AUTOPROXY_SERVICE_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

