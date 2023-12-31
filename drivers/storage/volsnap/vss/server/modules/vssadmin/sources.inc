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

TARGETTYPE = PROGRAM


UMTYPE = console
UMENTRY = wmain

MSC_WARNING_LEVEL=/W4 /WX

C_DEFINES=-DWIN_32 -D_WINDOWS -DNT -D_WIN32_DCOM -DUNICODE -D_UNICODE -D_ATL_NO_DEBUG_CRT

!if !$(FREEBUILD)
C_DEFINES=$(C_DEFINES) -D_DEBUG
!endif

SUBSYSTEM_VERSION = 5.00
USE_IOSTREAM = 1
USE_NATIVE_EH=ASYNC
USE_MSVCRT = 1
USE_ATL=1
ATL_VER=30
USE_NTDLL=1

SOURCES =				\
        ..\vssadmin.cpp	\
        ..\versionspecific.cpp \
        ..\commandverifier.cpp\
	..\process.cpp		\
        ..\utility.cpp     \
        ..\msg.mc          \
        ..\vssadmin.rc

INCLUDES = ..\;\
        ..\..\..\inc; \
        ..\..\..\..\inc\derived; \
        $(BASE_INC_PATH)

TARGETLIBS = \
         $(SDK_LIB_PATH)\ole32.lib		\
         $(SDK_LIB_PATH)\user32.lib		\
         $(SDK_LIB_PATH)\oleaut32.lib	\
         $(SDK_LIB_PATH)\uuid.lib		\
         $(SDK_LIB_PATH)\ntmsapi.lib	\
         $(SDK_LIB_PATH)\kernel32.lib	\
         ..\..\..\lib\$(O)\tracing.lib		\
         $(SDK_LIB_PATH)\vss_uuid.lib	\
         ..\..\..\lib\$(O)\comadmin.lib		\
         ..\..\..\lib\$(O)\prop.lib			\
         $(SDK_LIB_PATH)\vssapi.lib		\
         $(SDK_LIB_PATH)\kernl32p.lib	\
		 $(COM_LIB_PATH)\prvidl.lib

PRECOMPILED_CXX = 1
PRECOMPILED_INCLUDE = ..\vssadmin.h
PRECOMPILED_OBJ = precomp.obj

