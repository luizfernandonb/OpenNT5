!IF 0

Copyright (c) 1989  Microsoft Corporation

Module Name:

    sources.

Abstract:

    This file specifies the target component being built and the list of
    sources files needed to build that component.  Also specifies optional
    compiler switches and libraries that are unique for the component being
    built.


Author:

    Steve Wood (stevewo) 12-Apr-1990

NOTE:   Commented description of this file is in \nt\bak\bin\sources.tpl

!ENDIF

TARGETNAME=disks
TARGETPATH=obj
TARGETTYPE=LIBRARY

SOFTPC_TREE=$(PROJECT_ROOT)\mvdm\softpc.new

INCLUDES=$(SOFTPC_TREE)\host\inc;$(SOFTPC_TREE)\base\inc

SOURCES=floppy.c      \
    ..\floppy_i.c    \
    ..\diskbios.c    \
    ..\fdisk.c       \
    ..\fla.c \
    ..\gfi.c \
    ..\gfi_ibm.c     \
    ..\gfi_mpty.c    \
    ..\gfi_sflp.c    \
    ..\gfi_test.c

!INCLUDE $(SOFTPC_TREE)\obj.vdm\CDEFINE.INC
!INCLUDE $(SOFTPC_TREE)\base\condincl.inc
