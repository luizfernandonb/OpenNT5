
TARGETNAME=inf
TARGETPATH=obj
TARGETTYPE=LIBRARY

#
# No explicit sources because build doesn't understand .inf files.
#
SOURCES=

#
# Use NTTARGETFILE0 macros to cause the infs to get built during
# the compile phase. We do this so that we can disable MP build for
# this directory, using BLOCK and DRAIN.
#
NTTARGETFILE0=makeinf
