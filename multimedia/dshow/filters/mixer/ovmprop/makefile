!ifdef NTMAKEENV
!include $(NTMAKEENV)\makefile.def
!else
# Quartz Project Makefile
#
# Copyright (c) 1994 - 1999  Microsoft Corporation.  All Rights Reserved.
#
# Targets are provided by QUARTZ.MAK

SDK_ROOT = $(QUARTZ)\sdk

TARGET_NAME = ovmprop
TARGET_TYPE = LIBRARY
C_DEFINES = $(C_DEFINES) -DFILTER_LIB
TARGET_EXT  =
TARGET_GOAL = RUNTIME

SRC_FILES = ovmprop.cpp \
            ovmprop2.cpp \

!include "$(QUARTZ)\Quartz.mak"


!endif          # NTMAKEENV