/*++

Copyright (c) 2000  Microsoft Corporation

Module Name:

    vssmsg.h

Abstract:

    Constant definitions for the volume shadow copy log entries.

Author:

    Adi Oltean

Revision History:

    [aoltean] Adding log entries for the VSS initialization and COM+ logging.

       X-2     MCJ             Michael C. Johnson              18-Oct-2000
               177624: Apply shim error scrub changes and log errors to event log

--*/
#ifndef __VSSMSG_H__
#define __VSSMSG_H__
//
// Volume Shadow Copy Service initialization errors (range 0001-1000)
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
// MessageId: VSS_ERROR_STARTING_SERVICE_CTRL_DISPATCHER
//
// MessageText:
//
//  Volume Shadow Copy Service initialization error: the control dispatcher cannot be started [%1].
//
#define VSS_ERROR_STARTING_SERVICE_CTRL_DISPATCHER 0x00000001L

//
// MessageId: VSS_ERROR_STARTING_SERVICE_REG_CTRL_HANDLER
//
// MessageText:
//
//  Volume Shadow Copy Service initialization error: the control handler cannot be registered [%1].
//
#define VSS_ERROR_STARTING_SERVICE_REG_CTRL_HANDLER 0x00000002L

//
// MessageId: VSS_ERROR_STARTING_SERVICE_CO_INIT_FAILURE
//
// MessageText:
//
//  Volume Shadow Copy Service initialization error: the COM library cannot be initialized [%1].
//
#define VSS_ERROR_STARTING_SERVICE_CO_INIT_FAILURE 0x00000003L

//
// MessageId: VSS_ERROR_STARTING_SERVICE_CO_INITSEC_FAILURE
//
// MessageText:
//
//  Volume Shadow Copy Service initialization error: the COM security cannot be initialized [%1].
//
#define VSS_ERROR_STARTING_SERVICE_CO_INITSEC_FAILURE 0x00000004L

//
// MessageId: VSS_ERROR_STARTING_SERVICE_CLASS_REG
//
// MessageText:
//
//  Volume Shadow Copy Service initialization error: the COM classes cannot be registered [%1].
//
#define VSS_ERROR_STARTING_SERVICE_CLASS_REG 0x00000005L

//
// MessageId: VSS_ERROR_STARTING_SERVICE_UNEXPECTED_INIT_FAILURE
//
// MessageText:
//
//  Volume Shadow Copy Service initialization error: [%1].
//
#define VSS_ERROR_STARTING_SERVICE_UNEXPECTED_INIT_FAILURE 0x00000006L

//
// MessageId: VSS_ERROR_SET_SERVICE_STATUS
//
// MessageText:
//
//  Unexpected error when changing the SCM status of the Volume Shadow Copy Service: [%1, %2].
//
#define VSS_ERROR_SET_SERVICE_STATUS     0x00000007L

//
// MessageId: VSS_INFO_SERVICE_STARTUP
//
// MessageText:
//
//  Volume Shadow Copy Service information: Service starting at request of process '%1'. [%2]
//
#define VSS_INFO_SERVICE_STARTUP         0x00000008L

//
// MessageId: VSS_WARNING_INVALID_VOLUME
//
// MessageText:
//
//  Volume Shadow Copy Service information: Volume '%1' appears as disconnected and it is
//  ignored by the service. You may want to rescan disks. [%2]
//
#define VSS_WARNING_INVALID_VOLUME       0x00000009L

//
// MessageId: VSS_ERROR_STARTING_COM_SERVER_HEAVYLOAD
//
// MessageText:
//
//  Volume Shadow Copy Service information: The COM Server with CLSID %1 and name %2 cannot be started.
//  Most likely the CPU is under heavy load. [%3]
//
#define VSS_ERROR_STARTING_COM_SERVER_HEAVYLOAD 0x0000000AL

//
// MessageId: VSS_ERROR_STARTING_COM_SERVER
//
// MessageText:
//
//  Volume Shadow Copy Service information: The COM Server with CLSID %1 and name %2 cannot be started. [%3]
//
#define VSS_ERROR_STARTING_COM_SERVER    0x0000000BL

//
// MessageId: VSS_WARNING_CREATING_HARDWARE_DATABASE
//
// MessageText:
//
//  Volume Shadow Copy Service information: A database of hardware snapshots was created.
//
#define VSS_WARNING_CREATING_HARDWARE_DATABASE 0x0000000CL

//
// MessageId: VSS_ERROR_WRONG_USER_NAME
//
// MessageText:
//
//  The user name %1 specified in registry (%2) does not map to a real user name. The entry is ignored.
//
#define VSS_ERROR_WRONG_USER_NAME        0x0000000DL

//
// MessageId: VSS_ERROR_WRONG_REG_USER_VALUE_TYPE
//
// MessageText:
//
//  The value with name %1 specified in registry (%2) is not of type REG_DWORD. The entry is ignored.
//
#define VSS_ERROR_WRONG_REG_USER_VALUE_TYPE 0x0000000EL

//
// MessageId: VSS_ERROR_WRONG_REG_USER_VALUE
//
// MessageText:
//
//  The value with name %1 specified in registry (%2) must be either '0' or '1'. 
//  The current value (%3) cannot be interpreted. The entry is ignored.
//
#define VSS_ERROR_WRONG_REG_USER_VALUE   0x0000000FL

//
// MessageId: VSS_ERROR_STARTING_COM_SERVER_SAFEBOOT
//
// MessageText:
//
//  Volume Shadow Copy Service error: The COM Server with CLSID %1 and name %2 cannot be started during Safe Mode. 
//  The Volume Shadow Copy service cannot start while in safe mode. [%3]
//
#define VSS_ERROR_STARTING_COM_SERVER_SAFEBOOT 0x00000010L

//
// MessageId: VSS_ERROR_STARTING_EVENTS_SAFEBOOT
//
// MessageText:
//
//  Volume Shadow Copy Service error: The EventSystem service is disabled or is attempting to start during Safe Mode. 
//  The Volume Shadow Copy service cannot start while in safe mode.
//  If not in safe mode, make sure that EventSystem service is enabled.
//  CLSID:%1 Name:%2 [%3]
//
#define VSS_ERROR_STARTING_EVENTS_SAFEBOOT 0x00000011L

//
// MessageId: VSS_ERROR_SAFE_MODE
//
// MessageText:
//
//  Volume Shadow Copy Service error: The Volume Shadow Copy infrastructure cannot be used during Safe Mode.
//
#define VSS_ERROR_SAFE_MODE              0x00000012L

//
// MessageId: VSS_ERROR_COMPLUS_CORRUPTED
//
// MessageText:
//
//  Volume Shadow Copy Service error: Writers will not receive events since the COM+ database is corrupted. 
//  This might happened if an error occurred during Windows setup. 
//  The error returned from CoCreateInstance on class with CLSID %1 and Name %2 is [%3]
//
#define VSS_ERROR_COMPLUS_CORRUPTED      0x00000013L

//
// MessageId: VSS_ERROR_COM_SERVER_NOT_REGISTERED
//
// MessageText:
//
//  Volume Shadow Copy Service error: A critical component required by the Volume Shadow Copy service is not registered. 
//  This might happened if an error occurred during Windows setup or during installation of a Shadow Copy provider. 
//  The error returned from CoCreateInstance on class with CLSID %1 and Name %2 is [%3].
//
#define VSS_ERROR_COM_SERVER_NOT_REGISTERED 0x00000014L

//
// COM+ Admin related errors (range 1001-2000)
//
//
// MessageId: VSS_ERROR_CREATING_COMPLUS_ADMIN_CATALOG
//
// MessageText:
//
//  Volume Shadow Copy Service error: The COM+ Admin catalog instance cannot be created [%1].
//
#define VSS_ERROR_CREATING_COMPLUS_ADMIN_CATALOG 0x00001001L

//
// MessageId: VSS_ERROR_INSTALL_EVENT_CLASS
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot install the event class %1 into the COM+ application '%2' [%3].
//
#define VSS_ERROR_INSTALL_EVENT_CLASS    0x00001002L

//
// MessageId: VSS_ERROR_INSTALL_COMPONENT
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot install the component %1 into the COM+ application '%2' [%3].
//
#define VSS_ERROR_INSTALL_COMPONENT      0x00001003L

//
// MessageId: VSS_ERROR_CREATE_SERVICE_FOR_APPLICATION
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot create service '%1' for the COM+ application '%2' [%3].
//
#define VSS_ERROR_CREATE_SERVICE_FOR_APPLICATION 0x00001004L

//
// MessageId: VSS_ERROR_GETTING_COLLECTION
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot obtain the collection '%1' from the COM+ catalog [%2].
//
#define VSS_ERROR_GETTING_COLLECTION     0x00001005L

//
// MessageId: VSS_ERROR_POPULATING_COLLECTION
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot populate the COM+ collection '%1' [%2].
//
#define VSS_ERROR_POPULATING_COLLECTION  0x00001006L

//
// MessageId: VSS_ERROR_GET_COLLECTION_KEY
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot get the COM+ collection key [%1].
//
#define VSS_ERROR_GET_COLLECTION_KEY     0x00001007L

//
// MessageId: VSS_ERROR_GET_COLLECTION_FROM_PARENT
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot get the COM+ collection '%1' from parent [%2].
//
#define VSS_ERROR_GET_COLLECTION_FROM_PARENT 0x00001008L

//
// MessageId: VSS_ERROR_SAVING_CHANGES
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot save the changes for the COM+ collection [%1].
//
#define VSS_ERROR_SAVING_CHANGES         0x00001009L

//
// MessageId: VSS_ERROR_CREATING_SUBSCRIPTION
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot create a subscription (%1,%2,%3) [%4].
//
#define VSS_ERROR_CREATING_SUBSCRIPTION  0x0000100AL

//
// MessageId: VSS_ERROR_ATTACH_SUB_BY_NAME
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot attach to the subscription with name (%1) [%2].
//
#define VSS_ERROR_ATTACH_SUB_BY_NAME     0x0000100BL

//
// MessageId: VSS_ERROR_REMOVE_SUB
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot remove the subscription with index %1 [%2].
//
#define VSS_ERROR_REMOVE_SUB             0x0000100CL

//
// MessageId: VSS_ERROR_INSERT_INTO
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot insert the new object into the COM+ catalog  [%1].
//
#define VSS_ERROR_INSERT_INTO            0x0000100DL

//
// MessageId: VSS_ERROR_ATTACH_TO_APP
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot attach the catalog object to the COM+ application [%1].
//
#define VSS_ERROR_ATTACH_TO_APP          0x0000100EL

//
// MessageId: VSS_ERROR_ATTACH_COLL_BY_NAME
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot attach to the subscription with name (%1) [%2].
//
#define VSS_ERROR_ATTACH_COLL_BY_NAME    0x0000100FL

//
// MessageId: VSS_ERROR_GETTING_CURRENT_DIR
//
// MessageText:
//
//  Volume Shadow Copy Service error: Error getting current directory [%2].
//
#define VSS_ERROR_GETTING_CURRENT_DIR    0x00001010L

//
// MessageId: VSS_ERROR_REMOVING_APPLICATION
//
// MessageText:
//
//  Volume Shadow Copy Service error: Error Removing COM+ application (%1) [%2].
//
#define VSS_ERROR_REMOVING_APPLICATION   0x00001011L

//
// Backup Extensions related errors (range 2001-3000)
//
//
// MessageId: VSS_ERROR_UNEXPECTED_CALLING_ROUTINE
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unexpected error calling routine %1.  hr = %2.
//
#define VSS_ERROR_UNEXPECTED_CALLING_ROUTINE 0x00002001L

//
// MessageId: VSS_ERROR_QI_IVSSWRITERCALLBACK
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unexpected error querying for the IVssWriterCallback interface.  hr = %1.
//
#define VSS_ERROR_QI_IVSSWRITERCALLBACK  0x00002002L

//
// MessageId: VSS_ERROR_WRITER_COMPONENTS_CORRUPT
//
// MessageText:
//
//  Volume Shadow Copy Service error: Internally transferred WRITER_COMPONENTS document is invalid.
//
#define VSS_ERROR_WRITER_COMPONENTS_CORRUPT 0x00002003L

//
// MessageId: VSS_ERROR_EMPTY_SNAPSHOT_SET
//
// MessageText:
//
//  Volume Shadow Copy Service error: No volumes in the shadow copy set.
//
#define VSS_ERROR_EMPTY_SNAPSHOT_SET     0x00002004L

//
// MessageId: VSS_ERROR_EXPECTED_INSUFFICENT_BUFFER
//
// MessageText:
//
//  Volume Shadow Copy Service error: ERROR_INSUFFICIENT_BUFFER expected error.  Actual Error was [%1].
//
#define VSS_ERROR_EXPECTED_INSUFFICENT_BUFFER 0x00002005L

//
// MessageId: VSS_ERROR_GET_TOKEN_INFORMATION_BUFFER_SIZE_MISMATCH
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unexpected error. Final buffer for call to GetTokenInformation was size = %1, original size was %2.
//
#define VSS_ERROR_GET_TOKEN_INFORMATION_BUFFER_SIZE_MISMATCH 0x00002006L

//
// MessageId: VSS_ERROR_QI_IXMLDOMNODE_TO_IXMLDOMELEMENT
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unexpected error performing QueryInterface from IXMLDOMNode to IXMLDOMElement.  hr = %1.
//
#define VSS_ERROR_QI_IXMLDOMNODE_TO_IXMLDOMELEMENT 0x00002007L

//
// MessageId: VSS_ERROR_CORRUPTXMLDOCUMENT_MISSING_ELEMENT
//
// MessageText:
//
//  Volume Shadow Copy Service error: An unexpected error was encountered examining the XML document.  The document is missing the %1 element.
//
#define VSS_ERROR_CORRUPTXMLDOCUMENT_MISSING_ELEMENT 0x00002008L

//
// MessageId: VSS_ERROR_CORRUPTXMLDOCUMENT_MISSING_ATTRIBUTE
//
// MessageText:
//
//  Volume Shadow Copy Service error: An unexpected error was encountered examining the XML document.  The document is missing the %1 attribute.
//
#define VSS_ERROR_CORRUPTXMLDOCUMENT_MISSING_ATTRIBUTE 0x00002009L

//
// MessageId: VSS_ERROR_QI_IDISPATCH_FAILED
//
// MessageText:
//
//  Volume Shadow Copy Service error: An unexpected error was encountered when QueryInterface for IDispatch was called.  hr = %1 attribute.
//
#define VSS_ERROR_QI_IDISPATCH_FAILED    0x0000200AL

//
// MessageId: VSS_ERROR_CLONE_MISSING_CHILDREN
//
// MessageText:
//
//  Volume Shadow Copy Service error: An unexpected error was encountered cloning a document.  The cloned document has no children.
//
#define VSS_ERROR_CLONE_MISSING_CHILDREN 0x0000200BL

//
// MessageId: VSS_ERROR_INVALID_XML_DOCUMENT_FROM_WRITER
//
// MessageText:
//
//  Volume Shadow Copy Service error: An invalid XML document was returned from writer %1.
//
#define VSS_ERROR_INVALID_XML_DOCUMENT_FROM_WRITER 0x0000200CL

//
// MessageId: VSS_ERROR_QI_IVSSSHIM_FAILED
//
// MessageText:
//
//  Volume Shadow Copy Service error: An error occured calling QueryInterface from IVssCoordinator to IVssShim.  hr = %1.
//
#define VSS_ERROR_QI_IVSSSHIM_FAILED     0x0000200DL

//
// MessageId: VSS_ERROR_DUPLICATE_WRITERS
//
// MessageText:
//
//  Volume Shadow Copy Service error: There are two writers with the identical instance id %1.
//
#define VSS_ERROR_DUPLICATE_WRITERS      0x0000200EL

//
// MessageId: VSS_ERROR_QI_IVSSASYNC_FAILED
//
// MessageText:
//
//  Volume Shadow Copy Service error: An unexpected error was encountered when calling QueryInterface for IVssAsync.  hr = %1.
//
#define VSS_ERROR_QI_IVSSASYNC_FAILED    0x0000200FL

//
// MessageId: VSS_ERROR_BACKUPCOMPONENTS_NULL
//
// MessageText:
//
//  Volume Shadow Copy Service error: The backup components document is NULL.
//
#define VSS_ERROR_BACKUPCOMPONENTS_NULL  0x00002010L

//
// MessageId: VSS_ERROR_THREADHANDLE_NULL
//
// MessageText:
//
//  Volume Shadow Copy Service error: The thread handle for the asynchronous thread is NULL.
//
#define VSS_ERROR_THREADHANDLE_NULL      0x00002011L

//
// MessageId: VSS_ERROR_WAITFORSINGLEOBJECT
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unexpected error %1 was returned from WaitForSingleObject.
//
#define VSS_ERROR_WAITFORSINGLEOBJECT    0x00002012L

//
// MessageId: VSS_ERROR_SAFE_MODE_WRITER
//
// MessageText:
//
//  Volume Shadow Copy Service error: Writer with name %1 and ID %2 attempted to subscribe in safe mode.
//
#define VSS_ERROR_SAFE_MODE_WRITER       0x00002013L

//
// MessageId: VSS_ERROR_SETUP_WRITER
//
// MessageText:
//
//  Volume Shadow Copy Service error: Writer with name %1 and ID %2 attempted to subscribe during setup.
//
#define VSS_ERROR_SETUP_WRITER           0x00002014L

//
// MessageId: VSS_ERROR_NON_PRIVILEGED_WRITER
//
// MessageText:
//
//  Volume Shadow Copy Service error: The process that hosts the writer with name %1 and ID %2 does not run under a user with sufficient access rights. 
//  Consider running this process under a local account which is either Local System, Administrator or Backup operator.
//
#define VSS_ERROR_NON_PRIVILEGED_WRITER  0x00002015L

//
// MessageId: VSS_ERROR_RPC_IVSSWRITERCALLBACK
//
// MessageText:
//
//  Volume Shadow Copy Service error: The shadow copy writer could not communicate with the Shadow Copy publisher.
//  The shadow copy publisher (for example the backup application) might have terminated during the shadow copy process. 
//  hr = %1.
//
#define VSS_ERROR_RPC_IVSSWRITERCALLBACK 0x00002016L

//
// Volume Shadow Copy Service internal errors (range 3001-4000)
//
//
// MessageId: VSS_ERROR_UNEXPECTED_ERRORCODE
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unexpected error %1.  hr = %2.
//
#define VSS_ERROR_UNEXPECTED_ERRORCODE   0x00003001L

//
// MessageId: VSS_WARNING_UNEXPECTED
//
// MessageText:
//
//  Volume Shadow Copy Service warning: %1.  hr = %2.
//
#define VSS_WARNING_UNEXPECTED           0x00003002L

//
// MessageId: VSS_ERROR_UNEXPECTED_WRITER_ERROR
//
// MessageText:
//
//  Volume Shadow Copy Service error: Error on creating/using the COM+ Writers publisher interface: %1 [%2].
//
#define VSS_ERROR_UNEXPECTED_WRITER_ERROR 0x00003003L

//
// MessageId: VSS_ERROR_CREATING_PROVIDER_CLASS
//
// MessageText:
//
//  Volume Shadow Copy Service error: Error creating the Shadow Copy Provider COM class with CLSID %1 [%2].
//
#define VSS_ERROR_CREATING_PROVIDER_CLASS 0x00003004L

//
// MessageId: VSS_ERROR_CALLING_PROVIDER_ROUTINE
//
// MessageText:
//
//  Volume Shadow Copy Service error: Error calling a routine on the Shadow Copy Provider %1. Routine details %2 [hr = %3].
//
#define VSS_ERROR_CALLING_PROVIDER_ROUTINE 0x00003005L

//
// MessageId: VSS_ERROR_CALLING_PROVIDER_ROUTINE_INVALIDARG
//
// MessageText:
//
//  Volume Shadow Copy Service error: Error calling a routine on the Shadow Copy Provider %1. Routine returned E_INVALIDARG.
//  Routine details %2.
//
#define VSS_ERROR_CALLING_PROVIDER_ROUTINE_INVALIDARG 0x00003006L

//
// MessageId: VSS_ERROR_WRONG_REGISTRY_TYPE_VALUE
//
// MessageText:
//
//  Volume Shadow Copy Service error: Wrong type %1 (should be %2) for the
//  Registry value %3 under the key %4.
//
#define VSS_ERROR_WRONG_REGISTRY_TYPE_VALUE 0x00003007L

//
// MessageId: VSS_ERROR_THREAD_CREATION
//
// MessageText:
//
//  Volume Shadow Copy Service error: The system may be low on resources.
//  Unexpected error at background thread creation
//  (_beginthreadex returns %1, errno = %2).
//
#define VSS_ERROR_THREAD_CREATION        0x00003008L

//
// MessageId: VSS_ERROR_FLUSH_WRITES_TIMEOUT
//
// MessageText:
//
//  Volume Shadow Copy Service error: The I/O writes cannot be flushed during the shadow copy creation period on volume %1.
//  The volume index in the shadow copy set is %2. Error details: Open[%3], Flush[%4], Release[%5], OnRun[%6].
//
#define VSS_ERROR_FLUSH_WRITES_TIMEOUT   0x00003009L

//
// MessageId: VSS_ERROR_HOLD_WRITES_TIMEOUT
//
// MessageText:
//
//  Volume Shadow Copy Service error: The I/O writes cannot be held during the shadow copy creation period on volume %1.
//  The volume index in the shadow copy set is %2. Error details: Open[%3], Flush[%4], Release[%5], OnRun[%6].
//
#define VSS_ERROR_HOLD_WRITES_TIMEOUT    0x0000300AL

//
// MessageId: VSS_ERROR_INVALID_SNAPSHOTS_COUNT
//
// MessageText:
//
//  Volume Shadow Copy Service error: One of the shadow copy providers returned an invalid number of committed shadow copies.
//  The expected number of committed shadow copies is %1. The detected number of committed shadow copies is %2.
//
#define VSS_ERROR_INVALID_SNAPSHOTS_COUNT 0x0000300BL

//
// MessageId: VSS_ERROR_INITIALIZE_WRITER_DURING_SETUP
//
// MessageText:
//
//  Volume Shadow Copy Service error: Writer %1 called CVssWriter::Initialize during Setup.
//
#define VSS_ERROR_INITIALIZE_WRITER_DURING_SETUP 0x0000300CL

//
// MessageId: VSS_ERROR_WRITER_NOT_RESPONDING
//
// MessageText:
//
//  Volume Shadow Copy Service error: Writer %1 did not respond to a GatherWriterStatus call.
//
#define VSS_ERROR_WRITER_NOT_RESPONDING  0x0000300DL

//
// MessageId: VSS_ERROR_WRITER_INFRASTRUCTURE
//
// MessageText:
//
//  Volume Shadow Copy Service error: An internal inconsistency was detected in trying
//  to contact shadow copy service writers.  Please check to see that the Event Service
//  and Volume Shadow Copy Service are operating properly.
//
#define VSS_ERROR_WRITER_INFRASTRUCTURE  0x0000300EL

//
// MessageId: VSS_ERROR_BLANKET_FAILED
//
// MessageText:
//
//  An error occurred calling CoSetProxyBlanket.  hr = %1
//
#define VSS_ERROR_BLANKET_FAILED         0x0000300FL

//
// MessageId: VSS_ERROR_QI_IMULTIINTERFACEEVENTCONTROL_FAILED
//
// MessageText:
//
//  An error occurred trying to QI the IVssWriter event object for
//  IMultiInterfaceEventControl.  hr = %1
//
#define VSS_ERROR_QI_IMULTIINTERFACEEVENTCONTROL_FAILED 0x00003010L

//
// MessageId: VSS_ERROR_DEVICE_NOT_CONNECTED
//
// MessageText:
//
//  Volume Shadow Copy Service error: Volume/disk not connected or not found.
//  Error context: %1.
//
#define VSS_ERROR_DEVICE_NOT_CONNECTED   0x00003011L

//
// MessageId: VSS_ERROR_BAD_SNAPSHOT_DATABASE
//
// MessageText:
//
//  Database of hardware shadow copy sets is not valid.  Contents are ignored.
//
#define VSS_ERROR_BAD_SNAPSHOT_DATABASE  0x00003012L

//
// MessageId: VSS_ERROR_CANNOT_SAVE_SNAPSHOT_DATABASE
//
// MessageText:
//
//  Cannot save database of hardware shadow copy sets: hr = %1.
//
#define VSS_ERROR_CANNOT_SAVE_SNAPSHOT_DATABASE 0x00003013L

//
// MessageId: VSS_ERROR_INVALID_SNAPSHOTTED_VOLUME
//
// MessageText:
//
//  Volume %1 appears to be invalid or dismounted during shadow copy creation.
//
#define VSS_ERROR_INVALID_SNAPSHOTTED_VOLUME 0x00003014L

//
// MessageId: VSS_ERROR_ASSERT
//
// MessageText:
//
//  VSS Assert Failure: %1
//
#define VSS_ERROR_ASSERT                 0x00003015L

//
// MessageId: VSS_ERROR_COMMIT_TIMEOUT
//
// MessageText:
//
//  Volume Shadow Copy Service error: The shadow copy could not be committed - operation timed out.
//  Error context: %1.
//
#define VSS_ERROR_COMMIT_TIMEOUT         0x00003016L

//
// MessageId: VSS_ERROR_UNEXPECTED_COM_ERRORCODE
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unexpected error %1: %2 hr = %3.
//
#define VSS_ERROR_UNEXPECTED_COM_ERRORCODE 0x00003017L

//
// Microsoft Software Shadow Copy Provider internal errors (range 4001-5000)
//
//
// MessageId: VSS_ERROR_NO_DIFF_AREAS_CANDIDATES
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot find diff areas for creating shadow copies.
//  Please add at least one NTFS drive to the system with enough free space.
//  The free space needed is at least 100 Mb for each volume to be shadow copied.
//
#define VSS_ERROR_NO_DIFF_AREAS_CANDIDATES 0x00000FA1L

//
// MessageId: VSS_ERROR_MULTIPLE_SNAPSHOTS_UNSUPPORTED
//
// MessageText:
//
//  Volume Shadow Copy Service error: Cannot create multiple shadow copies on the same volume (%1)
//
#define VSS_ERROR_MULTIPLE_SNAPSHOTS_UNSUPPORTED 0x00000FA2L

//
// Microsoft Shim writer(s) internal errors (range 5001-6000)
//
//
// MessageId: VSS_ERROR_SHIM_ALREADY_INITIALISED
//
// MessageText:
//
//  Volume Shadow Copy Service error: The system shadow copy writers are already initialized.
//
#define VSS_ERROR_SHIM_ALREADY_INITIALISED 0x00001389L

//
// MessageId: VSS_ERROR_SHIM_FAILED_TO_ALLOCATE_WRITER_INSTANCE
//
// MessageText:
//
//  Volume Shadow Copy Service error: Insufficient memory to allocate writer instance for the %1 writer.
//
#define VSS_ERROR_SHIM_FAILED_TO_ALLOCATE_WRITER_INSTANCE 0x0000138AL

//
// MessageId: VSS_ERROR_SHIM_WORKER_THREAD_ALREADY_RUNNING
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unable to start worker thread for the %1 writer due to pre-existing handles for the thread, the mutex or the events.
//
#define VSS_ERROR_SHIM_WORKER_THREAD_ALREADY_RUNNING 0x0000138BL

//
// MessageId: VSS_ERROR_SHIM_FAILED_TO_CONSTRUCT_MUTEX_SECURITY_ATTRIBUTES
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unable to construct the mutex security attributes for the mutex %3 in the %4 writer due to status %1 (converted to %2).
//
#define VSS_ERROR_SHIM_FAILED_TO_CONSTRUCT_MUTEX_SECURITY_ATTRIBUTES 0x0000138CL

//
// MessageId: VSS_ERROR_SHIM_FAILED_TO_CREATE_WORKER_MUTEX
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unable to create mutex %3 for the %4 writer due to status %1 (converted to %2).
//
#define VSS_ERROR_SHIM_FAILED_TO_CREATE_WORKER_MUTEX 0x0000138DL

//
// MessageId: VSS_ERROR_SHIM_FAILED_TO_CREATE_WORKER_REQUEST_EVENT
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unable to create worker thread operation request event for the %3 writer due to status %1 (converted to %2).
//
#define VSS_ERROR_SHIM_FAILED_TO_CREATE_WORKER_REQUEST_EVENT 0x0000138EL

//
// MessageId: VSS_ERROR_SHIM_FAILED_TO_CREATE_WORKER_COMPLETION_EVENT
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unable to create worker thread operation completion event for the %3 writer due to status %1 (converted to %2).
//
#define VSS_ERROR_SHIM_FAILED_TO_CREATE_WORKER_COMPLETION_EVENT 0x0000138FL

//
// MessageId: VSS_ERROR_SHIM_FAILED_TO_CREATE_WORKER_THREAD
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unable to create worker thread for the %3 writer due to status %1 (converted to %2).
//
#define VSS_ERROR_SHIM_FAILED_TO_CREATE_WORKER_THREAD 0x00001390L

//
// MessageId: VSS_ERROR_SHIM_ILLEGAL_INITIALISATION_TYPE_REQUESTED
//
// MessageText:
//
//  Volume Shadow Copy Service error: Illegal initialisation type (%1) requested.
//
#define VSS_ERROR_SHIM_ILLEGAL_INITIALISATION_TYPE_REQUESTED 0x00001391L

//
// MessageId: VSS_ERROR_SHIM_GENERAL_FAILURE
//
// MessageText:
//
//  Volume Shadow Copy Service error: Shadow Copy shim failed with status %1 (converted to %2).
//
#define VSS_ERROR_SHIM_GENERAL_FAILURE   0x00001392L

//
// MessageId: VSS_ERROR_SHIM_WRITER_GENERAL_FAILURE
//
// MessageText:
//
//  Volume Shadow Copy Service error: Shadow Copy writer %3 failed with status %1 (converted to %2).
//
#define VSS_ERROR_SHIM_WRITER_GENERAL_FAILURE 0x00001393L

//
// MessageId: VSS_ERROR_SHIM_FAILED_SYSTEM_CALL
//
// MessageText:
//
//  Volume Shadow Copy Service error: Shadow Copy shim called routine %3 which failed with status %1 (converted to %2).
//
#define VSS_ERROR_SHIM_FAILED_SYSTEM_CALL 0x00001394L

//
// MessageId: VSS_ERROR_SHIM_WRITER_FAILED_SYSTEM_CALL
//
// MessageText:
//
//  Volume Shadow Copy Service error: Shadow Copy writer %3 called routine %4 which failed with status %1 (converted to %2).
//
#define VSS_ERROR_SHIM_WRITER_FAILED_SYSTEM_CALL 0x00001395L

//
// MessageId: VSS_ERROR_SHIM_WRITER_NO_WORKER_THREAD
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unable to request operation %2 as no worker thread for writer %1.
//
#define VSS_ERROR_SHIM_WRITER_NO_WORKER_THREAD 0x00001396L

//
// MessageId: VSS_ERROR_SHIM_WRITER_FAILED_TO_CHANGE_STATE
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unable to change from state %1 to state %2 in writer %3 (Status %4).
//
#define VSS_ERROR_SHIM_WRITER_FAILED_TO_CHANGE_STATE 0x00001397L

//
// MessageId: VSS_ERROR_SHIM_WRITER_FAILED_OPERATION
//
// MessageText:
//
//  Volume Shadow Copy Service error: Unable to process requested operation %4 in writer %3 due to status %1 (Converted to %2).
//
#define VSS_ERROR_SHIM_WRITER_FAILED_OPERATION 0x00001398L

//
// Microsoft Sql Writer Message (range 6001-7000)
//
//
// MessageId: VSS_ERROR_SQLLIB_CANT_CREATE_EVENT
//
// MessageText:
//
//  Sqllib error: Cannot create an event due to error %1.
//
#define VSS_ERROR_SQLLIB_CANT_CREATE_EVENT 0x00001771L

//
// MessageId: VSS_ERROR_SQLLIB_DATABASE_NOT_IN_SYSDATABASES
//
// MessageText:
//
//  Sqllib error: Database %1 is not in sysdatabases.
//
#define VSS_ERROR_SQLLIB_DATABASE_NOT_IN_SYSDATABASES 0x00001772L

//
// MessageId: VSS_ERROR_SQLLIB_SYSALTFILESEMPTY
//
// MessageText:
//
//  Sqllib error: sysaltfiles is empty.
//
#define VSS_ERROR_SQLLIB_SYSALTFILESEMPTY 0x00001773L

//
// MessageId: VSS_ERROR_SQLLIB_DATABASENOTSIMPLE
//
// MessageText:
//
//  Sqllib error: Database %1 is not simple.
//
#define VSS_ERROR_SQLLIB_DATABASENOTSIMPLE 0x00001774L

//
// MessageId: VSS_ERROR_SQLLIB_DATABASEISTORN
//
// MessageText:
//
//  Sqllib error: Database %1 is stored on multiple volumes, only some of
//  which are being shadowed.
//
#define VSS_ERROR_SQLLIB_DATABASEISTORN  0x00001775L

//
// MessageId: VSS_ERROR_SQLLIB_ERRORTHAWSERVER
//
// MessageText:
//
//  Sqllib error: Error thawing server %1.
//
#define VSS_ERROR_SQLLIB_ERRORTHAWSERVER 0x00001776L

//
// MessageId: VSS_ERROR_SQLLIB_NORESULTFORSYSDB
//
// MessageText:
//
//  Sqllib error: sysdatabases is empty.
//
#define VSS_ERROR_SQLLIB_NORESULTFORSYSDB 0x00001777L

//
// MessageId: VSS_ERROR_SQLLIB_CANTCREATEVDS
//
// MessageText:
//
//  Sqllib error: Failed to create VDS object. hr = %1.
//
#define VSS_ERROR_SQLLIB_CANTCREATEVDS   0x00001778L

//
// MessageId: VSS_ERROR_SQLLIB_UNSUPPORTEDMDAC
//
// MessageText:
//
//  Sqllib error: Unsupported MDAC stack major version=%1 minor version=%2
//
#define VSS_ERROR_SQLLIB_UNSUPPORTEDMDAC 0x00001779L

//
// MessageId: VSS_ERROR_SQLLIB_UNSUPPORTEDSQLSERVER
//
// MessageText:
//
//  Sqllib error: Unsupported Sql Server version %1.
//
#define VSS_ERROR_SQLLIB_UNSUPPORTEDSQLSERVER 0x0000177AL

//
// MessageId: VSS_ERROR_SQLLIB_SQLAllocHandle_FAILED
//
// MessageText:
//
//  Sqllib error: ODBC SQLAllocHandle failed.
//
#define VSS_ERROR_SQLLIB_SQLAllocHandle_FAILED 0x0000177BL

//
// MessageId: VSS_ERROR_SQLLIB_ODBC_ERROR
//
// MessageText:
//
//  Sqllib error: ODBC Error encountered calling %1.
//  %2
//
#define VSS_ERROR_SQLLIB_ODBC_ERROR      0x0000177CL

//
// MessageId: VSS_ERROR_SQLLIB_OLEDB_ERROR
//
// MessageText:
//
//  Sqllib error: OLEDB Error encountered calling %1. hr = %2.
//  %3
//
#define VSS_ERROR_SQLLIB_OLEDB_ERROR     0x0000177DL

//
// MessageId: VSS_ERROR_SQLLIB_FINALCOMMANDNOTCLOSE
//
// MessageText:
//
//  Sqllib error: Final GetCommand from IClientVirtualDevice did not return VD_E_CLOSE.
//  It returned hr = %1 instead.
//
#define VSS_ERROR_SQLLIB_FINALCOMMANDNOTCLOSE 0x0000177EL

//
// Microsoft VssAdmin.exe event log Messages (range 7001-8000)
//
//
// MessageId: VSS_ERROR_VSSADMIN_ERROR
//
// MessageText:
//
//  VssAdmin: %1: %2%nCommand-line: '%3'.
//
#define VSS_ERROR_VSSADMIN_ERROR         0x00001B59L

#endif // __VSSMSG_H__
