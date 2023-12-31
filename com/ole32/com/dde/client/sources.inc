!IF 0

Copyright (c) 1998  Microsoft Corporation

Module Name:

    sources.

Abstract:

    This file specifies the target component being built and the list of
    sources files needed to build that component.  Also specifies optional
    compiler switches and libraries that are unique for the component being
    built.

!ENDIF

TARGETNAME=   ddecli
TARGETPATH=   obj
TARGETTYPE=   LIBRARY

INCLUDES = ..\..\server;..\..\..\..\common\$(DEST_TREE);..\..\..\..\ih
INCLUDES = $(INCLUDES);..\..\..\dcomrem;..\..\..\inc
INCLUDES = $(INCLUDES);..\..\..\class;..\..\..\objact
INCLUDES = $(INCLUDES);..\..\..\..\ole232\inc
INCLUDES = $(INCLUDES);..\..\..\..\idl\public\$(DEST_TREE)\$(O)
INCLUDES = $(INCLUDES);..\..\..\..\idl\internal\$(DEST_TREE)\$(O)
INCLUDES = $(INCLUDES);..\..\..\..\idl\private\$(DEST_TREE)\$(O)
INCLUDES = $(INCLUDES);$(BASE_INC_PATH)

C_DEFINES= -DOLE_DDE_NO_GLOBAL_TRACKING=1\
           $(C_DEFINES)

SOURCES=      \
    ..\cnct_tbl.cxx \
    ..\ddedo.cxx    \
    ..\ddeioc.cxx   \
    ..\ddemnker.cxx \
    ..\ddeoo.cxx    \
    ..\ddeproxy.cxx \
    ..\ddechc.cxx   \
    ..\ddestg.cxx   \
    ..\ddewnd.cxx   \
    ..\ddeworkr.cxx \
    ..\modallp.cxx  \
    ..\packmnkr.cxx
