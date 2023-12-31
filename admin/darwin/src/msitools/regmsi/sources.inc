
TARGETNAME=regmsi
!INCLUDE ..\..\..\MsiMake.inc

TARGETTYPE=PROGRAM
SUBSYSTEM_VERSION=4.0
SUBSYSTEM_WINVER=4.0

UMTYPE=windows
UMENTRY=winmain

TARGETPATH=$(MSI_BUILD_TARGET)

TARGETLIBS=\
	$(SDK_LIB_PATH)\msi.lib \
        $(SDK_LIB_PATH)\kernel32.lib \
        $(SDK_LIB_PATH)\advapi32.lib \
        $(SDK_LIB_PATH)\user32.lib \
	$(SDK_LIB_PATH)\OLE32.lib \
        $(SDK_LIB_PATH)\strsafe.lib

C_DEFINES=$(C_DEFINES)
USE_LIBCMT=1

INCLUDES=$(INCLUDES);$(INC_DIR);$(RES_OBJDIR);$(BUILD_COMMONDIR);$(TOOLS_INC_DIR)

SOURCES=..\regmsi.cpp \
	..\regmsi.rc
