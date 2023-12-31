FacilityNames=(
        None=0
        MSMQ=0x0e
        )
;
;#ifndef __MQSYMBLS_H
;#define __MQSYMBLS_H
;

;#define MQ_E_BASE                          (0xC0000000 + (FACILITY_MSMQ << 16))
;#define MQ_I_BASE                          (0x40000000 + (FACILITY_MSMQ << 16))
;
;//
;//
;// begin_mq_h
;
;/////////////////////////////////////////////////////////////////////////
;//
;// Message Queuing Success values
;//
;//
;/////////////////////////////////////////////////////////////////////////
;
;#define MQ_OK                       ((HRESULT)0L)
;

;/////////////////////////////////////////////////////////////////////////
;//
;// Message Queuing Information values
;//
;//
;/////////////////////////////////////////////////////////////////////////
;

MessageIdTypedef = HRESULT


MessageId=1
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_PROPERTY
Language=English        ;Owner=uribz    Reviewers=none
One or more of the properties passed resulted in a warning, but the function completed.
.

MessageId=2
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_ILLEGAL_PROPERTY
Language=English        ;Owner=uribz    Reviewers=none
The property ID is invalid.
.

MessageId=3
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_PROPERTY_IGNORED
Language=English        ;Owner=uribz    Reviewers=none
The property specified was ignored for this operation (this occurs,
for example, when PROPID_M_SENDERID is passed to SendMessage()).
.

MessageId=4
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_UNSUPPORTED_PROPERTY
Language=English        ;Owner=uribz    Reviewers=none
The property specified is not supported and was ignored for this operation.
.

MessageId=5
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_DUPLICATE_PROPERTY
Language=English        ;Owner=uribz    Reviewers=none
The property specified is already in the property identifier array.
The duplicate was ignored for this operation.
.

MessageId=6
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_OPERATION_PENDING
Language=English        ;Owner=shaik    Reviewers=none
An asynchronous operation is currently pending.
.

MessageId=9
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_FORMATNAME_BUFFER_TOO_SMALL
Language=English        ;Owner=uribz    Reviewers=none
The format name buffer supplied to MQCreateQueue was too small
to hold the format name, however the queue was created successfully.
.

MessageId=10
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_INTERNAL_USER_CERT_EXIST
Language=English        ;Owner=ilanh    Reviewers=none
An internal Message Queuing certificate already exists for this user.
.

MessageId=11
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_OWNER_IGNORED
Language=English        ;Owner=ilanh    Reviewers=none
The queue owner was not set during the processing of this call to MQSetQueueSecurity().
.

;/////////////////////////////////////////////////////////////////////////
;//
;//  Message Queuing Error values
;//
;//
;/////////////////////////////////////////////////////////////////////////
;
MessageId=1
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR
Language=English        ;Owner=erezh    Reviewers=none
Generic error code.
.

MessageId=2
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_PROPERTY
Language=English        ;Owner=uribz    Reviewers=none
One or more of the properties passed are invalid.
.

MessageId=3
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_QUEUE_NOT_FOUND
Language=English        ;Owner=uribz    Reviewers=none
The queue does not exist or you do not have sufficient permissions to perform the operation.
.

MessageId=4
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_QUEUE_NOT_ACTIVE
Language=English        ;Owner=uribz    Reviewers=none
The queue is not open or may not exist.
.

MessageId=5
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_QUEUE_EXISTS
Language=English        ;Owner=uribz    Reviewers=none
A queue with the same path name already exists.
.

MessageId=6
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_INVALID_PARAMETER
Language=English        ;Owner=uribz    Reviewers=none
An invalid parameter was passed to a function.
.

MessageId=7
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_INVALID_HANDLE
Language=English        ;Owner=uribz    Reviewers=none
An invalid handle was passed to a function.
.

MessageId=8
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_OPERATION_CANCELLED
Language=English        ;Owner=shaik    Reviewers=none
The operation was canceled before it could be completed.
.

MessageId=9
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_SHARING_VIOLATION
Language=English        ;Owner=shaik    Reviewers=none
There is a sharing violation. The queue is already open for exclusive retrieval.
.

MessageId=11
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_SERVICE_NOT_AVAILABLE
Language=English        ;Owner=uribz    Reviewers=none
The Message Queuing service is not available
.

MessageId=13
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_MACHINE_NOT_FOUND
Language=English        ;Owner=ilanh    Reviewers=none
The computer specified cannot be found.
.

MessageId=16
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_SORT
Language=English        ;Owner=ilanh    Reviewers=none
The sort operation specified in MQLocateBegin is invalid (for example, there are duplicate columns).
.

MessageId=17
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_USER
Language=English        ;Owner=ilanh    Reviewers=none
The user specified is not a valid user.
.

MessageId=19
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_NO_DS
Language=English        ;Owner=ilanh    Reviewers=none
A connection with Active Directory cannot be established. Verify that there are sufficient permissions to perform this operation.
.

MessageId=20
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_QUEUE_PATHNAME
Language=English        ;Owner=ilanh    Reviewers=none
The queue path name specified is invalid.
.

MessageId=24
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_PROPERTY_VALUE
Language=English        ;Owner=uribz    Reviewers=none
The property value specified is invalid.
.

MessageId=25
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_PROPERTY_VT
Language=English        ;Owner=uribz    Reviewers=none
The VARTYPE value specified is invalid.
.

MessageId=26
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_BUFFER_OVERFLOW
Language=English        ;Owner=shaik    Reviewers=none
The buffer supplied to MQReceiveMessage for message property retrieval
is too small. The message was not removed from the queue, but the part
of the message property that was in the buffer was copied.
.

MessageId=27
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_IO_TIMEOUT
Language=English        ;Owner=shaik    Reviewers=none
The time specified for MQReceiveMessage to wait for the message elapsed.
.

MessageId=28
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_CURSOR_ACTION
Language=English        ;Owner=shaik    Reviewers=none
The MQ_ACTION_PEEK_NEXT value specified for MQReceiveMessage cannot be used with
the current cursor position.
.

MessageId=29
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_MESSAGE_ALREADY_RECEIVED
Language=English        ;Owner=shaik    Reviewers=none
The message at which the cursor is currently pointing was removed from
the queue by another process or by another call to MQReceiveMessage
without the use of this cursor.
.

MessageId=30
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_FORMATNAME
Language=English        ;Owner=uribz    Reviewers=none
The format name specified is invalid.
.

MessageId=31
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_FORMATNAME_BUFFER_TOO_SMALL
Language=English        ;Owner=uribz    Reviewers=none
The format name buffer supplied to the API was too small
to hold the format name.
.

MessageId=32
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_UNSUPPORTED_FORMATNAME_OPERATION
Language=English        ;Owner=uribz    Reviewers=none
Operations of the type requested (for example, deleting a queue using a direct format name)
are not supported for the format name specified.
.

MessageId=33
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_SECURITY_DESCRIPTOR
Language=English        ;Owner=ilanh    Reviewers=none
The specified security descriptor is invalid.
.

MessageId=34
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_SENDERID_BUFFER_TOO_SMALL
Language=English        ;Owner=ilanh    Reviewers=none
The size of the buffer for the user ID property is too small.
.

MessageId=35
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_SECURITY_DESCRIPTOR_TOO_SMALL
Language=English        ;Owner=ilanh    Reviewers=none
The size of the buffer passed to MQGetQueueSecurity is too small.
.

MessageId=36
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_IMPERSONATE_CLIENT
Language=English        ;Owner=ilanh    Reviewers=none
The security credentials cannot be verified because the RPC server
cannot impersonate the client application.
.

MessageId=37
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ACCESS_DENIED
Language=English        ;Owner=ilanh    Reviewers=none
Access is denied.
.

MessageId=38
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_PRIVILEGE_NOT_HELD
Language=English        ;Owner=ilanh    Reviewers=none
The client does not have sufficient security privileges to perform the operation.
.

MessageId=39
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_INSUFFICIENT_RESOURCES
Language=English        ;Owner=shaik    Reviewers=none
There are insufficient resources to perform this operation.
.

MessageId=40
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_USER_BUFFER_TOO_SMALL
Language=English        ;Owner=ilanh    Reviewers=none
The request failed because the user buffer is too small to hold the information returned.
.

MessageId=42
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_MESSAGE_STORAGE_FAILED
Language=English        ;Owner=shaik    Reviewers=none
A recoverable or journal message could not be stored. The message was not sent.
.

MessageId=43
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_SENDER_CERT_BUFFER_TOO_SMALL
Language=English        ;Owner=ilanh    Reviewers=none
The buffer for the user certificate property is too small.
.

MessageId=44
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_INVALID_CERTIFICATE
Language=English        ;Owner=ilanh    Reviewers=none
The user certificate is invalid.
.

MessageId=45
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CORRUPTED_INTERNAL_CERTIFICATE
Language=English        ;Owner=ilanh    Reviewers=none
The internal Message Queuing certificate is corrupted.
.

MessageId=46
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_INTERNAL_USER_CERT_EXIST
Language=English        ;Owner=ilanh    Reviewers=none
An internal Message Queuing certificate already exists for this user.
.

MessageId=47
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_NO_INTERNAL_USER_CERT
Language=English        ;Owner=ilanh    Reviewers=none
No internal Message Queuing certificate exists for the user.
.

MessageId=48
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CORRUPTED_SECURITY_DATA
Language=English        ;Owner=ilanh    Reviewers=none
A cryptographic function failed.
.

MessageId=49
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CORRUPTED_PERSONAL_CERT_STORE
Language=English        ;Owner=ilanh    Reviewers=none
The personal certificate store is corrupted.
.

MessageId=51
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_COMPUTER_DOES_NOT_SUPPORT_ENCRYPTION
Language=English        ;Owner=ilanh    Reviewers=none
The computer does not support encryption operations.
.

MessageId=53
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_BAD_SECURITY_CONTEXT
Language=English        ;Owner=ilanh    Reviewers=none
The security context is invalid.
.

MessageId=54
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_COULD_NOT_GET_USER_SID
Language=English        ;Owner=ilanh    Reviewers=none
The SID cannot be obtained from the thread token.
.

MessageId=55
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_COULD_NOT_GET_ACCOUNT_INFO
Language=English        ;Owner=ilanh    Reviewers=none
The account information for the user cannot be obtained.
.

MessageId=56
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_MQCOLUMNS
Language=English        ;Owner=ilanh    Reviewers=none
The MQCOLUMNS parameter is invalid.
.

MessageId=57
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_PROPID
Language=English        ;Owner=uribz    Reviewers=none
A property identifier is invalid.
.

MessageId=58
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_RELATION
Language=English        ;Owner=uribz    Reviewers=none
A relationship parameter is invalid.
.

MessageId=59
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_PROPERTY_SIZE
Language=English        ;Owner=uribz    Reviewers=none
The size of the buffer for the message identifier or correlation identifier is invalid.
.

MessageId=60
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_RESTRICTION_PROPID
Language=English        ;Owner=uribz    Reviewers=none
A property identifier specified in MQRESTRICTION is invalid.
.

MessageId=61
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_MQQUEUEPROPS
Language=English        ;Owner=uribz    Reviewers=none
Either the pointer to the MQQUEUEPROPS structure has a null value, or no properties are specified in it.
.

MessageId=62
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_PROPERTY_NOTALLOWED
Language=English        ;Owner=uribz    Reviewers=none
The property identifier specified (for example, PROPID_Q_INSTANCE in MQSetQueueProperties)
is invalid for the operation requested.
.

MessageId=63
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_INSUFFICIENT_PROPERTIES
Language=English        ;Owner=uribz    Reviewers=none
Not all the properties required for the operation were specified
for the input parameters.
.

MessageId=64
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_MACHINE_EXISTS
Language=English        ;Owner=ilanh    Reviewers=none
The MSMQ Configuration (msmq) object already exists in Active Directory.
.

MessageId=65
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_MQQMPROPS
Language=English        ;Owner=uribz    Reviewers=none
Either the pointer to the MQQMROPS structure has a null value, or no properties are specified in it.
.

MessageId=66
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_DS_IS_FULL
Language=English
Obsolete, kept for backward compatibility
.

MessageId=67
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_DS_ERROR
Language=English        ;Owner=ilanh    Reviewers=none
There is an internal Active Directory error.
.

MessageId=68
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_INVALID_OWNER
Language=English        ;Owner=ilanh    Reviewers=none
The object owner is invalid (for example, MQCreateQueue failed because the QM
object is invalid).
.

MessageId=69
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_UNSUPPORTED_ACCESS_MODE
Language=English        ;Owner=uribz    Reviewers=none
The access mode specified is unsupported.
.

MessageId=70
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_RESULT_BUFFER_TOO_SMALL
Language=English        ;Owner=ilanh    Reviewers=none
The result buffer specified is too small.
.

MessageId=72
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_DELETE_CN_IN_USE
Language=English
Obsolete, kept for backward compatibility
.

MessageId=73
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_NO_RESPONSE_FROM_OBJECT_SERVER
Language=English        ;Owner=ilanh    Reviewers=none
There was no response from the object owner.
.

MessageId=74
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_OBJECT_SERVER_NOT_AVAILABLE
Language=English        ;Owner=ilanh    Reviewers=none
The object owner is not available.
.

MessageId=75
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_QUEUE_NOT_AVAILABLE
Language=English        ;Owner=nelak    Reviewers=none
An error occurred while reading from a queue located on a remote computer.
.

MessageId=76
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_DTC_CONNECT
Language=English        ;Owner=gilsh    Reviewers=none
A connection cannot be established with the Distributed Transaction Coordinator.
.

MessageId=78
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_TRANSACTION_IMPORT
Language=English        ;Owner=gilsh    Reviewers=none
The transaction specified cannot be imported.
.

MessageId=80
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_TRANSACTION_USAGE
Language=English        ;Owner=gilsh    Reviewers=none
An attempted action cannot be performed within a transaction.
.

MessageId=81
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_TRANSACTION_SEQUENCE
Language=English        ;Owner=gilsh    Reviewers=none
The transaction's operation sequence is incorrect.
.

MessageId=85
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_MISSING_CONNECTOR_TYPE
Language=English        ;Owner=urih    Reviewers=none
The connector type message property is not specified. This property is required for sending an acknowledgment message or a secure message.
.

MessageId=86
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_STALE_HANDLE
Language=English        ;Owner=shaik    Reviewers=none
The Message Queuing service was restarted. Any open queue handles should be closed.
.

MessageId=88
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_TRANSACTION_ENLIST
Language=English        ;Owner=gilsh    Reviewers=none
The transaction specified cannot be enlisted.
.

MessageId=90
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_QUEUE_DELETED
Language=English        ;Owner=shaik    Reviewers=none
The queue was deleted. Messages cannot be received anymore using this
queue handle. The handle should be closed.
.

MessageId=91
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_CONTEXT
Language=English        ;Owner=ilanh    Reviewers=none
The context parameter for MQLocateBegin is invalid.
.

MessageId=92
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_SORT_PROPID
Language=English        ;Owner=ilanh    Reviewers=none
An invalid property identifier is specified in MQSORTSET.
.

MessageId=93
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_LABEL_TOO_LONG
Language=English        ;Owner=uribz    Reviewers=none
The message label is too long. Its length should be less than or equal to MQ_MAX_MSG_LABEL_LEN.
.

MessageId=94
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_LABEL_BUFFER_TOO_SMALL
Language=English        ;Owner=shaik    Reviewers=none
The label buffer supplied to the API is too small.
.

MessageId=95
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_MQIS_SERVER_EMPTY
Language=English
Obsolete, kept for backward compatibility
.

MessageId=96
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_MQIS_READONLY_MODE
Language=English
Obsolete, kept for backward compatibility
.

MessageId=97
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_SYMM_KEY_BUFFER_TOO_SMALL
Language=English        ;Owner=shaik    Reviewers=none
The buffer passed for the symmetric key is too small.
.

MessageId=98
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_SIGNATURE_BUFFER_TOO_SMALL
Language=English        ;Owner=shaik    Reviewers=none
The buffer passed for the signature property is too small.
.

MessageId=99
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_PROV_NAME_BUFFER_TOO_SMALL
Language=English        ;Owner=shaik    Reviewers=none
The buffer passed for the provider name property is too small.
.

MessageId=100
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_OPERATION
Language=English        ;Owner=urih    Reviewers=none
The operation is invalid for a foreign message queuing system.
.

MessageId=101
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_WRITE_NOT_ALLOWED
Language=English        ;Owner=ilanh    Reviewers=none
Obsolete; another MQIS server is being installed. Write operations to the database are not allowed at this stage.
.

MessageId=102
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_WKS_CANT_SERVE_CLIENT
Language=English        ;Owner=nelak    Reviewers=none
Independent clients cannot support dependent clients. A Message Queuing server is required.
.

MessageId=103
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_DEPEND_WKS_LICENSE_OVERFLOW
Language=English        ;Owner=nelak    Reviewers=none
The number of dependent clients served by the Message Queuing server reached its upper limit.
.

MessageId=104
Severity=Error
Facility=MSMQ
SymbolicName=MQ_CORRUPTED_QUEUE_WAS_DELETED
Language=English        ;Owner=nelak    Reviewers=none
The file %1 for the queue %2 in the Lqs folder was deleted because it was corrupted.
.

MessageId=105
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_REMOTE_MACHINE_NOT_AVAILABLE
Language=English        ;Owner=nelak    Reviewers=none
The remote computer is not available.
.

MessageId=106
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_UNSUPPORTED_OPERATION
Language=English        ;Owner=shaik    Reviewers=none
This operation is not supported for Message Queuing installed in workgroup mode.
.

MessageId=107
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ENCRYPTION_PROVIDER_NOT_SUPPORTED
Language=English        ;Owner=ilanh    Reviewers=none
The cryptographic service provider %1 is not supported by Message Queuing.
.

MessageId=108
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_SET_CRYPTO_SEC_DESCR
Language=English        ;Owner=ilanh    Reviewers=none
The security descriptors for the cryptographic keys cannot be set.
.

MessageId=109
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CERTIFICATE_NOT_PROVIDED
Language=English        ;Owner=ilanh    Reviewers=none
A user attempted to send an authenticated message without a certificate.
.

MessageId=110
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_Q_DNS_PROPERTY_NOT_SUPPORTED
Language=English        ;Owner=ilanh    Reviewers=none
The column PROPID_Q_PATHNAME_DNS is not supported for the MQLocateBegin API.
.

MessageId=111
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_CREATE_CERT_STORE
Language=English        ;Owner=ilanh    Reviewers=none
A certificate store cannot be created for the internal certificate.
.

MessageId=112
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_OPEN_CERT_STORE
Language=English        ;Owner=ilanh    Reviewers=none
The certificate store for the internal certificate cannot be opened.
.

MessageId=113
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_ENTERPRISE_OPERATION
Language=English        ;Owner=ilanh    Reviewers=none
This operation is invalid for an MsmqServices object.
.

MessageId=114
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_GRANT_ADD_GUID
Language=English        ;Owner=ilanh    Reviewers=none
The Add GUID permission cannot be granted to the current user.
.

MessageId=115
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_LOAD_MSMQOCM
Language=English        ;Owner=uribz    Reviewers=none
Obsolete: The dynamic-link library Msmqocm.dll cannot be loaded.
.

MessageId=116
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_NO_ENTRY_POINT_MSMQOCM
Language=English        ;Owner=uribz    Reviewers=none
An entry point cannot be located in Msmqocm.dll.
.

MessageId=117
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_NO_MSMQ_SERVERS_ON_DC
Language=English        ;Owner=ilanh    Reviewers=none
Message Queuing servers cannot be found on domain controllers.
.

MessageId=118
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_JOIN_DOMAIN
Language=English        ;Owner=ilanh    Reviewers=none
The computer joined the domain, but Message Queuing will continue to run in workgroup mode because it failed to register itself in Active Directory.
.

MessageId=119
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_CREATE_ON_GC
Language=English        ;Owner=ilanh    Reviewers=none
The object was not created on the Global Catalog server specified.
.

MessageId=120
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_GUID_NOT_MATCHING
Language=English
Obsolete, kept for backward compatibility
.

MessageId=121
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_PUBLIC_KEY_NOT_FOUND
Language=English        ;Owner=ilanh    Reviewers=none
The public key for the computer %1 cannot be found.
.

MessageId=122
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_PUBLIC_KEY_DOES_NOT_EXIST
Language=English        ;Owner=ilanh    Reviewers=none
The public key for the computer %1 does not exist.
.

MessageId=123
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_ILLEGAL_MQPRIVATEPROPS
Language=English        ;Owner=uribz    Reviewers=none
The parameters in MQPRIVATEPROPS are invalid. Either the pointer to the MQPRIVATEPROPS structure has a null value, or no properties are specified in it.
.

MessageId=124
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_NO_GC_IN_DOMAIN
Language=English        ;Owner=ilanh    Reviewers=none
Global Catalog servers cannot be found in the domain specified.
.

MessageId=125
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_NO_MSMQ_SERVERS_ON_GC
Language=English        ;Owner=ilanh    Reviewers=none
No Message Queuing servers were found on Global Catalog servers.
.

MessageId=126
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_GET_DN
Language=English
Obsolete, kept for backward compatibility
.

MessageId=127
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_HASH_DATA_EX
Language=English        ;Owner=ilanh    Reviewers=none
Data for an authenticated message cannot be hashed.
.

MessageId=128
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_SIGN_DATA_EX
Language=English        ;Owner=ilanh    Reviewers=none
Data cannot be signed before sending an authenticated message.
.

MessageId=129
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_CREATE_HASH_EX
Language=English        ;Owner=ilanh    Reviewers=none
A hash object cannot be created for an authenticated message.
.

MessageId=130
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_FAIL_VERIFY_SIGNATURE_EX
Language=English        ;Owner=ilanh    Reviewers=none
The signature of the message received is not valid.
.

MessageId=131
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_DELETE_PSC_OBJECTS
Language=English        ;Owner=ilanh    Reviewers=none
The object that will be deleted is owned by a primary site controller. The operation cannot be performed.
.

MessageId=132
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_NO_MQUSER_OU
Language=English        ;Owner=ilanh    Reviewers=none
There is no MSMQ Users organizational unit object in Active Directory for the domain. Please create one manually.
.

MessageId=133
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_LOAD_MQAD
Language=English        ;Owner=ilanh    Reviewers=none
The dynamic-link library Mqad.dll cannot be loaded.
.

MessageId=134
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_LOAD_MQDSSRV
Language=English
Obsolete, kept for backward compatibility
.

MessageId=135
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_PROPERTIES_CONFLICT
Language=English        ;Owner=uribz    Reviewers=none
Two or more of the properties passed cannot co-exist.
For example, you cannot set both PROPID_M_RESP_QUEUE and PROPID_M_RESP_FORMAT_NAME when sending a message.
.

MessageId=136
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_MESSAGE_NOT_FOUND
Language=English        ;Owner=shaik    Reviewers=none
The message does not exist or was removed from the queue.
.

MessageId=137
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANT_RESOLVE_SITES
Language=English        ;Owner=ilanh    Reviewers=none
The sites where the computer resides cannot be resolved. Check that the subnets in your network are configured correctly in Active Directory and that each site is configured with the appropriate subnet.
.

MessageId=138
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_NOT_SUPPORTED_BY_DEPENDENT_CLIENTS
Language=English        ;Owner=t-naides    Reviewers=none
This operation is not supported by dependent clients.
.

MessageId=139
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_OPERATION_NOT_SUPPORTED_BY_REMOTE_COMPUTER
Language=English        ;Owner=t-naides    Reviewers=none
This operation is not supported by the remote Message Queuing service. For example, MQReceiveMessageByLookupId is not supported by MSMQ 1.0/2.0.
.

MessageId=140
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_NOT_A_CORRECT_OBJECT_CLASS
Language=English        ;Owner=ilanh    Reviewers=none
The object whose properties are being retrieved from Active Directory does not belong to the class requested.
.

MessageId=141
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_MULTI_SORT_KEYS
Language=English        ;Owner=uribz    Reviewers=none
The value of cCol in MQSORTSET cannot be greater than 1. Active Directory supports only a single sort key.
.

MessageId=142
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_GC_NEEDED
Language=English        ;Owner=ilanh    Reviewers=none
An MSMQ Configuration (msmq) object with the GUID supplied cannot be created. By default, a Windows Server 2003 forest does not support adding an object with a supplied GUID.
.

MessageId=143
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_DS_BIND_ROOT_FOREST
Language=English        ;Owner=ilanh    Reviewers=none
Binding to the forest root failed. This error usually indicates a problem in the DNS configuration.
.

MessageId=144
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_DS_LOCAL_USER
Language=English        ;Owner=ilanh    Reviewers=none
A local user is authenticated as an anonymous user and cannot access Active Directory. You need to log on as a domain user to access Active Directory.
.

MessageId=145
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_Q_ADS_PROPERTY_NOT_SUPPORTED
Language=English        ;Owner=ilanh    Reviewers=none
The column PROPID_Q_ADS_PATH is not supported for the MQLocateBegin API.
.

MessageId=146
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_BAD_XML_FORMAT
Language=English        ;Owner=uribz    Reviewers=none
The given property is not a valid XML document.
.

MessageId=147
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_UNSUPPORTED_CLASS
Language=English        ;Owner=erezh    Reviewers=pesachs
The Active Directory object specified is not an instance of a supported class.
.

MessageId=148
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_UNINITIALIZED_OBJECT
Language=English        ;Owner=uribz    Reviewers=pesachs
The MSMQManagement object must be initialized before it is used.
.

MessageId=149
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_CREATE_PSC_OBJECTS
Language=English        ;Owner=ilanh    Reviewers=none
The object that will be created should be owned by a primary site controller. The operation cannot be performed.
.

MessageId=150
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_UPDATE_PSC_OBJECTS
Language=English        ;Owner=ilanh    Reviewers=none
The object that will be updated is owned by a primary site controller. The operation cannot be performed.
.

;// end_mq_h

;//***********************************************************************
;//
;//  Internal status values. These values are NOT exposed through the SDK
;//
;//
;//***********************************************************************

;//
;// Internal Information values
;//
;
MessageId=1000
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_REMOTE_OPERATION
Language=English        ;Owner=uribz    Reviewers=none
The operation requested should be performed on a remote computer
(as, for example, in the remote case of MQCreateCursor()).
.

MessageId=1001
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_REMOTE_CANCELED_BY_CLIENT
Language=English        ;Owner=shaik    Reviewers=none
The remote operation was canceled on the client side.
.

MessageId=1003
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_QUEUE_OWNED_BY_NT4_PSC
Language=English        ;Owner=ilanh    Reviewers=none
The queue that will be deleted is owned by a Windows NT 4.0 primary site controller.
.

MessageId=1004
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_MACHINE_OWNED_BY_NT4_PSC
Language=English        ;Owner=ilanh    Reviewers=none
The msmq object that will be deleted is owned by a Windows NT 4.0 primary site controller.
.

MessageId=1005
Severity=Informational
Facility=MSMQ
SymbolicName=MQ_INFORMATION_ENH_SIG_NOT_FOUND
Language=English        ;Owner=ilanh    Reviewers=none
The enhanced signature cannot be found in the packet.
.

;//
;// Internal Error values
;//
;
MessageId=1003
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_FUNCTION_NOT_SUPPORTED
Language=English        ;Owner=ilanh    Reviewers=none
The function called is not supported.
.

MessageId=1004
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_RECOVER_TRANSACTIONS
Language=English        ;Owner=gilsh    Reviewers=none
The transaction(s) cannot be recovered.
.

MessageId=1005
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_TRANSACTION_PREPAREINFO
Language=English        ;Owner=gilsh    Reviewers=none
Prepare information cannot be obtained from the Distributed Transaction Coordinator.
.

MessageId=1006
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_LOGMGR_LOAD
Language=English        ;Owner=gilsh    Reviewers=none
The log manager library or interface cannot be obtained.
.

MessageId=1007
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_MAX_SESSIONS_LIMIT
Language=English        ;Owner=gilsh    Reviewers=none
A new session cannot be created because there are too many active sessions.
.

MessageId=1008
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_EXPORT_KEY
Language=English        ;Owner=gilsh    Reviewers=none
The session key cannot be exported for insertion into the packet.
.

MessageId=1009
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_READ_CHECKPOINT_DATA
Language=English        ;Owner=gilsh    Reviewers=none
Data cannot be read from the checkpoint file.
.

MessageId=1010
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_WRITE_REQUEST_FAILED
Language=English        ;Owner=ilanh    Reviewers=none
The Write request to the primary site controller owning the queue failed.
.

MessageId=1012
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_LOAD_MQDSXXX
Language=English        ;Owner=ilanh    Reviewers=none
The dynamic-link library MQDSxxx.dll cannot be loaded.
.

MessageId=1013
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_NOT_TRUSTED_DELEGATION
Language=English        ;Owner=ilanh    Reviewers=none
This computer is not trusted for delegation.
.

MessageId=1015
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_WAIT_OBJECT_SETUP
Language=English        ;Owner=uribz    Reviewers=none
Setup is waiting for creation of the MSMQ Configuration (msmq) object.
.

MessageId=1017
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_DELAYLOAD_FAILURE
Language=English		; Owner=conradc Reviewers=erezh
The Message Queuing DLL or the entry point in that DLL for the specified procedure cannot be found. You can turn on tracing to obtain more detail information about the failure.
.

MessageId=1018
Severity=Error
Facility=MSMQ
SymbolicName=MQ_ERROR_CANNOT_SET_RC2_TO40
Language=English		; Owner=doronj Reviewers= PesachS
Message Queuing cannot use an enhanced RC2 symmetric encryption key with an effective length equal to 40 bits.
.

;
;//************************************************
;//
;//  D S     E R R O R     C O D E S
;//
;//************************************************
;
;/*----------------------------------------------
;    Error Codes
;------------------------------------------------*/
;#define MQDS_E_BASE (MQ_E_BASE + 0x500)
;
MessageId=0x501
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_ERROR
Language=English        ;Owner=ilanh    Reviewers=none
This is a general Active Directory error.
.

MessageId=0x506
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_WRONG_OBJ_TYPE
Language=English        ;Owner=ilanh    Reviewers=none
The value for the object type input parameter is invalid.
.

MessageId=0x509
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_UNKNOWN_SITE_ID
Language=English        ;Owner=ilanh    Reviewers=none
An attempt was made to access a computer with an unresolved site ID.
.

MessageId=0x50d
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_CREATE_ERROR
Language=English        ;Owner=ilanh    Reviewers=none
The object cannot be created in Active Directory.
.

MessageId=0x50f
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_OBJECT_NOT_FOUND
Language=English        ;Owner=ilanh    Reviewers=none
The object was not found in Active Directory.
.

MessageId=0x512
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_GET_PROPERTIES_ERROR
Language=English        ;Owner=ilanh    Reviewers=none
The object properties cannot be obtained.
.

MessageId=0x514
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_NO_RSP_FROM_OWNER
Language=English        ;Owner=ilanh    Reviewers=none
The site controller that owns the object is not responding. This error is applicable only in a mixed-mode environment.
.

MessageId=0x516
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_OWNER_NOT_REACHED
Language=English        ;Owner=ilanh    Reviewers=none
The object owner is not reachable. This error can occur only in a mixed-mode environment.
.

MessageId=0x521
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_E_CANT_INIT_RPC
Language=English        ;Owner=ilanh    Reviewers=none
The RPC library cannot be initialized.
.

MessageId=0x523
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_E_NO_MORE_DATA
Language=English        ;Owner=ilanh    Reviewers=none
There are no more data to return to the client. This error can occur only in a mixed-mode environment.
.

MessageId=0x525
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_E_WRONG_ENTERPRISE
Language=English        ;Owner=ilanh    Reviewers=none
The client does not belong to the same Message Queuing enterprise. This error can occur only in a mixed-mode environment.
.

MessageId=0x526
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_E_SITELINK_EXISTS
Language=English        ;Owner=ilanh    Reviewers=none
The routing link already exists.
.

MessageId=0x52b
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_E_CANT_INIT_SERVER_AUTH
Language=English        ;Owner=ilanh    Reviewers=none
Authentication of the Message Queuing server %1 cannot be initialized.
.

;
;/*----------------------------------------------
;    Informational Codes
;------------------------------------------------*/
MessageId=0x52C
Severity=Informational
Facility=MSMQ
SymbolicName=MQDS_OK_REMOTE
Language=English        ;Owner=ilanh    Reviewers=none
The write operation to the remote owner completed successfully. Please wait a few minutes to ensure that replication has completed.
.

MessageId=0x52d
Severity=Informational
Facility=MSMQ
SymbolicName=MQDS_INFORMATION_SITE_NOT_RESOLVED
Language=English        ;Owner=ilanh    Reviewers=none
The computer's site was not resolved from its addresses.
.

;/*----------------------------------------------
;    DS Error Codes (CONTINUED)
;------------------------------------------------*/

MessageId=0x52f
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_E_MSMQ_CONTAINER_NOT_EMPTY
Language=English        ;Owner=ilanh    Reviewers=none
The computer object cannot be deleted because the MSMQ Configuration (msmq) container object is not empty.
.

MessageId=0x530
Severity=Error
Facility=MSMQ
SymbolicName=MQDS_E_COMPUTER_OBJECT_EXISTS
Language=English        ;Owner=ilanh    Reviewers=none
The computer object already exists in Active Directory.
.

;
;
;//************************************************
;//
;//  M S M Q   E V E N T     C O D E S
;//
;//************************************************
;

MessageIdTypedef = DWORD

;//
;//     Event-log messages for MSMQ
;//
MessageId=2000
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_QM_READ_REGISTRY
Language=English        ;Owner=erezh    Reviewers=none
The Message Queuing service cannot start.
The registry value '\HKLM\SOFTWARE\Microsoft\MSMQ\Parameters\%2' cannot be retrieved from the local Windows Registry (Error: %1).
.

MessageId=2001
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_QM_WRITE_REGISTRY
Language=English        ;Owner=uribz    Reviewers=none
The Message Queuing service cannot start.
The registry value '\HKLM\SOFTWARE\Microsoft\MSMQ\Parameters\%2' cannot be written to the local Windows Registry (Error: %1).
.

MessageId=2015
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_INCONSISTENT_QM_ID
Language=English        ;Owner=erezh    Reviewers=none
The Message Queuing service is not online with Active Directory.
The MSMQ Configuration object (msmq) ID stored in the registry value '\HKLM\SOFTWARE\Microsoft\MSMQ\Parameters\MachineCache\QMId'
was found under the computer name '%1' in Active Directory.
Please relocate this MSMQ Configuration object under the local computer name in Active Directory.
The service attempts to locate a matching MSMQ Configuration object every few minutes.
.

MessageId=2016
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_VALIDATE_MACHINE_PROPS
Language=English        ;Owner=erezh    Reviewers=none
The Message Queuing service is not online with Active Directory, since the service properties cannot be retrived or set (Error: %1).
The service will attempt to retrieve and set its properties in a few minutes.
.

MessageId=2020
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_QM_SYSTEM_QUEUE_INIT
Language=English        ;Owner=erezh    Reviewers=none
The Message Queuing service cannot start.
The internal private queue '%2' cannot be initialized (Error: %1).
If the problem persists, reinstall Message Queuing.
.

MessageId=2023
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_QM_RECOVERY
Language=English        ;Owner=shaik    Reviewers=none
The Message Queuing service cannot start.
The message store cannot be reloaded (Error: %1).
.

MessageId=2024
Severity=Warning
Facility=Application
SymbolicName=EVENT_WARN_QM_PERF_INIT_FAILED
Language=English        ;Owner=t-naides    Reviewers=none
The Message Queuing serivce performance counter data are not available.
The performance counter module failed to initialize (Error: %1).
Please run 'lodctr.exe mqperf.ini' from the command console and restart the service, or contact Microsoft support.
.

MessageId=2028
Severity=Informational
Facility=Application
SymbolicName=EVENT_INFO_MSMQ_SERVICE_STARTED
Language=English        ;Owner=erezh    Reviewers=none
The Message Queuing service started.
.

MessageId=2035
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_DS_INIT_FAILED
Language=English        ;Owner=ilanh    Reviewers=none
The Message Queuing service cannot start.
The Active Directory interface cannot be initialized (Error: %1).
.

MessageId=2043
Severity=Warning
Facility=Application
SymbolicName=EVENT_WARN_RESTORE_FAILED_QUEUE_NOT_FOUND
Language=English        ;Owner=shaik    Reviewers=raynew;erezh
The Message Queuing service deleted message '%1'.
The message cannot be restored because the queue '%2' does not exist.
.

MessageId=2044
Severity=Warning
Facility=Application
SymbolicName=EVENT_WARN_QM_CANNOT_GENERATE_AUDITS
Language=English        ;Owner=ilanh    Reviewers=none
The Message Queuing service has insufficient privileges to create audit log messages.
.

MessageId=2045
Severity=Warning
Facility=Application
SymbolicName=EVENT_WARN_MQDS_CANNOT_GENERATE_AUDITS
Language=English        ;Owner=ilanh    Reviewers=none
The Message Queuing downlevel client support service has insufficient privileges to create audit log messages.
.

MessageId=2047
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_CANNOT_CONNECT_MSDTC
Language=English        ;Owner=gilsh    Reviewers=none
The Message Queuing service cannot start.
A connection with the Distributed Transaction Coordinator cannot be established (Error: %1).
.

MessageId=2048
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_RECOGNITION_SERVER_FAILED
Language=English        ;Owner=ilanh    Reviewers=none
The server cannot support the automatic recognition of sites and connected networks for downlevel clients.
.

MessageId=2053
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_QM_INIT_INSEQ_FILE
Language=English        ;Owner=gilsh    Reviewers=none
The Message Queuing service cannot start.
The incoming sequences checkpoint file failed to initialize (Error: %1).
The files MQInSeqs.lg1 and MQInSeqs.lg2 in the Msmq\Storage folder are corrupted or absent.
To start the Message Queuing service without losing consistency, you must correct or recover these files (e.g. from a backup).
To start the service for emergency use (with a potential loss of data consistency), delete the files QMLog, MQTrans.lg1, MQTrans.lg2, MQInSeqs.lg1, and MQInSeqs.lg2 from the Msmq\Storage folder and add the DWORD registry key
HKLM\Software\Microsoft\MSMQ\Parameters\LogDataCreated with a value of 0.
.

MessageId=2059
Severity=Warning
Facility=Application
SymbolicName=EVENT_WARN_QM_FAILED_RPC_TCPIP
Language=English        ;Owner=gilsh    Reviewers=none
The Message Queuing service cannot communicate with other computers, because the RPC interface cannot use the TCP/IP protocol (Error: %1).
.

MessageId=2060
Severity=Informational
Facility=Application
SymbolicName=EVENT_INFO_QM_ONLINE_WITH_DS
Language=English        ;Owner=erezh    Reviewers=none
The Message Queuing service is online with Active Directory and fully operational.
.

MessageId=2061
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_QM_FAILED_RPC_LOCAL
Language=English        ;Owner=erezh    Reviewers=none
The Message Queuing service cannot start.
The local RPC interface cannot be initialized (Error: %1).
.

MessageId=2064
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_QM_INIT_TRANS_FILE
Language=English        ;Owner=gilsh    Reviewers=none
The Message Queuing service cannot start.
The transactions checkpoint file failed to initialize (Error: %1).
The files MQTrans.lg1 and MQTrans.lg2 in the Msmq\Storage folder are corrupted or absent.
To start the Message Queuing service without loosing consistency, you must correct or recover these files (e.g. from a backup).
To start the service for emergency use (with a potential loss of data consistency), delete the files QMLog, MQTrans.lg1, MQTrans.lg2, MQInSeqs.lg1, and MQInSeqs.lg2 from the Msmq\Storage folder and add the DWORD registry key
HKLM\Software\Microsoft\MSMQ\Parameters\LogDataCreated with a value of 0.
.

MessageId=2068
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_DS_SERVER_LIST_EMPTY
Language=English        ;Owner=ilanh    Reviewers=none
The list of Message Queuing servers with directory service functionality in the Windows registry is empty.
.

MessageId=2076
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_CANT_INIT_LOGGER
Language=English        ;Owner=erezh    Reviewers=none
The logger files cannot be initialized (Error: %1).
The file QMLog in the Msmq\Storage folder is corrupted or absent.
To start the Message Queuing service without loosing consistency, you must correct or recover this  file (e.g. from a backup).
To start the service for emergency use (with a potential loss of data consistency), delete the files QMLog, MQTrans.lg1, MQTrans.lg2, MQInSeqs.lg1, and MQInSeqs.lg2 from the Msmq\Storage folder and add the DWORD registry key
HKLM\Software\Microsoft\MSMQ\Parameters\LogDataCreated with a value of 0.
.

MessageId=2078
Severity=Error
Facility=Application
SymbolicName=CHECKPOINT_RECOVER_ERROR
Language=English        ;Owner=erezh    Reviewers=none
The expression '%1' cannot be recovered for the checkpoint.
.

MessageId=2083
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_QM_FAILED_RESTORE_PACKET
Language=English        ;Owner=shaik    Reviewers=raynew;erezh
The Message Queuing service cannot start.
The message file '%2' and the log file '%3' cannot be reloaded (Error: %1).
.

MessageId=2085
Severity=Error
Facility=Application
SymbolicName=AC_CREATE_MESSAGE_FILE_FAILED
Language=English        ;Owner=shaik    Reviewers=none
The message file '%1' cannot be created. There is insufficient disk space or memory.
.

MessageId=2086
Severity=Informational
Facility=Application
SymbolicName=AC_CREATE_MESSAGE_FILE_SUCCEDDED
Language=English        ;Owner=shaik    Reviewers=none
The message file '%1' was successfully created.
.

MessageId=2087
Severity=Warning
Facility=Application
SymbolicName=SERVER_NO_MORE_CALS
Language=English        ;Owner=nelak    Reviewers=none
The Client Access License (CAL) limit was reached. This server is unable to
serve more clients. This may lead to messaging performance degradation.
See the Windows documentation for information on how to increase your client license limit.
.

MessageId=2095
Severity=Error
Facility=Application
SymbolicName=POST_DEL_WRITE_REQUEST
Language=English        ;Owner=ilanh    Reviewers=none
Since an MSMQ 1.0 primary site controller owns the queue, you must manually delete the queue
from the MSMQ 1.0 site (use MSMQ Explorer running on an applicable the site controller).
.

MessageId=2096
Severity=Error
Facility=Application
SymbolicName=CreateDirectory_ERR
Language=English        ;Owner=uribz    Reviewers=none
The Message Queuing folder cannot be created.
.

MessageId=2097
Severity=Error
Facility=Application
SymbolicName=ReadRegistry_ERR
Language=English        ;Owner=uribz    Reviewers=none
The Message Queuing registry values cannot be read (the registry is probably corrupted).
.

MessageId=2116
Severity=Error
Facility=Application
SymbolicName=CreateMsmqConfig_ERR
Language=English        ;Owner=uribz    Reviewers=pesachs
Message Queuing was unable to create the msmq (MSMQ Configuration) object in Active Directory (Error: %1).
.

MessageId=2117
Severity=Error
Facility=Application
SymbolicName=LoadMqupgrd_ERR
Language=English        ;Owner=uribz    Reviewers=none
Message Queuing was unable to load Mqupgrd.dll (Error: %1).
.

MessageId=2118
Severity=Error
Facility=Application
SymbolicName=GetAdrsCreateObj_ERR
Language=English        ;Owner=uribz    Reviewers=none
Message Queuing was unable to find the address of MqCreateMsmqObj in Mqupgrd.dll (Error: %1).
.

MessageId=2119
Severity=Error
Facility=Application
SymbolicName=CreateMsmqObj_ERR
Language=English        ;Owner=uribz    Reviewers=none
Message Queuing Setup cannot be completed.
.

MessageId=2120
Severity=Error
Facility=Application
SymbolicName=GetMsmqConfig_ERR
Language=English        ;Owner=uribz    Reviewers=pesachs
The Message Queuing service was unable to obtain the properties of the msmq (MSMQ Configuration) object from Active Directory (Error: %1). This may be caused by an Active Directory replication delay. Please wait several minutes and then restart the Message Queuing service.
.

MessageId=2122
Severity=Error
Facility=Application
SymbolicName=NOT_TRUSTED_FOR_DELEGATION
Language=English        ;Owner=ilanh    Reviewers=none
This domain controller is not trusted for delegation. Therefore, the Message Queuing server cannot run. See Help and Support Center for information about how to enable the "This computer is trusted for delegation" property.
.

MessageId=2123
Severity=Warning
Facility=Application
SymbolicName=CANNOT_DETERMINE_TRUSTED_FOR_DELEGATION
Language=English        ;Owner=ilanh    Reviewers=none
The Message Queuing server cannot determine if the local domain controller is trusted for delegation. This may indicate a serious problem. For more information, see Help and Support Center.
.

MessageId=2124
Severity=Error
Facility=Application
SymbolicName=JoinMsmqDomain_ERR
Language=English        ;Owner=ilanh    Reviewers=pesachs
The Message Queuing service failed to join the computer's domain '%2' (Error: %1).
.

MessageId=2125
Severity=Informational
Facility=Application
SymbolicName=JoinMsmqDomain_SUCCESS
Language=English        ;Owner=ilanh    Reviewers=none
The Message Queuing service successfully joined the computers's domain '%1'.
.

MessageId=2126
Severity=Informational
Facility=Application
SymbolicName=LeaveMsmqDomain_SUCCESS
Language=English        ;Owner=ilanh    Reviewers=none
Message Queuing left the domain and is now operating in workgroup mode.
.

MessageId=2127
Severity=Error
Facility=Application
SymbolicName=MoveMsmqDomain_ERR
Language=English        ;Owner=ilanh    Reviewers=none
Message Queuing objects cannot move automatically between domains (%1). You must either run the MoveTree utility or first uninstall Message Queuing and then reinstall it in the new domain.
.

MessageId=2134
Severity=Informational
Facility=Application
SymbolicName=MsmqMoveDomain_OK
Language=English        ;Owner=ilanh    Reviewers=none
Message Queuing successfully moved to the %1 domain.
.

MessageId=2135
Severity=Informational
Facility=Application
SymbolicName=MsmqNeedMoveTree_OK
Language=English        ;Owner=ilanh    Reviewers=none
The computer belongs to the %1 domain. It is recommended that you use the MoveTree utility to move the msmq (MSMQ Configuration) object of this computer from the %2 domain (its previous domain) to the current domain.
.

MessageId=2139
Severity=Warning
Facility=Application
SymbolicName=NOT_SURE_I_AM_A_GC
Language=English        ;Owner=ilanh    Reviewers=none
Message Queuing detected a problem with the local domain controller. Until the problem is resolved, Message Queuing will function unpredictably. Using Event Viewer, inspect the directory service, File Replication Service, and system logs to help identify the problem.
.

MessageId=2140
Severity=Warning
Facility=Application
SymbolicName=RS_WITHOUT_ADDRESSES
Language=English        ;Owner=ilanh    Reviewers=none
This server was unable to resolve the IP addresses of other routing servers. Please check that all computers are registered in DNS.
.

MessageId=2141
Severity=Error
Facility=Application
SymbolicName=SET_QUEUE_PROPS_FAIL_COUND_NOT_COPY
Language=English        ;Owner=ilanh    Reviewers=none
The properties of the queue %2 cannot be set. Copying the queue file %3 to the temporary file %4 returned error %1.
.

MessageId=2142
Severity=Error
Facility=Application
SymbolicName=SET_QUEUE_PROPS_FAIL_COUND_NOT_REPLACE
Language=English        ;Owner=ilanh    Reviewers=none
The properties of the queue %2 cannot be set. Replacing the queue file %3 with the temporary file %4 returned error %1.
.

MessageId=2143
Severity=Error
Facility=Application
SymbolicName=FAIL_MSDTC_TMDOWN
Language=English        ;Owner=gilsh    Reviewers=none
The Microsoft Distributed Transaction Coordinator (DTC) failed. The Message Queuing service cannot continue. Please restart the DTC and the Message Queuing service.
.

MessageId=2144
Severity=Warning
Facility=Application
SymbolicName=DS_ADDRESS_NOT_RESOLVED
Language=English
There is an inconsistency between the actual network addresses and the addresses that are listed on other Message Queuing servers for this computer. If this computer belongs to an MSMQ 1.0 site, you should use MSMQ Explorer on the local primary site controller (PSC) to manually update the addresses listed for this computer.
.

MessageId=2145
Severity=Error
Facility=Application
SymbolicName=ADS_COMPUTER_OBJECT_NOT_FOUND_ERR
Language=English        ;Owner=ilanh    Reviewers=none
The computer object for this computer was not found in Active Directory, possibly because of Active Directory replication delays.
.

MessageId=2147
Severity=Error
Facility=Application
SymbolicName=SERVICE_START_ERROR_LOW_RESOURCES
Language=English        ;Owner=erezh    Reviewers=none
The service cannot start due to insufficient disk space or memory.
.

MessageId=2148
Severity=Error
Facility=Application
SymbolicName=SERVICE_START_ERROR_CONNECT_AC
Language=English        ;Owner=erezh    Reviewers=none
The service cannot start due to its failure to connect to its device driver.
.

MessageId=2149
Severity=Error
Facility=Application
SymbolicName=MQDS_DCUNPROMO_UPDATE_FAIL
Language=English        ;Owner=ilanh    Reviewers=none
The Message Queuing directory service failed to update the directory service flag in Active Directory at the end of the domain controller demotion process.
.

MessageId=2150
Severity=Error
Facility=Application
SymbolicName=MQDS_DCPROMO_UPDATE_FAIL
Language=English        ;Owner=ilanh    Reviewers=none
The Message Queuing directory service failed to update the directory service flag in Active Directory during the domain controller promotion process.
.

MessageId=2151
Severity=Error
Facility=Application
SymbolicName=MQDS_WORKGROUP_MODE
Language=English
Obsolete, kept for backward compatibility
.

MessageId=2152
Severity=Warning
Facility=Application
SymbolicName=MQDS_NOT_RUN_AS_LOCAL_SYSTEM
Language=English        ;Owner=ilanh    Reviewers=none
The Message Queuing directory service is not running as a local system. To get the directory service functionality, you need to run as a local system.
.

MessageId=2153
Severity=Warning
Facility=Application
SymbolicName=EVENT_WARN_MQDS_NOT_DC
Language=English        ;Owner=ilanh    Reviewers=pesachs
Message Queuing Downlevel Client Support cannot start.
This service can operate only on a domain controller.
The service can be disabled by using Computer Management to change its startup type in the Properties dialog box from Automatic to Manual or Disabled.
.

MessageId=2154
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_INIT_MULTICAST
Language=English        ;Owner=shaik    Reviewers=Rayne
A multicast listener initialization failed (Error: %1). The file '%2' may be corrupted.
.

MessageId=2155
Severity=Error
Facility=Application
SymbolicName=QUEUE_ALIAS_DIR_MONITORING_WIN32_ERROR
Language=English        ;Owner=gilsh    Reviewers=none
The Message Queuing service stopped monitoring the mapping folder %1 (Error: 0x%2).
.

MessageId=2156
Severity=Error
Facility=Application
SymbolicName=QUEUE_ALIAS_WIN32_FILE_ERROR
Language=English        ;Owner=gilsh    Reviewers=none
The mapping file %1 was ignored. Its content cannot be read (Error: 0x%2).
.

MessageId=2157
Severity=Warning
Facility=Application
SymbolicName=QUEUE_ALIAS_DUPLICATE_MAPPING_WARNING
Language=English        ;Owner=gilsh    Reviewers=none
The mapping of the URL %1 to the queue %2 was ignored. This URL is already mapped to another queue.
.

MessageId=2158
Severity=Error
Facility=Application
SymbolicName=QUEUE_ALIAS_INVALID_MAPPING_FILE
Language=English        ;Owner=gilsh    Reviewers=none
The mapping file %1 was ignored because it was improperly formatted.
.

MessageId=2159
Severity=Informational
Facility=Application
SymbolicName=EVENT_INFO_MQDS_SERVICE_STARTED
Language=English        ;Owner=ilanh    Reviewers=none
Message Queuing Downlevel Client Support started.
.

MessageId=2160
Severity=Error
Facility=Application
SymbolicName=MULTICAST_BIND_ERROR
Language=English        ;Owner=shaik    Reviewers=none
The queue cannot listen/bind to the multicast address %2 (Error: %1).
.

MessageId=2161
Severity=Warning
Facility=Application
SymbolicName=QUEUE_ALIAS_INVALID_QUEUE_NAME
Language=English        ;Owner=gilsh    Reviewers=pesachs
The mapping of the URL %1 to the queue %2 is ignored. This queue name is not a valid URL-style queue name.
.

MessageId=2162
Severity=Warning
Facility=Application
SymbolicName=EVENT_MQDS_GC_NEEDED
Language=English        ;Owner=ilanh    Reviewers=none
Message Queuing Downlevel Client Support failed to create the MSMQ Configuration (msmq) object with a given GUID for computer %1.
Creating MSMQ Configuration objects with given GUIDs may be required for Message Queuing clients during the setup of Windows NT 4.0 or Windows 9x computers and when a Windows 2000 computer joins a Windows Server 2003 domain.
By default, a windows Server 2003 forest does not support adding an object with a supplied GUID.
You can solve this problem by upgrading Message Queuing on the client computer to a version that does not require creating an object with a given GUID.
There are also alternative solutions.
.

MessageId=2163
Severity=Informational
Facility=Application
SymbolicName=QM_SERVICE_STOPPED
Language=English        ;Owner=erezh    Reviewers=none
The Message Queuing service stopped.
.

MessageId=2164
Severity=Error
Facility=Application
SymbolicName=EVENT_JOIN_DOMAIN_OBJECT_EXIST
Language=English        ;Owner=ilanh    Reviewers=pesachs
The Message Queuing service will not join the %1 domain.
An MSMQ Configuration (msmq) object exists in the new domain with an ID differing from the service ID.
Please delete the MSMQ Configuration object in the new domain, restart the Message Queuing service, and log on again.
.

MessageId=2165
Severity=Warning
Facility=Application
SymbolicName=EVENT_NO_SITE_RESOLUTION
Language=English        ;Owner=ilanh    Reviewers=none
The sites where the computer resides cannot be resolved. Check that the subnets in your network are configured correctly in Active Directory and that each site is configured with the appropriate subnet.
.

MessageId=2166
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_JOIN_NT4_DOMAIN
Language=English        ;Owner=ilanh    Reviewers=pesachs
The Message Queuing service cannot join the '%1' Windows NT 4.0 domain.
The Active Directory Integration subcomponent was therefore removed.
In a Windows NT 4.0 domain, the Message Queuing service needs the name of a primary site controller (PSC).
To join this Windows NT 4.0 domain, you must reinstall Active Directory Integration. To do this, in Add/Remove Windows Components, select Message Queuing, click Details, and select Active Directory Integration.
.

MessageId=2167
Severity=Informational
Facility=Application
SymbolicName=EVENT_INFO_LOCKDOWN
Language=English        ;Owner=uribz    Reviewers=none
Message Queuing is operating in Hardened mode.
.

MessageId=2168
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_QM_NOT_CLUSTER_AWARE
Language=English        ;Owner=ilanh    Reviewers=pesachs
The Message Queuing service resource cannot bind to the cluster IP address  (Error: %1).
This prevents the Message Queuing resource from coming online on this node.
One possible reason is that the Message Queuing service running on the physical node was started before the computer became a member of the server cluster.
As a result, the Message Queuing service running on the physical node listens on all IP addresses of the computer and prevents the Message Queuing resource from listening on the cluster IP address.
To solve this problem, restart the Message Queuing service on the physical node.
.

MessageId=2169
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_ROUTING_SERVER_LEAVE_DOMAIN
Language=English        ;Owner=ilanh    Reviewers=pesachs
The local computer is a Message Queuing routing server that formerly belonged to the '%1' domain and is now operating in workgroup mode.
Other Message Queuing clients still regard this computer as a routing server and will try to route messages through this computer.
To solve this problem, you need to manually delete the Message Queuing objects for this computer in Active Directory.
Please delete the following two objects:
1) The msmq object under the computer object of this computer in the Computers container in the Active Directory Users and Computers snap-in: 'CN=msmq,CN=%2,CN=computers,DC=%1,DC=...'
2) The MSMQ Settings object under the server object for this computer in the Active Directory Sites and Services snap-in: 'CN=MSMQ Settings,CN=%2,CN=Servers,CN=<SiteName>,CN=Sites,CN=Configuration,DC=...'
You also need to uninstall Routing Support and Downlevel Client Support.
To do this, in Add/Remove Windows Components, select Message Queuing, click Details, and clear the Routing Support and Downlevel Client Support check boxes.
.

MessageId=2170
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_IP_BIND_FAILED
Language=English        ;Owner=uribz    Reviewers=pesachs
Message Queuing failed to bind to port 1801. The port may already be bound to another process. Make sure that the port is free and try to start Message Queuing again. If this problem arises during setup, you must free the port and run setup again.
.

MessageId=2171
Severity=Warning
Facility=Application
SymbolicName=EVENT_WARN_PING_BIND_FAILED
Language=English        ;Owner=uribz    Reviewers=pesachs
Message Queuing cannot bind to UDP port 3527. Message Queuing's internal ping mechanism uses this port to establish network connections. Another process may be using this port. Message Queuing can continue to operate without using this port, but connection times will not be optimal. To optimize the establishment of connections, free this port and restart Message Queuing.
.

MessageId=2172
Severity=Informational
Facility=Application
SymbolicName=EVENT_INFO_MQDS_WEAKEN_SECURITY
Language=English        ;Owner=ilanh    Reviewers=pesachs
The MsmqServices object is configured with weakened security to support MSMQ 1.0 clients.
With weakened security, the Message Queuing Downlevel Client Support service will use its own rights (under the LocalSystem account on a domain controller) to view object properties, but it will not bypass the security restrictions on creating Message Queuing objects and setting their properties.
.

MessageId=2173
Severity=Informational
Facility=Application
SymbolicName=EVENT_INFO_MQDS_DEFAULT_SECURITY
Language=English        ;Owner=ilanh    Reviewers=pesachs
The MsmqServices object is configured with default security.
MSMQ 1.0 clients will not be able to query Active Directory in this configuration.
.

MessageId=2174
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_MQDS_MIXED_MODE
Language=English        ;Owner=ilanh    Reviewers=pesachs
Message Queuing Downlevel Client Support cannot operate in mixed mode.
Mixed mode is a transient mode in which Message Queuing deployment is in the middle of migration from MQIS (for MSMQ 1.0) to Active Directory.
In this mode, some sites are still Windows NT 4.0 sites and are mastered by the PEC and PSCs.
Mixed mode might require creating/deleting/updating objects that belong to Windows NT 4.0 sites. These operations are not supported by Message Queuing Downlevel Client Support.
After completing the migration of all Windows NT 4.0 sites to Active Directory (migration of the PEC and all PSCs in Windows NT 4.0 sites), Message Queuing will no longer be in mixed mode.
.

MessageId=2175
Severity=Warning
Facility=Application
SymbolicName=EVENT_USE_RC2_LEN40
Language=English        ;Owner=doronj    Reviewers= PesachS
Message Queuing will use an encryption key with an effective length of 40 bits when sending messages encrypted with the RC2 encryption algorithm. To restore strong encryption, remove the registry value HKLM\Software\Microsoft\MSMQ\Parameters\Security\SendEnhRC2With40.
.

MessageId=2176
Severity=Informational
Facility=Application
SymbolicName=EVENT_INFO_MULTICAST_SENDING_IP_NOT_DEFINED
Language=English        ;Owner=tomerw    Reviewers=PesachS
Message Queuing found multiple IP addresses for the local computer. Message Queuing will use the default IP address determined by the PGM driver for multicast messages.
To use a different IP address, set the \HKLM\Software\Microsoft\MSMQ\Parameters\%1 registry value to one of the following valid IP addresses: %2.
.

MessageId=2177
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_ACCESS_DENIED_TO_GROUP_MEMBERSHIPS
Language=English        ;Owner=talk    Reviewers=PesachS,RayneW
The Message Queuing service rejects incoming messages when it is unable to check whether the sender is allowed access to the queue for sending messages.
In this case, the queue affected is %1, but note that an event might not be issued every time this problem occurs.%n
To perform this access check, Message Queuing needs access to the TokenGroupsGlobalAndUniversal attribute of the sender's user object. Only users with domain administration permissions can add members to the Windows Authorization Access Group, which is allowed access to the TokenGroupsGlobalAndUniversal attribute, in one of two ways:%n
1) For best security practice, add only the computer accounts that need access to the TokenGroupsGlobalAndUniversal attribute to the Windows Authorization Access Group. The domain administrator will repeat this operation for other Message Queuing computers that require the permission, manually adding the relevant accounts to the Windows Authorization Access Group.%n
2) As a less secure practice, add the Authenticated Users group to the Windows Authorization Access group. This grants every authenticated user, including the Message Queuing service on any computer, access to the TokenGroupsGlobalAndUniversal attribute for all users, and requires no further manual administration.
.


;//+----------------------------------------------------------------------------
;//
;//  The following events are issued by the msmq resource dll (mqclus.dll).
;//  Events number overlap.
;//  Pay attention not to add below events that are issued by the msmq service.
;//
;//+-----------------------------------------------------------------------------


MessageId=2000
Severity=Error
Facility=MSMQ
SymbolicName=MSMQ_NOT_INSTALLED_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
Message Queuing cluster resources are not supported on this node because Message Queuing is not installed. To install Message Queuing open Add or Remove Programs from Control Panel, click Add/Remove Windows Components, and select Message Queuing.
.

MessageId=2001
Severity=Error
Facility=MSMQ
SymbolicName=DEP_CLIENT_INSTALLED_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
Message Queuing cluster resources are not supported on this node because Message Queuing is installed as a dependent client. To upgrade this computer to a Message Queuing server that supports cluster resources, use the Windows Components Wizard to install the Local Storage subcomponent on this computer.
.

MessageId=2002
Severity=Error
Facility=MSMQ
SymbolicName=REQUIRED_DEPENDENCIES_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
At least one of the required dependencies was not found. Please verify that the Message Queuing cluster resources are dependent on the Disk and Network Name resources.
.

MessageId=2003
Severity=Error
Facility=MSMQ
SymbolicName=NO_MEMORY_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
There are insufficient memory resources.
.

MessageId=2004
Severity=Error
Facility=MSMQ
SymbolicName=OPEN_SCM_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
No connection can be established with Service Control Manager (Error: 0x%1). Please check your administrative permissions.
.

MessageId=2005
Severity=Error
Facility=MSMQ
SymbolicName=OPEN_CLUSTER_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
No connection can be opened to this cluster (Error: 0x%1).
.

MessageId=2006
Severity=Error
Facility=MSMQ
SymbolicName=OPEN_RESOURCE_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
No connection can be opened to the %1 resource (Error: 0x%2).
.

MessageId=2007
Severity=Error
Facility=MSMQ
SymbolicName=READ_REGISTRY_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
Message Queuing registry values cannot be read. The registry may be corrupted (Error: 0x%1). Please reinstall Message Queuing on this computer.
.

MessageId=2008
Severity=Error
Facility=MSMQ
SymbolicName=ADS_INIT_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
Access to Active Directory cannot be initialized. Please verify your permissions and network connectivity.
.

MessageId=2009
Severity=Error
Facility=MSMQ
SymbolicName=ADS_QUERY_SERVER_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
Queries cannot be sent to the Message Queuing server '%1' (Error: 0x%2). Please verify your permissions and network connectivity.
.

MessageId=2011
Severity=Error
Facility=MSMQ
SymbolicName=ADS_CREATE_MSMQ_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
Message Queuing objects cannot be created in Active Directory (Error: 0x%1). Please verify your permissions and network connectivity.
.

MessageId=2012
Severity=Error
Facility=MSMQ
SymbolicName=ADS_STORE_KEYS_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
Public keys cannot be stored in Active Directory (Error: 0x%1).
.

MessageId=2013
Severity=Error
Facility=MSMQ
SymbolicName=ADS_READ_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
Message Queuing information cannot be read from Active Directory (Error: 0x%1). This may be caused by replication delays or insufficient security permissions.
.

MessageId=2014
Severity=Error
Facility=MSMQ
SymbolicName=REGISTRY_CP_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
A registry checkpoint cannot be added or removed (Error: 0x%1).
.

MessageId=2015
Severity=Error
Facility=MSMQ
SymbolicName=CRYPTO_CP_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
A Crypto checkpoint cannot be added or removed (Error: 0x%1).
.

MessageId=2016
Severity=Error
Facility=MSMQ
SymbolicName=CREATE_SERVICE_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
The %1 service cannot be created (Error: 0x%2).
.

MessageId=2017
Severity=Error
Facility=MSMQ
SymbolicName=STOP_SERVICE_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
The %1 service cannot be stopped (Error: 0x%2).
.

MessageId=2018
Severity=Error
Facility=MSMQ
SymbolicName=DELETE_SERVICE_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
The %1 service cannot be deleted (Error: 0x%2).
.

MessageId=2019
Severity=Error
Facility=MSMQ
SymbolicName=START_SERVICE_ERR
Language=English        ;Owner=shaik    Reviewers=pesachs
The %1 service cannot be started (Error: 0x%2).
.

MessageId=2021
Severity=Informational
Facility=MSMQ
SymbolicName=CONNECT_SERVER_OK
Language=English        ;Owner=shaik    Reviewers=pesachs
A connection to the Message Queuing server '%1' was established.
.

MessageId=2023
Severity=Informational
Facility=MSMQ
SymbolicName=ADS_CREATE_MSMQ_OK
Language=English        ;Owner=shaik    Reviewers=pesachs
Message Queuing objects were successfully created under the computer '%1' in Active Directory.
.

MessageId=2024
Severity=Informational
Facility=MSMQ
SymbolicName=START_SERVICE_OK
Language=English        ;Owner=shaik    Reviewers=pesachs
The Message Queuing service '%1' is starting.
.

MessageId=2025
Severity=Error
Facility=MSMQ
SymbolicName=EVENT_ERROR_NETNAME_REQUIRE_KERBEROS
Language=English        ;Owner=ilanh    Reviewers=pesachs
The Message Queuing resource failed to come online.
The Message Queuing resource depends on the network name resource with Kerberos authentication enabled.
Please verify that Kerberos authentication is enabled for the network name resource.
To enable Kerberos authentication for the '%1' resource, perform the following steps.
1. Open Cluster Administrator.
2. In the Groups folder, select the applicable group.
3. In the details pane, right-click the '%1' resource and click Take Offline.
4. Right-click the '%1' resource and click Properties.
5. On the Parameters page, select Enable Kerberos Authentication, click Apply, and click OK.
6. Right-click the '%1' resource, and click Bring Online.
.

MessageId=2026
Severity=Warning
Facility=MSMQ
SymbolicName=EVENT_WARN_NEW_QM_GUID
Language=English        ;Owner=talk    Reviewers=pesachs
The Message Queuing service on this computer is now represented by a new MSMQ-Configuration object. 
As a result, all transactional messages that were sent using the source computer identifier
specified by the old MSMQ-Configuration object but have not reached their destination queue 
will be discarded or placed in the local transactional dead-letter queue.
.

;
;#define  MQSec_OK  0
;
;#define MQSec_E_BASE  (MQ_E_BASE + 0x0c00)
;#define MQSec_I_BASE  (MQ_I_BASE + 0x0c00)
;
;//+----------------------------------
;//
;//  Error messages
;//
;//+----------------------------------

MessageIdTypedef = HRESULT

MessageId=0xc01
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_UNKNOWN
Language=English        ;Owner=ilanh    Reviewers=none
Generic Error in MSMQ Security.
.

MessageId=0xc02
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_INIT_SD
Language=English        ;Owner=ilanh    Reviewers=none
Failed in ConvertSDToNTXFormat(), InitializeSecurityDescriptor(). LastErr- %1!lu!t
.

MessageId=0xc03
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_SD_NOT_VALID
Language=English        ;Owner=ilanh    Reviewers=none
The security descriptor is not valid.
.

MessageId=0xc04
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_MAKESELF_GETLEN
Language=English        ;Owner=ilanh    Reviewers=none
Failed in ConvertSDToNTXFormat(), can't get MakeSelf len. LastErr- %1!lu!t
.

MessageId=0xc05
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_INVALID_PARAMETER
Language=English        ;Owner=ilanh    Reviewers=none
Invalid input parameter.
.

MessageId=0xc06
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_NO_MEMORY
Language=English        ;Owner=ilanh    Reviewers=none
Memory allocation failed
.

MessageId=0xc07
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_INVALID_CALL
Language=English        ;Owner=ilanh    Reviewers=none
Unexpected call to this function.
.

MessageId=0xc08
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CREATE_KEYSET
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptAcquireContext(), hr- %1!lx!h, LastErr- %2!lu!t, %3!lx!h
.

MessageId=0xc0a
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_SDCONVERT_GETACE
Language=English        ;Owner=ilanh    Reviewers=none
Failed in GetAce(index- %1!lu!t) while converting SD formats. LastErr- %2!lu!t, %3!lx!h
.

MessageId=0xc0b
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_DEL_BAD_KEY_CONTNR
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptAcquireContext(), hr- %1!lx!h, LastErr- %2!lu!t, %3!lx!h
.

MessageId=0xc0c
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_EXPORT_PUB_FIRST
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptExportPublicKeyInfo(), first call. LastErr- %1!lu!t
.

MessageId=0xc0d
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_EXPORT_PUB_SECOND
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptExportPublicKeyInfo(), second call. LastErr- %1!lu!t
.

MessageId=0xc0e
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_ENCODE_CERT_FIRST
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptSignAndEncodeCertificate(), hr- %1!lx!h, LastErr- %2!lu!t, %3!lx!h
.

MessageId=0xc0f
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_ENCODE_CERT_SECOND
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptSignAndEncodeCertificate(), hr- %1!lx!h, LastErr- %2!lu!t, %3!lx!h
.

MessageId=0xc10
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_ENC_RDNNAME_FIRST
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptEncodeObject(), hr- %1!lx!h, LastErr- %2!lu!t, %3!lx!h
.

MessageId=0xc11
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_ENC_RDNNAME_SECOND
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptEncodeObject(), hr- %1!lx!h, LastErr- %2!lu!t, %3!lx!h
.

MessageId=0xc12
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CAN_NOT_ADD
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CertAddEncodedCertificateToStore(), LastErr- %1!lu!t
.

MessageId=0xc13
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CAN_NOT_GET_HASH
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptGetHashParam(), LastErr- %1!lu!t, %2!lx!h
.

MessageId=0xc14
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CAN_NOT_HASH
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptHashData(), LastErr- %1!lu!t, %2!lx!h
.

MessageId=0xc15
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CANT_CREATE_HASH
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptCreateHash(), LastErr- %1!lu!t, %2!lx!h
.

MessageId=0xc16
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_ENCODE_HASH_FIRST
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptEncodeObject(), hr- %1!lx!h, LastErr- %2!lu!t, %3!lx!h
.

MessageId=0xc17
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_ENCODE_HASH_SECOND
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CryptEncodeObject(), hr- %1!lx!h, LastErr- %2!lu!t, %3!lx!h
.

MessageId=0xc18
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CANT_VALIDATE
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CertVerifySubjectCertificateContext(), hr- %1!lx!h, LastErr- %2!lu!t, %3!lx!h
.

MessageId=0xc19
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CANT_OPEN_SYSSTORE
Language=English        ;Owner=ilanh    Reviewers=none
Failed in CertOpenSystemStoreA(), hr- %1!lx!h, LastErr- %2!lu!t, %3!lx!h
.

MessageId=0xc1a
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_NOT_SELF_RELATIVE
Language=English        ;Owner=ilanh    Reviewers=none
The security descriptor is not in self-relative format.
.

MessageId=0xc1b
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CANT_SELF_RELATIVE
Language=English        ;Owner=ilanh    Reviewers=none
Failed to convert security descriptor to self-relative format. Err- %1!lu!t, %2!lx!h.
.

MessageId=0xc1c
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CANT_MAP_NT5_RIGHTS
Language=English        ;Owner=ilanh    Reviewers=none
Failed to map the NT5 DS rights to MSMQ 1.0 rights.
.

MessageId=0xc1d
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_LOOKUP_PRIV
Language=English        ;Owner=ilanh    Reviewers=none
Failed in LookupPrivilegeValue() (privilge.cpp), LastErr- %1!lu!t, %2!lx!h
.

MessageId=0xc1e
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_ADJUST_TOKEN
Language=English        ;Owner=ilanh    Reviewers=none
Failed in AdjustTokenPrivileges() (privilge.cpp), LastErr- %1!lu!t, %2!lx!h
.

MessageId=0xc1f
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_OPEN_TOKEN
Language=English        ;Owner=ilanh    Reviewers=none
Failed in OpenProcess/ThreadToken() (privilge.cpp), LastErr- %1!lu!t, %2!lx!h
.

MessageId=0xc20
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_READ_REG
Language=English        ;Owner=ilanh    Reviewers=none
Failed to read registry %1, err- %2!lu!t
.

MessageId=0xc22
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_PUTKEY_GEN_USER
Language=English        ;Owner=ilanh    Reviewers=none
Failed in ::PutPublicKey(), calling CryptGenKey(). LastErr- %1!lu!t
.

MessageId=0xc27
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CANT_OPEN_STORE
Language=English        ;Owner=ilanh    Reviewers=none
Can't open user certificates store, err- %1!lx!h, %2!lu!t. Ignore if internal certificate Not Available.
.

MessageId=0xc28
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_WRONG_DACL_VERSION
Language=English        ;Owner=ilanh    Reviewers=none
Version of DACL is not the one expected in that context.
.

MessageId=0xc29
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CERT_EXPIRED
Language=English        ;Owner=ilanh    Reviewers=none
Certificate already expired.
.

MessageId=0xc2a
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_DCD_RDNNAME_FIRST
Language=English        ;Owner=ilanh    Reviewers=none
First call to decode failed
.

MessageId=0xc2b
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_FAIL_GETTOKENINFO
Language=English        ;Owner=ilanh    Reviewers=none
Failed in call to GetTokenInformation()
.

MessageId=0xc2c
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CERT_TIME_NOTVALID
Language=English        ;Owner=ilanh    Reviewers=none
Time of certificate is not valid.
.

MessageId=0xc2d
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CERT_NOT_SIGNED
Language=English        ;Owner=ilanh    Reviewers=none
Certificate is not signed by issuer.
.

MessageId=0xc2e
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CERT_REVOCED
Language=English        ;Owner=ilanh    Reviewers=none
Certificate already revoced.
.

MessageId=0xc2f
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_UNKNWON_PROVIDER
Language=English        ;Owner=ilanh    Reviewers=none
The crypto provider is not known.
.

MessageId=0xc30
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_UNKNWON_CRYPT_PROP
Language=English        ;Owner=ilanh    Reviewers=none
The crypto property is not known.
.

MessageId=0xc64
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CANT_ACQUIRE_CTX
Language=English        ;Owner=ilanh    Reviewers=none
Failed to acquire crypto context.
.

MessageId=0xc65
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CERT_NOT_VALID_YET
Language=English        ;Owner=ilanh    Reviewers=none
Certificate time is not valid yet.
.

MessageId=0xc66
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CAN_NOT_DELETE
Language=English        ;Owner=ilanh    Reviewers=none
Fail to delete Certificate from store.
.

MessageId=0xc69
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_NULL_SD
Language=English        ;Owner=ilanh    Reviewers=none
Input security descriptor is NULL.
.

MessageId=0xc6a
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_UNSUPPORT_RDNNAME
Language=English        ;Owner=ilanh    Reviewers=none
Unsupported RDN name.
.

MessageId=0xc6c
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CAN_NOT_GET_KEY
Language=English        ;Owner=ilanh    Reviewers=none
Fail to import public key from the certificate.
.

MessageId=0xc6d
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_DCD_RDNNAME_SECOND
Language=English        ;Owner=ilanh    Reviewers=none
Second call to decode RDN name failed.
.

MessageId=0xc6e
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_CERT_NOT_FOUND
Language=English        ;Owner=ilanh    Reviewers=none
Certificate was not found in store.
.

MessageId=0xc6f
Severity=Error
Facility=MSMQ
SymbolicName=MQSec_E_PUTKEY_GET_USER
Language=English        ;Owner=ilanh    Reviewers=none
Fail to get user key.
.

;//+----------------------------------
;//
;//  Information messages
;//
;//+----------------------------------

MessageId=0xc02
Severity=Informational
Facility=MSMQ
SymbolicName=MQSec_I_SD_CONV_NOT_NEEDED
Language=English        ;Owner=ilanh    Reviewers=none
Conversion of security descriptor is not needed.
.


;//
;// Triggers Service codes
;//

MessageIdTypedef = HRESULT

MessageId=0xe00
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR
Language=English        ;Owner=urih    Reviewers=none
GenericError
.

MessageId=0xe01
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_INVALID_PARAMETER
Language=English        ;Owner=urih    Reviewers=none
The parameter supplied is invalid.
.

MessageId=0xe02
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_RULE_NOT_FOUND
Language=English        ;Owner=urih    Reviewers=none
The rule requested cannot be found.
.

MessageId=0xe03
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_RULE_NOT_ATTACHED
Language=English        ;Owner=urih    Reviewers=none
The rule specified is not attached to this trigger.
.

MessageId=0xe04
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_RULE_ALLREADY_ATTACHED
Language=English        ;Owner=urih    Reviewers=none
The rule specified is already attached to this trigger.
.

MessageId=0xe05
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_TRIGGER_NOT_FOUND
Language=English        ;Owner=urih    Reviewers=none
The trigger requested cannot be found.
.

MessageId=0xe06
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_INSUFFICIENT_RESOURCES
Language=English        ;Owner=urih    Reviewers=none
There are insufficient resources to perform the operation.
.


MessageId=0xe07
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_INVALID_RULE_CONDITION_PARAMETER
Language=English        ;Owner=urih    Reviewers=none
The rule condition parameter supplied is invalid.
.

MessageId=0xe08
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_INVALID_RULE_ACTION_PARAMETER
Language=English        ;Owner=urih    Reviewers=none
The rule action parameter supplied is invalid.
.

MessageId=0xe09
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_RULESET_NOT_INIT
Language=English        ;Owner=urih    Reviewers=none
The RuleSet object was not initialized. Please initialize this object before calling any method of RuleSet.
.

MessageId=0xe0a
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_CREATE_COM_OBJECT
Language=English        ;Owner=urih    Reviewers=none
An instance of the object class specified could not be created.
.

MessageId=0xe0b
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_INVOKE_COM_OBJECT
Language=English        ;Owner=urih    Reviewers=none
An instance of the custom COM object could not be invoked.
.

MessageId=0xe0c
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_INVOKE_EXE
Language=English        ;Owner=urih    Reviewers=none
The stand-alone executable cannot be invoked.
.

MessageId=0xe0d
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_STORE_DATA_FAILED
Language=English        ;Owner=urih    Reviewers=none
The rule or trigger data cannot be stored in the registry.
.

MessageId=0xe0e
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_COULD_NOT_RETREIVE_RULE_DATA
Language=English        ;Owner=urih    Reviewers=none
The rule information cannot be retrieved from the registry.
.

MessageId=0xe0f
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_NOT_IMPLEMENTED
Language=English        ;Owner=urih    Reviewers=none
This function is not supported on this version of Message Queuing Triggers.
.

MessageId=0xe10
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_INIT_FAILED
Language=English        ;Owner=urih    Reviewers=none
The object cannot be initialized.
.

MessageId=0xe11
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_TRIGGERSET_NOT_INIT
Language=English        ;Owner=urih    Reviewers=none
The TriggerSet object was not initialized. Please initialize this object before calling any method of TriggerSet.
.

MessageId=0xe12
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_COULD_NOT_RETREIVE_TRIGGER_DATA
Language=English        ;Owner=urih    Reviewers=none
The trigger data cannot be retrieved from the registry.
.

MessageId=0xe13
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_COULD_NOT_ADD_TRIGGER
Language=English        ;Owner=urih    Reviewers=none
The new trigger cannot be added to the trigger set.
.

MessageId=0xe14
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_MULTIPLE_RECEIVE_TRIGGER
Language=English        ;Owner=urih    Reviewers=none
Multiple triggers with retrieval processing are not allowed on a single queue.
.

MessageId=0xe15
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_COULD_NOT_DELETE_TRIGGER
Language=English        ;Owner=urih    Reviewers=none
The trigger cannot be deleted from the triggers store.
.

MessageId=0xe16
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_ERROR_COULD_NOT_DELETE_RULE
Language=English        ;Owner=urih    Reviewers=none
The rule cannot be deleted from the triggers store.
.

MessageId=0xe17
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_INVALID_RULEID
Language=English        ;Owner=urih    Reviewers=none
The rule ID supplied is invalid.
.

MessageId=0xe18
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_INVALID_RULE_NAME
Language=English        ;Owner=urih    Reviewers=none
The rule name supplied exceeds the permissible length.
.

MessageId=0xe19
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_INVALID_RULE_CONDITION
Language=English        ;Owner=urih    Reviewers=none
The rule condition supplied exceeds the permissible length.
.

MessageId=0xe1a
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_INVALID_RULE_ACTION
Language=English        ;Owner=urih    Reviewers=none
The rule action supplied exceeds the permissible length.
.

MessageId=0xe1b
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_INVALID_RULE_DESCRIPTION
Language=English        ;Owner=urih    Reviewers=none
The rule description supplied exceeds the permissible length.
.

MessageId=0xe1c
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_INVALID_TRIGGER_ID
Language=English        ;Owner=urih    Reviewers=none
The trigger ID supplied is invalid.
.

MessageId=0xe1d
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_INVALID_TRIGGER_NAME
Language=English        ;Owner=urih    Reviewers=none
The trigger name supplied is invalid.
.

MessageId=0xe1e
Severity=Error
Facility=MSMQ
SymbolicName=MQTRIG_INVALID_TRIGGER_QUEUE
Language=English        ;Owner=urih    Reviewers=none
The queue path name supplied for the trigger is invalid.
.

;
;
;//************************************************
;//
;//  E V E N T     C O D E S
;//
;//************************************************
;

MessageIdTypedef = DWORD


MessageId=2200
Severity=Informational
Facility=Application
SymbolicName=MSMQ_TRIGGER_INITIALIZED
Language=English        ;Owner=urih    Reviewers=none
Message Queuing Triggers started successfully.
.
MessageId=2201
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_INIT_FAILED
Language=English        ;Owner=urih    Reviewers=none
Message Queuing Triggers initialization failed (Error: %1).
.

MessageId=2202
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_MQGENTR_CREATE_INSTANCE_FAILED
Language=English        ;Owner=urih    Reviewers=none
Message Queuing Triggers failed to create an instance of the Triggers Transactional object (Error: %1). As a result, no transactional retrieval triggers can be invoked. Mqgentr.dll may not be registered or may not exist in the %SystemRoot%\System32 folder.
.

MessageId=2203
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_FAIL_RETREIVE_TRIGGER_INFORMATION
Language=English        ;Owner=urih    Reviewers=none
The trigger information cannot be retrieved from the trigger store. At least one trigger is nonfunctional.
.

MessageId=2204
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_FAIL_RETREIVE_ATTACHED_RULE_INFORMATION
Language=English        ;Owner=urih    Reviewers=none
The information for the attached rule cannot be retrieved from the trigger store for trigger %1 (Trigger Name: %2). The trigger is nonfunctional.
.

MessageId=2205
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_OPEN_QUEUE_FAILED
Language=English        ;Owner=urih    Reviewers=none
Opening the queue %1 for peeking at or retrieving messages failed (Error: %2). Local users may not have been granted the Peek Message or Receive Message permission for this queue. The trigger %3 is nonfunctional.
.

MessageId=2206
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_OPEN_NOTIFICATION_QUEUE_FAILED
Language=English        ;Owner=urih    Reviewers=none
Opening an internal queue needed by the Triggers service failed (Error: %1). The account under which the Triggers service is running may not have permissions to open this queue, or the queue may have been deleted. To solve this problem, uninstall and reinstall the Triggers service.
.

MessageId=2207
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_RULE_HANDLE_CREATION_FAILED
Language=English        ;Owner=urih    Reviewers=none
An instance of a rule handler for the rule %1 with the ID %2 was not created (Error: %3). The rule cannot be evaluated and executed. The MSMQTriggerObjects.MSMQRuleHandler class may not be registered, or your System folder does not contain mqtrig.dll.
.

MessageId=2208
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_RULE_PARSING_FAILED
Language=English        ;Owner=urih    Reviewers=none
The action or a condition parameter for the rule %1 with the ID %2 was not parsed (Error: %3). The rule cannot be evaluated and executed. You can remove the rule entry from the Triggers registry and recreate it using local computer management.
.

MessageId=2209
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_RULE_INVOCATION_FAILED
Language=English
The action defined by the rule %1 with the ID %2 was not invoked (Error: %3). The COM object may not be registered, or the executable file may not exist in your path.
.

MessageId=2210
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_TRANSACTIONAL_INVOCATION_FAILED
Language=English        ;Owner=urih    Reviewers=none
Rule evaluation or execution failed for the transactional trigger %1 with the ID %2 (Error: %3). A rule condition or action parameter may be invalid, or the COM object invoked may not be registered correctly.
.

MessageId=2211
Severity=Informational
Facility=Application
SymbolicName=MSMQ_TRIGGER_STOPPED
Language=English        ;Owner=urih    Reviewers=none
Message Queuing Triggers service stopped.
.

MessageId=2212
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_QUEUE_NOT_FOUND
Language=English        ;Owner=urih    Reviewers=none
The queue %1 was not found. It may have been deleted. The trigger %2 associated with this queue is nonfunctional. Please use Computer Management to remove this trigger.
.

MessageId=2213
Severity=Error
Facility=MSMQ
SymbolicName=REQUIRED_TRIGGER_DEPENDENCIES_ERR
Language=English        ;Owner=urih    Reviewers=none
At least one of the required dependencies was not found. Please verify that MSMQ Triggers resources are dependent on Message Queue resources.
.

MessageId=2214
Severity=Error
Facility=MSMQ
SymbolicName=REGISTRY_UPDATE_ERR
Language=English        ;Owner=urih    Reviewers=none
Unable to update EventLog information in registry for '%1'.
.

MessageId=2215
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_COMPLUS_REGISTRATION_FAILED
Language=English        ;Owner=nelak    Reviewers=none
The Triggers transactional component could not be registered in COM+ (Error: %1).
.

MessageId=2216
Severity=Error
Facility=Application
SymbolicName=MSMQ_TRIGGER_RETRIEVE_DOWNLEVL_QUEUE_FAILED
Language=English        ;Owner=urih    Reviewers=none
Retrieving messages from a queue located on a remote pre-Windows XP computer is not supported. All triggers associated with the queue %1 are nonfunctional.
.

MessageId=2217
Severity=Informational
Facility=Application
SymbolicName=MSMQ_TRIGGER_RULE_INVOCATION_SUCCESS
Language=English
The parameters of the rule %1 with the ID %2 are now valid. The rule was evaluated successfully, and the action defined by it was executed.
.

MessageId=2218
Severity=Informational
Facility=Application
SymbolicName=MSMQ_TRIGGER_TRANSACTIONAL_INVOCATION_SUCCESS
Language=English        ;Owner=urih    Reviewers=none
The rules attached to the trigger %1 with the ID %2 are now valid. All the rules were evaluated successfully, and the actions defined by them were executed.
.

MessageId=2219
Severity=Informational
Facility=Application
SymbolicName=EVENT_INFO_TRIGGER_ACCOUNT_CHANGED
Language=English        ;Owner=talk    Reviewers=pesachs,raynew
The Triggers service has been set to run under the Network Service account, but this setting will take effect only after the Triggers service is restarted. 
If you want the Triggers service to continue to run under the Local Service account (the default for the previous version of Triggers), modify the logon settings 
for the Triggers service in Computer Management.
.

MessageId=2220
Severity=Error
Facility=Application
SymbolicName=EVENT_ERROR_MSMQ_CLUSTER_BIND_IP_NOT_EXIST
Language=English        ;Owner=tomerw    Reviewers=pesachs
The IP address %1 specified in the \HKLM\Software\Microsoft\MSMQ\Parameters\%2 registry value is not a valid IP address for this computer.
The Message Queuing service will use the IP address %3 instead.
Please remove this registry value or set it to one of the following valid IP addresses: %4.
.

MessageId=2221
Severity=Informational
Facility=Application
SymbolicName=EVENT_INFO_MSMQ_CLUSTER_NO_BIND_IP_IN_REGISTRY
Language=English        ;Owner=tomerw    Reviewers=pesachs
Message Queuing will use the IP address %1.
To use a different IP address, set the \HKLM\Software\Microsoft\MSMQ\Parameters\%2 registry value to one of the following valid IP addresses: %3.
.

MessageId=2222
Severity=Warning
Facility=Application
SymbolicName=EVENT_WARN_TRIGGER_ACCOUNT_CANNOT_BE_CHANGED
Language=English        ;Owner=talk    Reviewers=pesachs
The change for the Triggers service to run under the Network Service account will not take effect as long as the "Allow service to interact with desktop" check box is selected. 
To allow this change to take effect, clear the "Allow service to interact with desktop" check box on the Log On page of the Properties dialog box for Message Queuing Triggers
in Computer Management and restart the service.
.

;#define  MQMig_OK  0
;
;#define MQMig_E_BASE  (MQ_E_BASE + 0x0f00)
;#define MQMig_I_BASE  (MQ_I_BASE + 0x0f00)
;
;//+----------------------------------
;//
;//  Error messages
;//
;//+----------------------------------

;//
;// Should be HRESULT, we use DWORD because some of the error messages are used for events.
;//
MessageIdTypedef = DWORD

MessageId=0xf01
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_UNKNOWN
Language=English        ;Owner=doronj    Reviewers=none
An error has occurred during the Message Queuing upgrade process.
.

MessageId=0xf02
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_CREATE_ENT
Language=English        ;Owner=doronj    Reviewers=none
Unable to create the MsmqServices object in Active Directory, hr- %1!lx!h.
.

MessageId=0xf03
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_LOAD_ODBCCP
Language=English        ;Owner=doronj    Reviewers=none
Unable to load the ODBCCP32 DLL. LastErr- %1!lu!t.
.

MessageId=0xf04
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_GETADRS_ODBCCP
Language=English        ;Owner=doronj    Reviewers=none
Unable to obtain an address (GetProcAddress) from the ODBCCP32 DLL. LastErr- %1!lu!t.
.

MessageId=0xf05
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_CREATE_DSN
Language=English        ;Owner=doronj    Reviewers=none
Unable to create an ODBC data source name (DSN) for the MQIS database.
.

MessageId=0xf06
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_LOADPERF
Language=English        ;Owner=doronj    Reviewers=none
Unable to load performance counter information to the registry. LastErr- %1!lu!t.
.

MessageId=0xf07
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_MACHINES_SQL_FAIL
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the MSMQ computers. An SQL related problem was encountered while querying the MQIS database. status- %1!lx!h.
.

MessageId=0xf08
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SITEGATES_SQL_FAIL
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the MSMQ site gates. An SQL related problem was encountered while querying the MQIS database. status- %1!lx!h.
.

MessageId=0xf09
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SITELINKS_SQL_FAIL
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the MSMQ site links. An SQL related problem was encountered while querying the MQIS database. status- %1!lx!h.
.

MessageId=0xf0a
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CNS_SQL_FAIL
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the connected networks (CNs). An SQL related problem was encountered while querying the MQIS database. status- %1!lx!h.
.

MessageId=0xf0b
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_USERS_SQL_FAIL
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the MSMQ users. An SQL related problem was encountered while querying the MQIS database. status- %1!lx!h.
.

MessageId=0xf0c
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SITES_SQL_FAIL
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the MSMQ sites. An SQL related problem was encountered while querying the MQIS database. status- %1!lx!h.
.

MessageId=0xf0d
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_MCNS_SQL_FAIL
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the foreign computer. An SQL related problem was encountered while querying the MQIS database. status- %1!lx!h.
.

MessageId=0xf0e
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_QUEUES_SQL_FAIL
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the queues. An SQL related problem was encountered while querying the MQIS database. status- %1!lx!h.
.

MessageId=0xf0f
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_FEWER_MACHINES
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade MSMQ computers. iIndex - %1!lu!t, cMachines- %2!lu!t
.

MessageId=0xf10
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_FEWER_SITES
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade MSMQ sites. iIndex - %1!lu!t, cSites- %2!lu!t
.

MessageId=0xf11
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_FEWER_MCNS
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade foreign computers. iIndex - %1!lu!t, cCNs- %2!lu!t
.

MessageId=0xf12
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_FEWER_QUEUES
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade MSMQ queues. iIndex - %1!lu!t, cQueues- %2!lu!t
.

MessageId=0xf13
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_WRONG_MQS_SERVICE
Language=English        ;Owner=doronj    Reviewers=none
Incorrect MQS (MSMQ service type) value in the registry (%1!lu!t)
.

MessageId=0xf14
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_CONNECT_DB
Language=English        ;Owner=doronj    Reviewers=none
Unable to connect to the MQIS database on server %1, status - %2!lx!h
.

MessageId=0xf15
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MAKEDSN
Language=English        ;Owner=doronj    Reviewers=none
Unable to  create an ODBC data source name (DSN) for the MQIS database on server %1, status - %2!lx!h.
.

MessageId=0xf16
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MIGRATE_ENT
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the enterprise in MigrateEnterprise(), status - %1!lx!h.
.

MessageId=0xf17
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MIGRATE_CNS
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the connected networks in MigrateEnterprise(), hr- %1!lx!h.
.

MessageId=0xf18
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MIGRATE_SITELINKS
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the MSMQ routing links in MigrateSiteLinks(), hr- %1!lx!h.
.

MessageId=0xf19
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MIGRATE_SITEGATES
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the site gates in MigrateSiteGates(), hr- %1!lx!h.
.

MessageId=0xf1a
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MIGRATE_SITES
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the sites in MigrateSites(), hr- %1!lx!h.
.

MessageId=0xf1b
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MIGRATE_MACHINES
Language=English        ;Owner=doronj    Reviewers=none
Unable to upgrade the computers in MigrateMachines(), hr- %1!lx!h.
.

MessageId=0xf1c
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MIGRATE_MACHINE
Language=English        ;Owner=doronj    Reviewers=none
Unable to migrate the computer, path- %1, hr- %2!lx!h.
.

MessageId=0xf1d
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MIGRATE_QUEUES
Language=English        ;Owner=doronj    Reviewers=none
Failed in MigrateQueues(), hr- %1!lx!h
.

MessageId=0xf1e
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MIGRATE_QUEUE
Language=English        ;Owner=doronj    Reviewers=none
Queue Migration Failed , path- %1, hr- %2!lx!h
.

MessageId=0xf1f
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MIGRATE_USERS
Language=English        ;Owner=doronj    Reviewers=none
Failed in MigrateUsers(), hr- %1!lx!h
.

MessageId=0xf20
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_NO_CNS
Language=English        ;Owner=doronj    Reviewers=none
There are noconnected network (CN) records listed in the MQIS database.
.

MessageId=0xf21
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SITES_COUNT
Language=English        ;Owner=doronj    Reviewers=none
Unable to determine the number of sites in the MQIS database, hr- %1!lx!h.
.

MessageId=0xf22
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_MACHINES_COUNT
Language=English        ;Owner=doronj    Reviewers=none
Unable to determine the number of computers in the MQIS database, hr- %1!lx!h.
.

MessageId=0xf23
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_QUEUES_COUNT
Language=English        ;Owner=doronj    Reviewers=none
Unable to determine the number of queues in the MQIS database, hr- %1!lx!h.
.

MessageId=0xf24
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CREATE_REG
Language=English        ;Owner=doronj    Reviewers=none
Failed to CreateRegistry(), name: %1, hr- %2!lx!h
.

MessageId=0xf25
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SET_REG_SZ
Language=English        ;Owner=doronj    Reviewers=none
Failed to SetRegistry(), name: %1, sz-value: %2
.

MessageId=0xf26
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SET_REG_DWORD
Language=English        ;Owner=doronj    Reviewers=none
Failed to SetRegistry(), name: %1, dword-value: %2!lu!t
.

MessageId=0xf27
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SET_REG_GUID
Language=English        ;Owner=doronj    Reviewers=none
Failed to SetRegistry(), guid name: %1
.

MessageId=0xf28
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_GET_REG_GUID
Language=English        ;Owner=doronj    Reviewers=none
Failed in MigReadRegistryGuid(), guid name: %1
.

MessageId=0xf29
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_GET_REG_DWORD
Language=English        ;Owner=doronj    Reviewers=none
Failed in MigReadRegistryDW(), dword name: %1
.

MessageId=0xf2a
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_GET_REG_SZ
Language=English        ;Owner=doronj    Reviewers=none
Failed in MigReadRegistrySz(), string name: %1
.

MessageId=0xf2b
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_GET_FIRST_USN
Language=English        ;Owner=doronj    Reviewers=none
Failed in ReadFirstNT5Usn(), h - %1!lx!h
.

MessageId=0xf2c
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_PECSITE_NOT_FOUND
Language=English        ;Owner=doronj    Reviewers=none
Failed in MigrateSites(), unable to locate the PEC site.
.

MessageId=0xf2d
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_NO_SITES_AVAILABLE
Language=English        ;Owner=doronj    Reviewers=none
There are no sites listed in the MQIS database.
.

MessageId=0xf2e
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_NO_MACHINES_AVAIL
Language=English        ;Owner=doronj    Reviewers=none
There are no computers listed in the MQIS database.
.

MessageId=0xf2f
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_NO_SERVERS_AVAIL
Language=English        ;Owner=doronj    Reviewers=none
There are no Message Queuing servers listed in Active Directory.
.

MessageId=0xf30
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_TOO_MANY_SITES
Language=English        ;Owner=doronj    Reviewers=none
Too many site records were fetched from the MQIS database.
.

MessageId=0xf31
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_TOO_MANY_MCNS
Language=English        ;Owner=doronj    Reviewers=none
Too many MachineCNs computer connected network records were fetched from the MQIS database.
.

MessageId=0xf32
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_TOO_MANY_QUEUES
Language=English        ;Owner=doronj    Reviewers=none
Too many queue records were fetched from the MQIS database.
.

MessageId=0xf33
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_TOO_MANY_MACHINES
Language=English        ;Owner=doronj    Reviewers=none
Too many computer records were fetched from the MQIS database.
.

MessageId=0xf34
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_EMPTY_BLOB
Language=English        ;Owner=doronj    Reviewers=none
Blob is empty.
.

MessageId=0xf35
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_CREATE_CONTNER
Language=English        ;Owner=doronj    Reviewers=none
Unable to create container, ldap_add_s(%1) return %2!lx!h.
.

MessageId=0xf36
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_QUERY_ROOTDSE
Language=English        ;Owner=doronj    Reviewers=none
Unable to query RootDSE, err- %1!lx!h.
.

MessageId=0xf37
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_READ_CONTEXT
Language=English        ;Owner=doronj    Reviewers=none
Unable to query the default naming context.
.

MessageId=0xf38
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_TOOMANY_ROOTDSE
Language=English        ;Owner=doronj    Reviewers=none
Too many RootDSE answers
.

MessageId=0xf39
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_INIT_LDAP
Language=English        ;Owner=doronj    Reviewers=none
Unable to start LDAP.
.

MessageId=0xf3a
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_BIND_LDAP
Language=English        ;Owner=doronj    Reviewers=none
Unable to bind to the LDAP server.
.

MessageId=0xf3b
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_CREATE_SITE
Language=English        ;Owner=doronj    Reviewers=none
Unable to create site object %1, err- %2!lu!t.
.

MessageId=0xf3c
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_CREATE_USER
Language=English        ;Owner=doronj    Reviewers=none
Unable to create user object, %1, err- %2!lu!t.
.

MessageId=0xf3d
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_CREATE_SERVERS
Language=English        ;Owner=doronj    Reviewers=none
Unable to create the Servers container, %1, err- %2!lu!t.
.

MessageId=0xf3e
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_READ_HIGHESTUSN
Language=English        ;Owner=doronj    Reviewers=none
Unable to read highestCommittedUSN.
.

MessageId=0xf3f
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SID_NOT_VALID
Language=English        ;Owner=doronj    Reviewers=none
Unable to add the user certificate in Active Directory - the SID is not valid.
.

MessageId=0xf40
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SID_LEN
Language=English        ;Owner=doronj    Reviewers=none
Unable to add the user certificate in Active Directory- the SID length is not valid.
.

MessageId=0xf41
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_LDAP_SEARCH_FAILED
Language=English        ;Owner=doronj    Reviewers=none
QueryUsers, ldap_search_s(%1, filter- %2) return %3!lx!h
.

MessageId=0xf42
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_NO_USERS_RESULTS
Language=English        ;Owner=doronj    Reviewers=none
QueryUsers, ldap_count_entries(%1, filter- %2) does not return users
.

MessageId=0xf43
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_COINIT
Language=English        ;Owner=doronj    Reviewers=none
Failed in CoInitialize(), hr- %1!lx!h
.

MessageId=0xf44
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_ADSGETOBJECT
Language=English        ;Owner=doronj    Reviewers=none
Failed in ADsGetObject(), path- %1, hr- %2!lx!h
.

MessageId=0xf45
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_CREATE_ADDGUID
Language=English        ;Owner=doronj    Reviewers=none
Failed in SetAddGuidPermission(). Can't create AddGuid SD. hr- %1!lx!h
.

MessageId=0xf46
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_NULL_SD
Language=English        ;Owner=doronj    Reviewers=none
The security descriptor is null.
.

MessageId=0xf47
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SD_NOT_VALID
Language=English        ;Owner=doronj    Reviewers=none
The security descriptor is not valid.
.

MessageId=0xf48
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_INIT_SID
Language=English        ;Owner=doronj    Reviewers=none
Failed in SetEveryoneDacl(), InitializeSid(). LastErr- %1!lu!t
.

MessageId=0xf49
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_INIT_ACL
Language=English        ;Owner=doronj    Reviewers=none
Failed in SetEveryoneDacl(), InitializeAcl(). LastErr- %1!lu!t
.

MessageId=0xf4a
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_ADD_ACE
Language=English        ;Owner=doronj    Reviewers=none
Failed in SetEveryoneDacl(), AddAllowedAce(). LastErr- %1!lu!t
.

MessageId=0xf4b
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SET_DACL
Language=English        ;Owner=doronj    Reviewers=none
Failed in SetEveryoneDacl(), Set...Dacl(). LastErr- %1!lu!t
.

MessageId=0xf4c
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_INIT_SD
Language=English        ;Owner=doronj    Reviewers=none
Failed in GetFullControl...(), InitializeSD(). LastErr- %1!lu!t
.

MessageId=0xf4d
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_MAKESELF_GETLEN
Language=English        ;Owner=doronj    Reviewers=none
Failed in GetFullControl...(), can't get MakeSelf len. LastErr- %1!lu!t
.

MessageId=0xf4e
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_GETATTRIBUTES_SD
Language=English        ;Owner=doronj    Reviewers=none
Failed in SetAddGuidPermission(), GetAttributes(), hr- %1!lx!h
.

MessageId=0xf4f
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SETATTRIBUTES_SD
Language=English        ;Owner=doronj    Reviewers=none
Failed in SetAddGuidPermission(), SetAttributes(), hr- %1!lx!h
.

MessageId=0xf50
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SETRESTORE_SD
Language=English        ;Owner=doronj    Reviewers=none
Failed in RestoreCnfgPermissions(), SetAttributes(), hr- %1!lx!h
.

MessageId=0xf51
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_GETATTRIBUTES_NUM
Language=English        ;Owner=doronj    Reviewers=none
Failed in SetCnfgAddGuidPermission(), GetAttributes(), wrong number of results.
.

MessageId=0xf52
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SETATTRIBUTES_NUM
Language=English        ;Owner=doronj    Reviewers=none
Failed in SetCnfgAddGuidPermission(), SetAttributes(), wrong number of results (%1!lu!t).
.

MessageId=0xf53
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SETRESTORE_NUM
Language=English        ;Owner=doronj    Reviewers=none
Failed in RestoreCnfgPermission(), SetAttributes(), wrong number of results (%1!lu!t).
.

MessageId=0xf54
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_GETATTRIBUTES_TYPE
Language=English        ;Owner=doronj    Reviewers=none
Failed in SetCnfgAddGuidPermission(), GetAttributes(), wrong type (%1!lu!t).
.

MessageId=0xf55
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_FAILED
Language=English        ;Owner=doronj    Reviewers=none
The Message Queuing upgrade process has failed.%1Error code- %2!lx!h.%3Please consult the MSMQ administration guide.
.

MessageId=0xf56
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_GET_USER
Language=English        ;Owner=doronj    Reviewers=none
Failed in _SetDomainAddGuidPermission(), GetUserName(), LastErr- %1!lu!t, %2!lx!h
.

MessageId=0xf57
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_GET_SECURITYINFO
Language=English        ;Owner=doronj    Reviewers=none
Failed in _SetDomainAddGuidPermission(), GetSecurityInfo(), LastErr- %1!lu!t, %2!lx!h
.

MessageId=0xf58
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_SET_SECURITYINFO
Language=English        ;Owner=doronj    Reviewers=none
Failed in _SetAddGuidPermission(), SetSecurityInfo(), Err- %1!lu!t, %2!lx!h
.

MessageId=0xf59
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_RSTR_SECURITYINFO
Language=English        ;Owner=doronj    Reviewers=none
Failed in _RestorePermissionsInternal(), SetSecurityInfo(%1), Err- %2!lu!t, %3!lx!h.
.

MessageId=0xf5a
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_SET_ENTRIES
Language=English        ;Owner=doronj    Reviewers=none
Failed in _SetDomainAddGuidPermission(), SetEntriesIn(), LastErr- %1!lu!t, %2!lx!h
.

MessageId=0xf5b
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_FOREIGN_SITE
Language=English        ;Owner=doronj    Reviewers=none
Unable to create foreign site %1, hr- %2!lx!h.
.

MessageId=0xf5c
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_NO_FOREIGN_CNS
Language=English        ;Owner=doronj    Reviewers=none
There are no foreign connected networks (CNs) for a foreign computer.
.

MessageId=0xf5d
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_DELETE_ENT
Language=English        ;Owner=doronj    Reviewers=none
Unable to delete enterprise object from the MQIS database, hr- %1!lx!h.
.

MessageId=0xf5e
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_MODIFY_MIG_ATTRIBUTE
Language=English        ;Owner=doronj    Reviewers=none
Unable to modify attributes, path- %1, hr- %2!lx!h.
.

MessageId=0xf5f
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANNOT_DELETE_ENTERPRISE
Language=English        ;Owner=doronj    Reviewers=none
Unable to delete entrprise, path- %1, hr- %2!lx!h.
.

MessageId=0xf60
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_WRONG_MACHINE_TYPE
Language=English        ;Owner=doronj    Reviewers=none
Incorrect format of the MSMQ software version string in the MQIS database for computer %1 (%2).
.

MessageId=0xf61
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_CHECK_VERSION
Language=English        ;Owner=doronj    Reviewers=none
Unable to check the MSMQ software version.
.

MessageId=0xf62
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_CREATE_CONTAINER
Language=English        ;Owner=doronj    Reviewers=none
Unable to create container %1, hr- %2!lx!h.
.

MessageId=0xf63
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_QUIT
Language=English        ;Owner=doronj    Reviewers=none
The upgrade process has stopped.
.

MessageId=0xf64
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_GET_SITEID
Language=English        ;Owner=doronj    Reviewers=none
Unable to obtain the site ID of the PEC computer from the remote MQIS database %1, hr- %2!lx!h.
.

MessageId=0xf65
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_USERS_COUNT
Language=English        ;Owner=doronj    Reviewers=none
Unable to count users in MQIS database, hr- %1!lx!h
.

MessageId=0xf66
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SITELINK_LOOKUPBEGIN_FAILED
Language=English        ;Owner=doronj    Reviewers=none
LookupBegin on SiteLink failed, hr- %1!lx!h
.

MessageId=0xf67
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_SITELINK_LOOKUPNEXT_FAILED
Language=English        ;Owner=doronj    Reviewers=none
LookupNext on SiteLink failed, hr- %1!lx!h
.

MessageId=0xf68
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANNOT_DELETE_SITELINK
Language=English        ;Owner=doronj    Reviewers=none
Unable to delete Active Directory MSMQ site link with guid %1, hr- %2!lx!h
.

MessageId=0xf69
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANNOT_CREATE_SITELINK
Language=English        ;Owner=doronj    Reviewers=none
Unable to create Active Directory MSMQ site link %1, hr- %2!lx!h
.

MessageId=0xf6a
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANNOT_UPDATE_SERVER
Language=English        ;Owner=doronj    Reviewers=none
Unable to update the remote MQIS database on server %1 after upgrade in PEC on cluster, hr- %2!lx!h
.

MessageId=0xf6b
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_SET_SERVICE
Language=English        ;Owner=doronj    Reviewers=none
Failed to change service of local machine to PEC_SERVICE after upgrade in PEC on cluster, hr- %1!lx!h
.

MessageId=0xf6c
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CLUSTER_WRONG_SERVICE
Language=English        ;Owner=doronj    Reviewers=none
Service of the given remote clustered MQIS server %1 is wrong (service- %2!lx!h). It must be either PSC or PEC.
.

MessageId=0xf6d
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_INVALID_MACHINE_NAME
Language=English        ;Owner=doronj    Reviewers=none
Machine name %1 is illegal DNS name. Uninstall or reinstall this computer if it is possible. Otherwise it will not be migrated to Windows Active Directory.
.

MessageId=0xf6e
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_LDAP_SEARCH_INITPAGE_FAILED
Language=English        ;Owner=doronj    Reviewers=none
Failure of ldap_search_init_page(dn- %1, filter- %2),  ret %3!lx!h
.

MessageId=0xf6f
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_LDAP_GET_NEXTPAGE_FAILED
Language=English        ;Owner=doronj    Reviewers=none
Failure of ldap_get_next_page_s(dn- %1, filter- %2),  ret %3!lx!h
.

MessageId=0xf70
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_PREPARE_NT4SITE_FOR_REPLICATION
Language=English        ;Owner=doronj    Reviewers=none
Prepare NT4 site %1 for replication failed (ret %2!lx!h). The new name will not be replicated to NT4 World until first change of this site.
.

MessageId=0xf71
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_ILLEGAL_QUEUENAME
Language=English        ;Owner=doronj    Reviewers=none
Unable to create queue %1, ret %2!lx!h. Probably queue name or label contain illegal symbols. The queue will not be migrated to Windows Active Directory.
.

MessageId=0xf72
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_PREPARE_PKEY
Language=English        ;Owner=doronj    Reviewers=none
Failed to prepare public key for machine %1, ret %2!lx!h.
.

MessageId=0xf73
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_CREATE_SITELINK_FOR_CONNECTOR
Language=English        ;Owner=doronj    Reviewers=none
Failed to create site link for connector machine %1, neighbor1 %2, neighbor2 %3, ret %4!lx!h.
.

MessageId=0xf74
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_GET_FULLPATHNAME
Language=English        ;Owner=doronj    Reviewers=none
Failed to get full path name for machine %1, ret %2!lx!h.
.

MessageId=0xf75
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_GET_CONNECTOR_FOREIGNCN
Language=English        ;Owner=doronj    Reviewers=none
Failed to get foreign CN from %1 for connector machine %2.
.

MessageId=0xf76
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_COMPUTER_CREATED
Language=English        ;Owner=doronj    Reviewers=none
Failed to create computer object for machine %1, ret %2!lx!h.
.

MessageId=0xf77
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_OPEN_PROCESS_TOKEN
Language=English        ;Owner=doronj    Reviewers=none
OpenProcessToken() failed, ret %1!lx!h. Touch current logged on user to replicate it to NT4 World.
.

MessageId=0xf78
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_GET_TOKEN_INFORMATION
Language=English        ;Owner=doronj    Reviewers=none
GetTokenInformation() failed, ret %1!lx!h. Touch current logged on user to replicate it to NT4 World.
.

MessageId=0xf79
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_ENCODE_BINARY_DATA
Language=English        ;Owner=doronj    Reviewers=none
ADsEncodeBinaryData() failed, ret %1!lx!h. Touch current logged on user to replicate it to NT4 World.
.

MessageId=0xf7a
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_USER_REMOTE_DOMAIN_OFFLINE
Language=English        ;Owner=doronj    Reviewers=none
Unable to migrate a user certificate because remote domain %1 is offline. Try again later.
.

MessageId=0xf7b
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_MIGRATE_USER
Language=English        ;Owner=doronj    Reviewers=none
Unable to migrate the user %1, domain %2, ret %3!lx!h.
.

MessageId=0xf7c
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_MACHINE_REMOTE_DOMAIN_OFFLINE
Language=English        ;Owner=doronj    Reviewers=none
Unable to migrate the computer %1 (ret %2!lx!h). Probably because it belongs to a remote domain that is offline. Try again later.
.

MessageId=0xf7d
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_NON_MIGRATED_MACHINE_QUEUE
Language=English        ;Owner=doronj    Reviewers=none
Unable to migrate the queue %1 (ret %2!lx!h). Probably because it belongs to a machine that was not migrated. Try again later.
.

MessageId=0xf7e
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_UPDATE_REMOTE_REGISTRY_CLIENT
Language=English        ;Owner=talk    Reviewers=Pesachs
The Message Queuing migration tool could not update the MQISServer registry entry to %1 on the client computer %2. Error: %3!lx!h.
This computer will not be able to operate in the new environment until this registry entry is updated. You can update this registry entry manually.
.

MessageId=0xf7f
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_CANT_UPDATE_REMOTE_REGISTRY_SERVER
Language=English        ;Owner=talk    Reviewers=Pesachs
The Message Queuing migration tool could not update the MQISServer registry entry to %l on the controller server %2 and could not
update the MQS registry entry to 1 on this controller server. Error: %3!lx!h. This controller server can continue to respond to queries from MSMQ 1.0 clients in the enterprise.
.

MessageId=0xf80
Severity=Error
Facility=MSMQ
SymbolicName=MQMig_E_INVALID_FILE_FORMAT
Language=English        ;Owner=talk    Reviewers=Pesachs
The input file for specifying the available Windows Server 2003 domain controllers for each client in each site is invalid.
.


;//+----------------------------------
;//
;//  Information messages
;//
;//+----------------------------------

MessageId=0xf01
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SITE_MIGRATED
Language=English        ;Owner=doronj    Reviewers=none
Site #%1!lu!t: %2 (psc- %3)
.

MessageId=0xf02
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_MACHINE_MIGRATED
Language=English        ;Owner=doronj    Reviewers=none
Computer #%1!lu!: %2 (guid- %3)
.

MessageId=0xf03
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_QUEUE_MIGRATED
Language=English        ;Owner=doronj    Reviewers=none
Queue #%1!lu!: %2 (label- %3, guid- %4)
.

MessageId=0xf04
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_COMPUTER_CREATED
Language=English        ;Owner=doronj    Reviewers=none
Computer object %1 was created successfully in the Active Directory.
.

MessageId=0xf05
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_ENTERPRISE_CREATED
Language=English        ;Owner=doronj    Reviewers=none
MSMQ Enterprise object was created successfully in the Active Directory.
.

MessageId=0xf06
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SITE_CREATED
Language=English        ;Owner=doronj    Reviewers=none
Site object (%1) was created successfully in the Active Directory.
.

MessageId=0xf07
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_USER_CREATED
Language=English        ;Owner=doronj    Reviewers=none
User object (%1) was created successfully in the Active Directory.
.

MessageId=0xf08
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SERVERS_CREATED
Language=English        ;Owner=doronj    Reviewers=none
Servers Container object (%1) was created successfully in the Active Directory.
.

MessageId=0xf09
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_ENT_ALREADY_EXIST
Language=English        ;Owner=doronj    Reviewers=none
The MSMQ enterprise object already exists in the Active Directory.
.

MessageId=0xf0a
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SITE_ALREADY_EXIST
Language=English        ;Owner=doronj    Reviewers=none
The Site object (%1) already exists in the  Active Directory.
.

MessageId=0xf0b
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_USER_ALREADY_EXIST
Language=English        ;Owner=doronj    Reviewers=none
The User object (%1) already exists in the Active Directory.
.

MessageId=0xf0c
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SERVERS_ALREADY_EXIST
Language=English        ;Owner=doronj    Reviewers=none
The Servers container object (%1) already exists in the Active Directory.
.

MessageId=0xf0d
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_ENT_INFO
Language=English        ;Owner=doronj    Reviewers=none
Enterprise name- %1, longlived- %2!lu!t, %3!lx!h
.

MessageId=0xf0e
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_CONTAINER_ALREADY_EXIST
Language=English        ;Owner=doronj    Reviewers=none
The MSMQ container object %1 already exists in the Active Directory.
.

MessageId=0xf0f
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_QUEUES_COUNT
Language=English        ;Owner=doronj    Reviewers=none
There are %1!lu!t queues in the enterprise.
.

MessageId=0xf10
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_NO_QUEUES_AVAIL
Language=English        ;Owner=doronj    Reviewers=none
There are no queues in the MQIS database.
.

MessageId=0xf11
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SITES_COUNT
Language=English        ;Owner=doronj    Reviewers=none
The number of sites is %1!lu!t.
.

MessageId=0xf12
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_MACHINES_COUNT
Language=English        ;Owner=doronj    Reviewers=none
There are %1!lu!t computers in site %2.
.

MessageId=0xf13
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_NO_USERS
Language=English        ;Owner=doronj    Reviewers=none
There are no user records listed in the MQIS database.
.

MessageId=0xf14
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_NO_SITELINKS
Language=English        ;Owner=doronj    Reviewers=none
There are no site link records listed in the MQIS database.
.

MessageId=0xf15
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_USER_MIGRATED
Language=English        ;Owner=doronj    Reviewers=none
User #%1!lu!t: %2\%3 (cert digest- %4)
.

MessageId=0xf16
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_LDAP_PAGE_SEARCH
Language=English        ;Owner=doronj    Reviewers=none
QueryDS: %1!ld!t results from ldap_get_next_page_s(dn- %2, filter- %3)
.

MessageId=0xf17
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_LDAP_SEARCH_COUNT
Language=English        ;Owner=doronj    Reviewers=none
ldap_search_s(%1, filter- %2) succeed, with %3!lu!t results
.

MessageId=0xf18
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_CREATE_CONTAINER
Language=English        ;Owner=doronj    Reviewers=none
Successfully created container, %1
.

MessageId=0xf19
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_ROOTDSE_SUCCESS
Language=English        ;Owner=doronj    Reviewers=none
Query of RootDSE was successful, iCount- %1!ld!t
.

MessageId=0xf1a
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_NAME_CONTEXT
Language=English        ;Owner=doronj    Reviewers=none
Default LDAP naming context: %1
.

MessageId=0xf1b
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_LDAP_INIT
Language=English        ;Owner=doronj    Reviewers=none
ldap_init(host- %1) succeeded, version- %2!ld!t, ldap_bind return %3!lu!t
.

MessageId=0xf1c
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_MODIFY_NT4FLAG
Language=English        ;Owner=doronj    Reviewers=none
ldap_modify_s(path- %1) return %2!lx!h
.

MessageId=0xf1d
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_HIGHEST_USN
Language=English        ;Owner=doronj    Reviewers=none
highestCommittedUSN- %1
.

MessageId=0xf1e
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SITEGATES_INFO
Language=English        ;Owner=doronj    Reviewers=none
Site gates: site- %1, %2!ld!t gates, %3
.

MessageId=0xf1f
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SITEGATE_INFO
Language=English        ;Owner=doronj    Reviewers=none
Site gate computer: GUID- %1, Full Name- %2.
.

MessageId=0xf20
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SITELINK_INFO
Language=English        ;Owner=doronj    Reviewers=none
Routing link #%1!lu!t: neighbor1- %2, neighbor2- %3, cost- %4!lu!t.
.

MessageId=0xf21
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_CN_INFO
Language=English        ;Owner=doronj    Reviewers=none
Connected network (CN) #%1!lu!t: name- %2, GUID- %3, protocol- %4!lu!t.
.

MessageId=0xf22
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SITE_NAME_CHANGED
Language=English        ;Owner=doronj    Reviewers=none
Site name %1 was changed to %2 for compatibility with DNS.
.

MessageId=0xf23
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_USER_NAME_CHANGED
Language=English        ;Owner=doronj    Reviewers=none
The user name was changed to %1 for compatibility with DNS.
.

MessageId=0xf24
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_FOREIGN_SITE
Language=English        ;Owner=doronj    Reviewers=none
Foreign site %1 was successfully created.
.

MessageId=0xf25
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SET_PERMISSION
Language=English        ;Owner=doronj    Reviewers=none
The AddGUID permission was successfully added to %1.
.

MessageId=0xf26
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_RESTORE_PERMISSION
Language=English        ;Owner=doronj    Reviewers=none
The original permission was restored successfully to %1.
.

MessageId=0xf27
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_OLD_MSMQ_VERSION
Language=English        ;Owner=doronj    Reviewers=none
Computer %1 is running MSMQ version  (%2).
.

MessageId=0xf28
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_NO_SITEGATES_RESULTS
Language=English        ;Owner=doronj    Reviewers=none
QuerySiteGates, ldap_count_entries(%1, filter- %2) did not return sitegates.
.

MessageId=0xf29
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_MODIFY_MIG_ATTRIBUTE
Language=English        ;Owner=doronj    Reviewers=none
The attribute was modified (path- %1).
.

MessageId=0xf2a
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_DELETE_ENTERPRISE
Language=English        ;Owner=doronj    Reviewers=none
The enterprise object was deleted (path- %1).
.

MessageId=0xf2b
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_NO_MACHINES_AVAIL
Language=English        ;Owner=doronj    Reviewers=none
There are no computers in site %1.
.

MessageId=0xf2c
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_USERS_COUNT
Language=English        ;Owner=doronj    Reviewers=none
The number of Users is - %1!lu!t.
.

MessageId=0xf2d
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_LDAP_SEARCH_GATES
Language=English        ;Owner=doronj    Reviewers=none
_CopySiteGatesValuesToMig: ldap_search_s(%1, filter- %2) succeed.
.

MessageId=0xf2e
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_LDAP_SEARCH
Language=English        ;Owner=doronj    Reviewers=none
ldap_search_s(%1, filter- %2) succeed.
.

MessageId=0xf2f
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_NO_SITELINK
Language=English        ;Owner=doronj    Reviewers=none
There is no Active Directory MSMQ site link.
.

MessageId=0xf30
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SITELINK_COUNT
Language=English        ;Owner=doronj    Reviewers=none
There are %1!lu!t Active Directory MSMQ site links.
.

MessageId=0xf31
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_SITELINK_CREATED
Language=English        ;Owner=doronj    Reviewers=none
Active Directory MSMQ Site Link %1 was created successfully.
.

MessageId=0xf32
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_INVALID_MACHINE_NAME
Language=English        ;Owner=doronj    Reviewers=none
Machine name %1 is non-standard DNS name. Using non-standard name might affect your ability to interoperate with other computers, unless your network is using the Microsoft DNS Server.
.

MessageId=0xf33
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_NEXTPAGE
Language=English        ;Owner=doronj    Reviewers=none
ldap_get_next_page_s returned %1!lx!h (dn- %2, filter- %3)
.

MessageId=0xf34
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_PAGE_NUMBER
Language=English        ;Owner=doronj    Reviewers=none
The current page number returned by ldap_get_next_page_s is  %1!lu!t
.

MessageId=0xf35
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_ILLEGAL_QUEUENAME
Language=English        ;Owner=doronj    Reviewers=none
Queues with illegal name were found. They will not be migrated to Active Directory.
.

MessageId=0xf36
Severity=Informational
Facility=MSMQ
SymbolicName=MQMig_I_CREATE_SITELINK_FOR_CONNECTOR
Language=English        ;Owner=doronj    Reviewers=none
Site link for connector machine %1 is created. Neighbor1 %2, neighbor2 %3, default value for cost is 1.
.

MessageId=0xf37
Severity=Informational
Facility=MSMQ
SymbolicName=SECURE_DS_COMMUNICATION_DISABLED
Language=English        ;Owner=tomerw    Reviewers=none
Secure server communication was disabled during upgrade. This option is not supported in this version.
.

;#endif  /* __MQ_SYMBLS_H */
