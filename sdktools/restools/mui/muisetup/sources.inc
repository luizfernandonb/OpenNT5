TARGETNAME=muisetup
TARGETPATH=obj
TARGETTYPE=PROGRAM

USE_MSVCRT=1

SOURCES=\
        ..\muisetup.rc   \
        ..\muisetup.cpp  \
        ..\installer.cpp \
        ..\diamond.cpp   \
        ..\welcome.cpp

INCLUDES=$(INCLUDES);$(BASE_INC_PATH);$(SHELL_INC_PATH)

C_DEFINES= -DUNICODE -D_UNICODE
LINKER_FLAGS = /SWAPRUN:CD

UMTYPE=windows
UMENTRY=winmain
TARGETLIBS=\
    $(SDK_LIB_PATH)\comctl32.lib   \
    $(SDK_LIB_PATH)\setupapi.lib   \
    $(SDK_LIB_PATH)\shlwapi.lib    \
    $(SDK_LIB_PATH)\shell32.lib    \
    $(SDK_LIB_PATH)\version.lib    \
    $(SDK_LIB_PATH)\lz32.lib       \
    $(SDK_LIB_PATH)\msi.lib        \
    $(SHELL_LIB_PATH)\shell32p.lib \
    $(SDK_LIB_PATH)\strsafe.lib

