############################################################################
#
#   Copyright (C) 1992, Microsoft Corporation.
#
#   All rights reserved.
#
############################################################################

!ifdef NTMAKEENV

all :
    echo $(BUILDMSG)

clean : all

!else


default: all
!include $(CTCOMTOOLS)\comtools.mk
!include filelist.mk
!include $(COMMON)\src\win40.mk


!endif
