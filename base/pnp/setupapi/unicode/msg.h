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
// MessageId: MSG_FIRST
//
// MessageText:
//
//  MSG_FIRST
//
#define MSG_FIRST                        0x0000EA60L

//
// MessageId: MSG_FILEERROR_DETAILS1
//
// MessageText:
//
//  %1 (error #%2!u!).
//  Source: %3
//  Destination: %4%0
//
#define MSG_FILEERROR_DETAILS1           0x0000EA61L

//
// MessageId: MSG_FILEERROR_RENAME
//
// MessageText:
//
//  An error occurred while renaming a file: "%1" (error #%2!u!).
//  
//  Current file name: %3
//  New file name: %4
//  
//  Click Retry to retry the operation or click Cancel to cancel.%0
//
#define MSG_FILEERROR_RENAME             0x0000EA66L

//
// MessageId: MSG_FILEERROR_DELETE
//
// MessageText:
//
//  An error occurred while deleting file %1.
//  
//  %2 (error #%3!u!).
//  
//  Click Retry to retry the operation or click Cancel to cancel.%0
//
#define MSG_FILEERROR_DELETE             0x0000EA67L

//
// MessageId: MSG_NO_NEED_TO_COPY
//
// MessageText:
//
//  The required files are already installed on your hard disk. Setup can use these existing files, or Setup can recopy them from your original Windows CD-ROM or from a network share.
//  
//  Would you like to skip file copying and use the existing files? (If you click No, you will be prompted to insert your Windows CD-ROM or to supply an alternate location where the needed files may be found.)%0
//
#define MSG_NO_NEED_TO_COPY              0x0000EA68L

//
// MessageId: MSG_SELECTDEVICE_ERROR
//
// MessageText:
//
//  You must select an item before continuing.
//
#define MSG_SELECTDEVICE_ERROR           0x0000EA69L

//
// MessageId: MSG_NO_DEVICEINFO_ERROR
//
// MessageText:
//
//  The specified location does not contain information about your hardware.
//
#define MSG_NO_DEVICEINFO_ERROR          0x0000EA6AL

//
// MessageId: MSG_CI_LOADFAIL_ERROR
//
// MessageText:
//
//  Windows could not load the installer for %1. Contact your hardware vendor for assistance.
//
#define MSG_CI_LOADFAIL_ERROR            0x0000EA6BL

//
// MessageId: MSG_NO_CLASSDRVLIST_ERROR
//
// MessageText:
//
//  Windows could not retrieve the list of devices.
//
#define MSG_NO_CLASSDRVLIST_ERROR        0x0000EA6CL

//
// MessageId: MSG_INF_FAILED
//
// MessageText:
//
//  Installation failed.
//
#define MSG_INF_FAILED                   0x0000EA6DL

//
// MessageId: MSG_CDPROMPT
//
// MessageText:
//
//  Please insert the Compact Disc labeled '%1' into your CD-ROM drive (%2!c!:) and then click OK.
//  
//  You can also click OK if you want files to be copied from an alternate location, such as a floppy disk or a network server.%0
//
#define MSG_CDPROMPT                     0x0000EA6EL

//
// MessageId: MSG_FLOPPYPROMPT
//
// MessageText:
//
//  Please insert the floppy disk labeled '%1' into drive %2!c!: and then click OK.
//  
//  You can also click OK if you want files to be copied from an alternate location, such as a network server or a compact disc.%0
//
#define MSG_FLOPPYPROMPT                 0x0000EA6FL

//
// MessageId: MSG_FILEERROR_BACKUP
//
// MessageText:
//
//  An error occurred while backing up file %1.
//  
//  %2 (error #%3!u!).
//  
//  Click Retry to retry the operation or click Cancel to cancel.%0
//
#define MSG_FILEERROR_BACKUP             0x0000EA70L

//
// MessageId: MSG_CDPROMPT_NONETWORK
//
// MessageText:
//
//  Please insert the Compact Disc labeled '%1' into your CD-ROM drive (%2!c!:) and then click OK.
//  
//  You can also click OK if you want files to be copied from an alternate location, such as a floppy disk.%0
//
#define MSG_CDPROMPT_NONETWORK           0x0000EA71L

//
// MessageId: MSG_FLOPPYPROMPT_NONETWORK
//
// MessageText:
//
//  Please insert the floppy disk labeled '%1' into drive %2!c!: and then click OK.
//  
//  You can also click OK if you want files to be copied from an alternate location, such as a compact disc.%0
//
#define MSG_FLOPPYPROMPT_NONETWORK       0x0000EA72L

//
// MessageId: MSG_LOGFILE_HEADER_NT
//
// MessageText:
//
//  [SetupAPI Log]
//  OS Version = %1!u!.%2!u!.%3!u! %4!s!
//  Platform ID = %5!u! (NT)
//  Service Pack = %6!u!.%7!u!
//  Suite = 0x%8!04x!
//  Product Type = %9!u!
//  Architecture = %10
//
#define MSG_LOGFILE_HEADER_NT            0x0000EA74L

//
// MessageId: MSG_LOGFILE_HEADER_OTHER
//
// MessageText:
//
//  [SetupAPI Log]
//  OS Version = %1!u!.%2!u!.%3!u! %4!s!
//  Platform ID = %5!u!
//
#define MSG_LOGFILE_HEADER_OTHER         0x0000EA75L

//
// MessageId: MSG_FILEERROR_COPY
//
// MessageText:
//
//  An error occurred while copying file %1.
//  
//  %2.
//  
//  Click Retry to retry the operation or click Cancel to cancel.%0
//
#define MSG_FILEERROR_COPY               0x0000EA76L

//
// message ID's from 61000 to 61999 are for logging
// they must be frozen after a product release
//
// MSG_LOG_FIRST is reserved
//


//
// MessageId: MSG_LOG_FIRST
//
// MessageText:
//
//  MSG_LOG_FIRST
//
#define MSG_LOG_FIRST                    0x0000EE48L

//
// MessageId: MSG_LOG_REMOVE_VETOED_IN_UNINSTALL
//
// MessageText:
//
//  Query-removal during uninstall of %1 was vetoed by %2 (veto type %3!u!: %4)
//
#define MSG_LOG_REMOVE_VETOED_IN_UNINSTALL 0x0000EE49L

//
// MessageId: MSG_LOG_REMOVE_VETOED_IN_MOVE
//
// MessageText:
//
//  Query-removal during move of %1 was vetoed by %2 (veto type %3!u!: %4)
//
#define MSG_LOG_REMOVE_VETOED_IN_MOVE    0x0000EE4AL

//
// MessageId: MSG_LOG_REMOVE_VETOED_IN_PROPCHANGE
//
// MessageText:
//
//  Query-removal during property change of %1 was vetoed by %2 (veto type %3!u!: %4)
//
#define MSG_LOG_REMOVE_VETOED_IN_PROPCHANGE 0x0000EE4BL

//
// MessageId: MSG_LOG_REMOVE_VETOED_IN_STOP
//
// MessageText:
//
//  Query-removal during stop of %1 was vetoed by %2 (veto type %3!u!: %4)
//
#define MSG_LOG_REMOVE_VETOED_IN_STOP    0x0000EE4CL

//
// MessageId: MSG_LOG_OPENED_PNF
//
// MessageText:
//
//  Opened the PNF file of "%1" (Language = %2!04x!).
//
#define MSG_LOG_OPENED_PNF               0x0000EE4DL

//
// MessageId: MSG_LOG_SETTING_SECURITY_ON_SUBKEY
//
// MessageText:
//
//  Setting security on key %1%2%3 to "%4"
//
#define MSG_LOG_SETTING_SECURITY_ON_SUBKEY 0x0000EE4EL

//
// MessageId: MSG_LOG_DELETING_REG_KEY
//
// MessageText:
//
//  Deleting registry key %1\%2%3
//
#define MSG_LOG_DELETING_REG_KEY         0x0000EE4FL

//
// MessageId: MSG_LOG_SETTING_REG_KEY
//
// MessageText:
//
//  Setting registry value %1\%2%3%4
//
#define MSG_LOG_SETTING_REG_KEY          0x0000EE50L

//
// MessageId: MSG_LOG_SETTING_VALUES_IN_KEY
//
// MessageText:
//
//  Setting values in registry key %1%2%3
//
#define MSG_LOG_SETTING_VALUES_IN_KEY    0x0000EE51L

//
// MessageId: MSG_LOG_SETTING_REG_VALUE
//
// MessageText:
//
//  Setting value %1 = %2
//
#define MSG_LOG_SETTING_REG_VALUE        0x0000EE52L

//
// MessageId: MSG_LOG_INSTALLING_SECTION_FROM
//
// MessageText:
//
//  Installing section [%1] from "%2".
//
#define MSG_LOG_INSTALLING_SECTION_FROM  0x0000EE53L

//
// MessageId: MSG_LOG_QUEUE_CALLBACK_FAILED
//
// MessageText:
//
//  The file queue callback routine faulted during commit with exception %1!08x!.
//
#define MSG_LOG_QUEUE_CALLBACK_FAILED    0x0000EE54L

//
// MessageId: MSG_LOG_DEVICE_ID
//
// MessageText:
//
//  Device ID: "%1"
//
#define MSG_LOG_DEVICE_ID                0x0000EE57L

//
// MessageId: MSG_LOG_INSTALLING_SECTION
//
// MessageText:
//
//  Preparing to install section [%1].
//
#define MSG_LOG_INSTALLING_SECTION       0x0000EE58L

//
// MessageId: MSG_LOG_ENUMERATING_FILES
//
// MessageText:
//
//  Enumerating files "%1".
//
#define MSG_LOG_ENUMERATING_FILES        0x0000EE59L

//
// MessageId: MSG_LOG_SEARCH_COMPATIBLE_IDS
//
// MessageText:
//
//  Searching for compatible ID(s): %1
//
#define MSG_LOG_SEARCH_COMPATIBLE_IDS    0x0000EE5AL

//
// MessageId: MSG_LOG_SEARCH_HARDWARE_IDS
//
// MessageText:
//
//  Searching for hardware ID(s): %1
//
#define MSG_LOG_SEARCH_HARDWARE_IDS      0x0000EE5BL

//
// MessageId: MSG_LOG_COULD_NOT_LOAD_INF
//
// MessageText:
//
//  Could not load INF "%1".
//
#define MSG_LOG_COULD_NOT_LOAD_INF       0x0000EE5CL

//
// MessageId: MSG_LOG_NO_MANUFACTURER_SECTION
//
// MessageText:
//
//  No [Manufacturer] section in INF "%1".
//
#define MSG_LOG_NO_MANUFACTURER_SECTION  0x0000EE5DL

//
// MessageId: MSG_LOG_FOUND_1
//
// MessageText:
//
//  Found "%1" in %2; Device: "%3"; Driver: "%4"; Provider: "%5"; Mfg: "%6"; Section name: "%7".
//
#define MSG_LOG_FOUND_1                  0x0000EE5EL

//
// MessageId: MSG_LOG_FOUND_2
//
// MessageText:
//
//  Actual install section: [%1]. Rank: 0x%2!08x!. Driver date: %3!02d!/%4!02d!/%5!04d!. Version: %6.
//
#define MSG_LOG_FOUND_2                  0x0000EE5FL

//
// MessageId: MSG_LOG_COPYING_FILE
//
// MessageText:
//
//  Copying file "%1" to "%2".
//
#define MSG_LOG_COPYING_FILE             0x0000EE60L

//
// MessageId: MSG_LOG_NEWER_FILE_OVERWRITTEN
//
// MessageText:
//
//  A newer file "%1" was overwritten by an older (signed) file. Version of source file: %2. Version of target file: %3. %0
//
#define MSG_LOG_NEWER_FILE_OVERWRITTEN   0x0000EE61L

//
// MessageId: MSG_LOG_FLAG_FORCE_NEWER_IGNORED
//
// MessageText:
//
//  The SP_COPY_FORCE_NEWER flag was ignored. %0
//
#define MSG_LOG_FLAG_FORCE_NEWER_IGNORED 0x0000EE62L

//
// MessageId: MSG_LOG_TARGET_WAS_SIGNED
//
// MessageText:
//
//  The existing target file was signed. %0
//
#define MSG_LOG_TARGET_WAS_SIGNED        0x0000EE63L

//
// MessageId: MSG_LOG_TARGET_WAS_NOT_SIGNED
//
// MessageText:
//
//  The existing target file was not signed. %0
//
#define MSG_LOG_TARGET_WAS_NOT_SIGNED    0x0000EE64L

//
// MessageId: MSG_LOG_FILE_NOT_OVERWRITTEN
//
// MessageText:
//
//  A target file was not overwritten. Version of source file: %1. Version of target file: %2. %0
//
#define MSG_LOG_FILE_NOT_OVERWRITTEN     0x0000EE65L

//
// MessageId: MSG_LOG_COMMAND_LINE_ANSI
//
// MessageText:
//
//  Command line appears to have been modified from: %1!hs!
//
#define MSG_LOG_COMMAND_LINE_ANSI        0x0000EE66L

//
// MessageId: MSG_LOG_BAD_COMMAND_LINE_ANSI
//
// MessageText:
//
//  Command line may have been: %1!hs!
//
#define MSG_LOG_BAD_COMMAND_LINE_ANSI    0x0000EE67L

//
// MessageId: MSG_LOG_HRESULT_ERROR
//
// MessageText:
//
//  Error 0x%1!08x!: %0
//
#define MSG_LOG_HRESULT_ERROR            0x0000EE68L

//
// MessageId: MSG_LOG_WIN32_ERROR
//
// MessageText:
//
//  Error %1!u!: %0
//
#define MSG_LOG_WIN32_ERROR              0x0000EE69L

//
// MessageId: MSG_LOG_UNKNOWN_ERROR
//
// MessageText:
//
//  Unknown Error.
//
#define MSG_LOG_UNKNOWN_ERROR            0x0000EE6AL

//
// MessageId: MSG_LOG_PROCESS_SERVICE_SECTION
//
// MessageText:
//
//  Processing service Add/Delete section [%1].
//
#define MSG_LOG_PROCESS_SERVICE_SECTION  0x0000EE6BL

//
// MessageId: MSG_LOG_NO_ERROR
//
// MessageText:
//
//  No Error.
//
#define MSG_LOG_NO_ERROR                 0x0000EE6CL

//
// MessageId: MSG_LOG_WOW64
//
// MessageText:
//
//  Running 32-bit app in WOW64
//
#define MSG_LOG_WOW64                    0x0000EE6DL

//
// MessageId: MSG_LOG_OPENED_INF
//
// MessageText:
//
//  Opened INF "%1", PNF not created (Language = %2!04x!).
//
#define MSG_LOG_OPENED_INF               0x0000EE6FL

//
// MessageId: MSG_LOG_SOURCE_WAS_SIGNED
//
// MessageText:
//
//  The source file was signed. %0
//
#define MSG_LOG_SOURCE_WAS_SIGNED        0x0000EE70L

//
// MessageId: MSG_LOG_SOURCE_WAS_NOT_SIGNED
//
// MessageText:
//
//  The source file was not signed. %0
//
#define MSG_LOG_SOURCE_WAS_NOT_SIGNED    0x0000EE71L

//
// MessageId: MSG_LOG_SAVED_PNF
//
// MessageText:
//
//  Opened INF "%1", PNF created (Language = %2!04x!).
//
#define MSG_LOG_SAVED_PNF                0x0000EE72L

//
// MessageId: MSG_LOG_NOTIFY_TARGETEXISTS
//
// MessageText:
//
//  The SPFILENOTIFY_TARGETEXISTS flag was set. %0
//
#define MSG_LOG_NOTIFY_TARGETEXISTS      0x0000EE73L

//
// MessageId: MSG_LOG_NOTIFY_LANGMISMATCH
//
// MessageText:
//
//  The SPFILENOTIFY_LANGMISMATCH flag was set. %0
//
#define MSG_LOG_NOTIFY_LANGMISMATCH      0x0000EE74L

//
// MessageId: MSG_LOG_NOTIFY_TARGETNEWER
//
// MessageText:
//
//  The SPFILENOTIFY_TARGETNEWER flag was set. %0
//
#define MSG_LOG_NOTIFY_TARGETNEWER       0x0000EE75L

//
// MessageId: MSG_LOG_COINSTALLER_REGISTRATION
//
// MessageText:
//
//  Processing Coinstaller registration section [%1].
//
#define MSG_LOG_COINSTALLER_REGISTRATION 0x0000EE76L

//
// MessageId: MSG_LOG_ADDREG_NOROOT
//
// MessageText:
//
//  Setting registry key/value: no root specified.
//
#define MSG_LOG_ADDREG_NOROOT            0x0000EE77L

//
// MessageId: MSG_LOG_REMOVED
//
// MessageText:
//
//  Device removed.
//
#define MSG_LOG_REMOVED                  0x0000EE78L

//
// MessageId: MSG_LOG_REMOVE_ERROR
//
// MessageText:
//
//  Device removal failed. %0
//
#define MSG_LOG_REMOVE_ERROR             0x0000EE79L

//
// MessageId: MSG_LOG_UNREMOVED
//
// MessageText:
//
//  Device un-removed.
//
#define MSG_LOG_UNREMOVED                0x0000EE7AL

//
// MessageId: MSG_LOG_UNREMOVE_ERROR
//
// MessageText:
//
//  Device un-removal failed. %0
//
#define MSG_LOG_UNREMOVE_ERROR           0x0000EE7BL

//
// MessageId: MSG_LOG_MOVED
//
// MessageText:
//
//  Device moved.
//
#define MSG_LOG_MOVED                    0x0000EE7CL

//
// MessageId: MSG_LOG_MOVE_ERROR
//
// MessageText:
//
//  Device move failed. %0
//
#define MSG_LOG_MOVE_ERROR               0x0000EE7DL

//
// MessageId: MSG_LOG_INSTALLEDINTERFACES
//
// MessageText:
//
//  Interfaces installed.
//
#define MSG_LOG_INSTALLEDINTERFACES      0x0000EE7EL

//
// MessageId: MSG_LOG_INSTALLINTERFACES_ERROR
//
// MessageText:
//
//  Installing Interfaces failed. %0
//
#define MSG_LOG_INSTALLINTERFACES_ERROR  0x0000EE7FL

//
// MessageId: MSG_LOG_REGISTEREDCOINSTALLERS
//
// MessageText:
//
//  Coinstallers registered.
//
#define MSG_LOG_REGISTEREDCOINSTALLERS   0x0000EE80L

//
// MessageId: MSG_LOG_REGISTERCOINSTALLERS_ERROR
//
// MessageText:
//
//  Registering coinstallers failed. %0
//
#define MSG_LOG_REGISTERCOINSTALLERS_ERROR 0x0000EE81L

//
// MessageId: MSG_LOG_SELECTEDBEST
//
// MessageText:
//
//  Selected best compatible driver.
//
#define MSG_LOG_SELECTEDBEST             0x0000EE82L

//
// MessageId: MSG_LOG_SELECTBEST_ERROR
//
// MessageText:
//
//  Selecting best compatible driver failed. %0
//
#define MSG_LOG_SELECTBEST_ERROR         0x0000EE83L

//
// MessageId: MSG_LOG_SETSELECTED
//
// MessageText:
//
//  Set selected driver.
//
#define MSG_LOG_SETSELECTED              0x0000EE84L

//
// MessageId: MSG_LOG_SETSELECTED_ERROR
//
// MessageText:
//
//  Setting selected driver failed. %0
//
#define MSG_LOG_SETSELECTED_ERROR        0x0000EE85L

//
// MessageId: MSG_LOG_SETSELECTED_GUID
//
// MessageText:
//
//  Class GUID of device changed to: %1.
//
#define MSG_LOG_SETSELECTED_GUID         0x0000EE86L

//
// MessageId: MSG_LOG_SETSELECTED_SECTION
//
// MessageText:
//
//  Selected driver installs from section [%1] in "%2".
//
#define MSG_LOG_SETSELECTED_SECTION      0x0000EE87L

//
// MessageId: MSG_LOG_INSTALLSECT_ERROR
//
// MessageText:
//
//  Parsing install section [%1] in "%2" failed. %0
//
#define MSG_LOG_INSTALLSECT_ERROR        0x0000EE88L

//
// MessageId: MSG_LOG_SECT_ERROR
//
// MessageText:
//
//  Parsing %3 section [%1] in "%2" failed. %0
//
#define MSG_LOG_SECT_ERROR               0x0000EE89L

//
// MessageId: MSG_LOG_COPYSECT_ERROR
//
// MessageText:
//
//  Immediate copy "%1" failed. %0
//
#define MSG_LOG_COPYSECT_ERROR           0x0000EE8AL

//
// MessageId: MSG_LOG_NOSECTION
//
// MessageText:
//
//  Could not locate section [%1].
//
#define MSG_LOG_NOSECTION                0x0000EE8BL

//
// MessageId: MSG_LOG_NOSECTION_MIN
//
// MessageText:
//
//  Locating a non-empty section [%1] in "%2" failed. %0
//
#define MSG_LOG_NOSECTION_MIN            0x0000EE8CL

//
// MessageId: MSG_LOG_COPY_QUEUE_ERROR
//
// MessageText:
//
//  Failed to queue copy from section [%1] in "%2": "%4" to "%3". %0
//
#define MSG_LOG_COPY_QUEUE_ERROR         0x0000EE8DL

//
// MessageId: MSG_LOG_COPY_TARGET
//
// MessageText:
//
//  Failed to read next target filename out of section [%1].
//
#define MSG_LOG_COPY_TARGET              0x0000EE8EL

//
// MessageId: MSG_LOG_COULD_NOT_LOAD_HIT_INF
//
// MessageText:
//
//  Cache Hit: INF "%1" could not be loaded.
//
#define MSG_LOG_COULD_NOT_LOAD_HIT_INF   0x0000EE8FL

//
// MessageId: MSG_LOG_COULD_NOT_LOAD_NEW_INF
//
// MessageText:
//
//  Enumerating files: Out of date INF "%1" could not be loaded.
//
#define MSG_LOG_COULD_NOT_LOAD_NEW_INF   0x0000EE90L

//
// MessageId: MSG_LOG_EXCLUDE_WIN4_INF
//
// MessageText:
//
//  Cache: Excluding INF "%1".
//
#define MSG_LOG_EXCLUDE_WIN4_INF         0x0000EE91L

//
// MessageId: MSG_LOG_EXCLUDE_OLDNT_INF
//
// MessageText:
//
//  Cache: Excluding OLDNT INF "%1".
//
#define MSG_LOG_EXCLUDE_OLDNT_INF        0x0000EE92L

//
// MessageId: MSG_LOG_END_CACHE_1
//
// MessageText:
//
//  Enumerating files: Directory pass completed.
//
#define MSG_LOG_END_CACHE_1              0x0000EE93L

//
// MessageId: MSG_LOG_END_CACHE_2
//
// MessageText:
//
//  Enumerating files: Cache pass completed.
//
#define MSG_LOG_END_CACHE_2              0x0000EE94L

//
// MessageId: MSG_LOG_NOSECTION_SPACE
//
// MessageText:
//
//  Could not locate a non-empty section [%1] when calculating disk space in "%2". %0
//
#define MSG_LOG_NOSECTION_SPACE          0x0000EE95L

//
// MessageId: MSG_LOG_NOSECTION_COPY
//
// MessageText:
//
//  Could not locate a non-empty copy section [%1] in "%2". %0
//
#define MSG_LOG_NOSECTION_COPY           0x0000EE96L

//
// MessageId: MSG_LOG_NOSECTION_DELETE
//
// MessageText:
//
//  Could not locate a non-empty delete section [%1] in "%2". %0
//
#define MSG_LOG_NOSECTION_DELETE         0x0000EE97L

//
// MessageId: MSG_LOG_NOSECTION_RENAME
//
// MessageText:
//
//  Could not locate a non-empty rename section [%1] in "%2". %0
//
#define MSG_LOG_NOSECTION_RENAME         0x0000EE98L

//
// MessageId: MSG_LOG_NOSECTION_FILESIZE
//
// MessageText:
//
//  Could not locate a non-empty section [%1] while trying to determine file size in "%2". %0
//
#define MSG_LOG_NOSECTION_FILESIZE       0x0000EE99L

//
// MessageId: MSG_LOG_NOSECTION_SERVICE
//
// MessageText:
//
//  Could not locate a non-empty service section [%1] in "%2". %0
//
#define MSG_LOG_NOSECTION_SERVICE        0x0000EE9AL

//
// MessageId: MSG_LOG_COPYINF_ERROR
//
// MessageText:
//
//  Copying related INF "%1" via 'CopyINF' entry failed. %0
//
#define MSG_LOG_COPYINF_ERROR            0x0000EE9BL

//
// MessageId: MSG_LOG_COPYINF_OK
//
// MessageText:
//
//  Copied related INF "%1" via 'CopyINF' entry.
//
#define MSG_LOG_COPYINF_OK               0x0000EE9CL

//
// MessageId: MSG_LOG_SKIP_DELREG_KEY
//
// MessageText:
//
//  Skipping registry value "%1\%2%3%4" with flag 0x%5!08x!.
//
#define MSG_LOG_SKIP_DELREG_KEY          0x0000EE9DL

//
// MessageId: MSG_LOG_DELETING_REG_VALUE
//
// MessageText:
//
//  Deleting registry value "%1\%2%3%4"
//
#define MSG_LOG_DELETING_REG_VALUE       0x0000EE9EL

//
// MessageId: MSG_LOG_RANK_UNTRUSTED
//
// MessageText:
//
//  Driver node not trusted, rank changed from 0x%1!08x! to 0x%2!08x!.
//
#define MSG_LOG_RANK_UNTRUSTED           0x0000EE9FL

//
// MessageId: MSG_LOG_DEC_MODELS_SEC_TOO_LONG
//
// MessageText:
//
//  Decorated models section name "%1.%2" exceeds maximum length of %3!u!.
//
#define MSG_LOG_DEC_MODELS_SEC_TOO_LONG  0x0000EEA0L

//
// MessageId: MSG_LOG_OLE_CONTROL_LOADLIBRARY_FAILED
//
// MessageText:
//
//  Failed to load the OLE Control "%1". %0
//
#define MSG_LOG_OLE_CONTROL_LOADLIBRARY_FAILED 0x0000EEA1L

//
// MessageId: MSG_LOG_OLE_CONTROL_CREATEPROCESS_FAILED
//
// MessageText:
//
//  Failed to create a process for the OLE Server "%1" with arguments "%2". %0
//
#define MSG_LOG_OLE_CONTROL_CREATEPROCESS_FAILED 0x0000EEA2L

//
// MessageId: MSG_LOG_STARTREGISTRATION_SKIP
//
// MessageText:
//
//  SPFILENOTIFY_STARTREGISTRATION: returned FILEOP_SKIP.
//
#define MSG_LOG_STARTREGISTRATION_SKIP   0x0000EEA3L

//
// MessageId: MSG_LOG_STARTREGISTRATION_ABORT
//
// MessageText:
//
//  SPFILENOTIFY_STARTREGISTRATION: returned FILEOP_ABORT. %0
//
#define MSG_LOG_STARTREGISTRATION_ABORT  0x0000EEA4L

//
// MessageId: MSG_LOG_ENDREGISTRATION_ABORT
//
// MessageText:
//
//  SPFILENOTIFY_ENDREGISTRATION: returned FILEOP_ABORT. %0
//
#define MSG_LOG_ENDREGISTRATION_ABORT    0x0000EEA5L

//
// MessageId: MSG_LOG_COPY_QUEUE
//
// MessageText:
//
//  Queued copy from section [%1] in "%2": "%4" to "%3" with flags 0x%5!08x!, target directory is "%6".
//
#define MSG_LOG_COPY_QUEUE               0x0000EEA6L

//
// MessageId: MSG_LOG_COPY_QUEUE_SOURCE
//
// MessageText:
//
//  Source in section [%1] in "%2"; Media=%3!u! Description="%4" Tag="%5" Path="%6".
//
#define MSG_LOG_COPY_QUEUE_SOURCE        0x0000EEA7L

//
// MessageId: MSG_LOG_COPY_QUEUE_DRIVERCACHE
//
// MessageText:
//
//  Source in section [%1] in "%2"; Media=%3!u! Description="%4" Tag="%5" Path="%6". Driver cache will be used.
//
#define MSG_LOG_COPY_QUEUE_DRIVERCACHE   0x0000EEA8L

//
// MessageId: MSG_LOG_COPY_QUEUE_DEFAULT
//
// MessageText:
//
//  Source not found, using default media location.
//
#define MSG_LOG_COPY_QUEUE_DEFAULT       0x0000EEA9L

//
// MessageId: MSG_LOG_FILE_BLOCK
//
// MessageText:
//
//  Writing of "%1" to "%2" is blocked.
//
#define MSG_LOG_FILE_BLOCK               0x0000EEAAL

//
// MessageId: MSG_LOG_FILE_WARN
//
// MessageText:
//
//  Writing of "%1" to "%2" can cause problems.
//
#define MSG_LOG_FILE_WARN                0x0000EEABL

//
// MessageId: MSG_LOG_REMOVE_VETOED_IN_INSTALL
//
// MessageText:
//
//  Query-removal during install of "%1" was vetoed by "%2" (veto type %3!u!: %4).
//
#define MSG_LOG_REMOVE_VETOED_IN_INSTALL 0x0000EEACL

//
// MessageId: MSG_LOG_REBOOT_REASON_INUSE
//
// MessageText:
//
//  Device "%3" required reboot: one or more files were in use, or treated as in use.
//
#define MSG_LOG_REBOOT_REASON_INUSE      0x0000EEADL

//
// MessageId: MSG_LOG_REBOOT_REASON_KEY
//
// MessageText:
//
//  Device "%3" required reboot: "%1" in section: [%2].
//
#define MSG_LOG_REBOOT_REASON_KEY        0x0000EEAEL

//
// MessageId: MSG_LOG_REBOOT_REASON_QR_VETOED
//
// MessageText:
//
//  Device "%3" required reboot: Query remove failed (install) CfgMgr32 returned: 0x%1!02x!: %2.
//
#define MSG_LOG_REBOOT_REASON_QR_VETOED  0x0000EEB0L

//
// MessageId: MSG_LOG_REBOOT_REASON_QR_VETOED_UNINSTALL
//
// MessageText:
//
//  Device "%3" required reboot: Query remove failed (uninstall) CfgMgr32 returned: 0x%1!02x!: %2.
//
#define MSG_LOG_REBOOT_REASON_QR_VETOED_UNINSTALL 0x0000EEB1L

//
// MessageId: MSG_LOG_REBOOT_REASON_ENABLE_FAILED
//
// MessageText:
//
//  Device "%3" required reboot: Could not enable device.
//
#define MSG_LOG_REBOOT_REASON_ENABLE_FAILED 0x0000EEB2L

//
// MessageId: MSG_LOG_REBOOT_REASON_HW_PROF_ENABLE_FAILED
//
// MessageText:
//
//  Device "%3" required reboot: Could not enable hardware profile.
//
#define MSG_LOG_REBOOT_REASON_HW_PROF_ENABLE_FAILED 0x0000EEB3L

//
// MessageId: MSG_LOG_REBOOT_REASON_DISABLE_FAILED
//
// MessageText:
//
//  Device "%3" required reboot: Could not disable device.
//
#define MSG_LOG_REBOOT_REASON_DISABLE_FAILED 0x0000EEB4L

//
// MessageId: MSG_LOG_REBOOT_REASON_HW_PROF_DISABLE_FAILED
//
// MessageText:
//
//  Device "%3" required reboot: Could not disable hardware profile.
//
#define MSG_LOG_REBOOT_REASON_HW_PROF_DISABLE_FAILED 0x0000EEB5L

//
// MessageId: MSG_LOG_REBOOT_VETOED_IN_PROPCHANGE
//
// MessageText:
//
//  Device "%3" required reboot: Query remove vetoed (property change).
//
#define MSG_LOG_REBOOT_VETOED_IN_PROPCHANGE 0x0000EEB6L

//
// MessageId: MSG_LOG_REBOOT_REASON_CLEAR_CSCONFIGFLAG_DO_NOT_START
//
// MessageText:
//
//  Device "%3" required reboot: Unexpected while clearing CSCONFIGFLAG_DO_NOT_START.
//
#define MSG_LOG_REBOOT_REASON_CLEAR_CSCONFIGFLAG_DO_NOT_START 0x0000EEB7L

//
// MessageId: MSG_LOG_REBOOT_REASON_SET_CSCONFIGFLAG_DO_NOT_START
//
// MessageText:
//
//  Device "%3" required reboot: Unexpected while setting CSCONFIGFLAG_DO_NOT_START.
//
#define MSG_LOG_REBOOT_REASON_SET_CSCONFIGFLAG_DO_NOT_START 0x0000EEB8L

//
// MessageId: MSG_LOG_REBOOT_QR_VETOED_IN_STOP
//
// MessageText:
//
//  Device "%3" required reboot: Query remove vetoed (Stop) CfgMgr32 returned: 0x%1!02x!: %2.
//
#define MSG_LOG_REBOOT_QR_VETOED_IN_STOP 0x0000EEB9L

//
// MessageId: MSG_LOG_REBOOT_REASON_DEVHASPROBLEM
//
// MessageText:
//
//  Device "%3" required reboot: Device has problem: 0x%1!02x!: %2.
//
#define MSG_LOG_REBOOT_REASON_DEVHASPROBLEM 0x0000EEBAL

//
// MessageId: MSG_LOG_REBOOT_DEVRES
//
// MessageText:
//
//  Device "%3" required reboot: Resources manually modified.
//
#define MSG_LOG_REBOOT_DEVRES            0x0000EEBDL

//
// MessageId: MSG_LOG_REBOOT_REASON_CREATE_FAILED
//
// MessageText:
//
//  Device "%3" required reboot: Could not create device node.
//
#define MSG_LOG_REBOOT_REASON_CREATE_FAILED 0x0000EEBEL

//
// MessageId: MSG_LOG_MOVE_FAILED_CANT_REMOVE
//
// MessageText:
//
//  Device could not be moved because dynamic removal was unsuccessful.
//
#define MSG_LOG_MOVE_FAILED_CANT_REMOVE  0x0000EEC0L

//
// MessageId: MSG_LOG_INSTALLED
//
// MessageText:
//
//  Device install of "%1" finished successfully.
//
#define MSG_LOG_INSTALLED                0x0000EEC1L

//
// MessageId: MSG_LOG_INSTALL_ERROR_ENCOUNTERED
//
// MessageText:
//
//  Device install failed. %0
//
#define MSG_LOG_INSTALL_ERROR_ENCOUNTERED 0x0000EEC2L

//
// MessageId: MSG_LOG_DO_FULL_INSTALL
//
// MessageText:
//
//  Doing full install of "%1".
//
#define MSG_LOG_DO_FULL_INSTALL          0x0000EEC3L

//
// MessageId: MSG_LOG_DO_COPY_INSTALL
//
// MessageText:
//
//  Doing copy-only install of "%1".
//
#define MSG_LOG_DO_COPY_INSTALL          0x0000EEC4L

//
// MessageId: MSG_LOG_INSTALL_NULL
//
// MessageText:
//
//  Installing NULL driver for "%1".
//
#define MSG_LOG_INSTALL_NULL             0x0000EEC5L

//
// MessageId: MSG_LOG_OLE_CONTROL_API_EXCEPTION
//
// MessageText:
//
//  Calling "%2" in OLE Control "%1" caused an exception.
//
#define MSG_LOG_OLE_CONTROL_API_EXCEPTION 0x0000EEC6L

//
// MessageId: MSG_LOG_OLE_CONTROL_API_FAILED
//
// MessageText:
//
//  Calling "%2" in OLE Control "%1" failed. %0
//
#define MSG_LOG_OLE_CONTROL_API_FAILED   0x0000EEC7L

//
// MessageId: MSG_LOG_CANT_OLE_CONTROL_DIRID
//
// MessageText:
//
//  Cannot find the OLE Control "%1", the directory identifier "%2" is invalid.
//
#define MSG_LOG_CANT_OLE_CONTROL_DIRID   0x0000EEC8L

//
// MessageId: MSG_LOG_OLE_CONTROL_INTERNAL_EXCEPTION
//
// MessageText:
//
//  Processing OLE Control "%1" caused an internal error (exception).
//
#define MSG_LOG_OLE_CONTROL_INTERNAL_EXCEPTION 0x0000EEC9L

//
// MessageId: MSG_LOG_OLE_CONTROL_NOT_REGISTERED_GETPROC_FAILED
//
// MessageText:
//
//  Exported function "%2" in OLE Control "%1" not found.
//
#define MSG_LOG_OLE_CONTROL_NOT_REGISTERED_GETPROC_FAILED 0x0000EECAL

//
// MessageId: MSG_LOG_OLE_CONTROL_LOADLIBRARY_EXCEPTION
//
// MessageText:
//
//  An exception occurred while loading the OLE Control "%1".
//
#define MSG_LOG_OLE_CONTROL_LOADLIBRARY_EXCEPTION 0x0000EECBL

//
// MessageId: MSG_LOG_VERIFYFILE_AGAINST_FULLCATPATH_OK
//
// MessageText:
//
//  File "%1" (key "%3") is signed in catalog "%2".
//
#define MSG_LOG_VERIFYFILE_AGAINST_FULLCATPATH_OK 0x0000EECCL

//
// MessageId: MSG_LOG_PROFILE_LINE_ERROR
//
// MessageText:
//
//  Section [%1] in "%2" is invalid. A profile item may not have been processed correctly.
//
#define MSG_LOG_PROFILE_LINE_ERROR       0x0000EECDL

//
// MessageId: MSG_LOG_PROFILE_BAD_CMDLINE
//
// MessageText:
//
//  Section [%1] in "%2" has a bad command line in a ProfileItems Section. A Profile Item may not have been processed correctly.
//
#define MSG_LOG_PROFILE_BAD_CMDLINE      0x0000EECEL

//
// MessageId: MSG_LOG_PROFILE_BAD_NAME
//
// MessageText:
//
//  Section [%1] in "%2" has a bad link name in a ProfileItems Section. A Profile Item may not have been processed correctly.
//
#define MSG_LOG_PROFILE_BAD_NAME         0x0000EECFL

//
// MessageId: MSG_LOG_PROFILE_OPERATION_ERROR
//
// MessageText:
//
//  A Profile Item operation failed in section [%1] of "%2". %0
//
#define MSG_LOG_PROFILE_OPERATION_ERROR  0x0000EED0L

//
// MessageId: MSG_LOG_RUNONCE_TIMEOUT
//
// MessageText:
//
//  'RUNONCE' appears to be taking a long time, Windows will not wait for it.
//
#define MSG_LOG_RUNONCE_TIMEOUT          0x0000EED1L

//
// MessageId: MSG_LOG_RUNONCE_CALL
//
// MessageText:
//
//  Executing 'RUNONCE' to process %1!u! 'RUNONCE' entries.
//
#define MSG_LOG_RUNONCE_CALL             0x0000EED2L

//
// MessageId: MSG_LOG_DO_INTERFACE_CLASS_INSTALL
//
// MessageText:
//
//  Installing device interface class: %1.
//
#define MSG_LOG_DO_INTERFACE_CLASS_INSTALL 0x0000EED3L

//
// MessageId: MSG_LOG_DO_CLASS_INSTALL
//
// MessageText:
//
//  Installing device class: "%2" %1.
//
#define MSG_LOG_DO_CLASS_INSTALL         0x0000EED4L

//
// MessageId: MSG_LOG_CLASS_INSTALLED
//
// MessageText:
//
//  Class install completed with no errors.
//
#define MSG_LOG_CLASS_INSTALLED          0x0000EED5L

//
// MessageId: MSG_LOG_CLASS_ERROR_ENCOUNTERED
//
// MessageText:
//
//  Class: %1. Install failed. %0
//
#define MSG_LOG_CLASS_ERROR_ENCOUNTERED  0x0000EED6L

//
// MessageId: MSG_LOG_CLASS_SECTION
//
// MessageText:
//
//  Installing class from section: [%1].
//
#define MSG_LOG_CLASS_SECTION            0x0000EED7L

//
// MessageId: MSG_LOG_MOD_LOADFAIL_ERROR
//
// MessageText:
//
//  Loading module "%1" failed. %0
//
#define MSG_LOG_MOD_LOADFAIL_ERROR       0x0000EED8L

//
// MessageId: MSG_LOG_MOD_PROCFAIL_ERROR
//
// MessageText:
//
//  Obtaining exported function "%2" for module "%1" failed. %0
//
#define MSG_LOG_MOD_PROCFAIL_ERROR       0x0000EED9L

//
// MessageId: MSG_LOG_MOD_LIST_PROC
//
// MessageText:
//
//  Using exported function "%2" in module "%1".
//
#define MSG_LOG_MOD_LIST_PROC            0x0000EEDAL

//
// MessageId: MSG_LOG_CI_MODULE
//
// MessageText:
//
//  Loading class installer module for "%1".
//
#define MSG_LOG_CI_MODULE                0x0000EEDBL

//
// MessageId: MSG_LOG_COINST_MODULE
//
// MessageText:
//
//  Loading coinstaller modules for "%1".
//
#define MSG_LOG_COINST_MODULE            0x0000EEDCL

//
// MessageId: MSG_LOG_COINST_START
//
// MessageText:
//
//  Executing coinstaller %1!u! of %2!u!.
//
#define MSG_LOG_COINST_START             0x0000EEDDL

//
// MessageId: MSG_LOG_COINST_END
//
// MessageText:
//
//  Completed coinstaller %1!u! of %2!u!.
//
#define MSG_LOG_COINST_END               0x0000EEDEL

//
// MessageId: MSG_LOG_COINST_END_ERROR
//
// MessageText:
//
//  Coinstaller %1!u! of %2!u! failed. %0
//
#define MSG_LOG_COINST_END_ERROR         0x0000EEDFL

//
// MessageId: MSG_LOG_CI_START
//
// MessageText:
//
//  Executing class installer.
//
#define MSG_LOG_CI_START                 0x0000EEE0L

//
// MessageId: MSG_LOG_CI_END
//
// MessageText:
//
//  Completed class installer.
//
#define MSG_LOG_CI_END                   0x0000EEE1L

//
// MessageId: MSG_LOG_CI_END_ERROR
//
// MessageText:
//
//  Class installer failed. %0
//
#define MSG_LOG_CI_END_ERROR             0x0000EEE2L

//
// MessageId: MSG_LOG_CI_DEF_START
//
// MessageText:
//
//  Executing default installer.
//
#define MSG_LOG_CI_DEF_START             0x0000EEE3L

//
// MessageId: MSG_LOG_CI_DEF_END
//
// MessageText:
//
//  Completed default installer.
//
#define MSG_LOG_CI_DEF_END               0x0000EEE4L

//
// MessageId: MSG_LOG_CI_DEF_END_ERROR
//
// MessageText:
//
//  Default installer failed. %0
//
#define MSG_LOG_CI_DEF_END_ERROR         0x0000EEE5L

//
// MessageId: MSG_LOG_COINST_POST_START
//
// MessageText:
//
//  Executing coinstaller %1!u! (Post Processing).
//
#define MSG_LOG_COINST_POST_START        0x0000EEE6L

//
// MessageId: MSG_LOG_COINST_POST_END
//
// MessageText:
//
//  Completed coinstaller %1!u! (Post Processing).
//
#define MSG_LOG_COINST_POST_END          0x0000EEE7L

//
// MessageId: MSG_LOG_COINST_POST_END_ERROR
//
// MessageText:
//
//  Coinstaller %1!u! (Post Processing) failed. %0
//
#define MSG_LOG_COINST_POST_END_ERROR    0x0000EEE8L

//
// MessageId: MSG_LOG_CCI_ERROR
//
// MessageText:
//
//  Processing of call to class installer failed. %0
//
#define MSG_LOG_CCI_ERROR                0x0000EEE9L

//
// MessageId: MSG_LOG_DI_UNUSED_FUNC
//
// MessageText:
//
//  Undefined device installation function: 0x%1!08x!.
//
#define MSG_LOG_DI_UNUSED_FUNC           0x0000EEEAL

//
// MessageId: MSG_LOG_NOTSTARTED_REASON_DEVHASPROBLEM
//
// MessageText:
//
//  Device not started: Device has problem: 0x%1!02x!: %2.
//
#define MSG_LOG_NOTSTARTED_REASON_DEVHASPROBLEM 0x0000EEEBL

//
// MessageId: MSG_LOG_REBOOT_REASON_PRIVATEPROBLEM
//
// MessageText:
//
//  Device "%3" required reboot: Marked as having private problem.
//
#define MSG_LOG_REBOOT_REASON_PRIVATEPROBLEM 0x0000EEECL

//
// MessageId: MSG_LOG_REBOOT_REASON_NOTSTARTED
//
// MessageText:
//
//  Device "%3" required reboot: Device not started (unknown reason).
//
#define MSG_LOG_REBOOT_REASON_NOTSTARTED 0x0000EEEDL

//
// MessageId: MSG_LOG_DI_FUNC
//
// MessageText:
//
//  Device install function: %1.
//
#define MSG_LOG_DI_FUNC                  0x0000EEEEL

//
// MessageId: MSG_LOG_NEEDMEDIA
//
// MessageText:
//
//  SPFILENOTIFY_NEEDMEDIA: Tag = "%1", Description= "%2", SourcePath = "%3", SourceFile = "%4", Flags = 0x%5!08x!.
//
#define MSG_LOG_NEEDMEDIA                0x0000EEEFL

//
// MessageId: MSG_LOG_NEEDMEDIA_AUTOSKIP
//
// MessageText:
//
//  SPFILENOTIFY_NEEDMEDIA: skipped callback.
//
#define MSG_LOG_NEEDMEDIA_AUTOSKIP       0x0000EEF0L

//
// MessageId: MSG_LOG_NEEDMEDIA_ABORT
//
// MessageText:
//
//  SPFILENOTIFY_NEEDMEDIA: returned FILEOP_ABORT. %0
//
#define MSG_LOG_NEEDMEDIA_ABORT          0x0000EEF1L

//
// MessageId: MSG_LOG_NEEDMEDIA_SKIP
//
// MessageText:
//
//  SPFILENOTIFY_NEEDMEDIA: returned FILEOP_SKIP.
//
#define MSG_LOG_NEEDMEDIA_SKIP           0x0000EEF2L

//
// MessageId: MSG_LOG_NEEDMEDIA_NEWPATH
//
// MessageText:
//
//  SPFILENOTIFY_NEEDMEDIA: returned FILEOP_NEWPATH with path "%1".
//
#define MSG_LOG_NEEDMEDIA_NEWPATH        0x0000EEF3L

//
// MessageId: MSG_LOG_NEEDMEDIA_BADRESULT
//
// MessageText:
//
//  SPFILENOTIFY_NEEDMEDIA: returned %1!u! (is or is treated as FILEOP_DOIT).
//
#define MSG_LOG_NEEDMEDIA_BADRESULT      0x0000EEF4L

//
// MessageId: MSG_LOG_STARTCOPY_ABORT
//
// MessageText:
//
//  SPFILENOTIFY_STARTCOPY: returned FILEOP_ABORT. %0
//
#define MSG_LOG_STARTCOPY_ABORT          0x0000EEF5L

//
// MessageId: MSG_LOG_STARTCOPY_SKIP
//
// MessageText:
//
//  SPFILENOTIFY_STARTCOPY: returned %1!u! (is or is treated as FILEOP_SKIP).
//
#define MSG_LOG_STARTCOPY_SKIP           0x0000EEF6L

//
// MessageId: MSG_LOG_COPYERROR
//
// MessageText:
//
//  SPFILENOTIFY_COPYERROR: Source = "%1", Target = "%2", Flags = 0x%3!08x!, Error = 0x%4!08x!.
//
#define MSG_LOG_COPYERROR                0x0000EEF7L

//
// MessageId: MSG_LOG_COPYERROR_ABORT
//
// MessageText:
//
//  SPFILENOTIFY_COPYERROR: returned FILEOP_ABORT. %0
//
#define MSG_LOG_COPYERROR_ABORT          0x0000EEF8L

//
// MessageId: MSG_LOG_COPYERROR_SKIP
//
// MessageText:
//
//  SPFILENOTIFY_COPYERROR: returned FILEOP_SKIP.
//
#define MSG_LOG_COPYERROR_SKIP           0x0000EEF9L

//
// MessageId: MSG_LOG_COPYERROR_NEWPATH
//
// MessageText:
//
//  SPFILENOTIFY_COPYERROR: returned %1!u! (is or is treated as FILEOP_NEWPATH), ReturnBuffer="%2".
//
#define MSG_LOG_COPYERROR_NEWPATH        0x0000EEFAL

//
// MessageId: MSG_LOG_COPYERROR_RETRY
//
// MessageText:
//
//  SPFILENOTIFY_COPYERROR: returned %1!u! (is, or is treated as FILEOP_RETRY with ReturnBuffer="").
//
#define MSG_LOG_COPYERROR_RETRY          0x0000EEFBL

//
// MessageId: MSG_LOG_VERIFYFILE_ERROR
//
// MessageText:
//
//  Verifying file "%1" (key "%3") against catalog "%2" failed. %0
//
#define MSG_LOG_VERIFYFILE_ERROR         0x0000EEFCL

//
// MessageId: MSG_LOG_BEGIN_VERIFY2_CAT_TIME
//
// MessageText:
//
//  Install Files: Verifying catalogs/INFs.
//
#define MSG_LOG_BEGIN_VERIFY2_CAT_TIME   0x0000EEFDL

//
// MessageId: MSG_LOG_END_VERIFY2_CAT_TIME
//
// MessageText:
//
//  Install Files: Verifying catalogs/INFs completed.
//
#define MSG_LOG_END_VERIFY2_CAT_TIME     0x0000EEFEL

//
// MessageId: MSG_LOG_BEGIN_VERIFY3_CAT_TIME
//
// MessageText:
//
//  Install Files (nothing in queue): Verifying catalogs/INFs.
//
#define MSG_LOG_BEGIN_VERIFY3_CAT_TIME   0x0000EEFFL

//
// MessageId: MSG_LOG_END_VERIFY3_CAT_TIME
//
// MessageText:
//
//  Install Files (nothing in queue): Verifying catalogs/INFs completed.
//
#define MSG_LOG_END_VERIFY3_CAT_TIME     0x0000EF00L

//
// MessageId: MSG_LOG_BEGIN_VERIFY4_CAT_TIME
//
// MessageText:
//
//  Pruning Files: Verifying catalogs/INFs.
//
#define MSG_LOG_BEGIN_VERIFY4_CAT_TIME   0x0000EF01L

//
// MessageId: MSG_LOG_END_VERIFY4_CAT_TIME
//
// MessageText:
//
//  Pruning Files: Verifying catalogs/INFs completed.
//
#define MSG_LOG_END_VERIFY4_CAT_TIME     0x0000EF02L

//
// MessageId: MSG_LOG_UNWIND
//
// MessageText:
//
//  Install failed, attempting to restore original files.
//
#define MSG_LOG_UNWIND                   0x0000EF03L

//
// MessageId: MSG_LOG_UNWIND_FILE
//
// MessageText:
//
//  Restoring File: "%2" from "%1".
//
#define MSG_LOG_UNWIND_FILE              0x0000EF04L

//
// MessageId: MSG_LOG_UNWIND_TRY1_FAILED
//
// MessageText:
//
//  Restore attempt failed (will delay restore). %0
//
#define MSG_LOG_UNWIND_TRY1_FAILED       0x0000EF05L

//
// MessageId: MSG_LOG_COPY_DELAYED
//
// MessageText:
//
//  File "%2" marked to be moved to "%1" on next reboot.
//
#define MSG_LOG_COPY_DELAYED             0x0000EF06L

//
// MessageId: MSG_LOG_PRUNE
//
// MessageText:
//
//  File "%1" pruned from copy.
//
#define MSG_LOG_PRUNE                    0x0000EF07L

//
// MessageId: MSG_LOG_NOT_FOR_THIS_OS
//
// MessageText:
//
//  Driver installation via SetupAPI is not supported for this OS.
//
#define MSG_LOG_NOT_FOR_THIS_OS          0x0000EF08L

//
// MessageId: MSG_LOG_COPY_IDENTICAL
//
// MessageText:
//
//  File "%2" is identical to existing "%1", delayed copy skipped.
//
#define MSG_LOG_COPY_IDENTICAL           0x0000EF09L

//
// MessageId: MSG_LOG_DELETING_REG_KEY_FLAGS
//
// MessageText:
//
//  Deleting registry value "%1\%2%3%4" with flag 0x%5!08x!.
//
#define MSG_LOG_DELETING_REG_KEY_FLAGS   0x0000EF0AL

//
// MessageId: MSG_LOG_DELETING_REG_KEY_DELSTRING
//
// MessageText:
//
//  Deleting string "%5" from multi-sz registry value "%1\%2%3%4".
//
#define MSG_LOG_DELETING_REG_KEY_DELSTRING 0x0000EF0BL

//
// MessageId: MSG_LOG_DELREG_PARAMS
//
// MessageText:
//
//  Delete registry key: both root and sub-key are required.
//
#define MSG_LOG_DELREG_PARAMS            0x0000EF0CL

//
// MessageId: MSG_LOG_INF_WARN
//
// MessageText:
//
//  Writing "%1" to "%2" is not an approved method of installing INF files. Use a 'CopyINF' entry instead.
//
#define MSG_LOG_INF_WARN                 0x0000EF0DL

//
// MessageId: MSG_LOG_COMMAND_LINE
//
// MessageText:
//
//  Command line processed: %1!s!
//
#define MSG_LOG_COMMAND_LINE             0x0000EF0EL

//
// MessageId: MSG_LOG_BAD_COMMAND_LINE
//
// MessageText:
//
//  Executing "%1!s!" with command line: %2!s!
//
#define MSG_LOG_BAD_COMMAND_LINE         0x0000EF0FL

//
// MessageId: MSG_LOG_BEGIN_INSTALL_TIME
//
// MessageText:
//
//  Install Device: Begin.
//
#define MSG_LOG_BEGIN_INSTALL_TIME       0x0000EF10L

//
// MessageId: MSG_LOG_END_INSTALL_TIME
//
// MessageText:
//
//  Install Device: End.
//
#define MSG_LOG_END_INSTALL_TIME         0x0000EF11L

//
// MessageId: MSG_LOG_BEGIN_PREP_BACKUP_TIME
//
// MessageText:
//
//  Install Device: Preparing information about old driver for backup/rollback.
//
#define MSG_LOG_BEGIN_PREP_BACKUP_TIME   0x0000EF12L

//
// MessageId: MSG_LOG_BEGIN_INSTALL_FROM_INF_TIME
//
// MessageText:
//
//  Install Device: Queuing files from INF(s).
//
#define MSG_LOG_BEGIN_INSTALL_FROM_INF_TIME 0x0000EF13L

//
// MessageId: MSG_LOG_BEGIN_CO_INSTALLER_COPY_TIME
//
// MessageText:
//
//  Install Device: Queuing coinstaller files from INF(s).
//
#define MSG_LOG_BEGIN_CO_INSTALLER_COPY_TIME 0x0000EF14L

//
// MessageId: MSG_LOG_BEGIN_VERIFY_CAT_TIME
//
// MessageText:
//
//  Install Device: Verifying catalogs/INFs.
//
#define MSG_LOG_BEGIN_VERIFY_CAT_TIME    0x0000EF15L

//
// MessageId: MSG_LOG_END_VERIFY_CAT_TIME
//
// MessageText:
//
//  Install Device: Verifying catalogs/INFs completed.
//
#define MSG_LOG_END_VERIFY_CAT_TIME      0x0000EF16L

//
// MessageId: MSG_LOG_BEGIN_PRESCAN_TIME
//
// MessageText:
//
//  Install Device: Checking which files need installing.
//
#define MSG_LOG_BEGIN_PRESCAN_TIME       0x0000EF17L

//
// MessageId: MSG_LOG_BEGIN_COMMIT_TIME
//
// MessageText:
//
//  Install Device: Committing file queue.
//
#define MSG_LOG_BEGIN_COMMIT_TIME        0x0000EF18L

//
// MessageId: MSG_LOG_BEGIN_WRITE_BASIC_CFGS_TIME
//
// MessageText:
//
//  Install Device: Writing BASIC Logical Configurations.
//
#define MSG_LOG_BEGIN_WRITE_BASIC_CFGS_TIME 0x0000EF19L

//
// MessageId: MSG_LOG_BEGIN_WRITE_OVERRIDE_CFGS_TIME
//
// MessageText:
//
//  Install Device: Overriding Logical Configurations.
//
#define MSG_LOG_BEGIN_WRITE_OVERRIDE_CFGS_TIME 0x0000EF1AL

//
// MessageId: MSG_LOG_BEGIN_INSTALL_REG_TIME
//
// MessageText:
//
//  Install Device: Changing registry settings as specified by the INF(s).
//
#define MSG_LOG_BEGIN_INSTALL_REG_TIME   0x0000EF1BL

//
// MessageId: MSG_LOG_BEGIN_WRITE_REG_TIME
//
// MessageText:
//
//  Install Device: Writing driver specific registry settings.
//
#define MSG_LOG_BEGIN_WRITE_REG_TIME     0x0000EF1CL

//
// MessageId: MSG_LOG_BEGIN_SERVICE_TIME
//
// MessageText:
//
//  Install Device: Installing required Windows services.
//
#define MSG_LOG_BEGIN_SERVICE_TIME       0x0000EF1DL

//
// MessageId: MSG_LOG_BEGIN_WRITE_REG2_TIME
//
// MessageText:
//
//  Install Device: Writing driver descriptive registry settings.
//
#define MSG_LOG_BEGIN_WRITE_REG2_TIME    0x0000EF1EL

//
// MessageId: MSG_LOG_BEGIN_RESTART_TIME
//
// MessageText:
//
//  Install Device: Restarting device.
//
#define MSG_LOG_BEGIN_RESTART_TIME       0x0000EF20L

//
// MessageId: MSG_LOG_END_RESTART_TIME
//
// MessageText:
//
//  Install Device: Restarting device completed.
//
#define MSG_LOG_END_RESTART_TIME         0x0000EF21L

//
// MessageId: MSG_LOG_BEGIN_REMOVE_TIME
//
// MessageText:
//
//  Install Device: Removing device sub-tree.
//
#define MSG_LOG_BEGIN_REMOVE_TIME        0x0000EF22L

//
// MessageId: MSG_LOG_END_REMOVE_TIME
//
// MessageText:
//
//  Install Device: Removing device sub-tree completed.
//
#define MSG_LOG_END_REMOVE_TIME          0x0000EF23L

//
// MessageId: MSG_LOG_BEGIN_REENUM_TIME
//
// MessageText:
//
//  Install Device: Re-enumerating device sub-tree.
//
#define MSG_LOG_BEGIN_REENUM_TIME        0x0000EF24L

//
// MessageId: MSG_LOG_END_REENUM_TIME
//
// MessageText:
//
//  Install Device: Re-enumerating device sub-tree completed.
//
#define MSG_LOG_END_REENUM_TIME          0x0000EF25L

//
// MessageId: MSG_LOG_BEGIN_INSTALLSTOP_TIME
//
// MessageText:
//
//  Install Device: Calling 'RUNONCE'/'GRPCONV' items.
//
#define MSG_LOG_BEGIN_INSTALLSTOP_TIME   0x0000EF26L

//
// MessageId: MSG_LOG_BEGIN_CLEANUP_TIME
//
// MessageText:
//
//  Install Device: Cleaning up failed device.
//
#define MSG_LOG_BEGIN_CLEANUP_TIME       0x0000EF28L

//
// MessageId: MSG_LOG_RENAME_EXISTING_DELAYED_DELETE_FAILED
//
// MessageText:
//
//  The file "%1" was renamed to a temporary name "%2" for delayed delete. However, delayed delete could not be queued. %0
//
#define MSG_LOG_RENAME_EXISTING_DELAYED_DELETE_FAILED 0x0000EF29L

//
// MessageId: MSG_LOG_RENAME_EXISTING_RESTORE_FAILED
//
// MessageText:
//
//  The renamed file "%1" could not be restored to its original name "%2". %0
//
#define MSG_LOG_RENAME_EXISTING_RESTORE_FAILED 0x0000EF2AL

//
// MessageId: MSG_LOG_BACKUP_EXISTING_RESTORE_FAILED
//
// MessageText:
//
//  The backup file "%1" could not be restored to its original name "%2". %0
//
#define MSG_LOG_BACKUP_EXISTING_RESTORE_FAILED 0x0000EF2BL

//
// MessageId: MSG_LOG_BACKUP_EXISTING_RESTORE_FILETIME_FAILED
//
// MessageText:
//
//  The timestamp for file "%1" could not be restored. %0
//
#define MSG_LOG_BACKUP_EXISTING_RESTORE_FILETIME_FAILED 0x0000EF2CL

//
// MessageId: MSG_LOG_BACKUP_EXISTING_RESTORE_SECURITY_FAILED
//
// MessageText:
//
//  The security settings for file "%1" could not be restored. %0
//
#define MSG_LOG_BACKUP_EXISTING_RESTORE_SECURITY_FAILED 0x0000EF2DL

//
// MessageId: MSG_LOG_BACKUP_EXISTING_RESTORE_SCE_FAILED
//
// MessageText:
//
//  The Security Configuration Editor settings for file "%1" could not be restored. %0
//
#define MSG_LOG_BACKUP_EXISTING_RESTORE_SCE_FAILED 0x0000EF2EL

//
// MessageId: MSG_LOG_BACKUP_DELAYED_DELETE_FAILED
//
// MessageText:
//
//  A temporary file "%1" could not be queued for delayed deletion. %0
//
#define MSG_LOG_BACKUP_DELAYED_DELETE_FAILED 0x0000EF2FL

//
// MessageId: MSG_LOG_DELAYED_MOVE_SCE_FAILED
//
// MessageText:
//
//  The Security Configuration Editor settings for file "%1" to be queued for delayed rename to "%2" could not be stored. %0
//
#define MSG_LOG_DELAYED_MOVE_SCE_FAILED  0x0000EF30L

//
// MessageId: MSG_LOG_OPERATION_CANCELLED
//
// MessageText:
//
//  The operation was cancelled.
//
#define MSG_LOG_OPERATION_CANCELLED      0x0000EF31L

//
// MessageId: MSG_LOG_ERROR_IGNORED
//
// MessageText:
//
//  The error was ignored.
//
#define MSG_LOG_ERROR_IGNORED            0x0000EF32L

//
// MessageId: MSG_LOG_DELAYED_DELETE_FAILED
//
// MessageText:
//
//  The file "%1" could not be queued for delayed deletion. %0
//
#define MSG_LOG_DELAYED_DELETE_FAILED    0x0000EF33L

//
// MessageId: MSG_LOG_DELAYED_MOVE_FAILED
//
// MessageText:
//
//  The file "%1" could not be queued for delayed rename to "%2". %0
//
#define MSG_LOG_DELAYED_MOVE_FAILED      0x0000EF34L

//
// MessageId: MSG_LOG_REPLACE_BOOT_FILE_FAILED
//
// MessageText:
//
//  Windows could not copy a boot file "%1" due to the presence of an in-use file.
//
#define MSG_LOG_REPLACE_BOOT_FILE_FAILED 0x0000EF35L

//
// MessageId: MSG_LOG_RUNONCE_FAILED
//
// MessageText:
//
//  Attempting to launch the 'RUNONCE' process failed. %0
//
#define MSG_LOG_RUNONCE_FAILED           0x0000EF36L

//
// MessageId: MSG_LOG_CERTCLASS_INVALID
//
// MessageText:
//
//  The driver signing class list "%1" was missing or invalid. %0
//
#define MSG_LOG_CERTCLASS_INVALID        0x0000EF37L

//
// MessageId: MSG_LOG_CERTCLASS_LOAD_FAILED
//
// MessageText:
//
//  The driver signing class list "%1" could not be loaded due to an error on line %2!u! of the INF. %0
//
#define MSG_LOG_CERTCLASS_LOAD_FAILED    0x0000EF38L

//
// MessageId: MSG_LOG_DRIVER_SIGNING_FOR_ALL_CLASSES
//
// MessageText:
//
//  Assuming all device classes are subject to driver signing policy.
//
#define MSG_LOG_DRIVER_SIGNING_FOR_ALL_CLASSES 0x0000EF39L

//
// MessageId: MSG_LOG_SFC_EXEMPT_FAIL
//
// MessageText:
//
//  Exemption failed for protected system file "%1". %0
//
#define MSG_LOG_SFC_EXEMPT_FAIL          0x0000EF3AL

//
// MessageId: MSG_LOG_SFC_EXEMPT_SUCCESS
//
// MessageText:
//
//  Exemption obtained for protected system file "%1".
//
#define MSG_LOG_SFC_EXEMPT_SUCCESS       0x0000EF3BL

//
// MessageId: MSG_LOG_POLICY_ELEVATED_FOR_SFC
//
// MessageText:
//
//  The device installation digital signature failure policy has been elevated from Ignore to Warn due to a proposed replacement of a protected system file.
//
#define MSG_LOG_POLICY_ELEVATED_FOR_SFC  0x0000EF3DL

//
// MessageId: MSG_LOG_SFC_CONNECT_FAILED
//
// MessageText:
//
//  A connection could not be established with the Windows File Protection server.
//
#define MSG_LOG_SFC_CONNECT_FAILED       0x0000EF3EL

//
// MessageId: MSG_LOG_DELAYED_MOVE_SKIPPED_FOR_SFC
//
// MessageText:
//
//  The delayed replacement of a protected system file "%1" failed because the source file was unsigned.
//
#define MSG_LOG_DELAYED_MOVE_SKIPPED_FOR_SFC 0x0000EF3FL

//
// MessageId: MSG_LOG_DELAYED_DELETE_SKIPPED_FOR_SFC
//
// MessageText:
//
//  The delayed deletion of a protected system file (%1) failed because the installation package was unsigned.
//
#define MSG_LOG_DELAYED_DELETE_SKIPPED_FOR_SFC 0x0000EF40L

//
// MessageId: MSG_LOG_FILE_SECURITY_FAILED
//
// MessageText:
//
//  Failed to apply security to file "%1". %0
//
#define MSG_LOG_FILE_SECURITY_FAILED     0x0000EF41L

//
// MessageId: MSG_LOG_SET_FILE_SECURITY
//
// MessageText:
//
//  Applied security to file "%1".
//
#define MSG_LOG_SET_FILE_SECURITY        0x0000EF42L

//
// MessageId: MSG_LOG_DELSERVSCM_ERROR
//
// MessageText:
//
//  Delete Services: Failed to open and lock service control manager. %0
//
#define MSG_LOG_DELSERVSCM_ERROR         0x0000EF43L

//
// MessageId: MSG_LOG_DELSERVCTRL_ERROR
//
// MessageText:
//
//  Delete Services: Failed to stop service "%1". %0
//
#define MSG_LOG_DELSERVCTRL_ERROR        0x0000EF44L

//
// MessageId: MSG_LOG_DELSERVSTAT_ERROR
//
// MessageText:
//
//  Delete Services: Failed to obtain status of service "%1". %0
//
#define MSG_LOG_DELSERVSTAT_ERROR        0x0000EF45L

//
// MessageId: MSG_LOG_DELSERVPEND_ERROR
//
// MessageText:
//
//  Delete Services: Service "%1" is taking too long to stop.
//
#define MSG_LOG_DELSERVPEND_ERROR        0x0000EF46L

//
// MessageId: MSG_LOG_DELSERVNOSERV
//
// MessageText:
//
//  Delete Services: Service "%1" does not exist.
//
#define MSG_LOG_DELSERVNOSERV            0x0000EF47L

//
// MessageId: MSG_LOG_FILEQUEUE_IN_USE
//
// MessageText:
//
//  SetupCloseFileQueue called while queue is in use (locked).
//
#define MSG_LOG_FILEQUEUE_IN_USE         0x0000EF48L

//
// MessageId: MSG_LOG_DELSERVOPEN_ERROR
//
// MessageText:
//
//  Delete Services: Failed to obtain handle to service "%1". %0
//
#define MSG_LOG_DELSERVOPEN_ERROR        0x0000EF49L

//
// MessageId: MSG_LOG_DELSERV_ERROR
//
// MessageText:
//
//  Delete Services: Failed to delete service "%1". %0
//
#define MSG_LOG_DELSERV_ERROR            0x0000EF4AL

//
// MessageId: MSG_LOG_DELSERV_OK
//
// MessageText:
//
//  Deleted service "%1".
//
#define MSG_LOG_DELSERV_OK               0x0000EF4BL

//
// MessageId: MSG_LOG_ADDSERVSCM_ERROR
//
// MessageText:
//
//  Add Service: Failed to open service control manager. %0
//
#define MSG_LOG_ADDSERVSCM_ERROR         0x0000EF4CL

//
// MessageId: MSG_LOG_INSTSERVSCM_ERROR
//
// MessageText:
//
//  Controlling Service: Failed to open service control manager. %0
//
#define MSG_LOG_INSTSERVSCM_ERROR        0x0000EF4DL

//
// MessageId: MSG_LOG_INSTSERVOPEN_ERROR
//
// MessageText:
//
//  Controlling Service: Failed to open service "%1". %0
//
#define MSG_LOG_INSTSERVOPEN_ERROR       0x0000EF4EL

//
// MessageId: MSG_LOG_BOOTFILTSERVOPEN_ERROR
//
// MessageText:
//
//  Filter Service: Failed to open service "%1". %0
//
#define MSG_LOG_BOOTFILTSERVOPEN_ERROR   0x0000EF4FL

//
// MessageId: MSG_LOG_ADDSERVOPEN_ERROR
//
// MessageText:
//
//  Add Service: Failed to open existing service "%1". %0
//
#define MSG_LOG_ADDSERVOPEN_ERROR        0x0000EF50L

//
// MessageId: MSG_LOG_INSTSERVCONFIG_ERROR
//
// MessageText:
//
//  Controlling Service: Failed to get configuration of service "%1". %0
//
#define MSG_LOG_INSTSERVCONFIG_ERROR     0x0000EF51L

//
// MessageId: MSG_LOG_INSTSERV_DISABLED
//
// MessageText:
//
//  Controlling Service: Service "%1" is disabled.
//
#define MSG_LOG_INSTSERV_DISABLED        0x0000EF52L

//
// MessageId: MSG_LOG_INSTSERVTAG_WARN
//
// MessageText:
//
//  Controlling Service: Failed to generate tag for service "%1". %0
//
#define MSG_LOG_INSTSERVTAG_WARN         0x0000EF53L

//
// MessageId: MSG_LOG_INSTSERV_BOOT
//
// MessageText:
//
//  Controlling Service: Service "%1" is required at boot, modifying filter drivers.
//
#define MSG_LOG_INSTSERV_BOOT            0x0000EF54L

//
// MessageId: MSG_LOG_BOOTFILTSERVCONFIG_ERROR
//
// MessageText:
//
//  Filter Service: Failed to get configuration of service "%1". %0
//
#define MSG_LOG_BOOTFILTSERVCONFIG_ERROR 0x0000EF55L

//
// MessageId: MSG_LOG_BOOTFILTSERV_DISABLED
//
// MessageText:
//
//  Filter Service: Service "%1" is disabled.
//
#define MSG_LOG_BOOTFILTSERV_DISABLED    0x0000EF56L

//
// MessageId: MSG_LOG_BOOTFILTSERVSCM_ERROR
//
// MessageText:
//
//  Filter Service: Failed to lock service control manager. %0
//
#define MSG_LOG_BOOTFILTSERVSCM_ERROR    0x0000EF57L

//
// MessageId: MSG_LOG_BOOTFILTSERVCHANGE_ERROR
//
// MessageText:
//
//  Filter Service: Failed to modify service "%1". %0
//
#define MSG_LOG_BOOTFILTSERVCHANGE_ERROR 0x0000EF58L

//
// MessageId: MSG_LOG_BOOTFILTSERVCHANGE_OK
//
// MessageText:
//
//  Filter Service: Modified service "%1".
//
#define MSG_LOG_BOOTFILTSERVCHANGE_OK    0x0000EF59L

//
// MessageId: MSG_LOG_BOOTFILTSERV_KERN
//
// MessageText:
//
//  Filter Service: Service "%1" is not a kernel-mode driver.
//
#define MSG_LOG_BOOTFILTSERV_KERN        0x0000EF5AL

//
// MessageId: MSG_LOG_INSTSERV_ERROR
//
// MessageText:
//
//  Error while installing services. %0
//
#define MSG_LOG_INSTSERV_ERROR           0x0000EF5BL

//
// MessageId: MSG_LOG_ADDSERVLOCK_ERROR
//
// MessageText:
//
//  Add Service: Failed to lock service control manager. %0
//
#define MSG_LOG_ADDSERVLOCK_ERROR        0x0000EF5CL

//
// MessageId: MSG_LOG_ADDSERVSECURE_ERROR
//
// MessageText:
//
//  Add Service: Failed to secure service "%1". %0
//
#define MSG_LOG_ADDSERVSECURE_ERROR      0x0000EF5DL

//
// MessageId: MSG_LOG_ADDSERV_NULL
//
// MessageText:
//
//  Add Service: NULL Controlling service.
//
#define MSG_LOG_ADDSERV_NULL             0x0000EF5EL

//
// MessageId: MSG_LOG_ADDSERVCREATE_ERROR
//
// MessageText:
//
//  Add Service: Failed to create service "%1". %0
//
#define MSG_LOG_ADDSERVCREATE_ERROR      0x0000EF5FL

//
// MessageId: MSG_LOG_ADDSERVCONFIG_ERROR
//
// MessageText:
//
//  Add Service: Failed to get configuration of service "%1". %0
//
#define MSG_LOG_ADDSERVCONFIG_ERROR      0x0000EF60L

//
// MessageId: MSG_LOG_ADDSERVCHANGE_ERROR
//
// MessageText:
//
//  Add Service: Failed to modify existing service "%1". %0
//
#define MSG_LOG_ADDSERVCHANGE_ERROR      0x0000EF61L

//
// MessageId: MSG_LOG_ADDSERVCHANGE_OK
//
// MessageText:
//
//  Add Service: Modified existing service "%1".
//
#define MSG_LOG_ADDSERVCHANGE_OK         0x0000EF62L

//
// MessageId: MSG_LOG_ADDSERVCREATE_OK
//
// MessageText:
//
//  Add Service: Created service "%1".
//
#define MSG_LOG_ADDSERVCREATE_OK         0x0000EF63L

//
// MessageId: MSG_LOG_NO_QUEUE_FOR_ALTPLATFORM_DRVSEARCH
//
// MessageText:
//
//  A non-native driver search was requested, but no file queue was provided that contained alternate platform information.
//
#define MSG_LOG_NO_QUEUE_FOR_ALTPLATFORM_DRVSEARCH 0x0000EF64L

//
// MessageId: MSG_LOG_FAILED_INF_INSTALL
//
// MessageText:
//
//  Failed to install INF "%1". %0
//
#define MSG_LOG_FAILED_INF_INSTALL       0x0000EF65L

//
// MessageId: MSG_LOG_VERIFYFILE_ALTPLATFORM
//
// MessageText:
//
//  Verification using alternate platform (Platform = %1!u!, High Version = %2!u!.%3!u!, Low Version = %4!u!.%5!u!).
//
#define MSG_LOG_VERIFYFILE_ALTPLATFORM   0x0000EF66L

//
// MessageId: MSG_LOG_OLE_CONTROL_API_OK
//
// MessageText:
//
//  Calling "%2" in OLE Control "%1" succeeded.
//
#define MSG_LOG_OLE_CONTROL_API_OK       0x0000EF67L

//
// MessageId: MSG_LOG_OLE_CONTROL_CREATEPROCESS_OK
//
// MessageText:
//
//  Executing process "%1" with arguments "%2". %0
//
#define MSG_LOG_OLE_CONTROL_CREATEPROCESS_OK 0x0000EF68L

//
// MessageId: MSG_LOG_DO_REMOVE
//
// MessageText:
//
//  Removing device "%1".
//
#define MSG_LOG_DO_REMOVE                0x0000EF69L

//
// MessageId: MSG_LOG_REGISTER_PARAMS
//
// MessageText:
//
//  Processing REGISTERDLLS section [%1]. Module: "%%%2%%\%3%4%5", flags: 0x%6!04x!, timeout: %7!d!s.
//
#define MSG_LOG_REGISTER_PARAMS          0x0000EF6AL

//
// MessageId: MSG_LOG_REGISTRATION_FAILED
//
// MessageText:
//
//  Failed to register OLE server "%1". %0
//
#define MSG_LOG_REGISTRATION_FAILED      0x0000EF6BL

//
// MessageId: MSG_LOG_DO_PROPERTYCHANGE
//
// MessageText:
//
//  Changing device properties of "%1".
//
#define MSG_LOG_DO_PROPERTYCHANGE        0x0000EF6CL

//
// MessageId: MSG_LOG_PROPERTYCHANGE_ERROR
//
// MessageText:
//
//  Changing device properties failed. %0
//
#define MSG_LOG_PROPERTYCHANGE_ERROR     0x0000EF6DL

//
// MessageId: MSG_LOG_PROPERTYCHANGE_ENABLE_GLOBAL
//
// MessageText:
//
//  DICS_ENABLE DICS_FLAG_GLOBAL: Enabling device globally.
//
#define MSG_LOG_PROPERTYCHANGE_ENABLE_GLOBAL 0x0000EF6EL

//
// MessageId: MSG_LOG_PROPERTYCHANGE_ENABLE_GLOBAL_ERR
//
// MessageText:
//
//  DICS_ENABLE DICS_FLAG_GLOBAL: Enabling device globally failed. %0
//
#define MSG_LOG_PROPERTYCHANGE_ENABLE_GLOBAL_ERR 0x0000EF6FL

//
// MessageId: MSG_LOG_PROPERTYCHANGE_ENABLE_PROFILE
//
// MessageText:
//
//  DICS_ENABLE: Enabling device for profile %3!d!.
//
#define MSG_LOG_PROPERTYCHANGE_ENABLE_PROFILE 0x0000EF70L

//
// MessageId: MSG_LOG_PROPERTYCHANGE_ENABLE_PROFILE_ERR
//
// MessageText:
//
//  DICS_ENABLE: Enabling device for profile %3!d! failed. %0
//
#define MSG_LOG_PROPERTYCHANGE_ENABLE_PROFILE_ERR 0x0000EF71L

//
// MessageId: MSG_LOG_PROPERTYCHANGE_DISABLE_GLOBAL
//
// MessageText:
//
//  DICS_DISABLE DICS_FLAG_GLOBAL: Disabling device globally.
//
#define MSG_LOG_PROPERTYCHANGE_DISABLE_GLOBAL 0x0000EF72L

//
// MessageId: MSG_LOG_PROPERTYCHANGE_DISABLE_GLOBAL_ERR
//
// MessageText:
//
//  DICS_DISABLE DICS_FLAG_GLOBAL: Disabling device globally failed. %0
//
#define MSG_LOG_PROPERTYCHANGE_DISABLE_GLOBAL_ERR 0x0000EF73L

//
// MessageId: MSG_LOG_PROPERTYCHANGE_DISABLE_PROFILE
//
// MessageText:
//
//  DICS_DISABLE: Disabling device for profile %3!d!.
//
#define MSG_LOG_PROPERTYCHANGE_DISABLE_PROFILE 0x0000EF74L

//
// MessageId: MSG_LOG_PROPERTYCHANGE_DISABLE_PROFILE_ERR
//
// MessageText:
//
//  DICS_DISABLE: Disabling device for profile %3!d! failed. %0
//
#define MSG_LOG_PROPERTYCHANGE_DISABLE_PROFILE_ERR 0x0000EF75L

//
// MessageId: MSG_LOG_PROPERTYCHANGE_NORESTART
//
// MessageText:
//
//  DICS_PROPCHANGE: Device will not be restarted.
//
#define MSG_LOG_PROPERTYCHANGE_NORESTART 0x0000EF76L

//
// MessageId: MSG_LOG_PROPERTYCHANGE_RESTART
//
// MessageText:
//
//  DICS_PROPCHANGE: Device has been restarted.
//
#define MSG_LOG_PROPERTYCHANGE_RESTART   0x0000EF77L

//
// MessageId: MSG_LOG_PROPERTYCHANGE_RESTART_FAILED
//
// MessageText:
//
//  DICS_PROPCHANGE: Device could not be restarted.
//
#define MSG_LOG_PROPERTYCHANGE_RESTART_FAILED 0x0000EF78L

//
// MessageId: MSG_LOG_PROPERTYCHANGE_RESTART_ERR
//
// MessageText:
//
//  DICS_PROPCHANGE: Restarting failed. %0
//
#define MSG_LOG_PROPERTYCHANGE_RESTART_ERR 0x0000EF79L

//
// MessageId: MSG_LOG_PROPERTYCHANGE_START
//
// MessageText:
//
//  DICS_START: Device has been started.
//
#define MSG_LOG_PROPERTYCHANGE_START     0x0000EF7AL

//
// MessageId: MSG_LOG_PROPERTYCHANGE_START_FAILED
//
// MessageText:
//
//  DICS_START: Device could not be started.
//
#define MSG_LOG_PROPERTYCHANGE_START_FAILED 0x0000EF7BL

//
// MessageId: MSG_LOG_PROPERTYCHANGE_START_ERR
//
// MessageText:
//
//  DICS_START: Starting failed. %0
//
#define MSG_LOG_PROPERTYCHANGE_START_ERR 0x0000EF7CL

//
// MessageId: MSG_LOG_PROPERTYCHANGE_STOP
//
// MessageText:
//
//  DICS_STOP: Device has been stopped.
//
#define MSG_LOG_PROPERTYCHANGE_STOP      0x0000EF7DL

//
// MessageId: MSG_LOG_PROPERTYCHANGE_STOP_FAILED
//
// MessageText:
//
//  DICS_STOP: Device could not be stopped.
//
#define MSG_LOG_PROPERTYCHANGE_STOP_FAILED 0x0000EF7EL

//
// MessageId: MSG_LOG_PROPERTYCHANGE_STOP_ERR
//
// MessageText:
//
//  DICS_STOP: Stopping failed. %0
//
#define MSG_LOG_PROPERTYCHANGE_STOP_ERR  0x0000EF7FL

//
// MessageId: MSG_LOG_PROPERTYCHANGE_UNKNOWN
//
// MessageText:
//
//  Unknown property change command: 0x%3!04x!.
//
#define MSG_LOG_PROPERTYCHANGE_UNKNOWN   0x0000EF80L

//
// MessageId: MSG_LOG_CHANGEPRUNE_DEL
//
// MessageText:
//
//  Copy target "%1" is also a Delete target, forcing COPYFLG_NODECOMP.
//
#define MSG_LOG_CHANGEPRUNE_DEL          0x0000EF81L

//
// MessageId: MSG_LOG_CHANGEPRUNE_RENSRC
//
// MessageText:
//
//  Copy target "%1" is also a Rename source, forcing COPYFLG_NODECOMP.
//
#define MSG_LOG_CHANGEPRUNE_RENSRC       0x0000EF82L

//
// MessageId: MSG_LOG_CHANGEPRUNE_RENTARG
//
// MessageText:
//
//  Copy target "%1" is also a Rename target, forcing COPYFLG_NODECOMP.
//
#define MSG_LOG_CHANGEPRUNE_RENTARG      0x0000EF83L

//
// MessageId: MSG_LOG_PRUNE_DEL
//
// MessageText:
//
//  Delete target "%1" is also a Copy target, pruning from 'DelFiles' queue.
//
#define MSG_LOG_PRUNE_DEL                0x0000EF84L

//
// MessageId: MSG_LOG_PRUNE_RENSRC
//
// MessageText:
//
//  Rename source "%1" is also a Copy target, pruning from 'RenFiles' queue.
//
#define MSG_LOG_PRUNE_RENSRC             0x0000EF85L

//
// MessageId: MSG_LOG_PRUNE_RENTARG
//
// MessageText:
//
//  Rename target "%1" is also a Copy target, pruning from 'RenFiles' queue.
//
#define MSG_LOG_PRUNE_RENTARG            0x0000EF86L

//
// MessageId: MSG_LOG_SELECTBEST_BAD_DRIVER
//
// MessageText:
//
//  Driver "%1" in "%2" section [%3] skipped (DNF_BAD_DRIVER).
//
#define MSG_LOG_SELECTBEST_BAD_DRIVER    0x0000EF87L

//
// MessageId: MSG_LOG_KEEPSELECTED_GUID
//
// MessageText:
//
//  Class GUID of device remains: %1.
//
#define MSG_LOG_KEEPSELECTED_GUID        0x0000EF88L

//
// MessageId: MSG_LOG_DELETED_FILE
//
// MessageText:
//
//  Deleted file "%1".
//
#define MSG_LOG_DELETED_FILE             0x0000EF89L

//
// MessageId: MSG_LOG_DELETE_FILE_ERROR
//
// MessageText:
//
//  Error deleting file "%1": %0
//
#define MSG_LOG_DELETE_FILE_ERROR        0x0000EF8AL

//
// MessageId: MSG_LOG_DELAYDELETED_FILE
//
// MessageText:
//
//  Delayed deleting of file "%1" until next boot.
//
#define MSG_LOG_DELAYDELETED_FILE        0x0000EF8BL

//
// MessageId: MSG_LOG_DELAYDELETE_FILE_ERROR
//
// MessageText:
//
//  Error while queuing up a delayed delete of file "%1": %0
//
#define MSG_LOG_DELAYDELETE_FILE_ERROR   0x0000EF8CL

//
// MessageId: MSG_LOG_RENAMED_FILE
//
// MessageText:
//
//  Renamed file "%1" to "%2".
//
#define MSG_LOG_RENAMED_FILE             0x0000EF8DL

//
// MessageId: MSG_LOG_RENAME_FILE_ERROR
//
// MessageText:
//
//  Error renaming file "%1" to "%2": %0
//
#define MSG_LOG_RENAME_FILE_ERROR        0x0000EF8EL

//
// MessageId: MSG_LOG_DELAYRENAMED_FILE
//
// MessageText:
//
//  Delayed renaming of file "%1" to "%2" until next boot.
//
#define MSG_LOG_DELAYRENAMED_FILE        0x0000EF8FL

//
// MessageId: MSG_LOG_DELAYRENAME_FILE_ERROR
//
// MessageText:
//
//  Error while queuing up a delayed rename of file "%1" to "%2": %0
//
#define MSG_LOG_DELAYRENAME_FILE_ERROR   0x0000EF90L

//
// MessageId: MSG_LOG_VERIFYCAT_ERROR
//
// MessageText:
//
//  Verifying catalog "%1" failed. %0
//
#define MSG_LOG_VERIFYCAT_ERROR          0x0000EF91L

//
// MessageId: MSG_LOG_SELFSIGN_ERROR
//
// MessageText:
//
//  Verifying file "%1" (key "%2") as self-signed failed. %0
//
#define MSG_LOG_SELFSIGN_ERROR           0x0000EF92L

//
// MessageId: MSG_LOG_HASH_ERROR
//
// MessageText:
//
//  Unable to create hash for file "%1" (key "%3") to verify against catalog "%2". %0
//
#define MSG_LOG_HASH_ERROR               0x0000EF93L

//
// MessageId: MSG_LOG_SELFSIGN_OK
//
// MessageText:
//
//  File "%1" (key "%2") is self-signed. %0
//
#define MSG_LOG_SELFSIGN_OK              0x0000EF94L

//
// MessageId: MSG_LOG_DEFCOPY_QUEUE
//
// MessageText:
//
//  Queued default copy in "%2": "%4" to "%3" with flags 0x%5!08x!, target directory is "%6".
//
#define MSG_LOG_DEFCOPY_QUEUE            0x0000EF95L

//
// MessageId: MSG_LOG_SCANQUEUE_VERIFY_FAILED
//
// MessageText:
//
//  Failed to verify catalog when scanning file queue.
//
#define MSG_LOG_SCANQUEUE_VERIFY_FAILED  0x0000EF96L

//
// MessageId: MSG_LOG_RESTORE
//
// MessageText:
//
//  Restoring files from "%1".
//
#define MSG_LOG_RESTORE                  0x0000EF97L

//
// MessageId: MSG_LOG_COPYING_FILE_VIA
//
// MessageText:
//
//  Copying file "%1" to "%2" via temporary file "%3".
//
#define MSG_LOG_COPYING_FILE_VIA         0x0000EF98L

//
// MessageId: MSG_LOG_REVERTED_BAD_DRIVER
//
// MessageText:
//
//  Add Service: Binary "%2" for service "%1" is not compatible and has been reverted. %0
//
#define MSG_LOG_REVERTED_BAD_DRIVER      0x0000EF99L

//
// MessageId: MSG_LOG_HAVE_BAD_DRIVER
//
// MessageText:
//
//  Add Service: Binary "%2" for service "%1" is not compatible.
//
#define MSG_LOG_HAVE_BAD_DRIVER          0x0000EF9AL

//
// MessageId: MSG_LOG_MISSING_DRIVER
//
// MessageText:
//
//  Add Service: Binary "%2" for service "%1" is not present.
//
#define MSG_LOG_MISSING_DRIVER           0x0000EF9BL

//
// MessageId: MSG_LOG_COPY_FROM_CAB
//
// MessageText:
//
//  Extracted file "%2" from cabinet "%1" to "%3" (target is "%4").
//
#define MSG_LOG_COPY_FROM_CAB            0x0000EF9CL

//
// MessageId: MSG_LOG_INF_EXCLUDEID
//
// MessageText:
//
//  Excluding INF match in INF "%1", section "%2" based on Id "%3".
//
#define MSG_LOG_INF_EXCLUDEID            0x0000EF9DL

//
// MessageId: MSG_LOG_BEGIN_INTFC_VERIFY_CAT_TIME
//
// MessageText:
//
//  Install Interfaces: Verifying catalogs/infs.
//
#define MSG_LOG_BEGIN_INTFC_VERIFY_CAT_TIME 0x0000EFA6L

//
// MessageId: MSG_LOG_END_INTFC_VERIFY_CAT_TIME
//
// MessageText:
//
//  Install Interfaces: Verifying catalogs/infs completed.
//
#define MSG_LOG_END_INTFC_VERIFY_CAT_TIME 0x0000EFA7L

//
// MessageId: MSG_LOG_BEGIN_COINST_VERIFY_CAT_TIME
//
// MessageText:
//
//  Register Coinstallers: Verifying catalogs/infs.
//
#define MSG_LOG_BEGIN_COINST_VERIFY_CAT_TIME 0x0000EFA8L

//
// MessageId: MSG_LOG_END_COINST_VERIFY_CAT_TIME
//
// MessageText:
//
//  Register Coinstallers: Verifying catalogs/infs completed.
//
#define MSG_LOG_END_COINST_VERIFY_CAT_TIME 0x0000EFA9L

//
// MessageId: MSG_LOG_BEGIN_INSTCLASS_VERIFY_CAT_TIME
//
// MessageText:
//
//  Class Install: Verifying catalogs/INFs.
//
#define MSG_LOG_BEGIN_INSTCLASS_VERIFY_CAT_TIME 0x0000EFAAL

//
// MessageId: MSG_LOG_END_INSTCLASS_VERIFY_CAT_TIME
//
// MessageText:
//
//  Class Install: Verifying catalogs/INFs completed.
//
#define MSG_LOG_END_INSTCLASS_VERIFY_CAT_TIME 0x0000EFABL

//
// MessageId: MSG_LOG_OEM_CAT_UNINSTALL_FAILED
//
// MessageText:
//
//  Error uninstalling OEM catalog "%1": %0
//
#define MSG_LOG_OEM_CAT_UNINSTALL_FAILED 0x0000EFACL

//
// MessageId: MSG_LOG_OLE_REGISTRATION_HUNG
//
// MessageText:
//
//  Registration of "%1" appears to have hung.
//
#define MSG_LOG_OLE_REGISTRATION_HUNG    0x0000EFADL

//
// MessageId: MSG_LOG_DRIVER_SIGNING_ERROR_NONINTERACTIVE
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" for driver "%2" blocked (server install). %0
//
#define MSG_LOG_DRIVER_SIGNING_ERROR_NONINTERACTIVE 0x0000EFAEL

//
// MessageId: MSG_LOG_SIGNING_ERROR_NONINTERACTIVE
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" blocked (server install). %0
//
#define MSG_LOG_SIGNING_ERROR_NONINTERACTIVE 0x0000EFAFL

//
// MessageId: MSG_LOG_DRIVER_SIGNING_ERROR_POLICY_NONE
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" for driver "%2" will be installed (Policy=Ignore). %0
//
#define MSG_LOG_DRIVER_SIGNING_ERROR_POLICY_NONE 0x0000EFB0L

//
// MessageId: MSG_LOG_SIGNING_ERROR_POLICY_NONE
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" will be installed (Policy=Ignore). %0
//
#define MSG_LOG_SIGNING_ERROR_POLICY_NONE 0x0000EFB1L

//
// MessageId: MSG_LOG_DRIVER_SIGNING_ERROR_AUTO_YES
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" for driver "%2" will be installed (Policy=Warn). %0
//
#define MSG_LOG_DRIVER_SIGNING_ERROR_AUTO_YES 0x0000EFB2L

//
// MessageId: MSG_LOG_SIGNING_ERROR_AUTO_YES
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" will be installed (Policy=Warn). %0
//
#define MSG_LOG_SIGNING_ERROR_AUTO_YES   0x0000EFB3L

//
// MessageId: MSG_LOG_DRIVER_SIGNING_ERROR_AUTO_NO
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" for driver "%2" blocked (unattended, Policy=Warn). %0
//
#define MSG_LOG_DRIVER_SIGNING_ERROR_AUTO_NO 0x0000EFB4L

//
// MessageId: MSG_LOG_SIGNING_ERROR_AUTO_NO
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" blocked (unattended, Policy=Warn). %0
//
#define MSG_LOG_SIGNING_ERROR_AUTO_NO    0x0000EFB5L

//
// MessageId: MSG_LOG_DRIVER_SIGNING_ERROR_WARN_YES
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" for driver "%2" will be installed (Policy=Warn, user said ok). %0
//
#define MSG_LOG_DRIVER_SIGNING_ERROR_WARN_YES 0x0000EFB6L

//
// MessageId: MSG_LOG_SIGNING_ERROR_WARN_YES
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" for will be installed (Policy=Warn, user said ok). %0
//
#define MSG_LOG_SIGNING_ERROR_WARN_YES   0x0000EFB7L

//
// MessageId: MSG_LOG_DRIVER_SIGNING_ERROR_WARN_NO
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" for driver "%2" blocked (Policy=Warn, user said no). %0
//
#define MSG_LOG_DRIVER_SIGNING_ERROR_WARN_NO 0x0000EFB8L

//
// MessageId: MSG_LOG_SIGNING_ERROR_WARN_NO
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" blocked (Policy=Warn, user said no). %0
//
#define MSG_LOG_SIGNING_ERROR_WARN_NO    0x0000EFB9L

//
// MessageId: MSG_LOG_DRIVER_SIGNING_ERROR_SILENT_BLOCK
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" for driver "%2" blocked (unattended, Policy=Block). %0
//
#define MSG_LOG_DRIVER_SIGNING_ERROR_SILENT_BLOCK 0x0000EFBAL

//
// MessageId: MSG_LOG_SIGNING_ERROR_SILENT_BLOCK
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" blocked (unattended, Policy=Block). %0
//
#define MSG_LOG_SIGNING_ERROR_SILENT_BLOCK 0x0000EFBBL

//
// MessageId: MSG_LOG_DRIVER_SIGNING_ERROR_POLICY_BLOCK
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" for driver "%2" blocked (Policy=Block, user informed). %0
//
#define MSG_LOG_DRIVER_SIGNING_ERROR_POLICY_BLOCK 0x0000EFBCL

//
// MessageId: MSG_LOG_SIGNING_ERROR_POLICY_BLOCK
//
// MessageText:
//
//  An unsigned, incorrectly signed, or Authenticode(tm) signed file "%1" blocked (Policy=Block, user informed). %0
//
#define MSG_LOG_SIGNING_ERROR_POLICY_BLOCK 0x0000EFBDL

//
// MessageId: MSG_LOG_REGSVR_FILE_VERIFICATION_SKIPPED
//
// MessageText:
//
//  Digital signature verification was skipped for a file being registered ("%1"). %0
//
#define MSG_LOG_REGSVR_FILE_VERIFICATION_SKIPPED 0x0000EFBEL

//
// MessageId: MSG_LOG_UNREGSVR_FILE_VERIFICATION_SKIPPED
//
// MessageText:
//
//  Digital signature verification was skipped for a file being unregistered ("%1"). %0
//
#define MSG_LOG_UNREGSVR_FILE_VERIFICATION_SKIPPED 0x0000EFBFL

//
// MessageId: MSG_LOG_SCM_LOCKED_INFO
//
// MessageText:
//
//  Failed to lock service control manager. Lock acquired by "%1" for %2!u!s.
//
#define MSG_LOG_SCM_LOCKED_INFO          0x0000EFC0L

//
// MessageId: MSG_LOG_PNF_CORRUPTED
//
// MessageText:
//
//  "%1" discarded: Corrupted.
//
#define MSG_LOG_PNF_CORRUPTED            0x0000EFC1L

//
// MessageId: MSG_LOG_PNF_VERSION_MAJOR_MISMATCH
//
// MessageText:
//
//  "%1" discarded: Version mismatch. Major version = %3!u!, expected %2!u!.
//
#define MSG_LOG_PNF_VERSION_MAJOR_MISMATCH 0x0000EFC2L

//
// MessageId: MSG_LOG_PNF_VERSION_MINOR_MISMATCH
//
// MessageText:
//
//  "%1" discarded: Version mismatch. Minor version = %3!u!, expected %2!u!.
//
#define MSG_LOG_PNF_VERSION_MINOR_MISMATCH 0x0000EFC3L

//
// MessageId: MSG_LOG_PNF_TIMEDATE_MISMATCH
//
// MessageText:
//
//  "%1" discarded: INF may have been modified.
//
#define MSG_LOG_PNF_TIMEDATE_MISMATCH    0x0000EFC4L

//
// MessageId: MSG_LOG_PNF_REBUILD_NATIVE
//
// MessageText:
//
//  "%1" migrate: non-native system.
//
#define MSG_LOG_PNF_REBUILD_NATIVE       0x0000EFC5L

//
// MessageId: MSG_LOG_PNF_REBUILD_TIMEDATE_MISMATCH
//
// MessageText:
//
//  "%1" migrate: INF may have been modified.
//
#define MSG_LOG_PNF_REBUILD_TIMEDATE_MISMATCH 0x0000EFC6L

//
// MessageId: MSG_LOG_PNF_REBUILD_LANGUAGE_MISMATCH
//
// MessageText:
//
//  "%1" migrate: PNF Language = %3!04x!, Thread = %2!04x!.
//
#define MSG_LOG_PNF_REBUILD_LANGUAGE_MISMATCH 0x0000EFC7L

//
// MessageId: MSG_LOG_PNF_REBUILD_WINDIR_MISMATCH
//
// MessageText:
//
//  "%1" migrate: Windows directory changed from "%3" to "%2".
//
#define MSG_LOG_PNF_REBUILD_WINDIR_MISMATCH 0x0000EFC8L

//
// MessageId: MSG_LOG_PNF_REBUILD_OSLOADER_MISMATCH
//
// MessageText:
//
//  "%1" migrate: Loader directory changed from "%3" to "%2".
//
#define MSG_LOG_PNF_REBUILD_OSLOADER_MISMATCH 0x0000EFC9L

//
// MessageId: MSG_LOG_PNF_REBUILD_UNVERIFIED
//
// MessageText:
//
//  "%1" migrate: Signature needs to be checked for ranking.
//
#define MSG_LOG_PNF_REBUILD_UNVERIFIED   0x0000EFCAL

//
// MessageId: MSG_LOG_PNF_REBUILD_HASH_MISMATCH
//
// MessageText:
//
//  "%1" migrate: String hash bucket count changed from %3!u! to %2!u!.
//
#define MSG_LOG_PNF_REBUILD_HASH_MISMATCH 0x0000EFCBL

//
// MessageId: MSG_LOG_NO_STRINGS
//
// MessageText:
//
//  No [STRINGS.%1!04x!], [STRINGS.%2!04x!] or [STRINGS] section in %4.
//
#define MSG_LOG_NO_STRINGS               0x0000EFCCL

//
// MessageId: MSG_LOG_DEF_STRINGS
//
// MessageText:
//
//  No [STRINGS.%1!04x!] or [STRINGS.%2!04x!] section in %4, using [STRINGS] instead.
//
#define MSG_LOG_DEF_STRINGS              0x0000EFCDL

//
// MessageId: MSG_LOG_NEAR_STRINGS
//
// MessageText:
//
//  No [STRINGS.%1!04x!] or [STRINGS.%2!04x!] section in %4, using [STRINGS.%3!04x!] instead.
//
#define MSG_LOG_NEAR_STRINGS             0x0000EFCEL

//
// MessageId: MSG_LOG_USING_NEW_INF_CACHE
//
// MessageText:
//
//  Creating empty INF cache.
//
#define MSG_LOG_USING_NEW_INF_CACHE      0x0000EFCFL

//
// MessageId: MSG_LOG_USING_INF_CACHE
//
// MessageText:
//
//  Using INF cache "%1".
//
#define MSG_LOG_USING_INF_CACHE          0x0000EFD0L

//
// MessageId: MSG_LOG_MODIFIED_INF_CACHE
//
// MessageText:
//
//  Modified INF cache "%1".
//
#define MSG_LOG_MODIFIED_INF_CACHE       0x0000EFD1L

//
// MessageId: MSG_LOG_FAILED_MODIFY_INF_CACHE
//
// MessageText:
//
//  Failed to commit INF cache to "%1".
//
#define MSG_LOG_FAILED_MODIFY_INF_CACHE  0x0000EFD2L

//
// MessageId: MSG_LOG_NO_SOURCE
//
// MessageText:
//
//  Unable to determine source information for disk ID %1!u!.
//
#define MSG_LOG_NO_SOURCE                0x0000EFD3L

//
// MessageId: MSG_LOG_BEGIN_RESTART_TIME_DEVICE
//
// MessageText:
//
//  Install Device: Restarting device "%1". %0
//
#define MSG_LOG_BEGIN_RESTART_TIME_DEVICE 0x0000EFD4L

//
// MessageId: MSG_LOG_END_RESTART_TIME_DEVICE
//
// MessageText:
//
//  Install Device: Restarting device "%1" completed. %0
//
#define MSG_LOG_END_RESTART_TIME_DEVICE  0x0000EFD5L

//
// MessageId: MSG_LOG_BEGIN_REMOVE_TIME_DEVICE
//
// MessageText:
//
//  Install Device: Removing device "%1" sub-tree. %0
//
#define MSG_LOG_BEGIN_REMOVE_TIME_DEVICE 0x0000EFD6L

//
// MessageId: MSG_LOG_END_REMOVE_TIME_DEVICE
//
// MessageText:
//
//  Install Device: Removing device "%1" sub-tree completed. %0
//
#define MSG_LOG_END_REMOVE_TIME_DEVICE   0x0000EFD7L

//
// MessageId: MSG_LOG_REBOOT_REASON_DRIVER_LOADED
//
// MessageText:
//
//  Driver "%1" required reboot: Driver did not unload. %0
//
#define MSG_LOG_REBOOT_REASON_DRIVER_LOADED 0x0000EFD8L

//
// MessageId: MSG_LOG_INF_IN_USE
//
// MessageText:
//
//  Error uninstalling INF "%1", device "%2" is still using it: %0
//
#define MSG_LOG_INF_IN_USE               0x0000EFD9L

//
// MessageId: MSG_LOG_SELECTBEST_BASIC_DRIVER_SKIPPED
//
// MessageText:
//
//  Basic driver "%1" in "%2" section [%3] skipped.
//
#define MSG_LOG_SELECTBEST_BASIC_DRIVER_SKIPPED 0x0000EFDAL

//
// MessageId: MSG_LOG_PNF_REBUILD_SUITE
//
// MessageText:
//
//  "%1" migrate: Product suite changed from %2!04x! to %3!04x!.
//
#define MSG_LOG_PNF_REBUILD_SUITE        0x0000EFDBL

//
// MessageId: MSG_LOG_PNF_WIN2KBUG
//
// MessageText:
//
//  "%1" has no source information, checking to see if it has a catalog.
//
#define MSG_LOG_PNF_WIN2KBUG             0x0000EFDCL

//
// MessageId: MSG_LOG_PNF_WIN2KBUGFIX
//
// MessageText:
//
//  "%1" has no source information but has a catalog. Pretending source is "A:\OEM.INF".
//
#define MSG_LOG_PNF_WIN2KBUGFIX          0x0000EFDDL

//
// MessageId: MSG_LOG_DRIVERBACKUP
//
// MessageText:
//
//  Obtaining rollback information for device "%1":
//
#define MSG_LOG_DRIVERBACKUP             0x0000EFDEL

//
// MessageId: MSG_LOG_CRYPTO_CACHE_FLUSH_FAILURE
//
// MessageText:
//
//  A failure was encountered while attempting to flush the crypto cache during verification of catalog "%1". %0
//
#define MSG_LOG_CRYPTO_CACHE_FLUSH_FAILURE 0x0000EFDFL

//
// MessageId: MSG_LOG_CODESIGNING_POLICY_CORRUPT
//
// MessageText:
//
//  The "%1" value under HKEY_LOCAL_MACHINE\%2 is corrupt.
//
#define MSG_LOG_CODESIGNING_POLICY_CORRUPT 0x0000EFE0L

//
// MessageId: MSG_LOG_CODESIGNING_POLICY_MISSING
//
// MessageText:
//
//  The "%1" value under HKEY_LOCAL_MACHINE\%2 could not be retrieved. %0
//
#define MSG_LOG_CODESIGNING_POLICY_MISSING 0x0000EFE1L

//
// MessageId: MSG_LOG_CRYPT_ACQUIRE_CONTEXT_FAILED
//
// MessageText:
//
//  A failure was encountered while trying to acquire a cryptographic context handle. %0
//
#define MSG_LOG_CRYPT_ACQUIRE_CONTEXT_FAILED 0x0000EFE2L

//
// MessageId: MSG_LOG_CRYPT_CALC_MD5_HASH_FAILED
//
// MessageText:
//
//  A failure was encountered while trying to calculate the MD5 cryptographic hash for existing codesigning policy. %0
//
#define MSG_LOG_CRYPT_CALC_MD5_HASH_FAILED 0x0000EFE3L

//
// MessageId: MSG_LOG_PRIVATE_HASH_INVALID
//
// MessageText:
//
//  Per-machine codesigning policy settings appear to have been tampered with. %0
//
#define MSG_LOG_PRIVATE_HASH_INVALID     0x0000EFE4L

//
// MessageId: MSG_LOG_CODESIGNING_POLICY_RESTORED
//
// MessageText:
//
//  Default of %1!u! restored to "%2" value under HKEY_LOCAL_MACHINE\%3.
//
#define MSG_LOG_CODESIGNING_POLICY_RESTORED 0x0000EFE5L

//
// MessageId: MSG_LOG_CODESIGNING_POLICY_RESTORE_FAIL
//
// MessageText:
//
//  Default of %1!u! could not be restored to "%2" value under HKEY_LOCAL_MACHINE\%3. %0
//
#define MSG_LOG_CODESIGNING_POLICY_RESTORE_FAIL 0x0000EFE6L

//
// MessageId: MSG_LOG_PRIVATE_HASH_RESTORED
//
// MessageText:
//
//  Codesigning policy database re-synchronized to default values.
//
#define MSG_LOG_PRIVATE_HASH_RESTORED    0x0000EFE7L

//
// MessageId: MSG_LOG_PRIVATE_HASH_RESTORE_FAIL
//
// MessageText:
//
//  Codesigning policy database could not be re-synchronized to default values. %0
//
#define MSG_LOG_PRIVATE_HASH_RESTORE_FAIL 0x0000EFE8L

//
// MessageId: MSG_LOG_CRYPT_CALC_MD5_DEFAULT_HASH_FAILED
//
// MessageText:
//
//  A failure was encountered while trying to calculate the MD5 cryptographic hash for default codesigning policy. %0
//
#define MSG_LOG_CRYPT_CALC_MD5_DEFAULT_HASH_FAILED 0x0000EFE9L

//
// MessageId: MSG_LOG_DRIVER_BLOCKED_FOR_DEVICE_ERROR_NONINTERACTIVE
//
// MessageText:
//
//  An incompatible driver "%1" for device "%2" was blocked (server install). %0
//
#define MSG_LOG_DRIVER_BLOCKED_FOR_DEVICE_ERROR_NONINTERACTIVE 0x0000EFEAL

//
// MessageId: MSG_LOG_DRIVER_BLOCKED_ERROR_NONINTERACTIVE
//
// MessageText:
//
//  An incompatible driver "%1" was blocked (server install). %0
//
#define MSG_LOG_DRIVER_BLOCKED_ERROR_NONINTERACTIVE 0x0000EFEBL

//
// MessageId: MSG_LOG_DRIVER_BLOCKED_FOR_DEVICE_ERROR
//
// MessageText:
//
//  An incompatible driver "%1" for device "%2" was blocked. %0
//
#define MSG_LOG_DRIVER_BLOCKED_FOR_DEVICE_ERROR 0x0000EFECL

//
// MessageId: MSG_LOG_DRIVER_BLOCKED_ERROR
//
// MessageText:
//
//  An incompatible driver "%1" was blocked. %0
//
#define MSG_LOG_DRIVER_BLOCKED_ERROR     0x0000EFEDL

//
// MessageId: MSG_LOG_COINST_POST_CHANGE_ERROR
//
// MessageText:
//
//  Coinstaller %1!u! (Post Processing) modified status. %0
//
#define MSG_LOG_COINST_POST_CHANGE_ERROR 0x0000EFEEL

//
// MessageId: MSG_LOG_CANT_ACCESS_BDD
//
// MessageText:
//
//  Windows Driver Protection was unable to determine if the file "%1" should be blocked.
//
#define MSG_LOG_CANT_ACCESS_BDD          0x0000EFEFL

//
// MessageId: MSG_LOG_OLE_CONTROL_API_WARN
//
// MessageText:
//
//  Calling "%2" in OLE Control "%1" succeeded with HRESULT=0x%3!08x!.
//
#define MSG_LOG_OLE_CONTROL_API_WARN     0x0000EFF0L

//
// MessageId: MSG_LOG_REGISTER_PARAMS_ARGS
//
// MessageText:
//
//  Processing REGISTERDLLS section [%1]. Module: "%%%2%%\%3%4%5", Arguments: "%8", flags: 0x%6!04x!, timeout: %7!d!s.
//
#define MSG_LOG_REGISTER_PARAMS_ARGS     0x0000EFF1L

//
// MessageId: MSG_LOG_LANGMISMATCH_IGNORED
//
// MessageText:
//
//  The file "%1" with LANGID %2!04x! will be replaced by a signed file with LANGID %3!04x!.
//
#define MSG_LOG_LANGMISMATCH_IGNORED     0x0000EFF2L

//
// MessageId: MSG_LOG_CACHE_TIMEFRAME
//
// MessageText:
//
//  Cache: INF "%1" too recent to add (cache entry invalidated).
//
#define MSG_LOG_CACHE_TIMEFRAME          0x0000EFF3L

//
// MessageId: MSG_FAILED_PARSESECTION
//
// MessageText:
//
//  Unable to get WMI directives from line %1, in section "%2" in the INF: %3. %0
//
#define MSG_FAILED_PARSESECTION          0x0000EFF4L

//
// MessageId: MSG_FAILED_GET_SECURITY
//
// MessageText:
//
//  Unable to obtain security for WMI interface in section %1, in the INF: %2. %0
//
#define MSG_FAILED_GET_SECURITY          0x0000EFF5L

//
// MessageId: MSG_FAILED_SET_SECURITY
//
// MessageText:
//
//  Unable to establish the security for the WMI interface in section "%1", in the INF: %2. %0
//
#define MSG_FAILED_SET_SECURITY          0x0000EFF6L

//
// MessageId: MSG_LOG_OEM_INF_UNINSTALL_FAILED
//
// MessageText:
//
//  Error uninstalling OEM INF "%1": %0
//
#define MSG_LOG_OEM_INF_UNINSTALL_FAILED 0x0000EFF7L

//
// MessageId: MSG_LOG_VERIFYFILE_GLOBAL_VALIDATION_OK
//
// MessageText:
//
//  A valid signature for file "%1" (key "%3") was found in an installed catalog "%2".
//
#define MSG_LOG_VERIFYFILE_GLOBAL_VALIDATION_OK 0x0000EFF8L

//
// MessageId: MSG_LOG_VERIFYFILE_GLOBAL_VALIDATION_ERROR
//
// MessageText:
//
//  Verifying file "%1" (key "%3") against an installed catalog "%2" failed. %0
//
#define MSG_LOG_VERIFYFILE_GLOBAL_VALIDATION_ERROR 0x0000EFF9L

//
// MessageId: MSG_LOG_VERIFYFILE_GLOBAL_VALIDATION_NO_CATS_FOUND
//
// MessageText:
//
//  No installed catalogs matching catalog name "%2" were found that validated file "%1" (key "%3"). %0
//
#define MSG_LOG_VERIFYFILE_GLOBAL_VALIDATION_NO_CATS_FOUND 0x0000EFFAL

//
// MessageId: MSG_LOG_VERIFYFILE_AGAINST_FULLCATPATH_ERROR
//
// MessageText:
//
//  Verifying file "%1" (key "%3") against specific (valid) catalog "%2" failed. %0
//
#define MSG_LOG_VERIFYFILE_AGAINST_FULLCATPATH_ERROR 0x0000EFFBL

//
// MessageId: MSG_LOG_AUTHENTICODE_SIGNATURE_BLOCKED_FOR_SFC_SIS
//
// MessageText:
//
//  Replacement of protected file "%1" by the file "%2" (to be validated using an Authenticode(tm) catalog) was blocked.
//
#define MSG_LOG_AUTHENTICODE_SIGNATURE_BLOCKED_FOR_SFC_SIS 0x0000EFFCL

//
// MessageId: MSG_LOG_AUTHENTICODE_SIGNATURE_BLOCKED_FOR_SFC
//
// MessageText:
//
//  Replacement of protected file "%1" by a file (to be validated using an Authenticode(tm) catalog) was blocked.
//
#define MSG_LOG_AUTHENTICODE_SIGNATURE_BLOCKED_FOR_SFC 0x0000EFFDL

//
// MessageId: MSG_LOG_VERIFYCAT_VIA_AUTHENTICODE_ERROR
//
// MessageText:
//
//  Verifying catalog "%1" using Authenticode(tm) policy failed. %0
//
#define MSG_LOG_VERIFYCAT_VIA_AUTHENTICODE_ERROR 0x0000EFFEL

//
// MessageId: MSG_LOG_VERIFYFILE_AUTHENTICODE_AGAINST_FULLCATPATH_ERROR
//
// MessageText:
//
//  Verifying file "%1" (key "%3") against specific Authenticode(tm) catalog "%2" failed. %0
//
#define MSG_LOG_VERIFYFILE_AUTHENTICODE_AGAINST_FULLCATPATH_ERROR 0x0000EFFFL

//
// MessageId: MSG_LOG_VERIFYFILE_AUTHENTICODE_AGAINST_FULLCATPATH_OK
//
// MessageText:
//
//  File "%1" (key "%3") is signed in Authenticode(tm) catalog "%2". %0
//
#define MSG_LOG_VERIFYFILE_AUTHENTICODE_AGAINST_FULLCATPATH_OK 0x0000F000L

//
// MessageId: MSG_LOG_VERIFYFILE_AUTHENTICODE_GLOBAL_VALIDATION_ERROR
//
// MessageText:
//
//  Verifying file "%1" (key "%3") against an installed Authenticode(tm) catalog "%2" failed. %0
//
#define MSG_LOG_VERIFYFILE_AUTHENTICODE_GLOBAL_VALIDATION_ERROR 0x0000F001L

//
// MessageId: MSG_LOG_VERIFYFILE_AUTHENTICODE_GLOBAL_VALIDATION_OK
//
// MessageText:
//
//  A valid signature for file "%1" (key "%3") was found in an installed Authenticode(tm) catalog "%2". %0
//
#define MSG_LOG_VERIFYFILE_AUTHENTICODE_GLOBAL_VALIDATION_OK 0x0000F002L

//
// MessageId: MSG_LOG_VERIFYFILE_AUTHENTICODE_GLOBAL_VALIDATION_NO_CATS_FOUND
//
// MessageText:
//
//  No installed Authenticode(tm) catalogs matching catalog name "%2" were found that validated file "%1" (key "%3"). %0
//
#define MSG_LOG_VERIFYFILE_AUTHENTICODE_GLOBAL_VALIDATION_NO_CATS_FOUND 0x0000F003L

//
// MessageId: MSG_LOG_VERIFYFILE_AUTHENTICODE_ERROR
//
// MessageText:
//
//  Verifying file "%1" (key "%3") against catalog "%2" using Authenticode(tm) policy failed. %0
//
#define MSG_LOG_VERIFYFILE_AUTHENTICODE_ERROR 0x0000F004L

//
// MessageId: MSG_LOG_CANT_ACCESS_BDD_EXCEPTION
//
// MessageText:
//
//  Windows Driver Protection encountered an access violation when attempting to determine if the file "%1" should be blocked. %0
//
#define MSG_LOG_CANT_ACCESS_BDD_EXCEPTION 0x0000F005L

//
// MessageId: MSG_LOG_AUTHENTICODE_CERT_AUTOINSTALLED
//
// MessageText:
//
//  An Authenticode(tm) signing certificate was automatically installed during system setup. (Publisher is "%1".)
//
#define MSG_LOG_AUTHENTICODE_CERT_AUTOINSTALLED 0x0000F006L

//
// MessageId: MSG_LOG_AUTHENTICODE_CERT_AUTOINSTALL_FAILED
//
// MessageText:
//
//  An Authenticode(tm) signing certificate could not be automatically installed during system setup. (Publisher is "%1".) %0
//
#define MSG_LOG_AUTHENTICODE_CERT_AUTOINSTALL_FAILED 0x0000F007L

