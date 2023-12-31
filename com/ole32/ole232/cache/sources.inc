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

TARGETNAME=   cache
TARGETPATH=   obj
TARGETTYPE=   LIBRARY

INCLUDES=     ..;..\..\..\common\$(DEST_TREE);..\..\..\ih;..\..\inc

SOURCES=      \
              ..\cachenod.cpp \
              ..\dacache.cpp  \
              ..\olecache.cpp \
              ..\enumtors.cpp

UMTYPE=       windows

USE_IOSTREAM=1

!include ..\..\precomp2.inc
