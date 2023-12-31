!IF 0
Copyright (c) Microsoft Corporation
!ENDIF

FUSION_BUILD_TYPE=WIN2000
FUSION_BUILD_LEAF_DIRECTORY=win2000

!include $(PROJECT_ROOT)\win32\fusion\msi\msi.inc

MAJORCOMP=fusion
MINORCOMP=migrate

TARGETNAME=migrate
TARGETPATH=obj
TARGETTYPE=DYNLINK
DLLDEF=..\migrate.def
DLLENTRY=DllMain

INCLUDES= $(FUSION_MSI_INC_PATH);$(INCLUDES);$(INC_DIR);$(SDK_INC_PATH);$(RES_OBJDIR);$(BUILD_COMMONDIR)
BINPLACE_PLACEFILE=..\placefil.txt

TARGETLIBS= \
        $(SDK_LIB_PATH)\user32.lib \
        $(SDK_LIB_PATH)\advapi32.lib \
        $(SDK_LIB_PATH)\kernel32.lib

USE_MSVCRT=1

SOURCES=..\migrate.cpp \

