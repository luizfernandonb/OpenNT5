///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2000, Microsoft Corp. All rights reserved.
//
// FILE
//
//    usermsg.mc
//
// SYNOPSIS
//
//    NAS Server resources - English
//
// MODIFICATION HISTORY 
//
//    25 Aug 2000    Original version 
//
///////////////////////////////////////////////////////////////////////////////

// please choose one of these severity names as part of your messages
 

// The Facility Name identifies the Alert ID range to be used by
// the specific component. For each new message you add, choose the
// facility name corresponding to your component. If none of these
// correspond to your component, add a new facility name with a new
// value and name. 
///////////////////////////////////////////////////////////////////////////////
// Users and Groups Tab resources
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
#define SA_FACILITY_USERS                0x30
#define SA_FACILITY_MAIN                 0x20
#define SA_FACILITY_GROUP                0x31


//
// Define the severity codes
//
#define SA_SEVERITY_WARNING              0x2
#define SA_SEVERITY_SUCCESS              0x0
#define SA_SEVERITY_INFORMATIONAL        0x1
#define SA_SEVERITY_ERROR                0x3


//
// MessageId: L_MAIN_USERS_TAB
//
// MessageText:
//
//  Users
//
#define L_MAIN_USERS_TAB                 0x40200006L

//
// MessageId: L_MAIN_USERS_TAB_DESCRIPTION
//
// MessageText:
//
//  Manage local users and groups
//
#define L_MAIN_USERS_TAB_DESCRIPTION     0x4020001AL

//
// MessageId: L_MAIN_USERS_TAB_LONGDESCRIPTION
//
// MessageText:
//
//  Manage local users and groups on the server.
//
#define L_MAIN_USERS_TAB_LONGDESCRIPTION 0x4020002EL

/////////////////////////////////////////////////////////////////////////////
// USERS AND GROUPS TAB PAGE
/////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_MAIN_USERS_USERS
//
// MessageText:
//
//  Local Users
//
#define L_MAIN_USERS_USERS               0x402001F4L

//
// MessageId: L_MAIN_USERS_USERS_DESCRIPTION
//
// MessageText:
//
//  Create, edit, and delete local users on the server.
//
#define L_MAIN_USERS_USERS_DESCRIPTION   0x402001F5L

//
// MessageId: L_MAIN_USERS_GROUPS
//
// MessageText:
//
//  Local Groups
//
#define L_MAIN_USERS_GROUPS              0x402001F6L

//
// MessageId: L_MAIN_USERS_GROUPS_DESCRIPTION
//
// MessageText:
//
//  Create, edit, and delete local groups on the server. 
//
#define L_MAIN_USERS_GROUPS_DESCRIPTION  0x402001F7L

///////////////////////////////////////////////////////////////////////////////
// USERS
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_APPLIANCE_USERS
//
// MessageText:
//
//  Local Users on Server 
//
#define L_APPLIANCE_USERS                0x40300001L

//
// MessageId: L_DESCRIPTIONEX_HEADING
//
// MessageText:
//
//  Select a user, then choose a task. To create a new user, choose New...
//
#define L_DESCRIPTIONEX_HEADING          0x40300002L

//
// MessageId: L_COLUMN_NAME
//
// MessageText:
//
//  Name
//
#define L_COLUMN_NAME                    0x40300003L

//
// MessageId: L_COLUMN_FULLNAME
//
// MessageText:
//
//  Full Name
//
#define L_COLUMN_FULLNAME                0x40300004L

//
// MessageId: L_TASKS_TEXT
//
// MessageText:
//
//  Tasks
//
#define L_TASKS_TEXT                     0x40300005L

//
// MessageId: L_SERVEAREABUTTON_NEW
//
// MessageText:
//
//  New...
//
#define L_SERVEAREABUTTON_NEW            0x40300006L

//
// MessageId: L_NEW_ROLLOVERTEXT
//
// MessageText:
//
//  Create New User
//
#define L_NEW_ROLLOVERTEXT               0x40300007L

//
// MessageId: L_SERVEAREABUTTON_DELETE
//
// MessageText:
//
//  Delete
//
#define L_SERVEAREABUTTON_DELETE         0x40300008L

//
// MessageId: L_SERVEAREABUTTON_SETPASSWORD
//
// MessageText:
//
//  Set a Password...
//
#define L_SERVEAREABUTTON_SETPASSWORD    0x40300009L

//
// MessageId: L_SERVEAREABUTTON_PROPERTIES
//
// MessageText:
//
//  Properties...
//
#define L_SERVEAREABUTTON_PROPERTIES     0x4030000AL

//
// MessageId: L_DELETE_ROLLOVERTEXT
//
// MessageText:
//
//  Delete User
//
#define L_DELETE_ROLLOVERTEXT            0x4030000BL

//
// MessageId: L_PASSWORD_ROLLOVERTEXT
//
// MessageText:
//
//  Set Password
//
#define L_PASSWORD_ROLLOVERTEXT          0x4030000CL

//
// MessageId: L_PROPERTIES_ROLLOVERTEXT
//
// MessageText:
//
//  User Properties
//
#define L_PROPERTIES_ROLLOVERTEXT        0x4030000DL

//
// MessageId: L_SERVEAREALABELBAR_USERS
//
// MessageText:
//
//  Users
//
#define L_SERVEAREALABELBAR_USERS        0x4030000EL

//
// MessageId: L_LOCALIZATIONFAIL_ERRORMESSAGE
//
// MessageText:
//
//  An error occurred while attempting to retrieve localization values.
//
#define L_LOCALIZATIONFAIL_ERRORMESSAGE  0xC030000FL

//
// MessageId: L_WMICONNECTIONFAILED_ERRORMESSAGE
//
// MessageText:
//
//  The connection to WMI failed.
//
#define L_WMICONNECTIONFAILED_ERRORMESSAGE 0xC0300010L

//
// MessageId: L_COMPUTERNAMEEX_ERRORMESSAGE
//
// MessageText:
//
//  An error occurred while attempting to retrieve the computer name.
//
#define L_COMPUTERNAMEEX_ERRORMESSAGE    0xC0300011L

//
// MessageId: L_FAILEDTOGETUSERS_ERRORMESSAGE
//
// MessageText:
//
//  An error occurred while attempting to retrieve users from the system.
//
#define L_FAILEDTOGETUSERS_ERRORMESSAGE  0xC0300012L

//
// MessageId: L_FAILEDTOADDCOLOUMN_ERRORMESSAGE
//
// MessageText:
//
//  Failed to add a column to the table.
//
#define L_FAILEDTOADDCOLOUMN_ERRORMESSAGE 0xC0300013L

//
// MessageId: L_FAILEDTOADDROW_ERRORMESSAGE
//
// MessageText:
//
//  Failed to add a row to the table.
//
#define L_FAILEDTOADDROW_ERRORMESSAGE    0xC0300014L

//
// MessageId: L_FAILEDTOADDTASK_ERRORMESSAGE
//
// MessageText:
//
//  Failed to add a task to the table.
//
#define L_FAILEDTOADDTASK_ERRORMESSAGE   0xC0300015L

//
// MessageId: L_FAILEDTOSORT_ERRORMESSAGE
//
// MessageText:
//
//  Failed to sort the table.
//
#define L_FAILEDTOSORT_ERRORMESSAGE      0xC0300016L

//
// MessageId: L_FAILEDTOSHOW_ERRORMESSAGE
//
// MessageText:
//
//  Failed to show the table.
//
#define L_FAILEDTOSHOW_ERRORMESSAGE      0xC0300017L

//
// MessageId: L_FAILEDTOADDTASKTITLE_ERRORMESSAGE
//
// MessageText:
//
//  Failed to add a task title.
//
#define L_FAILEDTOADDTASKTITLE_ERRORMESSAGE 0xC0300018L

///////////////////////////////////////////////////////////////////////////////
// USER_NEW
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_NOINPUTDATA_TEXT
//
// MessageText:
//
//  --No Data Input--
//
#define L_NOINPUTDATA_TEXT               0x40300019L

//
// MessageId: L_TABPROPSHEETNEW_TEXT
//
// MessageText:
//
//  TabPropSheet
//
#define L_TABPROPSHEETNEW_TEXT           0x4030001AL

//
// MessageId: L_TABLEHEADINGEX_TEXT
//
// MessageText:
//
//  Create New User
//
#define L_TABLEHEADINGEX_TEXT            0x4030001BL

//
// MessageId: L_GENERAL_TEXT
//
// MessageText:
//
//  General
//
#define L_GENERAL_TEXT                   0x4030001CL

//
// MessageId: L_TASKTITLEEX_TEXT
//
// MessageText:
//
//  Create New User
//
#define L_TASKTITLEEX_TEXT               0x4030001DL

//
// MessageId: L_USERNAMEEX_TEXT
//
// MessageText:
//
//  User name:
//
#define L_USERNAMEEX_TEXT                0x4030001EL

//
// MessageId: L_FULLNAMEEX_TEXT
//
// MessageText:
//
//  Full name:
//
#define L_FULLNAMEEX_TEXT                0x4030001FL

//
// MessageId: L_DESCRIPTIONEX_TEXT
//
// MessageText:
//
//  Description:
//
#define L_DESCRIPTIONEX_TEXT             0x40300020L

//
// MessageId: L_PASSWORD_TEXT
//
// MessageText:
//
//  Password:
//
#define L_PASSWORD_TEXT                  0x40300021L

//
// MessageId: L_CONFIRMPASSWORD_TEXT
//
// MessageText:
//
//  Confirm password:
//
#define L_CONFIRMPASSWORD_TEXT           0x40300022L

//
// MessageId: L_USERDISABLED_TEXT
//
// MessageText:
//
//  Disable this user account
//
#define L_USERDISABLED_TEXT              0x40300023L

//
// MessageId: L_COMPUTERNAMED_ERRORMESSAGE
//
// MessageText:
//
//  An error occurred while attempting to retrieve the computer name.
//
#define L_COMPUTERNAMED_ERRORMESSAGE     0xC0300024L

//
// MessageId: L_ENTERNAME_ERRORMESSAGE
//
// MessageText:
//
//  Enter the user name.
//
#define L_ENTERNAME_ERRORMESSAGE         0xC0300025L

//
// MessageId: L_PASSWORDNOTMATCH_ERRORMESSAGE
//
// MessageText:
//
//  These passwords do not match.
//
#define L_PASSWORDNOTMATCH_ERRORMESSAGE  0xC0300026L

//
// MessageId: L_NONUNIQUEUSERNAME_ERRORMESSAGE
//
// MessageText:
//
//  This user name already exists. Enter a different user name.
//
#define L_NONUNIQUEUSERNAME_ERRORMESSAGE 0xC0300027L

//
// MessageId: L_INVALIDCHARACTEREX_ERRORMESSAGE
//
// MessageText:
//
//  This is an invalid user name. 
//
#define L_INVALIDCHARACTEREX_ERRORMESSAGE 0xC0300028L

//
// MessageId: L_ADSI_ERRORMESSAGE
//
// MessageText:
//
//  This user name could not be created.
//
#define L_ADSI_ERRORMESSAGE              0xC0300029L

//
// MessageId: L_PASSWORD_COMPLEXITYEX_ERRORMESSAGE
//
// MessageText:
//
//  This password does not meet the complexity requirements.
//
#define L_PASSWORD_COMPLEXITYEX_ERRORMESSAGE 0xC030002AL

//
// MessageId: L_GROUP_EXISTSEX_ERRORMESSAGE
//
// MessageText:
//
//  The local group that you have specified already exists. Specify another local group.
//
#define L_GROUP_EXISTSEX_ERRORMESSAGE    0xC030002BL

///////////////////////////////////////////////////////////////////////////////
// USER_PROP
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_NOINPUTDATAPROP_TEXT
//
// MessageText:
//
//  --No Data Input--
//
#define L_NOINPUTDATAPROP_TEXT           0x4030002CL

//
// MessageId: L_TABPROPSHEETPROP_TEXT
//
// MessageText:
//
//  TabPropSheet
//
#define L_TABPROPSHEETPROP_TEXT          0x4030002DL

//
// MessageId: L_TABLEHEADING_TEXT
//
// MessageText:
//
//  Modify user properties:
//
#define L_TABLEHEADING_TEXT              0x4030002EL

//
// MessageId: L_GENERALEX_TEXT
//
// MessageText:
//
//  General
//
#define L_GENERALEX_TEXT                 0x4030002FL

//
// MessageId: L_TASKTITLE_TEXT
//
// MessageText:
//
//  %1 Properties 
//
#define L_TASKTITLE_TEXT                 0x40300030L

//
// MessageId: L_USERNAME_TEXT
//
// MessageText:
//
//  User name:
//
#define L_USERNAME_TEXT                  0x40300031L

//
// MessageId: L_FULLNAME_TEXT
//
// MessageText:
//
//  Full name:
//
#define L_FULLNAME_TEXT                  0x40300032L

//
// MessageId: L_DESCRIPTION_TEXT
//
// MessageText:
//
//  Description:
//
#define L_DESCRIPTION_TEXT               0x40300033L

//
// MessageId: L_USERDISABLEDEX_TEXT
//
// MessageText:
//
//  Disable this user account
//
#define L_USERDISABLEDEX_TEXT            0x40300034L

//
// MessageId: L_ENTERNAMEEX_ERRORMESSAGE
//
// MessageText:
//
//  Enter the user name.
//
#define L_ENTERNAMEEX_ERRORMESSAGE       0xC0300035L

//
// MessageId: L_UNIQUEUSERNAME_ERRORMESSAGE
//
// MessageText:
//
//  This user name already exists. Enter a new user name.
//
#define L_UNIQUEUSERNAME_ERRORMESSAGE    0xC0300036L

//
// MessageId: L_INVALIDCHARACTER_ERRORMESSAGE
//
// MessageText:
//
//  This is an invalid user name.  
//
#define L_INVALIDCHARACTER_ERRORMESSAGE  0xC0300037L

//
// MessageId: L_ADSIM_ERRORMESSAGE
//
// MessageText:
//
//  The user property could not be changed.
//
#define L_ADSIM_ERRORMESSAGE             0xC0300038L

//
// MessageId: L_GROUP_EXISTS_ERRORMESSAGE
//
// MessageText:
//
//  The specified local group already exists. Enter a different local group.
//
#define L_GROUP_EXISTS_ERRORMESSAGE      0xC0300039L

//
// MessageId: L_ADMINDISABLED_ERRORMESSAGE
//
// MessageText:
//
//  You cannot disable your own user account.
//
#define L_ADMINDISABLED_ERRORMESSAGE     0xC030003AL

///////////////////////////////////////////////////////////////////////////////
// USER_DELETE
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_TASKTITLE
//
// MessageText:
//
//  Delete User
//
#define L_TASKTITLE                      0x4030003BL

//
// MessageId: L_DELETETHEUSERMESSAGE
//
// MessageText:
//
//  Delete user %1?
//
#define L_DELETETHEUSERMESSAGE           0x4030003CL

//
// MessageId: L_NOTE
//
// MessageText:
//
//  Note
//
#define L_NOTE                           0x4030003DL

//
// MessageId: L_NOTEBODY
//
// MessageText:
//
//  Each user is represented by a unique identifier which is independent of the user name. Once a user is deleted, even creating an identically named user in the future will not restore access to resources which currently include the user in their access control lists.
//
#define L_NOTEBODY                       0x4030003EL

//
// MessageId: L_COULDNOTDELETEUSER_ERRORMESSAGE
//
// MessageText:
//
//  Unable to delete this user.
//
#define L_COULDNOTDELETEUSER_ERRORMESSAGE 0xC030003FL

//
// MessageId: L_COULDNOTDELETEBUILTINACCOUNTS_ERRORMESSAGE
//
// MessageText:
//
//  Unable to delete builtin accounts.
//
#define L_COULDNOTDELETEBUILTINACCOUNTS_ERRORMESSAGE 0xC0300040L

//
// MessageId: L_USERNOTFOUND_ERRORMESSAGE
//
// MessageText:
//
//  The selected user does not exist.
//
#define L_USERNOTFOUND_ERRORMESSAGE      0xC0300041L

//
// MessageId: L_CANNOTDELETETHEUSERMESSAGE
//
// MessageText:
//
//  You cannot delete your own user account.
//
#define L_CANNOTDELETETHEUSERMESSAGE     0xC0300042L

//
// MessageId: L_UNABLETOGETSERVERVARIABLES
//
// MessageText:
//
//  Unable to retrieve the values of the server variables.
//
#define L_UNABLETOGETSERVERVARIABLES     0x40300043L

//
// MessageId: L_COMPUTERNAMEA_ERRORMESSAGE
//
// MessageText:
//
//  An error occurred while attempting to retrieve the computer name.
//
#define L_COMPUTERNAMEA_ERRORMESSAGE     0xC0300044L

///////////////////////////////////////////////////////////////////////////////
// USER_SETPASSWORD
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: F_TASKTITLE_TEXT
//
// MessageText:
//
//  Set Password
//
#define F_TASKTITLE_TEXT                 0x40300045L

//
// MessageId: F_NEWPASSWORD_TEXT
//
// MessageText:
//
//  Password:
//
#define F_NEWPASSWORD_TEXT               0x40300046L

//
// MessageId: F_CONFIRMPASSWORD_TEXT
//
// MessageText:
//
//  Confirm password:
//
#define F_CONFIRMPASSWORD_TEXT           0x40300047L

//
// MessageId: L_PASSWORD_COMPLEXITY_ERRORMESSAGE
//
// MessageText:
//
//  The password does not meet the complexity requirements.
//
#define L_PASSWORD_COMPLEXITY_ERRORMESSAGE 0xC0300048L

//
// MessageId: L_ADSIL_ERRORMESSAGE
//
// MessageText:
//
//  The password could not be created.
//
#define L_ADSIL_ERRORMESSAGE             0xC0300049L

//
// MessageId: F_PASSWORDNOTMATCH_ERRORMESSAGE
//
// MessageText:
//
//  The passwords do not match.
//
#define F_PASSWORDNOTMATCH_ERRORMESSAGE  0xC030004AL

//
// MessageId: L_COMPUTERNAMEB_ERRORMESSAGE
//
// MessageText:
//
//  An error occurred while attempting to retrieve the server name.
//
#define L_COMPUTERNAMEB_ERRORMESSAGE     0xC030004BL

//
// MessageId: L_USERDOSENOT_EXISTS
//
// MessageText:
//
//  The password could not be set because the user does not exist.
//
#define L_USERDOSENOT_EXISTS             0x4030004CL

///////////////////////////////////////////////////////////////////////////////
// GROUP NEW
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_GROUP_NAME_TEXT
//
// MessageText:
//
//  Group name:
//
#define L_GROUP_NAME_TEXT                0x40310001L

//
// MessageId: L_MEMBERS_TEXT
//
// MessageText:
//
//  Members
//
#define L_MEMBERS_TEXT                   0x40310002L

//
// MessageId: L_ADD_TEXT
//
// MessageText:
//
//  Add
//
#define L_ADD_TEXT                       0x40310003L

//
// MessageId: L_REMOVE_TEXT
//
// MessageText:
//
//  Remove
//
#define L_REMOVE_TEXT                    0x40310004L

//
// MessageId: L_TASKTITLE_TEXT_NEW
//
// MessageText:
//
//  Create New Group
//
#define L_TASKTITLE_TEXT_NEW             0x40310005L

//
// MessageId: L_ADDUSERORGROUP_TEXT
//
// MessageText:
//
//  Add user or group:
//
#define L_ADDUSERORGROUP_TEXT            0x40310006L

//
// MessageId: L_NOINPUTDATANEW_TEXT
//
// MessageText:
//
//  --No Data Input--
//
#define L_NOINPUTDATANEW_TEXT            0x40310007L

//
// MessageId: L_TABPROPSHEETGRP_TEXT
//
// MessageText:
//
//  TabPropSheet
//
#define L_TABPROPSHEETGRP_TEXT           0x40310008L

//
// MessageId: L_TABLEHEADING_TEXT_NEW
//
// MessageText:
//
//  Create new group:
//
#define L_TABLEHEADING_TEXT_NEW          0x40310009L

//
// MessageId: L_GENERALGRP_TEXT
//
// MessageText:
//
//  General
//
#define L_GENERALGRP_TEXT                0x4031000AL

//
// MessageId: L_DOMAINUSERHELP_TEXT
//
// MessageText:
//
//  To add a user or group, select from the list above, then choose Add.
//
#define L_DOMAINUSERHELP_TEXT            0x4031000BL

//
// MessageId: L_DUPLICATEMEMBER_ERRORMESSAGE
//
// MessageText:
//
//  This member already exists.
//
#define L_DUPLICATEMEMBER_ERRORMESSAGE   0xC031000CL

//
// MessageId: L_SELECTMEMBER_ERRORMESSAGE
//
// MessageText:
//
//  Select a member.
//
#define L_SELECTMEMBER_ERRORMESSAGE      0xC031000DL

//
// MessageId: L_NONUNIQUEGROUPNAME_ERRORMESSAGE
//
// MessageText:
//
//  This group name already exists.
//
#define L_NONUNIQUEGROUPNAME_ERRORMESSAGE 0xC031000EL

//
// MessageId: L_ACCOUNTALREADYEXIST_ERRORMESSAGE
//
// MessageText:
//
//  This account already exists.
//
#define L_ACCOUNTALREADYEXIST_ERRORMESSAGE 0xC031000FL

//
// MessageId: L_GROUPNOTCREATED_ERRORMESSAGE
//
// MessageText:
//
//  This group could not be created.
//
#define L_GROUPNOTCREATED_ERRORMESSAGE   0xC0310010L

//
// MessageId: L_GROUPNOTPRESENT_ERRORMESSAGE
//
// MessageText:
//
//  Unable to add this group because it does not exist.
//
#define L_GROUPNOTPRESENT_ERRORMESSAGE   0xC0310011L

//
// MessageId: L_GROUPPROPERTIESNOTSET_ERRORMESSAGE
//
// MessageText:
//
//  The group properties are not set.
//
#define L_GROUPPROPERTIESNOTSET_ERRORMESSAGE 0xC0310012L

//
// MessageId: L_MEMBERADDITIONFAILED_ERRORMESSAGE
//
// MessageText:
//
//  Unable to add members to the group.
//
#define L_MEMBERADDITIONFAILED_ERRORMESSAGE 0xC0310013L

//
// MessageId: L_GROUPNAMENOTVALID_ERRORMESSAGE
//
// MessageText:
//
//  The group name is invalid. 
//
#define L_GROUPNAMENOTVALID_ERRORMESSAGE 0xC0310014L

//
// MessageId: L_INVALIDCHARACTERGRP_ERRORMESSAGE
//
// MessageText:
//
//  You have used an invalid character. Names may not consist entirely of periods and/or spaces, or contain the following characters: \/[]:+=;,?* Please enter a new name and try again.
//
#define L_INVALIDCHARACTERGRP_ERRORMESSAGE 0xC0310015L

//
// MessageId: L_WMICONNECTIONFAILEDEX_ERRORMESSAGE
//
// MessageText:
//
//  The connection to WMI failed.
//
#define L_WMICONNECTIONFAILEDEX_ERRORMESSAGE 0xC0310016L

//
// MessageId: L_LOCALIZATIONOBJECTFAILED_ERRORMESSAGE
//
// MessageText:
//
//  An error occurred while attempting to create the Localization object.
//
#define L_LOCALIZATIONOBJECTFAILED_ERRORMESSAGE 0xC0310017L

//
// MessageId: L_COMPUTERNAMEC_ERRORMESSAGE
//
// MessageText:
//
//  Unable to retrieve the computer name.
//
#define L_COMPUTERNAMEC_ERRORMESSAGE     0xC0310018L

//
// MessageId: L_DOMUSERINVALIDCHARACTER_ERRORMESSAGE
//
// MessageText:
//
//  The domain user name contains invalid characters. Please enter a new name and try again.
//
#define L_DOMUSERINVALIDCHARACTER_ERRORMESSAGE 0xC0310019L

//
// MessageId: L_INVALIDDOMAINUSER_ERRORMESSAGE
//
// MessageText:
//
//  You have entered an invalid domain user format. Please enter a valid format.
//
#define L_INVALIDDOMAINUSER_ERRORMESSAGE 0xC031001AL

//
// MessageId: L_USERNOTFOUNDEX_ERRORMESSAGE
//
// MessageText:
//
//  Unable to locate the user name. 
//
#define L_USERNOTFOUNDEX_ERRORMESSAGE    0xC031001BL

///////////////////////////////////////////////////////////////////////////////
// GROUPS AREA
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_APPLIANCE_GROUPS
//
// MessageText:
//
//  Local Groups on Server 
//
#define L_APPLIANCE_GROUPS               0x4031001CL

//
// MessageId: L_DESCRIPTION_HEADING
//
// MessageText:
//
//  Select a group, then choose a task. To create a new group, choose New...
//
#define L_DESCRIPTION_HEADING            0x4031001DL

//
// MessageId: L_COLUMNEX_NAME
//
// MessageText:
//
//  Name
//
#define L_COLUMNEX_NAME                  0x4031001EL

//
// MessageId: L_COLUMNEX_FULLNAME
//
// MessageText:
//
//  Description
//
#define L_COLUMNEX_FULLNAME              0x4031001FL

//
// MessageId: L_TASKSEX_TEXT
//
// MessageText:
//
//  Tasks
//
#define L_TASKSEX_TEXT                   0x40310020L

//
// MessageId: L_NEW_TEXT
//
// MessageText:
//
//  New...
//
#define L_NEW_TEXT                       0x40310021L

//
// MessageId: L_DELETE_TEXT
//
// MessageText:
//
//  Delete
//
#define L_DELETE_TEXT                    0x40310022L

//
// MessageId: L_PROPERTIES_TEXT
//
// MessageText:
//
//  Properties...
//
#define L_PROPERTIES_TEXT                0x40310023L

//
// MessageId: L_NEWEX_ROLLOVERTEXT
//
// MessageText:
//
//  Create New Group
//
#define L_NEWEX_ROLLOVERTEXT             0x40310024L

//
// MessageId: L_DELETEEX_ROLLOVERTEXT
//
// MessageText:
//
//  Delete Group
//
#define L_DELETEEX_ROLLOVERTEXT          0x40310025L

//
// MessageId: L_PROPERTIESEX_ROLLOVERTEXT
//
// MessageText:
//
//  Set the properties for a group.
//
#define L_PROPERTIESEX_ROLLOVERTEXT      0x40310026L

//
// MessageId: L_FAILEDTOADDCOLOUMNEX_ERRORMESSAGE
//
// MessageText:
//
//  Failed to add a column to the table.
//
#define L_FAILEDTOADDCOLOUMNEX_ERRORMESSAGE 0xC0310027L

//
// MessageId: L_FAILEDTOADDROWEX_ERRORMESSAGE
//
// MessageText:
//
//  Failed to add a row to the table.
//
#define L_FAILEDTOADDROWEX_ERRORMESSAGE  0xC0310028L

//
// MessageId: L_FAILEDTOADDTASKEX_ERRORMESSAGE
//
// MessageText:
//
//  Failed to add a task to the table.
//
#define L_FAILEDTOADDTASKEX_ERRORMESSAGE 0xC0310029L

//
// MessageId: L_FAILEDTOSORTEX_ERRORMESSAGE
//
// MessageText:
//
//  Failed to sort the table.
//
#define L_FAILEDTOSORTEX_ERRORMESSAGE    0xC031002AL

//
// MessageId: L_FAILEDTOSHOWEX_ERRORMESSAGE
//
// MessageText:
//
//  Failed to show the table.
//
#define L_FAILEDTOSHOWEX_ERRORMESSAGE    0xC031002BL

//
// MessageId: L_FAILEDTOADDTASKTITLEEX_ERRORMESSAGE
//
// MessageText:
//
//  Failed to add a task title.
//
#define L_FAILEDTOADDTASKTITLEEX_ERRORMESSAGE 0xC031002CL

//
// MessageId: L_LOCALIZATIONFAILEX_ERRORMESSAGE
//
// MessageText:
//
//  An error occurred while attempting to retrieve the localization values.
//
#define L_LOCALIZATIONFAILEX_ERRORMESSAGE 0xC031002DL

//
// MessageId: L_FAILEDTOGETGROUPS_ERRORMESSAGE
//
// MessageText:
//
//  An error occurred while attempting to retrieve the groups from the system.
//
#define L_FAILEDTOGETGROUPS_ERRORMESSAGE 0xC031002EL

///////////////////////////////////////////////////////////////////////////////
// GROUPS PROP
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_SERVEAREALABELBAR_GROUPS
//
// MessageText:
//
//  Groups
//
#define L_SERVEAREALABELBAR_GROUPS       0x4031002FL

//
// MessageId: L_DESCRIPTIONGRP_TEXT
//
// MessageText:
//
//  Description:
//
#define L_DESCRIPTIONGRP_TEXT            0x40310030L

//
// MessageId: L_TASKTITLE_TEXT_PROP
//
// MessageText:
//
//  %1 Group Properties 
//
#define L_TASKTITLE_TEXT_PROP            0x40310031L

//
// MessageId: L_TABLEHEADING_TEXT_PROP
//
// MessageText:
//
//  Modify group properties:
//
#define L_TABLEHEADING_TEXT_PROP         0x40310032L

//
// MessageId: L_GROUPPROPNOTOBTAINED_ERRORMESSAGE
//
// MessageText:
//
//  An error occurred while attempting to retrieve the group properties.
//
#define L_GROUPPROPNOTOBTAINED_ERRORMESSAGE 0xC0310033L

//
// MessageId: L_OBJECTCREATIONFAILED_ERRORMESSAGE
//
// MessageText:
//
//  An error occurred while attempting to create the object. 
//
#define L_OBJECTCREATIONFAILED_ERRORMESSAGE 0xC0310034L

//
// MessageId: L_MEMBERUPDATIONFAILED_ERRORMESSAGE
//
// MessageText:
//
//  Failed to add/remove the group members. 
//
#define L_MEMBERUPDATIONFAILED_ERRORMESSAGE 0xC0310035L

//
// MessageId: L_GROUPNAMEUPDATIONFAILED_ERRORMESSAGE
//
// MessageText:
//
//  Failed to change the group name. 
//
#define L_GROUPNAMEUPDATIONFAILED_ERRORMESSAGE 0xC0310036L

//
// MessageId: L_DESCRIPTIONUPDATEFAILED_ERRORMESSAGE
//
// MessageText:
//
//  Failed to update the group description. 
//
#define L_DESCRIPTIONUPDATEFAILED_ERRORMESSAGE 0xC0310037L

//
// MessageId: L_LONGGRPDESCRIPTION_ERRORMESSAGE
//
// MessageText:
//
//  The group description cannot exceed 300 characters.
//
#define L_LONGGRPDESCRIPTION_ERRORMESSAGE 0xC0310038L

///////////////////////////////////////////////////////////////////////////////
// GROUPS DELETE
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_TASKTITLE_TEXT_DELETE
//
// MessageText:
//
//  Delete Group
//
#define L_TASKTITLE_TEXT_DELETE          0x40310039L

//
// MessageId: L_DELETEGROUPNAME_TEXT
//
// MessageText:
//
//  Delete the group 
//
#define L_DELETEGROUPNAME_TEXT           0x4031003AL

//
// MessageId: L_QUESTIONMARK_TEXT
//
// MessageText:
//
//  ?
//
#define L_QUESTIONMARK_TEXT              0x4031003BL

//
// MessageId: L_NOTE_TEXT
//
// MessageText:
//
//  Note
//
#define L_NOTE_TEXT                      0x4031003CL

//
// MessageId: L_DELETEWARNING_TEXT
//
// MessageText:
//
//  Each group is represented by a unique identifier. The unique identifier is independent of the group name. 
//
#define L_DELETEWARNING_TEXT             0x4031003DL

//
// MessageId: L_DELETEWARNING_CONT1_TEXT
//
// MessageText:
//
//  Once a group is deleted, even creating an identically named group in the future will not restore access to resources which currently include the group in their access control list.
//
#define L_DELETEWARNING_CONT1_TEXT       0x4031003EL

//
// MessageId: L_COULDNOTDELETEBUILTINGROUP_ERRORMESSAGE
//
// MessageText:
//
//  Unable to delete Builtin accounts.
//
#define L_COULDNOTDELETEBUILTINGROUP_ERRORMESSAGE 0xC031003FL

//
// MessageId: L_GROUPNOTDELETED_ERRORMESSAGE
//
// MessageText:
//
//  Unable to delete the Group name.
//
#define L_GROUPNOTDELETED_ERRORMESSAGE   0xC0310040L

//
// MessageId: L_GROUPNOTEXISTS_ERRORMESSAGE
//
// MessageText:
//
//  The Group name could not be found. This group is either deleted or renamed.
//
#define L_GROUPNOTEXISTS_ERRORMESSAGE    0xC0310041L

//
// MessageId: L_MEMBERSPROMPT_TEXT
//
// MessageText:
//
//  Members:
//
#define L_MEMBERSPROMPT_TEXT             0x40310042L

///////////////////////////////////////////////////////////////////////////////
// GROUPS PROP
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_HOWTO_ADDDOMAINUSER
//
// MessageText:
//
//  To add a domain user or group to this group, enter a name in the format <i>domain\user</i>, then choose Add:
//
#define L_HOWTO_ADDDOMAINUSER            0x403100C8L

//
// MessageId: L_HOWTO_ENTERCREDENTIALS
//
// MessageText:
//
//  If you are logged on with an account that does not have access to this domain, enter the <i>domain\user</i> of an account which does have access:
//
#define L_HOWTO_ENTERCREDENTIALS         0x403100C9L

//
// MessageId: L_USERNAME_PROMPT
//
// MessageText:
//
//  Username:
//
#define L_USERNAME_PROMPT                0x403100CAL

//
// MessageId: L_PASSWORD_PROMPT
//
// MessageText:
//
//  Password:
//
#define L_PASSWORD_PROMPT                0x403100CBL

//
// MessageId: L_ERROR_ACCESSDENIED
//
// MessageText:
//
//  Your login account does not have sufficent authority to add user %1. You must specify a User name and password for an account that has sufficent authority to add this user.
//
#define L_ERROR_ACCESSDENIED             0xC03100CCL

//////////////////////////////////////////////////////////////////////////////
// USER PROP: PROFILE AND HOME DIRECTORY
//////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_HOMEDIRECTORY_TEXT
//
// MessageText:
//
//  Home Directory:
//
#define L_HOMEDIRECTORY_TEXT             0x40300052L

//
// MessageId: L_HOMEDIRECTORY_ERRORMESSAGE
//
// MessageText:
//
//  The path of home directory is not a valid absolute path name.
//
#define L_HOMEDIRECTORY_ERRORMESSAGE     0xC0300053L

//
// MessageId: L_HOMEPATH_TEXT
//
// MessageText:
//
//  Path
//
#define L_HOMEPATH_TEXT                  0x40300054L

//
// MessageId: L_GUESTUSER_ENABLED
//
// MessageText:
//
//  Built-in account for guest is enabled.
//
#define L_GUESTUSER_ENABLED              0x40300055L

//
// MessageId: L_ALLUSERDISABLEDEX_TEXT
//
// MessageText:
//
//  Disable all user accounts
//
#define L_ALLUSERDISABLEDEX_TEXT         0x40300056L

//
// MessageId: L_CREATEHOMEDIRECTORY_ERRORMESSAGE
//
// MessageText:
//
//  Create home directory failed.
//
#define L_CREATEHOMEDIRECTORY_ERRORMESSAGE 0xC0300057L

//
// MessageId: L_USERDISABLED_INFORMATION
//
// MessageText:
//
//  Account is disabled
//
#define L_USERDISABLED_INFORMATION       0x40300058L

//
// MessageId: L_CREATEHOMEDIRECTORY_EXISTMESSAGE
//
// MessageText:
//
//  This directory name already exists. Enter a different directory name.
//
#define L_CREATEHOMEDIRECTORY_EXISTMESSAGE 0xC0300059L

///////////////////////////////////////////////////////////////////////////////
// HELP STRINGS
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_ADDING_A_GROUP_ACCOUNT
//
// MessageText:
//
//  Adding a Group Account
//
#define L_ADDING_A_GROUP_ACCOUNT         0x40300190L

//
// MessageId: L_ADDING_A_USER_ACCOUNT
//
// MessageText:
//
//  Adding a User Account
//
#define L_ADDING_A_USER_ACCOUNT          0x40300191L

//
// MessageId: L_MANAGE_LOCAL_GROUPS
//
// MessageText:
//
//  Manage Local Groups
//
#define L_MANAGE_LOCAL_GROUPS            0x40300192L

//
// MessageId: L_MANAGE_LOCAL_USERS
//
// MessageText:
//
//  Manage Local Users
//
#define L_MANAGE_LOCAL_USERS             0x40300193L

//
// MessageId: L_MODIFYING_GROUP_PROPERTIES
//
// MessageText:
//
//  Modifying Group Properties
//
#define L_MODIFYING_GROUP_PROPERTIES     0x40300194L

//
// MessageId: L_MODIFYING_USER_PROPERTIES
//
// MessageText:
//
//  Modifying User Properties
//
#define L_MODIFYING_USER_PROPERTIES      0x40300195L

//
// MessageId: L_REMOVING_A_GROUP_ACCOUNT
//
// MessageText:
//
//  Removing a Group Account
//
#define L_REMOVING_A_GROUP_ACCOUNT       0x40300196L

//
// MessageId: L_REMOVING_A_USER_ACCOUNT
//
// MessageText:
//
//  Removing a User Account
//
#define L_REMOVING_A_USER_ACCOUNT        0x40300197L

//
// MessageId: L_SETTING_A_USER_PASSWORD
//
// MessageText:
//
//  Setting a User Password
//
#define L_SETTING_A_USER_PASSWORD        0x40300198L

//
// MessageId: L_USERS_AND_GROUPS
//
// MessageText:
//
//  Users and Groups
//
#define L_USERS_AND_GROUPS               0x40300199L

//
// MessageId: L_ENABLE_GUEST_ACCOUNT
//
// MessageText:
//
//  Enabling the Guest Account
//
#define L_ENABLE_GUEST_ACCOUNT           0x4030019AL

/////////////////////////////////////////////////////////////////////////////
// Misc strings
/////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_YES_TEXT
//
// MessageText:
//
//  Yes
//
#define L_YES_TEXT                       0x403003E8L

//
// MessageId: L_NO_TEXT
//
// MessageText:
//
//  No
//
#define L_NO_TEXT                        0x403003E9L

