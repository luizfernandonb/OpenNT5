
TARGETNAME=msival
!INCLUDE ..\..\..\MsiMake.inc

TARGETTYPE=PROGRAM
SUBSYSTEM_VERSION=4.0
SUBSYSTEM_WINVER=4.0

UMTYPE=console
UMENTRY=$(MSI_ENTRY)

TARGETPATH=$(MSI_BUILD_TARGET)

TARGETLIBS=\
        $(SDK_LIB_PATH)\kernel32.lib \
        $(SDK_LIB_PATH)\advapi32.lib \
        $(SDK_LIB_PATH)\user32.lib \
	$(SDK_LIB_PATH)\msi.lib

C_DEFINES=$(C_DEFINES) -D_EXE
USE_LIBCMT=1
USE_NATIVE_EH=1

INCLUDES=$(INCLUDES);$(INC_DIR);$(RES_OBJDIR)

SOURCES=..\msival.cpp \
	..\msival.rc
