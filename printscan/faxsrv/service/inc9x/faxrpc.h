

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for faxrpc.idl:
    Os, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, oldnames
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __faxrpc_h__
#define __faxrpc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "imports.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

#ifndef __fax_INTERFACE_DEFINED__
#define __fax_INTERFACE_DEFINED__

/* interface fax */
/* [implicit_handle][unique][version][uuid] */ 

typedef /* [context_handle] */ HANDLE RPC_FAX_PORT_HANDLE;

typedef /* [ref] */ RPC_FAX_PORT_HANDLE *PRPC_FAX_PORT_HANDLE;

typedef /* [context_handle] */ HANDLE RPC_FAX_SVC_HANDLE;

typedef /* [ref] */ RPC_FAX_SVC_HANDLE *PRPC_FAX_SVC_HANDLE;

typedef /* [context_handle] */ HANDLE RPC_FAX_MSG_ENUM_HANDLE;

typedef /* [ref] */ RPC_FAX_MSG_ENUM_HANDLE *PRPC_FAX_MSG_ENUM_HANDLE;

typedef /* [context_handle] */ HANDLE RPC_FAX_COPY_HANDLE;

typedef /* [ref] */ RPC_FAX_COPY_HANDLE *PRPC_FAX_COPY_HANDLE;

typedef /* [context_handle] */ HANDLE RPC_FAX_EVENT_HANDLE;

typedef /* [ref] */ RPC_FAX_EVENT_HANDLE *PRPC_FAX_EVENT_HANDLE;

typedef /* [context_handle] */ HANDLE RPC_FAX_EVENT_EX_HANDLE;

typedef /* [ref] */ RPC_FAX_EVENT_EX_HANDLE *PRPC_FAX_EVENT_EX_HANDLE;

typedef DWORD *LPRANGED_DWORD;

typedef struct _RPC_FAX_OUTBOUND_ROUTING_GROUPW
    {
    DWORD dwSizeOfStruct;
    /* [string] */ LPWSTR lpwstrGroupName;
    /* [range] */ DWORD dwNumDevices;
    /* [size_is][unique] */ LPDWORD lpdwDevices;
    FAX_ENUM_GROUP_STATUS Status;
    } 	RPC_FAX_OUTBOUND_ROUTING_GROUPW;

typedef struct _RPC_FAX_OUTBOUND_ROUTING_GROUPW *PRPC_FAX_OUTBOUND_ROUTING_GROUPW;

typedef /* [switch_type] */ union _FAX_RULE_DESTINATION
    {
    /* [case()] */ DWORD dwDeviceId;
    /* [default][string] */ LPWSTR lpwstrGroupName;
    } 	FAX_RULE_DESTINATION;

typedef struct _RPC_FAX_OUTBOUND_ROUTING_RULEW
    {
    DWORD dwSizeOfStruct;
    DWORD dwAreaCode;
    DWORD dwCountryCode;
    /* [string] */ LPWSTR lpwstrCountryName;
    /* [switch_is] */ FAX_RULE_DESTINATION Destination;
    BOOL bUseGroup;
    } 	RPC_FAX_OUTBOUND_ROUTING_RULEW;

typedef struct _RPC_FAX_OUTBOUND_ROUTING_RULEW *PRPC_FAX_OUTBOUND_ROUTING_RULEW;

error_status_t FAX_GetServicePrinters( 
    /* [in] */ handle_t hBinding,
    /* [size_is][size_is][out] */ LPBYTE *lpBuffer,
    /* [ref][out] */ LPDWORD lpdwBufferSize,
    /* [ref][out] */ LPDWORD lpdwPrintersReturned);

/* [fault_status][comm_status] */ error_status_t FAX_ConnectionRefCount( 
    /* [in] */ handle_t hBinding,
    /* [out][in] */ PRPC_FAX_SVC_HANDLE Handle,
    /* [in] */ DWORD Connect,
    /* [out] */ LPDWORD CanShare);

/* [fault_status][comm_status] */ error_status_t FAX_OpenPort( 
    /* [in] */ handle_t hBinding,
    /* [in] */ DWORD DeviceId,
    /* [in] */ DWORD Flags,
    /* [out] */ PRPC_FAX_PORT_HANDLE FaxPortHandle);

/* [fault_status][comm_status] */ error_status_t FAX_ClosePort( 
    /* [out][in] */ PRPC_FAX_PORT_HANDLE FaxPortHandle);

/* [fault_status][comm_status] */ error_status_t FAX_EnumJobs( 
    /* [in] */ handle_t hBinding,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize,
    /* [ref][out] */ LPDWORD JobsReturned);

/* [fault_status][comm_status] */ error_status_t FAX_GetJob( 
    /* [in] */ handle_t hBinding,
    /* [in] */ DWORD JobId,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_SetJob( 
    /* [in] */ handle_t hBinding,
    /* [in] */ DWORD JobId,
    /* [in] */ DWORD Command);

/* [fault_status][comm_status] */ error_status_t FAX_GetPageData( 
    /* [in] */ handle_t hBinding,
    /* [in] */ DWORD JobId,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize,
    /* [out][in] */ LPDWORD ImageWidth,
    /* [out][in] */ LPDWORD ImageHeight);

/* [fault_status][comm_status] */ error_status_t FAX_GetDeviceStatus( 
    /* [in] */ RPC_FAX_PORT_HANDLE FaxPortHandle,
    /* [size_is][size_is][out] */ LPBYTE *StatusBuffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_Abort( 
    /* [in] */ handle_t hBinding,
    /* [in] */ DWORD JobId);

/* [fault_status][comm_status] */ error_status_t FAX_EnumPorts( 
    /* [in] */ handle_t hBinding,
    /* [size_is][size_is][out] */ LPBYTE *PortBuffer,
    /* [ref][out] */ LPDWORD BufferSize,
    /* [ref][out] */ LPDWORD PortsReturned);

/* [fault_status][comm_status] */ error_status_t FAX_GetPort( 
    /* [in] */ RPC_FAX_PORT_HANDLE FaxPortHandle,
    /* [size_is][size_is][out] */ LPBYTE *PortBuffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_SetPort( 
    /* [in] */ RPC_FAX_PORT_HANDLE FaxPortHandle,
    /* [in] */ const FAX_PORT_INFO *PortInfo);

/* [fault_status][comm_status] */ error_status_t FAX_EnumRoutingMethods( 
    /* [in] */ RPC_FAX_PORT_HANDLE FaxPortHandle,
    /* [size_is][size_is][out] */ LPBYTE *RoutingInfoBuffer,
    /* [ref][out] */ LPDWORD RoutingInfoBufferSize,
    /* [ref][out] */ LPDWORD PortsReturned);

/* [fault_status][comm_status] */ error_status_t FAX_EnableRoutingMethod( 
    /* [in] */ RPC_FAX_PORT_HANDLE FaxPortHandle,
    /* [unique][string][in] */ LPCWSTR RoutingGuid,
    /* [in] */ BOOL Enabled);

/* [fault_status][comm_status] */ error_status_t FAX_GetRoutingInfo( 
    /* [in] */ RPC_FAX_PORT_HANDLE FaxPortHandle,
    /* [unique][string][in] */ LPCWSTR RoutingGuid,
    /* [size_is][size_is][out] */ LPBYTE *RoutingInfoBuffer,
    /* [ref][out] */ LPDWORD RoutingInfoBufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_SetRoutingInfo( 
    /* [in] */ RPC_FAX_PORT_HANDLE FaxPortHandle,
    /* [unique][string][in] */ LPCWSTR RoutingGuid,
    /* [size_is][unique][in] */ const BYTE *RoutingInfoBuffer,
    /* [range][in] */ DWORD RoutingInfoBufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_EnumGlobalRoutingInfo( 
    /* [in] */ handle_t hBinding,
    /* [size_is][size_is][out] */ LPBYTE *RoutingInfoBuffer,
    /* [ref][out] */ LPDWORD RoutingInfoBufferSize,
    /* [ref][out] */ LPDWORD MethodsReturned);

/* [fault_status][comm_status] */ error_status_t FAX_SetGlobalRoutingInfo( 
    /* [in] */ handle_t hBinding,
    /* [in] */ const FAX_GLOBAL_ROUTING_INFOW *RoutingInfo);

/* [fault_status][comm_status] */ error_status_t FAX_GetConfiguration( 
    /* [in] */ handle_t hBinding,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_SetConfiguration( 
    /* [in] */ handle_t hBinding,
    /* [in] */ const FAX_CONFIGURATIONW *FaxConfig);

/* [fault_status][comm_status] */ error_status_t FAX_GetLoggingCategories( 
    /* [in] */ handle_t hBinding,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize,
    /* [ref][out] */ LPDWORD NumberCategories);

/* [fault_status][comm_status] */ error_status_t FAX_SetLoggingCategories( 
    /* [in] */ handle_t hBinding,
    /* [size_is][unique][in] */ const LPBYTE Buffer,
    /* [range][in] */ DWORD BufferSize,
    /* [in] */ DWORD NumberCategories);

/* [fault_status][comm_status] */ error_status_t FAX_GetSecurity( 
    /* [in] */ handle_t hBinding,
    /* [size_is][size_is][out] */ LPBYTE *pSecurityDescriptor,
    /* [ref][out] */ LPDWORD lpdwBufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_SetSecurity( 
    /* [in] */ handle_t hBinding,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [size_is][unique][in] */ const LPBYTE pSecurityDescriptor,
    /* [range][in] */ DWORD dwBufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_AccessCheck( 
    /* [in] */ handle_t hBinding,
    /* [in] */ DWORD AccessMask,
    /* [ref][out] */ BOOL *pfAccess,
    /* [unique][out][in] */ LPDWORD lpdwRights);

/* [fault_status][comm_status] */ error_status_t FAX_CheckServerProtSeq( 
    /* [in] */ handle_t hbinding,
    /* [unique][out][in] */ LPDWORD lpdwProtSeq);

/* [fault_status][comm_status] */ error_status_t FAX_SendDocumentEx( 
    /* [in] */ handle_t hBinding,
    /* [unique][string][in] */ LPCWSTR lpcwstrFileName,
    /* [in] */ LPCFAX_COVERPAGE_INFO_EXW lpcCoverPageInfo,
    /* [in] */ LPCFAX_PERSONAL_PROFILEW lpcSenderProfile,
    /* [range][in] */ DWORD dwNumRecipients,
    /* [size_is][in] */ LPCFAX_PERSONAL_PROFILEW lpcRecipientList,
    /* [in] */ LPCFAX_JOB_PARAM_EXW lpJobParams,
    /* [unique][out][in] */ LPDWORD lpdwJobId,
    /* [out] */ PDWORDLONG lpdwlMessageId,
    /* [size_is][out] */ PDWORDLONG lpdwlRecipientMessageIds);

/* [fault_status][comm_status] */ error_status_t FAX_EnumJobsEx( 
    /* [in] */ handle_t hBinding,
    /* [in] */ DWORD dwJobTypes,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize,
    /* [ref][out] */ LPDWORD lpdwJobs);

/* [fault_status][comm_status] */ error_status_t FAX_GetJobEx( 
    /* [in] */ handle_t hBinding,
    /* [in] */ DWORDLONG dwlMessageID,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_GetCountryList( 
    /* [in] */ handle_t FaxHandle,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_GetPersonalProfileInfo( 
    /* [in] */ handle_t hBinding,
    /* [in] */ DWORDLONG dwlMessageId,
    /* [in] */ FAX_ENUM_MESSAGE_FOLDER dwFolder,
    /* [in] */ FAX_ENUM_PERSONAL_PROF_TYPES ProfType,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_GetQueueStates( 
    /* [in] */ handle_t hFaxHandle,
    /* [out] */ LPDWORD pdwQueueStates);

/* [fault_status][comm_status] */ error_status_t FAX_SetQueue( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ const DWORD dwQueueStates);

/* [fault_status][comm_status] */ error_status_t FAX_GetReceiptsConfiguration( 
    /* [in] */ handle_t hFaxHandle,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_SetReceiptsConfiguration( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][in] */ const PFAX_RECEIPTS_CONFIGW pReceipts);

/* [fault_status][comm_status] */ error_status_t FAX_GetReceiptsOptions( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][out] */ LPDWORD lpdwReceiptsOptions);

/* [fault_status][comm_status] */ error_status_t FAX_GetVersion( 
    /* [in] */ handle_t hFaxHandle,
    /* [out][in] */ PFAX_VERSION pVersion);

/* [fault_status][comm_status] */ error_status_t FAX_GetOutboxConfiguration( 
    /* [in] */ handle_t hFaxHandle,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_SetOutboxConfiguration( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][in] */ const PFAX_OUTBOX_CONFIG pOutboxCfg);

/* [fault_status][comm_status] */ error_status_t FAX_GetPersonalCoverPagesOption( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][out] */ LPBOOL lpbPersonalCPAllowed);

/* [fault_status][comm_status] */ error_status_t FAX_GetArchiveConfiguration( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ FAX_ENUM_MESSAGE_FOLDER Folder,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_SetArchiveConfiguration( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ FAX_ENUM_MESSAGE_FOLDER Folder,
    /* [ref][in] */ const PFAX_ARCHIVE_CONFIGW pArchiveCfg);

/* [fault_status][comm_status] */ error_status_t FAX_GetActivityLoggingConfiguration( 
    /* [in] */ handle_t hFaxHandle,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_SetActivityLoggingConfiguration( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][in] */ const PFAX_ACTIVITY_LOGGING_CONFIGW pActivLogCfg);

/* [fault_status][comm_status] */ error_status_t FAX_EnumerateProviders( 
    /* [in] */ handle_t hFaxHandle,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize,
    /* [ref][out] */ LPDWORD lpdwNumProviders);

/* [fault_status][comm_status] */ error_status_t FAX_GetPortEx( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ DWORD dwDeviceId,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_SetPortEx( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ DWORD dwDeviceId,
    /* [ref][in] */ const PFAX_PORT_INFO_EXW pPortInfo);

/* [fault_status][comm_status] */ error_status_t FAX_EnumPortsEx( 
    /* [in] */ handle_t hFaxHandle,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize,
    /* [ref][out] */ LPDWORD lpdwNumPorts);

/* [fault_status][comm_status] */ error_status_t FAX_GetExtensionData( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ DWORD dwDeviceId,
    /* [ref][string][in] */ LPCWSTR lpctstrNameGUID,
    /* [size_is][size_is][out] */ LPBYTE *ppData,
    /* [ref][out] */ LPDWORD lpdwDataSize);

/* [fault_status][comm_status] */ error_status_t FAX_SetExtensionData( 
    /* [in] */ handle_t hFaxHandle,
    /* [string][in] */ LPCWSTR lpcwstrComputerName,
    /* [in] */ DWORD dwDeviceId,
    /* [string][in] */ LPCWSTR lpctstrNameGUID,
    /* [size_is][ref][in] */ LPBYTE pData,
    /* [range][in] */ DWORD dwDataSize);

/* [fault_status][comm_status] */ error_status_t FAX_AddOutboundGroup( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][string][in] */ LPCWSTR lpwstrGroupName);

/* [fault_status][comm_status] */ error_status_t FAX_SetOutboundGroup( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][in] */ PRPC_FAX_OUTBOUND_ROUTING_GROUPW pGroup);

/* [fault_status][comm_status] */ error_status_t FAX_RemoveOutboundGroup( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][string][in] */ LPCWSTR lpwstrGroupName);

/* [fault_status][comm_status] */ error_status_t FAX_EnumOutboundGroups( 
    /* [in] */ handle_t hFaxHandle,
    /* [size_is][size_is][out] */ LPBYTE *ppData,
    /* [ref][out] */ LPDWORD lpdwDataSize,
    /* [ref][out] */ LPDWORD lpdwNumGroups);

/* [fault_status][comm_status] */ error_status_t FAX_SetDeviceOrderInGroup( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][string][in] */ LPCWSTR lpwstrGroupName,
    /* [in] */ DWORD dwDeviceId,
    /* [in] */ DWORD dwNewOrder);

/* [fault_status][comm_status] */ error_status_t FAX_AddOutboundRule( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ DWORD dwAreaCode,
    /* [in] */ DWORD dwCountryCode,
    /* [in] */ DWORD dwDeviceId,
    /* [unique][string][in] */ LPCWSTR lpwstrGroupName,
    /* [in] */ BOOL bUseGroup);

/* [fault_status][comm_status] */ error_status_t FAX_RemoveOutboundRule( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ DWORD dwAreaCode,
    /* [in] */ DWORD dwCountryCode);

/* [fault_status][comm_status] */ error_status_t FAX_SetOutboundRule( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][in] */ RPC_FAX_OUTBOUND_ROUTING_RULEW *pRule);

/* [fault_status][comm_status] */ error_status_t FAX_EnumOutboundRules( 
    /* [in] */ handle_t hFaxHandle,
    /* [size_is][size_is][out] */ LPBYTE *ppData,
    /* [ref][out] */ LPDWORD lpdwDataSize,
    /* [ref][out] */ LPDWORD lpdwNumRules);

/* [fault_status][comm_status] */ error_status_t FAX_RegisterServiceProviderEx( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][string][in] */ LPCWSTR lpctstrGUID,
    /* [ref][string][in] */ LPCWSTR lpctstrFriendlyName,
    /* [ref][string][in] */ LPCWSTR lpctstrImageName,
    /* [ref][string][in] */ LPCWSTR lpctstrTspName,
    /* [in] */ DWORD dwFSPIVersion,
    /* [in] */ DWORD dwCapabilities);

/* [fault_status][comm_status] */ error_status_t FAX_UnregisterServiceProviderEx( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][string][in] */ LPCWSTR lpctstrGUID);

/* [fault_status][comm_status] */ error_status_t FAX_UnregisterRoutingExtension( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][string][in] */ LPCWSTR lpctstrExtensionName);

/* [fault_status][comm_status] */ error_status_t FAX_StartMessagesEnum( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ FAX_ENUM_MESSAGE_FOLDER Folder,
    /* [ref][out] */ PRPC_FAX_MSG_ENUM_HANDLE lpHandle);

/* [fault_status][comm_status] */ error_status_t FAX_EndMessagesEnum( 
    /* [ref][out][in] */ PRPC_FAX_MSG_ENUM_HANDLE lpHandle);

/* [fault_status][comm_status] */ error_status_t FAX_EnumMessages( 
    /* [ref][in] */ RPC_FAX_MSG_ENUM_HANDLE hEnum,
    /* [in] */ DWORD dwNumMessages,
    /* [size_is][size_is][out] */ LPBYTE *lppBuffer,
    /* [ref][out] */ LPDWORD lpdwBufferSize,
    /* [ref][out] */ LPDWORD lpdwNumMessagesRetrieved);

/* [fault_status][comm_status] */ error_status_t FAX_GetMessage( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ DWORDLONG dwlMessageId,
    /* [in] */ FAX_ENUM_MESSAGE_FOLDER Folder,
    /* [size_is][size_is][out] */ LPBYTE *lppBuffer,
    /* [ref][out] */ LPDWORD lpdwBufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_RemoveMessage( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ DWORDLONG dwlMessageId,
    /* [in] */ FAX_ENUM_MESSAGE_FOLDER Folder);

/* [fault_status][comm_status] */ error_status_t FAX_StartCopyToServer( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][string][in] */ LPCWSTR lpcwstrFileExt,
    /* [ref][string][out][in] */ LPWSTR lpwstrServerFileName,
    /* [ref][out] */ PRPC_FAX_COPY_HANDLE lpHandle);

/* [fault_status][comm_status] */ error_status_t FAX_StartCopyMessageFromServer( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ DWORDLONG dwlMessageId,
    /* [in] */ FAX_ENUM_MESSAGE_FOLDER Folder,
    /* [ref][out] */ PRPC_FAX_COPY_HANDLE lpHandle);

/* [fault_status][comm_status] */ error_status_t FAX_WriteFile( 
    /* [ref][in] */ RPC_FAX_COPY_HANDLE hCopy,
    /* [size_is][ref][in] */ const LPBYTE lpbData,
    /* [range][in] */ DWORD dwDataSize);

/* [fault_status][comm_status] */ error_status_t FAX_ReadFile( 
    /* [ref][in] */ RPC_FAX_COPY_HANDLE hCopy,
    /* [in] */ DWORD dwMaxDataSize,
    /* [size_is][ref][out] */ LPBYTE lpbData,
    /* [ref][out][in] */ LPRANGED_DWORD lpdwDataSize);

/* [fault_status][comm_status] */ error_status_t FAX_EndCopy( 
    /* [ref][out][in] */ PRPC_FAX_COPY_HANDLE lphCopy);

/* [fault_status][comm_status] */ error_status_t FAX_StartServerNotification( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR lpcwstrMachineName,
    /* [ref][string][in] */ LPCWSTR lpcwstrEndPoint,
    /* [in] */ ULONG64 Context,
    /* [string][ref][in] */ LPWSTR lpcwstrProtseqString,
    /* [in] */ BOOL bEventEx,
    /* [in] */ DWORD dwEventTypes,
    /* [ref][out] */ PRPC_FAX_EVENT_HANDLE lpHandle);

/* [fault_status][comm_status] */ error_status_t FAX_StartServerNotificationEx( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR lpcwstrMachineName,
    /* [ref][string][in] */ LPCWSTR lpcwstrEndPoint,
    /* [in] */ ULONG64 Context,
    /* [string][ref][in] */ LPWSTR lpcwstrProtSeq,
    /* [in] */ BOOL bEventEx,
    /* [in] */ DWORD dwEventTypes,
    /* [ref][out] */ PRPC_FAX_EVENT_EX_HANDLE lpHandle);

/* [fault_status][comm_status] */ error_status_t FAX_EndServerNotification( 
    /* [ref][out][in] */ PRPC_FAX_EVENT_EX_HANDLE lpHandle);

/* [fault_status][comm_status] */ error_status_t FAX_GetServerActivity( 
    /* [in] */ handle_t hFaxHandle,
    /* [ref][out][in] */ PFAX_SERVER_ACTIVITY pServerActivity);

/* [fault_status][comm_status] */ error_status_t FAX_SetConfigWizardUsed( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ BOOL bConfigWizardUsed);

/* [fault_status][comm_status] */ error_status_t FAX_EnumRoutingExtensions( 
    /* [in] */ handle_t hFaxHandle,
    /* [size_is][size_is][out] */ LPBYTE *Buffer,
    /* [ref][out] */ LPDWORD BufferSize,
    /* [ref][out] */ LPDWORD lpdwNumExts);

/* [fault_status][comm_status] */ error_status_t FAX_AnswerCall( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ DWORD dwDeviceId);

/* [fault_status][comm_status] */ error_status_t FAX_ConnectFaxServer( 
    /* [in] */ handle_t hBinding,
    /* [in] */ DWORD dwClientAPIVersion,
    /* [ref][out] */ LPDWORD lpdwServerAPIVersion,
    /* [ref][out] */ PRPC_FAX_SVC_HANDLE pHandle);

/* [fault_status][comm_status] */ error_status_t FAX_GetSecurityEx( 
    /* [in] */ handle_t hBinding,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [size_is][size_is][out] */ LPBYTE *pSecurityDescriptor,
    /* [ref][out] */ LPDWORD lpdwBufferSize);

/* [fault_status][comm_status] */ error_status_t FAX_RefreshArchive( 
    /* [in] */ handle_t hFaxHandle,
    /* [in] */ FAX_ENUM_MESSAGE_FOLDER Folder);

/* [fault_status][comm_status] */ error_status_t FAX_SetRecipientsLimit( 
    /* [in] */ handle_t hbinding,
    /* [in] */ DWORD dwRecipientsLimit);

/* [fault_status][comm_status] */ error_status_t FAX_GetRecipientsLimit( 
    /* [in] */ handle_t hbinding,
    /* [ref][out] */ LPDWORD lpdwRecipientsLimit);

/* [fault_status][comm_status] */ error_status_t FAX_GetServerSKU( 
    /* [in] */ handle_t hbinding,
    /* [ref][out] */ PRODUCT_SKU_TYPE *pServerSKU);

/* [fault_status][comm_status] */ error_status_t FAX_CheckValidFaxFolder( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR lpcwstrPath);


extern handle_t fax_handle;


extern RPC_IF_HANDLE fax_ClientIfHandle;
extern RPC_IF_HANDLE fax_ServerIfHandle;
#endif /* __fax_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER RPC_FAX_PORT_HANDLE_rundown( RPC_FAX_PORT_HANDLE );
void __RPC_USER RPC_FAX_SVC_HANDLE_rundown( RPC_FAX_SVC_HANDLE );
void __RPC_USER RPC_FAX_MSG_ENUM_HANDLE_rundown( RPC_FAX_MSG_ENUM_HANDLE );
void __RPC_USER RPC_FAX_COPY_HANDLE_rundown( RPC_FAX_COPY_HANDLE );
void __RPC_USER RPC_FAX_EVENT_HANDLE_rundown( RPC_FAX_EVENT_HANDLE );
void __RPC_USER RPC_FAX_EVENT_EX_HANDLE_rundown( RPC_FAX_EVENT_EX_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


