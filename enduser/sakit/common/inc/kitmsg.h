///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 1999, Microsoft Corp. All rights reserved.
//
// FILE
//
//    sakitmsg.mc
//
// SYNOPSIS
//
//    This file defines the messages for the Server project
//
// MODIFICATION HISTORY 
//
//    07/06/2000    Original version. 
//
///////////////////////////////////////////////////////////////////////////////

// please choose one of these severity names as part of your messages
 

// The Facility Name identifies the Alert ID range to be used by
// the specific component. For each new message you add choose the
// facility name corresponding to your component. If none of these
// correspond to your component add a new facility name with a new
// value and name 
///////////////////////////////////////////////////////////////////////////////
//Following are the messages for TAB : STATUS
// 
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
#define SA_FACILITY_SAKITMSG             0x1


//
// Define the severity codes
//
#define SA_SEVERITY_WARNING              0x2
#define SA_SEVERITY_SUCCESS              0x0
#define SA_SEVERITY_INFORMATIONAL        0x1
#define SA_SEVERITY_ERROR                0x3


//
// MessageId: SA_STATUS_TAB
//
// MessageText:
//
//  Status
//
#define SA_STATUS_TAB                    0x40010001L

//
// MessageId: SA_STATUS_TAB_INFO
//
// MessageText:
//
//  Status
//
#define SA_STATUS_TAB_INFO               0x40010002L

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for TAB :TASKSS
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_TASKS_TAB
//
// MessageText:
//
//  Tasks
//
#define SA_TASKS_TAB                     0x40010003L

//
// MessageId: SA_TASKS_TAB_INFO
//
// MessageText:
//
//  Tasks
//
#define SA_TASKS_TAB_INFO                0x40010004L

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for About.asp
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_ABOUT_PAGETITLE_TEXT
//
// MessageText:
//
//  About
//
#define SA_ABOUT_PAGETITLE_TEXT          0x40010005L

//
// MessageId: SA_ABOUT_ABOUTLBL_TEXT
//
// MessageText:
//
//  About
//
#define SA_ABOUT_ABOUTLBL_TEXT           0x40010006L

//
// MessageId: SA_ABOUT_MIC_WINDOWS_TEXT
//
// MessageText:
//
//  Microsoft&reg; Remote Administration Tools
//
#define SA_ABOUT_MIC_WINDOWS_TEXT        0x40010007L

//
// MessageId: SA_ABOUT_VERSION_TEXT
//
// MessageText:
//
//  Version 2.2 (Build %1)
//
#define SA_ABOUT_VERSION_TEXT            0x40010008L

//
// MessageId: SA_ABOUT_COPYRIGHT_TEXT
//
// MessageText:
//
//  Copyright&copy; 1981-2002 Microsoft Corporation. All rights reserved.
//
#define SA_ABOUT_COPYRIGHT_TEXT          0x40010009L

//
// MessageId: SA_ABOUT_PRODUCTID_TEXT
//
// MessageText:
//
//  Product ID:
//
#define SA_ABOUT_PRODUCTID_TEXT          0x4001000AL

//
// MessageId: SA_ABOUT_WARNING_TEXT
//
// MessageText:
//
//  Warning: This computer program is protected by copyright law and international treaties.
//  Unauthorized reproduction or distribution of this program, or any portion of it,
//  may result in severe civil and criminal penalties, and will be prosecuted to the
//  maximum extent possible under the law.
//
#define SA_ABOUT_WARNING_TEXT            0x4001000BL

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for Home.asp
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_HOME_PAGETITLE_TEXT
//
// MessageText:
//
//  Windows(R) Powered Server
//
#define SA_HOME_PAGETITLE_TEXT           0x4001000CL

//
// MessageId: SA_HOME_STATUSLBL_TEXT
//
// MessageText:
//
//  Status
//
#define SA_HOME_STATUSLBL_TEXT           0x4001000DL

//
// MessageId: SA_HOME_NOSTATUS_MESSAGE
//
// MessageText:
//
//  No status available
//
#define SA_HOME_NOSTATUS_MESSAGE         0x4001000EL

//
// MessageId: SA_HOME_ALERTLBL_TEXT
//
// MessageText:
//
//  Alerts
//
#define SA_HOME_ALERTLBL_TEXT            0x4001000FL

//
// MessageId: SA_HOME_NOALERTS_MESSAGE
//
// MessageText:
//
//  No alerts
//
#define SA_HOME_NOALERTS_MESSAGE         0x40010010L

//
// MessageId: SA_HOME_ALERTDETAILS_MESSAGE
//
// MessageText:
//
//  Click to display alert details
//
#define SA_HOME_ALERTDETAILS_MESSAGE     0x40010011L

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for sh_page.asp
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_SH_PAGE_FOKBUTTON_TEXT
//
// MessageText:
//
//  OK
//
#define SA_SH_PAGE_FOKBUTTON_TEXT        0x40010012L

//
// MessageId: SA_SH_PAGE_FCANCELBUTTON_TEXT
//
// MessageText:
//
//  Cancel
//
#define SA_SH_PAGE_FCANCELBUTTON_TEXT    0x40010013L

//
// MessageId: SA_SH_PAGE_FBACKBUTTON_TEXT
//
// MessageText:
//
//  Back
//
#define SA_SH_PAGE_FBACKBUTTON_TEXT      0x40010014L

//
// MessageId: SA_SH_PAGE_FNEXTBUTTON_TEXT
//
// MessageText:
//
//  Next
//
#define SA_SH_PAGE_FNEXTBUTTON_TEXT      0x40010015L

//
// MessageId: SA_SH_PAGE_FFINISHBUTTON_TEXT
//
// MessageText:
//
//  Finish
//
#define SA_SH_PAGE_FFINISHBUTTON_TEXT    0x40010016L

//
// MessageId: SA_SH_PAGE_FCLOSEBUTTON_TEXT
//
// MessageText:
//
//  Close
//
#define SA_SH_PAGE_FCLOSEBUTTON_TEXT     0x40010017L

//
// MessageId: SA_SH_PAGE_AREABACKBUTTON_TEXT
//
// MessageText:
//
//  Back
//
#define SA_SH_PAGE_AREABACKBUTTON_TEXT   0x40010018L

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for sh_restarting.asp
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_SH_RESTARTING_ALERTLBL_TEXT
//
// MessageText:
//
//  Message
//
#define SA_SH_RESTARTING_ALERTLBL_TEXT   0x40010019L

//
// MessageId: SA_SH_RESTARTING_ALERT_NOTREADY
//
// MessageText:
//
//  The Windows(R) Powered server is not ready
//
#define SA_SH_RESTARTING_ALERT_NOTREADY  0x4001001AL

//
// MessageId: SA_SH_RESTARTING_ALERT_RESTARTING
//
// MessageText:
//
//  The Windows-based server is currently unavailable. Please wait.
//
#define SA_SH_RESTARTING_ALERT_RESTARTING 0x4001001BL

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for sh_task.asp
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_SH_TASK_BACK_BUTTON
//
// MessageText:
//
//  &nbsp;&lt; Back&nbsp;
//
#define SA_SH_TASK_BACK_BUTTON           0x4001001CL

//
// MessageId: SA_SH_TASK_BACKIE_BUTTON
//
// MessageText:
//
//  &lt; Back
//
#define SA_SH_TASK_BACKIE_BUTTON         0x4001001DL

//
// MessageId: SA_SH_TASK_NEXT_BUTTON
//
// MessageText:
//
//  &nbsp;Next &gt;&nbsp;
//
#define SA_SH_TASK_NEXT_BUTTON           0x4001001EL

//
// MessageId: SA_SH_TASK_NEXTIE_BUTTON
//
// MessageText:
//
//  Next &gt;
//
#define SA_SH_TASK_NEXTIE_BUTTON         0x4001001FL

//
// MessageId: SA_SH_TASK_FINISH_BUTTON
//
// MessageText:
//
//  &nbsp;Finish&nbsp;
//
#define SA_SH_TASK_FINISH_BUTTON         0x40010020L

//
// MessageId: SA_SH_TASK_OK_BUTTON
//
// MessageText:
//
//  &nbsp;&nbsp;&nbsp;OK&nbsp;&nbsp;&nbsp;
//
#define SA_SH_TASK_OK_BUTTON             0x40010021L

//
// MessageId: SA_SH_TASK_CANCEL_BUTTON
//
// MessageText:
//
//  Cancel
//
#define SA_SH_TASK_CANCEL_BUTTON         0x40010022L

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for tabbar.asp
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_TABBAR_HELPTOOLTIP_TEXT
//
// MessageText:
//
//  Displays Help menu.
//
#define SA_TABBAR_HELPTOOLTIP_TEXT       0x40010023L

//
// MessageId: SA_TABBAR_HELPLABEL_TEXT
//
// MessageText:
//
//  Windows(R) Powered Server Help
//
#define SA_TABBAR_HELPLABEL_TEXT         0x40010024L

//
// MessageId: SA_TABBAR_ABOUT_TEXT
//
// MessageText:
//
//  About Microsoft(R) Windows(R) Powered
//
#define SA_TABBAR_ABOUT_TEXT             0x40010025L

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for tasks.asp
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_TASKS_PAGETITLE_TEXT
//
// MessageText:
//
//  Server Administration
//
#define SA_TASKS_PAGETITLE_TEXT          0x40010026L

//
// MessageId: SA_TASKS_TASKSLBL_TEXT
//
// MessageText:
//
//  tasks
//
#define SA_TASKS_TASKSLBL_TEXT           0x40010027L

//
// MessageId: SA_TASKS_NOTASKS_MESSAGE
//
// MessageText:
//
//  No tasks available
//
#define SA_TASKS_NOTASKS_MESSAGE         0x40010028L

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for alert_asynctask.asp
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_ALERT_ASYNCTASK_ALERTLBL_TEXT
//
// MessageText:
//
//  message
//
#define SA_ALERT_ASYNCTASK_ALERTLBL_TEXT 0x40010029L

//
// MessageId: SA_ALERT_ASYNCTASK_CLEARALERT_TEXT
//
// MessageText:
//
//  Clear Message
//
#define SA_ALERT_ASYNCTASK_CLEARALERT_TEXT 0x4001002AL

//
// MessageId: SA_ALERT_ASYNCTASK_CLEARDESC_TEXT
//
// MessageText:
//
//  When you are finished viewing this message, choose Clear Message.
//
#define SA_ALERT_ASYNCTASK_CLEARDESC_TEXT 0x4001002BL

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for alert_view.asp
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_ALERT_VIEW_ALERTLBL_TEXT
//
// MessageText:
//
//  message
//
#define SA_ALERT_VIEW_ALERTLBL_TEXT      0x4001002CL

//
// MessageId: SA_ALERT_VIEW_CLEARALERT_TEXT
//
// MessageText:
//
//  Clear Message
//
#define SA_ALERT_VIEW_CLEARALERT_TEXT    0x4001002DL

//
// MessageId: SA_ALERT_VIEW_ALERTVWRTITLE_TEXT
//
// MessageText:
//
//  Alert viewer
//
#define SA_ALERT_VIEW_ALERTVWRTITLE_TEXT 0x4001002EL

//
// MessageId: SA_ALERT_VIEW_CLEARDESC_TEXT
//
// MessageText:
//
//  When you are finished viewing this message, choose Clear Message.
//
#define SA_ALERT_VIEW_CLEARDESC_TEXT     0x4001002FL

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for err_view.asp
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_ERR_VIEW_ALERTLBL_TEXT
//
// MessageText:
//
//  message
//
#define SA_ERR_VIEW_ALERTLBL_TEXT        0x40010030L

//
// MessageId: SA_ERR_VIEW_PAGETITLE_TEXT
//
// MessageText:
//
//  Web UI for Server Administration Error
//
#define SA_ERR_VIEW_PAGETITLE_TEXT       0x40010031L

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for link AboutOEMLink
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_FRAMEWORK_OEM_LINK
//
// MessageText:
//
//  OEM Link
//
#define SA_FRAMEWORK_OEM_LINK            0x40010032L

///////////////////////////////////////////////////////////////////////////////
//Following are the messages for link ALERT
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_FRAMEWORK_ALERT_CAPTION
//
// MessageText:
//
//  
//
#define SA_FRAMEWORK_ALERT_CAPTION       0x40010033L

//
// MessageId: SA_FRAMEWORK_ALERT_DESCRIPTION
//
// MessageText:
//
//  
//
#define SA_FRAMEWORK_ALERT_DESCRIPTION   0x40010034L

///////////////////////////////////////////////////////////////////////////////
//
// Task Coordinator Alerts go in this section
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_ASYNC_TASK_FAILED_ALERT
//
// MessageText:
//
//  A Windows(R) Powered Server task failed to complete
//
#define SA_ASYNC_TASK_FAILED_ALERT       0xC0010035L

//
// MessageId: SA_ASYNC_TASK_FAILED_ALERT_DESC
//
// MessageText:
//
//  The following task has failed: %1.
//
#define SA_ASYNC_TASK_FAILED_ALERT_DESC  0xC0010036L

//
// MessageId: SA_ASYNC_TASK_FAILED_ALERT_ACTION
//
// MessageText:
//
//  Restart task.
//
#define SA_ASYNC_TASK_FAILED_ALERT_ACTION 0xC0010037L

/////////////////
//
// More messages for About.asp
//
/////////////////
//
// MessageId: SA_ABOUT_OS_BUILD_NUMBER
//
// MessageText:
//
//  Build
//
#define SA_ABOUT_OS_BUILD_NUMBER         0x40010038L

/////////////////
//
// More messages for sh_task.asp
//
/////////////////
//
// MessageId: SA_SH_TASK_BACK_ACCESSKEY
//
// MessageText:
//
//  B
//
#define SA_SH_TASK_BACK_ACCESSKEY        0x40010039L

//
// MessageId: SA_SH_TASK_NEXT_ACCESSKEY
//
// MessageText:
//
//  N
//
#define SA_SH_TASK_NEXT_ACCESSKEY        0x4001003AL

//
// MessageId: SA_SH_TASK_FINISH_ACCESSKEY
//
// MessageText:
//
//  F
//
#define SA_SH_TASK_FINISH_ACCESSKEY      0x4001003BL

/////////////////
//
// messages for default.asp
//
/////////////////
//
// MessageId: SA_CLIENTSIDESCRIPT_MSG1
//
// MessageText:
//
//  The Web Interface for Remote Administration is not available because of your Internet Explorer security settings. 
//
#define SA_CLIENTSIDESCRIPT_MSG1         0x4001003CL

//
// MessageId: SA_CLIENTSIDESCRIPT_MSG2
//
// MessageText:
//
//  To access the Web site, you must enable client-side scripting.  Some functions on the Web site work properly only if ActiveX controls and file downloading are enabled.
//
#define SA_CLIENTSIDESCRIPT_MSG2         0x4001003DL

//
// MessageId: SA_CLIENTSIDESCRIPT_MSG3
//
// MessageText:
//
//  If you are using Internet Explorer, you might be able to enable these features by adding the Web site to the Trusted Sites or Local Intranet security zone, depending on how these zones are configured. For more information about security zones and settings, see Internet Explorer Help.
//
#define SA_CLIENTSIDESCRIPT_MSG3         0x4001003EL

//
// MessageId: SA_CLIENTSIDESCRIPT_MSG4
//
// MessageText:
//
//  To add this Web site to the Trusted Sites or Local Intranet security zone: 
//
#define SA_CLIENTSIDESCRIPT_MSG4         0x4001003FL

//
// MessageId: SA_CLIENTSIDESCRIPT_MSG5
//
// MessageText:
//
//  In Internet Explorer, on the Tools menu, click Internet Options. 
//
#define SA_CLIENTSIDESCRIPT_MSG5         0x40010040L

//
// MessageId: SA_CLIENTSIDESCRIPT_MSG6
//
// MessageText:
//
//  Click the Security tab, click Trusted sites or Local Intranet, and then click Sites.
//
#define SA_CLIENTSIDESCRIPT_MSG6         0x40010041L

//
// MessageId: SA_CLIENTSIDESCRIPT_MSG7
//
// MessageText:
//
//  In the Add this Web site to the zone box, type the Internet address of the Web site you want to add to this zone, and then click Add.
//
#define SA_CLIENTSIDESCRIPT_MSG7         0x40010042L

/////////////////
// About box Win2K Copyright
/////////////////
//
// MessageId: SA_ABOUT_WIN2K_COPYRIGHT_TEXT
//
// MessageText:
//
//  Copyright&copy; 1981-2002 Microsoft Corporation. All rights reserved.
//
#define SA_ABOUT_WIN2K_COPYRIGHT_TEXT    0x400107D0L

