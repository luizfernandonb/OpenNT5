!IF 0

Copyright (c) 1994  Microsoft Corporation

Module Name:

    wininet.inc

Abstract:

    Common makefile contents for wininet project

Author:

    Richard L Firth (rfirth) 10-Feb-1996

Revision History:

    10-Feb-1996 rfirth
        Created

!ENDIF

SXS_ASSEMBLY_NAME=Microsoft.Windows.WinHTTP
SXS_SHORT_ASSEMBLY_NAME=msft-windows-winhttp
SXS_ASSEMBLY_VERSION=5.1
SXS_ASSEMBLY_LANGUAGE_INDEPENDENT=1

!IFNDEF SDKINC
SDKINC=$(SDK_INC_PATH)
!ENDIF

!IFDEF LIBDIR
!ERROR LIBDIR already defined - choose new name
!ENDIF

LIBDIR=..\lib\$(_OBJ_DIR)

#
# if TARGETPATH is not defined (in the paths that build libraries) then this
# is the default target path
#

!IFNDEF TARGETPATH
TARGETPATH=$(LIBDIR)
TARGETTYPE=LIBRARY
!ENDIF

#
# what it is that we're building
#

MAJORCOMP=winhttpx

USE_NOLIBS=1
USE_MSVCRT=1
NO_NTDLL=1


#
# compiler definitions
#

C_DEFINES=$(C_DEFINES) -D_WINHTTP_INTERNAL_  -DCOMPILING_ROCKALL_LIBRARY -DFD_SETSIZE=256

# Get same version from NT or IE builds.
C_DEFINES=$(C_DEFINES)

!IFDEF USE_ICECAP
C_DEFINES=$(C_DEFINES) -DICECAP
!ENDIF

#
# Set debugging level
#

!IF "$(NTDEBUG)" != "" && "$(NTDEBUG)" != "retail" && "$(NTDEBUG)" != "ntsdnodbg"

C_DEFINES=$(C_DEFINES) -DENABLE_DEBUG

#
# remove maximal diagnostics for customer debug version based on environment
# variable
#

!IF "$(FULL_DEBUG)" != ""
C_DEFINES=$(C_DEFINES) -DUSE_DEBUG_MEMORY
!ELSE
C_DEFINES=$(C_DEFINES) -DRETAIL_LOGGING
!IF "$(BUILD_PRODUCT)" != "NT"
C_DEFINES=$(C_DEFINES) -DDISABLE_ASSERTS
!ENDIF
!ENDIF

!ELSE IF "$(ALMOSTRETAIL)" != ""
C_DEFINES=$(C_DEFINES) -DENABLE_DEBUG
!ENDIF

!IF "$(WIN64)" == "0" && "$(FULL_DEBUG)"==""
C_DEFINES=$(C_DEFINES) -DUSE_ROCKALL
!ENDIF

!if "$(WINHTTP_BROWSER_INFO)" == "1"
BROWSER_INFO = 1;
NO_BROWSER_FILE = 1;
USER_ENV_BROWSER_INFO=1
!endif


#
# performance diagnostics
#

!IF "$(PERF_BUILD)" != ""
C_DEFINES=$(C_DEFINES) -DUSE_PERF_DIAG
!ENDIF

!if !defined(CLEANINF_FLAGS)
# Cleaninf flags
CLEANINF_FLAGS  = -w
!endif

#
# Linker flags
#

!if "$(BUILD_PRODUCT)" == "IE"
USE_WIN98OPT=1
!endif

# Cleaninf utility
CLEANINF        = cleaninf.exe $(CLEANINF_FLAGS)

#
# Do this to assure that we run on NT 4.0 and Win95, even with
# NT5/Memphis headers.
#

WIN32_WINNT_VERSION=0x0400
WIN32_WIN95_VERSION=0x0400

#
# compiler warning flags
#
!IF "$(W4CHECK)" != ""
MSC_WARNING_LEVEL=/W4 /WX /wd4127 /wd4201
!ELSE
MSC_WARNING_LEVEL=/W3 /WX 
!ENDIF

#
# precompiled header options
#

!IFNDEF WININET_PCH

PRECOMPILED_OPTION=/Fp..\inc\$(_OBJ_DIR)\*\wininetp.pch /Yuwininetp.h
PRECOMPILED_CXX=1

!ENDIF

CONDITIONAL_INCLUDES = \
        winwlm.h \
        macwin32.h \
        ia64inst.h \
        pshpck16.h \
        rpcerr.h \
        rpcmac.h \
        macname1.h \
        macpub.h \
        macapi.h \
        macname2.h
