
TARGETNAME=testdb
!INCLUDE ..\..\..\MsiMake.inc

TARGETTYPE=PROGRAM
SUBSYSTEM_VERSION=4.0
SUBSYSTEM_WINVER=4.0

NO_BINPLACE=1

UMTYPE=console
UMENTRY=Entry
UMENTRYABS=Entry

USE_NOLIBS=1

TARGETLIBS=\
        $(SDK_LIB_PATH)\user32.lib \
        $(SDK_LIB_PATH)\msi.lib

C_DEFINES=$(C_DEFINES) -D_EXE

INCLUDES=$(INCLUDES);$(INC_DIR)

SOURCES=\
    ..\testdb.rc    \
    ..\testdb.cpp
