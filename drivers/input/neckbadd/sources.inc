MAJORCOMP=ntos
MINORCOMP=dd

TARGETNAME=neckbadd

TARGETPATH=obj
TARGETTYPE=DRIVER

INCLUDES=..\..\inc;..\i386

SOURCES=..\neckbadd.c      \
        ..\neckbadd.rc

NTTEST=
OPTIONAL_NTTEST=
UMTEST=

C_DEFINES=-DPNP_IDENTIFY
