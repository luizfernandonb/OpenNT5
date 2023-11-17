///////////////////////////////////////////////////////////////////////////////
//
// Facility and Severity
//
// We use the facility code so that our error codes do not conflict with
// any system-defined errors
//
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//
// Event Log Messages
//
// Insertion strings come from error messages below
//
// 1000 = Informational messages
// 2000 = Success messages
// 3000 = Warning messages
// 4000 = Error messages
// 5000 = Debug messages
// 6000 = Trace messages
// 7000 = Performance messages
//
///////////////////////////////////////////////////////////////////////////////
//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: ISAPI_EVENT_GENERIC
//
// MessageText:
//
//  %1
//
#define ISAPI_EVENT_GENERIC              0x0FFF0000L

//
// MessageId: ISAPI_EVENT_INFORMATIONAL
//
// MessageText:
//
//  Information:
//  %1
//
#define ISAPI_EVENT_INFORMATIONAL        0x4FFF03E8L

//
// MessageId: ISAPI_EVENT_SUCCESS
//
// MessageText:
//
//  Success:
//  %1!s!
//
#define ISAPI_EVENT_SUCCESS              0x0FFF07D0L

//
// MessageId: ISAPI_EVENT_SUCCESS_INITIALIZED
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_SUCCESS_INITIALIZED  0x0FFF07D1L

//
// MessageId: ISAPI_EVENT_SUCCESS_EXITING
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_SUCCESS_EXITING      0x0FFF07D2L

//
// MessageId: ISAPI_EVENT_WARNING
//
// MessageText:
//
//  Warning:
//  %1!s!
//
#define ISAPI_EVENT_WARNING              0x8FFF0BB8L

//
// MessageId: ISAPI_EVENT_WARNING_FILE_MISSING
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_WARNING_FILE_MISSING 0x8FFF0BBBL

//
// MessageId: ISAPI_EVENT_WARNING_NO_SOLUTION
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_WARNING_NO_SOLUTION  0x8FFF0BBDL

//
// MessageId: ISAPI_EVENT_WARNING_FILE_COPY_FAILED
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_WARNING_FILE_COPY_FAILED 0x8FFF0BBEL

//
// MessageId: ISAPI_EVENT_WARNING_PEEK
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_WARNING_PEEK         0x8FFF0BBFL

//
// MessageId: ISAPI_EVENT_WARNING_TIMEOUT_EXPIRED
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_WARNING_TIMEOUT_EXPIRED 0x8FFF0BC0L

//
// MessageId: ISAPI_EVENT_ERROR
//
// MessageText:
//
//  Error:
//  %1!s!
//
#define ISAPI_EVENT_ERROR                0xCFFF0FA0L

//
// MessageId: ISAPI_EVENT_ERROR_MEMORY_ALLOCATION
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_ERROR_MEMORY_ALLOCATION 0xCFFF0FA2L

//
// MessageId: ISAPI_EVENT_ERROR_SEND
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_ERROR_SEND           0xCFFF0FA3L

//
// MessageId: ISAPI_EVENT_ERROR_SETUP_EVENT_LOG
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_ERROR_SETUP_EVENT_LOG 0xCFFF0FA5L

//
// MessageId: ISAPI_EVENT_ERROR_CONNECT
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_ERROR_CONNECT        0xCFFF0FA6L

//
// MessageId: ISAPI_EVENT_ERROR_RECONNECT
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_ERROR_RECONNECT      0xCFFF0FA7L

//
// MessageId: ISAPI_EVENT_ERROR_CANT_IMPERSONATE
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_ERROR_CANT_IMPERSONATE 0xCFFF0FA8L

//
// MessageId: ISAPI_EVENT_ERROR_GUID_COPY
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_ERROR_GUID_COPY      0xCFFF0FA9L

//
// MessageId: ISAPI_EVENT_ERROR_INVALID_SEND_PARAMS
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_ERROR_INVALID_SEND_PARAMS 0xCFFF0FAAL

//
// MessageId: ISAPI_EVENT_ERROR_CANNOT_SEND
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_ERROR_CANNOT_SEND    0xCFFF0FABL

//
// MessageId: ISAPI_EVENT_ERROR_CANNOT_CREATE_RECEIVE_CURSOR
//
// MessageText:
//
//  %1!s!
//
#define ISAPI_EVENT_ERROR_CANNOT_CREATE_RECEIVE_CURSOR 0xCFFF0FACL

//
// MessageId: ISAPI_EVENT_DEBUG
//
// MessageText:
//
//  Debug:
//  %1!s!
//
#define ISAPI_EVENT_DEBUG                0x4FFF1388L

//
// MessageId: ISAPI_EVENT_TRACE
//
// MessageText:
//
//  Debug:
//  %1!s!
//
#define ISAPI_EVENT_TRACE                0x4FFF1770L

//
// MessageId: ISAPI_EVENT_PERF
//
// MessageText:
//
//  Debug:
//  %1!s!
//
#define ISAPI_EVENT_PERF                 0x4FFF1B58L

///////////////////////////////////////////////////////////////////////////////
//
// Error Messages
//
// These are primarily used as insertion strings for the above events
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: ISAPI_M_SUCCESS_INITIALIZED
//
// MessageText:
//
//  Initialized
//
#define ISAPI_M_SUCCESS_INITIALIZED      0x0FFF0001L

//
// MessageId: ISAPI_M_SUCCESS_EXITING
//
// MessageText:
//
//  Exiting
//
#define ISAPI_M_SUCCESS_EXITING          0x0FFF0002L

//
// MessageId: ISAPI_M_WARNING_FILE_MISSING
//
// MessageText:
//
//  Unable to locate file '%1!s!'
//
#define ISAPI_M_WARNING_FILE_MISSING     0x8FFF0003L

//
// MessageId: ISAPI_M_WARNING_NO_SOLUTION
//
// MessageText:
//
//  Unable to identify solution for GUID '%1!s!'
//
#define ISAPI_M_WARNING_NO_SOLUTION      0x8FFF0004L

//
// MessageId: ISAPI_M_WARNING_FILE_COPY_FAILED
//
// MessageText:
//
//  Failed to copy file '%1!s!' to '%2!s!'%nError: %3!08x!
//
#define ISAPI_M_WARNING_FILE_COPY_FAILED 0x8FFF0005L

//
// MessageId: ISAPI_M_WARNING_PEEK
//
// MessageText:
//
//  Failed peek current%nError: %1!08x!
//
#define ISAPI_M_WARNING_PEEK             0x8FFF0006L

//
// MessageId: ISAPI_M_WARNING_TIMEOUT_EXPIRED
//
// MessageText:
//
//  Timeout expired waiting for message
//
#define ISAPI_M_WARNING_TIMEOUT_EXPIRED  0x8FFF0007L

//
// MessageId: ISAPI_M_ERROR_MEMORY_ALLOCATION
//
// MessageText:
//
//  Failed to allocate memory for: %1!s!
//
#define ISAPI_M_ERROR_MEMORY_ALLOCATION  0xCFFF0008L

//
// MessageId: ISAPI_M_ERROR_SEND
//
// MessageText:
//
//  Failed to send to %1!s!
//
#define ISAPI_M_ERROR_SEND               0xCFFF0009L

//
// MessageId: ISAPI_M_ERROR_SETUP_EVENT_LOG
//
// MessageText:
//
//  Failed to setup event log%nError: %1!08x!
//
#define ISAPI_M_ERROR_SETUP_EVENT_LOG    0xCFFF000AL

//
// MessageId: ISAPI_M_ERROR_CONNECT
//
// MessageText:
//
//  Failed to connect to '%1!s!'%nError: %2!08x!
//
#define ISAPI_M_ERROR_CONNECT            0xCFFF000BL

//
// MessageId: ISAPI_M_ERROR_RECONNECT
//
// MessageText:
//
//  Failed to re-connect to '%1!s!'%nError: %2!08x!
//
#define ISAPI_M_ERROR_RECONNECT          0xCFFF000CL

//
// MessageId: ISAPI_M_ERROR_CANT_IMPERSONATE
//
// MessageText:
//
//  Failed to impersonate user
//
#define ISAPI_M_ERROR_CANT_IMPERSONATE   0xCFFF000DL

//
// MessageId: ISAPI_M_ERROR_GUID_COPY
//
// MessageText:
//
//  Unable to copy GUID '%1!s!' to GUID '%2!s!'%nError: %3!08x!
//
#define ISAPI_M_ERROR_GUID_COPY          0xCFFF000EL

//
// MessageId: ISAPI_M_ERROR_INVALID_SEND_PARAMS
//
// MessageText:
//
//  Failed to send message.  MessageGuid '%1!s!' or FilePath '%1!s!' is invalid.
//
#define ISAPI_M_ERROR_INVALID_SEND_PARAMS 0xCFFF000FL

//
// MessageId: ISAPI_M_ERROR_CANNOT_SEND
//
// MessageText:
//
//  Failed to send message.  MessageGuid: '%1!s!'%nFilePath: '%1!s!'%nError: %2!08x!
//
#define ISAPI_M_ERROR_CANNOT_SEND        0xCFFF0010L

//
// MessageId: ISAPI_M_ERROR_CANNOT_CREATE_RECEIVE_CURSOR
//
// MessageText:
//
//  Failed to create receive cursor%nError: %1!08x!%nhCursor: %2!08x!
//
#define ISAPI_M_ERROR_CANNOT_CREATE_RECEIVE_CURSOR 0xCFFF0011L

