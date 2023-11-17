///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 1999, Microsoft Corp. All rights reserved.
//
// FILE
//
//    sagenmsg.mc
//
// SYNOPSIS
//
//    This file defines the messages for the Server project
//
// MODIFICATION HISTORY
//
//    03/04/1999    Original version.
//
///////////////////////////////////////////////////////////////////////////////

// please choose one of these severity names as part of your messages
 

// The Facility Name identifies the Alert ID range to be used by
// the specific component. For each new message you add choose the
// facility name corresponding to your component. If none of these
// correspond to your component add a new facility name with a new
// value and name
///////////////////////////////////////////////////////////////////////////////
//
// Generic Task Alerts go in this section
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
#define SA_LDM_MESSAGE                   0x2
#define SA_GENERIC_TASK                  0x1


//
// Define the severity codes
//
#define SA_SEVERITY_WARNING              0x2
#define SA_SEVERITY_SUCCESS              0x0
#define SA_SEVERITY_INFORMATIONAL        0x1
#define SA_SEVERITY_ERROR                0x3


//
// MessageId: SA_PRIMARY_OS_FAILED_ALERT
//
// MessageText:
//
//  System failure
//
#define SA_PRIMARY_OS_FAILED_ALERT       0xC0010001L

//
// MessageId: SA_PRIMARY_OS_FAILED_DESC
//
// MessageText:
//
//  A critical error has occurred in the main operating system. The server is now running a backup operating system.
//
#define SA_PRIMARY_OS_FAILED_DESC        0xC0010002L

//
// MessageId: SA_PRIMARY_OS_FAILED_ACTION
//
// MessageText:
//
//  Contact your system administrator.
//
#define SA_PRIMARY_OS_FAILED_ACTION      0xC0010003L

//
// MessageId: SA_PRIMARY_OS_FAILED_LDM_DESC
//
// MessageText:
//
//  The system failed
//
#define SA_PRIMARY_OS_FAILED_LDM_DESC    0xC0010004L

//
// MessageId: SA_PRIMARY_OS_FAILED_LDM_ACTION
//
// MessageText:
//
//  Backup operating system running.
//
#define SA_PRIMARY_OS_FAILED_LDM_ACTION  0xC0010005L


//-------------------------------------Next Generic Alert-------------------------------
//
// MessageId: SA_INCORRECT_PARTITION_ALERT
//
// MessageText:
//
//  Critical disk error
//
#define SA_INCORRECT_PARTITION_ALERT     0xC0010006L

//
// MessageId: SA_INCORRECT_PARTITION_DESC
//
// MessageText:
//
//  The main disk drive is not partitioned correctly. If the primary operating system fails, the Reliability Framework component will not be able to fail over to the alternate operating system partition.
//
#define SA_INCORRECT_PARTITION_DESC      0xC0010007L

//
// MessageId: SA_INCORRECT_PARTITION_ACTION
//
// MessageText:
//
//  See the Microsoft Server Kit documentation for instructions on how to partition the main disk to support failing over to an alternate operating system partition.
//
#define SA_INCORRECT_PARTITION_ACTION    0xC0010008L

//
// MessageId: SA_INCORRECT_PARTITION_LDM_DESC
//
// MessageText:
//
//  Critical disk error
//
#define SA_INCORRECT_PARTITION_LDM_DESC  0xC0010009L

//
// MessageId: SA_INCORRECT_PARTITION_LDM_ACTION
//
// MessageText:
//
//  See Web UI message
//
#define SA_INCORRECT_PARTITION_LDM_ACTION 0xC001000AL

//-------------------------------------Local Display Message strings-------------------------------
//
// MessageId: SALDM_PAGE_INFO
//
// MessageText:
//
//  Page %1 of %2
//
#define SALDM_PAGE_INFO                  0x40020001L

//
// MessageId: SALDM_STARTING
//
// MessageText:
//
//  Starting
//
#define SALDM_STARTING                   0x40020002L

//
// MessageId: SALDM_RUNNING_ADDITIONAL_TASKS
//
// MessageText:
//
//  Running additional tasks
//
#define SALDM_RUNNING_ADDITIONAL_TASKS   0x40020003L

//
// MessageId: SALDM_PLEASE_WAIT
//
// MessageText:
//
//  Please wait
//
#define SALDM_PLEASE_WAIT                0x40020004L

//
// MessageId: SALDM_READY
//
// MessageText:
//
//  Ready
//
#define SALDM_READY                      0x40020005L

//
// MessageId: SALDM_SHUTTING_DOWN
//
// MessageText:
//
//  Shutting down
//
#define SALDM_SHUTTING_DOWN              0x40020006L

//-------------------------------------Generic Alert strings-------------------------------
//
// MessageId: SA_GENERIC_EVENT_FILTER_ALERT
//
// MessageText:
//
//  %1 %2 %3 %4
//
#define SA_GENERIC_EVENT_FILTER_ALERT    0x4001000BL

//
// MessageId: SA_GENERIC_EVENT_FILTER_DESC
//
// MessageText:
//
//  %5
//
#define SA_GENERIC_EVENT_FILTER_DESC     0x4001000CL

//
// MessageId: SA_GENERIC_EVENT_FILTER_ACTION
//
// MessageText:
//
//  
//
#define SA_GENERIC_EVENT_FILTER_ACTION   0x4001000DL

//-------------------------------------Password Reset Alert-------------------------------
//
// MessageId: SA_PASSWORD_RESET_ALERT
//
// MessageText:
//
//  The administrator password has been reset.
//
#define SA_PASSWORD_RESET_ALERT          0xC001000EL

//
// MessageId: SA_PASSWORD_RESET_ALERT_DESC
//
// MessageText:
//
//  The administrator account name has been reset to 'administrator' and the password has been reset to 'ABc#123&dEF'.
//
#define SA_PASSWORD_RESET_ALERT_DESC     0xC001000FL

//
// MessageId: SA_PASSWORD_RESET_ALERT_ACTION
//
// MessageText:
//
//  Please log on to the administrator account using the password 'ABc#123&dEF' and then immediately change the password to a more secure format.
//
#define SA_PASSWORD_RESET_ALERT_ACTION   0xC0010010L

//
// MessageId: SA_PASSWORD_RESET_ALERT_LDM_CAPTION
//
// MessageText:
//
//  The password was reset.
//
#define SA_PASSWORD_RESET_ALERT_LDM_CAPTION 0xC0010011L

//
// MessageId: SA_PASSWORD_RESET_ALERT_LDM_LONGDESC
//
// MessageText:
//
//  Please use the Web user interface to change the password to a more secure format.
//
#define SA_PASSWORD_RESET_ALERT_LDM_LONGDESC 0xC0010012L

//-------------------------------------Password Reset Alert-------------------------------
//
// MessageId: SA_PRIMARY_OS_FAILED_EVENTLOG_ENTRY
//
// MessageText:
//
//  A critical error has occurred in the main operating system. The server is now running a backup operating system. Contact your system administrator.
//
#define SA_PRIMARY_OS_FAILED_EVENTLOG_ENTRY 0xC0010013L

