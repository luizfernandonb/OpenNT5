
DLL_SOURCELIBS=..\..\mnet32\pch\$(O)\pchmn32.lib       \
               ..\..\mnet32\mnet32\$(O)\uimnet32.lib   \
               ..\..\mnet32\netslow\$(O)\netslow.lib   \
               ..\..\lmobj\lmobj\$(O)\lmobj.lib        \
               ..\..\lmobj\lmoenum\$(O)\lmoenum.lib    \
# JonN 1/20/02 remove REG_ENUM and log classes ..\..\lmobj\log\$(O)\lmlog.lib

SOURCE_DEF= netui1.hdr
TARGET_DEF= $(O)\netui1.def

!INCLUDE ..\makefile.inc

