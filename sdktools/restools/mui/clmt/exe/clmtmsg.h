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
// MessageId: MSG_CLMT_STARTED
//
// MessageText:
//
//  CLM Tool is started.
//
#define MSG_CLMT_STARTED                 ((DWORD)0x40000001L)

//
// MessageId: MSG_CLMT_FINISHED
//
// MessageText:
//
//  CLM Tool is finished.
//
#define MSG_CLMT_FINISHED                ((DWORD)0x40000002L)

//
// MessageId: MSG_CLMT_ACCT_CHANGE
//
// MessageText:
//
//  IMPORTANT:%n%nThe Cross Language Migration Tool will change to English only the names of user and group accounts created by the system. It will not change user and group accounts created by users. If a user or group account created by the system has been renamed, CLMT will not change this account name.%n%nHowever, all passwords will remain unchanged.%n%nIn the future, you will need to use these new account names to logon to the system. Please refer to the Readme.txt file to see the list of account names to be changed by CLMT.
//
#define MSG_CLMT_ACCT_CHANGE             ((DWORD)0x40000064L)

//
// MessageId: MSG_CLMT_ADMIN_ACCT_CHANGE
//
// MessageText:
//
//  IMPORTANT: The "%1" account will be changed to "Administrator" together with other user and group accounts when you hit the "OK" button in the next dialog to continue.%n%nThe Cross Language Migration Tool will change to English only the names of user and group accounts created by the system. It will not change user and group accounts created by users. If a user or group account created by the system has been renamed, CLMT will not change this account name.%n%nHowever, all passwords will remain unchanged.%n%nIn the future, you will need to use these new account names to logon to the system. Please refer to the Readme.txt file to see the list of account names to be changed by CLMT.
//
#define MSG_CLMT_ADMIN_ACCT_CHANGE       ((DWORD)0x40000065L)

