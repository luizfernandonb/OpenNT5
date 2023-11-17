/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992  Microsoft Corporation

Module Name:

    p5ctrmsg.h
       (derived from p5ctrmsg.mc by the message compiler  )

Abstract:

   Event message definititions used by routines in P5CTRS.DLL

Created:

    15-Oct-1992  Bob Watson (a-robw)

Revision History:

    24-Dec-1993  Russ Blake (russbl) - adapt to P5

--*/
//
#ifndef _P5CTRMSG_H_
#define _P5CTRMSG_H_
//
//
//     Perfutil messages
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


//
// Define the severity codes
//


//
// MessageId: UTIL_LOG_OPEN
//
// MessageText:
//
//  An extensible counter has opened the Event Log for P5CTRS.DLL
//
#define UTIL_LOG_OPEN                    ((DWORD)0x4000076CL)

//
//
// MessageId: UTIL_CLOSING_LOG
//
// MessageText:
//
//  An extensible counter has closed the Event Log for P5CTRS.DLL
//
#define UTIL_CLOSING_LOG                 ((DWORD)0x400007CFL)

//
//
// MessageId: P5PERF_OPEN_FILE_ERROR
//
// MessageText:
//
//  Unable to open device driver providing P5 performance data.
//
#define P5PERF_OPEN_FILE_ERROR           ((DWORD)0xC00007D0L)

//
//
// MessageId: P5PERF_UNABLE_MAP_VIEW_OF_FILE
//
// MessageText:
//
//  Unable to map to shared memory file containing P5 driver performance data.
//
#define P5PERF_UNABLE_MAP_VIEW_OF_FILE   ((DWORD)0xC00007D1L)

//
//
// MessageId: P5PERF_UNABLE_OPEN_DRIVER_KEY
//
// MessageText:
//
//  Unable open "Performance" key of P5 driver in registy. Status code is returned in data.
//
#define P5PERF_UNABLE_OPEN_DRIVER_KEY    ((DWORD)0xC00007D2L)

//
//
// MessageId: P5PERF_UNABLE_READ_FIRST_COUNTER
//
// MessageText:
//
//  Unable to read the "First Counter" value under the P5\Performance Key. Status codes retuened in data.
//
#define P5PERF_UNABLE_READ_FIRST_COUNTER ((DWORD)0xC00007D3L)

//
//
// MessageId: P5PERF_UNABLE_READ_FIRST_HELP
//
// MessageText:
//
//  Unable to read the "First Help" value under the P5\Performance Key. Status codes retuened in data.
//
#define P5PERF_UNABLE_READ_FIRST_HELP    ((DWORD)0xC00007D4L)

//
#endif // _P5CTRMSG_H_
