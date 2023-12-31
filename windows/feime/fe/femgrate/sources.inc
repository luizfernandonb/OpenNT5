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

BINPLACE_PLACEFILE=..\placefil.txt
BINPLACE_FLAGS=-x -a

MAJORCOMP=shell
MINORCOMP=femgrate

INCLUDES=$(SDK_INC_PATH);$(BASE_INC_PATH);$(DS_INC_PATH)

C_DEFINES=-DWIN32 -DWINNT -DW3 -DUNICODE -D_UNICODE -DWINVER=0x0400

TARGETNAME=femgrate
TARGETPATH=$(_OBJ_DIR)
TARGETTYPE=PROGRAM

TARGETLIBS= \
        $(SDK_LIB_PATH)\user32.lib    \
        $(BASE_LIB_PATH)\spapip.lib  \
        $(SDK_LIB_PATH)\shell32.lib   \
        $(SDK_LIB_PATH)\userenv.lib   \
        $(SDK_LIB_PATH)\uuid.lib      \
        $(SDK_LIB_PATH)\ole32.lib


SOURCES=..\femgrate.c  \
        ..\utils.c     \
        ..\jpn.c       \
        ..\kor.c       \
        ..\cht.c       \
        ..\chs.c       \
        ..\utils2.cpp  \
        ..\res.rc

USE_MSVCRT=1

UMENTRY=winmain
UMTYPE=windows

MSC_WARNING_LEVEL=/W3 /WX

MISCFILES = femgrate.inf