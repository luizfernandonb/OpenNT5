/******************************************************************************
* $ProjectName:  $
* $ProjectRevision:  $
*-----------------------------------------------------------------------------
* $Source: z:/pr/cmapiifd/sw/sccmn50m.ms/rcs/sccmlog.mc $
* $Revision: 1.1 $
*-----------------------------------------------------------------------------
* $Author: TBruendl $
*-----------------------------------------------------------------------------
* History: see EOF
*-----------------------------------------------------------------------------
*
* Copyright ® 1996-99 Utimaco Safeware AG
******************************************************************************/
#ifndef _SCCMLOG
#define _SCCMLOG

//
//  Status values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-------------------------+-------------------------------+
//  |Sev|C|       Facility          |               Code            |
//  +---+-+-------------------------+-------------------------------+
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
//      Facility - is the facility code
//
//      Code - is the facility's status code
//

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
#define FACILITY_SCARD                   0x10
#define FACILITY_RPC_STUBS               0x3
#define FACILITY_RPC_RUNTIME             0x2
#define FACILITY_IO_ERROR_CODE           0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: SCCMN50M_CANT_CREATE_DEVICE
//
// MessageText:
//
//  A new device cannot be created due to an system call failure.
//
#define SCCMN50M_CANT_CREATE_DEVICE      ((NTSTATUS)0xC0040001L)

//
// MessageId: SCCMN50M_NO_MEMORY
//
// MessageText:
//
//  The system does not have enough memory.
//
#define SCCMN50M_NO_MEMORY               ((NTSTATUS)0xC0040002L)

//
// MessageId: SCCMN50M_BUFFER_TOO_SMALL
//
// MessageText:
//
//  An internal i/o buffer is too small.
//
#define SCCMN50M_BUFFER_TOO_SMALL        ((NTSTATUS)0xC0100003L)

//
// MessageId: SCCMN50M_CANT_CONNECT_TO_ASSIGNED_PORT
//
// MessageText:
//
//  Internal error: Cannot connect to assigned serial port.
//
#define SCCMN50M_CANT_CONNECT_TO_ASSIGNED_PORT ((NTSTATUS)0xC0040004L)

//
// MessageId: SCCMN50M_CANT_CREATE_MORE_DEVICES
//
// MessageText:
//
//  The maximum number of devices has already been created.
//  A new device cannot be created.
//
#define SCCMN50M_CANT_CREATE_MORE_DEVICES ((NTSTATUS)0xC0040005L)

//
// MessageId: SCCMN50M_WRONG_LIB_VERSION
//
// MessageText:
//
//  The version of the dependency driver smclib.sys is not compatbile to this driver.
//
#define SCCMN50M_WRONG_LIB_VERSION       ((NTSTATUS)0x40040006L)

//
// MessageId: SCCMN50M_IRQ_BUSY
//
// MessageText:
//
//  The current serial port cannot be used because it uses a shared interrupt which is already in use.
//  Please connect the smart card reader to a different serial port.
//
#define SCCMN50M_IRQ_BUSY                ((NTSTATUS)0x40040007L)

#endif /* _SCCMLOG */
/*****************************************************************************
* History:
* $Log: sccmlog.mc $
* Revision 1.1  2000/03/29 06:07:48  TBruendl
* No comment given
*
* Revision 1.1  1999/02/02 13:34:38  TBruendl
* This is the first release (R01.00) of the IFD handler for CardMan running under NT5.0.
*
*
*****************************************************************************/
