# Global settings for SMTP AQueue subprojects

!IFNDEF IISBASEDIR
IISBASEDIR=$(PROJECT_ROOT)\iis
!ENDIF

!IFNDEF SMTPDIR
SMTPDIR=smtp
!ENDIF

!INCLUDE $(IISBASEDIR)\svcs\$(SMTPDIR)\smtp.inc

STAXAQUEUE=$(STAXSMTP)\aqueue

MSC_WARNING_LEVEL=/W3 /WX
