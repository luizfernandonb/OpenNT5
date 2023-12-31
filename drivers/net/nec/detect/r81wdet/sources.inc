MAJORCOMP = net
MINORCOMP = r81wdet

TARGETNAME=r81wdet
TARGETPATH=obj
TARGETTYPE=DYNLINK
TARGETLIBS=$(SDK_LIB_PATH)\netdtect.lib $(SDK_LIB_PATH)\kernel32.lib $(SDK_LIB_PATH)\user32.lib $(SDK_LIB_PATH)\netdet.lib

DLLENTRY=R81wDetInit

INCLUDES=..; \
         $(BASEDIR)\private\ntos\inc; \
         $(BASEDIR)\private\inc\net

C_DEFINES=$(C_DEFINES) -D_PNP_POWER=1

!IFNDEF DISABLE_NET_UNICODE
UNICODE=1
NET_C_DEFINES=-DUNICODE
!ENDIF

MSC_WARNING_LEVEL=/W3 /WX

SOURCES=..\r81wdet.c  \
        ..\r81wdet.rc

DLLDEF=..\r81wdet.def
