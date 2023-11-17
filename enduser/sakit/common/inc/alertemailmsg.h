/////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 1999-2001 Microsoft Corporation
// 
// Description:
//        The file used to define all messages in alert e-mail.
// Log:
//        1) 17/11/2000, FCD
//        2) 13/12/2000, lustar.li
/////////////////////////////////////////////////////////////////////////////
//++++++++++++++++++++++++++Alert e-mail Settings+++++++++++++++++++++++++++++
//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; CAPTION;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
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
#define SA_FACILITY_ALERTEMAIL_SETTINGS  0xC00


//
// Define the severity codes
//


//
// MessageId: SA_ALERTEMAIL_SETTINGS_CAPTION
//
// MessageText:
//
//  Alert E-Mail
//
#define SA_ALERTEMAIL_SETTINGS_CAPTION   0x4C000001L

//;;;;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail Description;;;;;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_DESCRIPTION
//
// MessageText:
//
//  Set alert e-mail on the server.
//
#define SA_ALERTEMAIL_SETTINGS_DESCRIPTION 0x4C000002L

//;;;;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail task;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_TASK
//
// MessageText:
//
//  Set Alert E-Mail
//
#define SA_ALERTEMAIL_SETTINGS_TASK      0x4C000003L

//;;;;;;;;;;;;;;;;;;;;;Alert e-mail task describe;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_TASK_DESCRIBE
//
// MessageText:
//
//  Alert E-Mail Setings
//
#define SA_ALERTEMAIL_SETTINGS_TASK_DESCRIBE 0x4C000004L

//;;;;;;;;;;;;;;;;;;;;;;Alert e-mail disable sending alert e-mail;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_DISABLE_SENDING
//
// MessageText:
//
//  Disable alert e-mail
//
#define SA_ALERTEMAIL_SETTINGS_DISABLE_SENDING 0x4C000005L

//;;;;;;;;;;;;;;;;;;;;;Alert e-mail enable sending alert e-mail;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_ENABLE_SENDING
//
// MessageText:
//
//  Enable alert e-mail
//
#define SA_ALERTEMAIL_SETTINGS_ENABLE_SENDING 0x4C000006L

//;;;;;;;;;;;;;;;;;;;;;;Alert e-mail send critical alert e-mail;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_SEND_CRITICAL
//
// MessageText:
//
//  Send critical alert e-mail
//
#define SA_ALERTEMAIL_SETTINGS_SEND_CRITICAL 0x4C000007L

//;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail send warning alert e-mail;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_SEND_WARNING
//
// MessageText:
//
//  Send warning alert e-mail
//
#define SA_ALERTEMAIL_SETTINGS_SEND_WARNING 0x4C000008L

//;;;;;;;;;;;;;;;;;;;;;Alert e-mail send informational alert e-mail;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_SEND_INFORMATIAL
//
// MessageText:
//
//  Send informational alert e-mail
//
#define SA_ALERTEMAIL_SETTINGS_SEND_INFORMATIAL 0x4C000009L

//;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail to target e-mail address;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_TO
//
// MessageText:
//
//  To:
//
#define SA_ALERTEMAIL_SETTINGS_TO        0x4C00000AL

//;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail not set up ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_NOTSET_ALERT_CAPTION
//
// MessageText:
//
//  Alert e-mail not set up
//
#define SA_ALERTEMAIL_SETTINGS_NOTSET_ALERT_CAPTION 0x4C00000BL

//
// MessageId: SA_ALERTEMAIL_SETTINGS_NOTSET_ALERT_DESCRIPTION
//
// MessageText:
//
//  Choose Alert E-Mail Settings to change the alert e-mail parameters.
//
#define SA_ALERTEMAIL_SETTINGS_NOTSET_ALERT_DESCRIPTION 0x4C00000CL

//
// MessageId: SA_ALERTEMAIL_SETTINGS_SET_ALERT_CAPTION
//
// MessageText:
//
//  Alert E-mail Settings
//
#define SA_ALERTEMAIL_SETTINGS_SET_ALERT_CAPTION 0x4C00000DL

//
// MessageId: SA_ALERTEMAIL_SETTINGS_SET_ALERT_DESCRIPTION
//
// MessageText:
//
//  Choose Set Alert E-Mail to configure alert e-mail settings on the server.
//
#define SA_ALERTEMAIL_SETTINGS_SET_ALERT_DESCRIPTION 0x4C00000EL

//;;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail error message ;;;;;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_ERR_NOTYPE_SELECTED
//
// MessageText:
//
//  Select at least one type of alert e-mail.
//
#define SA_ALERTEMAIL_SETTINGS_ERR_NOTYPE_SELECTED 0x4C00000FL

//
// MessageId: SA_ALERTEMAIL_SETTINGS_ERR_EMAILADDR_NOTSET
//
// MessageText:
//
//  E-mail address cannot be empty.
//
#define SA_ALERTEMAIL_SETTINGS_ERR_EMAILADDR_NOTSET 0x4C000010L

//
// MessageId: SA_ALERTEMAIL_SETTINGS_ERR_SMART_HOST
//
// MessageText:
//
//  Test e-mail cannot be sent.
//
#define SA_ALERTEMAIL_SETTINGS_ERR_SMART_HOST 0x4C000011L

//;;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail smart host ;;;;;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_SMART_HOST
//
// MessageText:
//
//  With:
//
#define SA_ALERTEMAIL_SETTINGS_SMART_HOST 0x4C000012L

//;;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail to label ;;;;;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_TO_LABEL
//
// MessageText:
//
//  Administrator's e-mail address
//
#define SA_ALERTEMAIL_SETTINGS_TO_LABEL  0x4C000013L

//;;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail with label ;;;;;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_WITH_LABEL
//
// MessageText:
//
//  SMTP server name or IP address
//
#define SA_ALERTEMAIL_SETTINGS_WITH_LABEL 0x4C000014L

//;;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail test subject ;;;;;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_TEST_SUBJECT
//
// MessageText:
//
//  Alert e-mail test at %1
//
#define SA_ALERTEMAIL_SETTINGS_TEST_SUBJECT 0x4C000015L

//;;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail test content ;;;;;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_TEST_CONTENT
//
// MessageText:
//
//  Congratulations!
//  
//  Receiving this e-mail verifies you have correctly configured alert e-mail on %1.
//
#define SA_ALERTEMAIL_SETTINGS_TEST_CONTENT 0x4C000016L

//;;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail test information ;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_TEST_INFORMATION
//
// MessageText:
//
//  Test e-mail has been sent. Please view the administrator's mailbox.
//
#define SA_ALERTEMAIL_SETTINGS_TEST_INFORMATION 0x4C000017L

//;;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail test information ;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_BUTTON_TEXT
//
// MessageText:
//
//  Test
//
#define SA_ALERTEMAIL_SETTINGS_BUTTON_TEXT 0x4C000018L

//;;;;;;;;;;;;;;;;;;;;;;;;Alert e-mail test information ;;;;;;;;;;;;;;;;;;;;;;
//
// MessageId: SA_ALERTEMAIL_SETTINGS_EMAIL_CONTENT
//
// MessageText:
//
//  Please go to the server Web UI to check the server's status.
//
#define SA_ALERTEMAIL_SETTINGS_EMAIL_CONTENT 0x4C000019L

//Config alert e-mail fail
//
// MessageId: SA_ALERTEMAIL_SETTINGS_ERR_SETTASK
//
// MessageText:
//
//  Fail to config alert e-mail.
//
#define SA_ALERTEMAIL_SETTINGS_ERR_SETTASK 0x4C00001AL

//SMTP is not ready err message
//
// MessageId: SA_ALERTEMAIL_SMTP_ERR_TEXT
//
// MessageText:
//
//  Simple Mail Transport Protocol (SMTP) is not enabled on this server.
//
#define SA_ALERTEMAIL_SMTP_ERR_TEXT      0x4C00001BL

///////////////////////////////////////////////////////////////////////////////
// HELP STRINGS
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_ALERTEMAIL_HELP_ALERTEMAIL
//
// MessageText:
//
//  Alert E-Mail
//
#define SA_ALERTEMAIL_HELP_ALERTEMAIL    0x4C000190L

