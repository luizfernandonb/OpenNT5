!include $(WINCORE_PATH)\core.inc

MAJORCOMP=ntos
MINORCOMP=w32

TARGETNAME=w32umode
TARGETPATH=$(_OBJ_DIR)
TARGETTYPE=LIBRARY

SYNCHRONIZE_BLOCK=1

SOURCES=

NTTARGETFILE0=$(WUMODE_PATH)\$(ALT_PROJECT)\$(O)\services.tab \
              $(O)\usrstubs.$(ASM_SUFFIX)

SOURCES_USED=..\sources.inc $(WINCORE_PATH)\core.inc
