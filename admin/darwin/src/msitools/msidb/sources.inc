
TARGETNAME=msidb
!INCLUDE ..\..\..\MsiMake.inc

TARGETTYPE=PROGRAM
SUBSYSTEM_VERSION=4.0
SUBSYSTEM_WINVER=4.0

UMTYPE=windows
UMENTRY=$(MSI_WINENTRY)

TARGETPATH=$(MSI_BUILD_TARGET)
TARGETLIBS=\
        $(SDK_LIB_PATH)\kernel32.lib \
        $(SDK_LIB_PATH)\advapi32.lib \
        $(SDK_LIB_PATH)\user32.lib \
	$(SDK_LIB_PATH)\OLE32.lib \
        $(SDK_LIB_PATH)\comdlg32.lib \
	$(SDK_LIB_PATH)\msi.lib

C_DEFINES=$(C_DEFINES) -D_EXE
USE_LIBCMT=1
USE_NATIVE_EH=1

INCLUDES=$(INC_DIR);$(RES_OBJDIR);$(BUILD_COMMONDIR)

SOURCES=..\msidb.cpp \
	..\msidb.rc
