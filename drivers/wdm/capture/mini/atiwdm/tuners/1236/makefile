#############################################################################
#
#       MAKEFILE for Streaming Class Directory
#
#       $Date:   29 Jul 1999 12:26:40  $
#       $Revision:   1.1  $
#       $Author:   tloveall  $
#
#  $Copyright:	(c) 1997 - 1999  ATI Technologies Inc.  All Rights Reserved.$
#
#############################################################################

!IFDEF WIN95_BUILD

ROOT    = $(BASEDIR)
IS_32   = TRUE
IS_OEM  = TRUE
DEVICEDIR = ATITuneP
COMMONMKFILE = atitunep.mk
DEPENDTARGETS =  debug retail

!include $(ROOT)\dev\master.mk

!ELSE

#
# DO NOT EDIT THIS FILE!!!  Edit .\sources. if you want to add a new source
# file to this component.  This file merely indirects to the real make file
# that is shared by all the driver components of the Windows NT DDK
#

!INCLUDE $(NTMAKEENV)\makefile.def

!ENDIF
