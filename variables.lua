BASE_DIRECTORY = io.popen("cd"):read()

PANORAMA_NAME                     = "windows"

CFG_PLATFORM                      = "%{cfg.platform}"
PRJ_GROUP                         = "%{prj.group}"
OBJ_DIRECTORY                     = "obj"
SLASH_DIRECTORY                   = "\\"
BINARIES_DIRECTORY                = OBJ_DIRECTORY .. SLASH_DIRECTORY .. CFG_PLATFORM
BINARIES_DIRECTORY_WITH_PRJ_GROUP = PRJ_GROUP .. SLASH_DIRECTORY .. BINARIES_DIRECTORY
TOOLS_DIRECTORY                   = BASE_DIRECTORY .. SLASH_DIRECTORY .. "new_tools"
--PANORAMA_DEBUG_FLAG              = os.getenv('NTDEBUG')

-- PANORAMA directories
SDK_DIRECTORY           = BASE_DIRECTORY .. SLASH_DIRECTORY .. "public" .. SLASH_DIRECTORY .. "sdk"
SDK_INCLUDE_DIRECTORY   = SDK_DIRECTORY .. SLASH_DIRECTORY .. "inc"
SDK_INCLUDE16_DIRECTORY = SDK_DIRECTORY .. SLASH_DIRECTORY .. "inc16"
SDK_LIBRARY_DIRECTORY   = SDK_DIRECTORY .. SLASH_DIRECTORY .. "lib"
SDK_LIBRARY16_DIRECTORY = SDK_DIRECTORY .. SLASH_DIRECTORY .. "lib16"

DDK_DIRECTORY         = BASE_DIRECTORY .. SLASH_DIRECTORY .. "public" .. SLASH_DIRECTORY .. "ddk"
DDK_INCLUDE_DIRECTORY = DDK_DIRECTORY .. SLASH_DIRECTORY .. "inc"
DDK_LIBRARY_DIRECTORY = DDK_DIRECTORY .. SLASH_DIRECTORY .. "lib"

IFSKIT_DIRECTORY         = BASE_DIRECTORY .. SLASH_DIRECTORY .. "public" .. SLASH_DIRECTORY .. "ifskit"
IFSKIT_INCLUDE_DIRECTORY = IFSKIT_DIRECTORY .. SLASH_DIRECTORY .. "inc"
IFSKIT_LIBRARY_DIRECTORY = IFSKIT_DIRECTORY .. SLASH_DIRECTORY .. "lib"

HALKIT_DIRECTORY         = BASE_DIRECTORY .. SLASH_DIRECTORY .. "public" .. SLASH_DIRECTORY .. "halkit"
HALKIT_INCLUDE_DIRECTORY = HALKIT_DIRECTORY .. SLASH_DIRECTORY .. "inc"
HALKIT_LIBRARY_DIRECTORY = HALKIT_DIRECTORY .. SLASH_DIRECTORY .. "lib"

PROCESSORKIT_DIRECTORY         = BASE_DIRECTORY .. SLASH_DIRECTORY .. "public" .. SLASH_DIRECTORY .. "processorkit"
PROCESSORKIT_INCLUDE_DIRECTORY = PROCESSORKIT_DIRECTORY .. SLASH_DIRECTORY .. "inc"
PROCESSORKIT_LIBRARY_DIRECTORY = PROCESSORKIT_DIRECTORY .. SLASH_DIRECTORY .. "lib"

WDM_INCLUDE_DIRECTORY           = DDK_INCLUDE_DIRECTORY .. SLASH_DIRECTORY .. "wdm"

CRT_INCLUDE_DIRECTORY           = SDK_INCLUDE_DIRECTORY .. SLASH_DIRECTORY .. "crt"
CRT_IOSTREAMS_INCLUDE_DIRECTORY = CRT_INCLUDE_DIRECTORY .. SLASH_DIRECTORY .. "iostreams"
CRT_STL60_INCLUDE_DIRECTORY     = CRT_INCLUDE_DIRECTORY .. SLASH_DIRECTORY .. "stl60"
CRT_LIBRARY_DIRECTORY           = SDK_LIBRARY_DIRECTORY

OAK_DIRECTORY                   = BASE_DIRECTORY .. SLASH_DIRECTORY .. "public" .. SLASH_DIRECTORY .. "oak"
OAK_INCLUDE_DIRECTORY           = OAK_DIRECTORY .. SLASH_DIRECTORY .. "inc"
OAK_BINARY_DIRECTORY            = OAK_DIRECTORY .. SLASH_DIRECTORY .. "binr"

WPP_CONFIGURATION_DIRECTORY     = BASE_DIRECTORY .. SLASH_DIRECTORY .. "tools" .. SLASH_DIRECTORY .. "wppconfig"
PUBLIC_INTERNAL_DIRECTORY       = BASE_DIRECTORY .. SLASH_DIRECTORY .. "public" .. SLASH_DIRECTORY .. "internal"

ADMIN_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "admin"
ADMIN_INCLUDE_DIRECTORY = ADMIN_DIRECTORY .. SLASH_DIRECTORY .. "inc"
ADMIN_LIBRARY_DIRECTORY = ADMIN_DIRECTORY .. SLASH_DIRECTORY .. "lib"

COM_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "com"
COM_INCLUDE_DIRECTORY = COM_DIRECTORY .. SLASH_DIRECTORY .. "inc"
COM_LIBRARY_DIRECTORY = COM_DIRECTORY .. SLASH_DIRECTORY .. "lib"

DRIVERS_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "drivers"
DRIVERS_INCLUDE_DIRECTORY = DRIVERS_DIRECTORY .. SLASH_DIRECTORY .. "inc"
DRIVERS_LIBRARY_DIRECTORY = DRIVERS_DIRECTORY .. SLASH_DIRECTORY .. "lib"

DS_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "ds"
DS_INCLUDE_DIRECTORY = DS_DIRECTORY .. SLASH_DIRECTORY .. "ds" .. SLASH_DIRECTORY .. "inc"
DS_LIBRARY_DIRECTORY = DS_DIRECTORY .. SLASH_DIRECTORY .. "ds" .. SLASH_DIRECTORY .. "lib"

ENDUSER_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "enduser"
ENDUSER_INCLUDE_DIRECTORY = ENDUSER_DIRECTORY .. SLASH_DIRECTORY .. "inc"
ENDUSER_LIBRARY_DIRECTORY = ENDUSER_DIRECTORY .. SLASH_DIRECTORY .. "enduser" .. SLASH_DIRECTORY .. "lib"

INETCORE_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "inetcore"
INETCORE_INCLUDE_DIRECTORY = INETCORE_DIRECTORY .. SLASH_DIRECTORY .. "inc"
INETCORE_LIBRARY_DIRECTORY = INETCORE_DIRECTORY .. SLASH_DIRECTORY .. "lib"

INETSRV_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "inetsrv"
INETSRV_INCLUDE_DIRECTORY = INETSRV_DIRECTORY .. SLASH_DIRECTORY .. "inc"
INETSRV_LIBRARY_DIRECTORY = INETSRV_DIRECTORY .. SLASH_DIRECTORY .. "lib"

MULTIMEDIA_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "multimedia"
MULTIMEDIA_INCLUDE_DIRECTORY = MULTIMEDIA_DIRECTORY .. SLASH_DIRECTORY .. "inc"
MULTIMEDIA_LIBRARY_DIRECTORY = MULTIMEDIA_DIRECTORY .. SLASH_DIRECTORY .. "lib"

NET_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "net"
NET_INCLUDE_DIRECTORY = NET_DIRECTORY .. SLASH_DIRECTORY .. "inc"
NET_LIBRARY_DIRECTORY = NET_DIRECTORY .. SLASH_DIRECTORY .. "lib"

PRINTSCAN_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "printscan"
PRINTSCAN_INCLUDE_DIRECTORY = PRINTSCAN_DIRECTORY .. SLASH_DIRECTORY .. "inc"
PRINTSCAN_LIBRARY_DIRECTORY = PRINTSCAN_DIRECTORY .. SLASH_DIRECTORY .. "lib"

SDKTOOLS_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "sdktools"
SDKTOOLS_INCLUDE_DIRECTORY = SDKTOOLS_DIRECTORY .. SLASH_DIRECTORY .. "inc"
SDKTOOLS_LIBRARY_DIRECTORY = SDKTOOLS_DIRECTORY .. SLASH_DIRECTORY .. "lib"

SHELL_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "shell"
SHELL_INCLUDE_DIRECTORY = SHELL_DIRECTORY .. SLASH_DIRECTORY .. "inc"
SHELL_LIBRARY_DIRECTORY = SHELL_DIRECTORY .. SLASH_DIRECTORY .. "lib"

TERMSRV_DIRECTORY         = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. "termsrv"
TERMSRV_INCLUDE_DIRECTORY = TERMSRV_DIRECTORY .. SLASH_DIRECTORY .. "inc"
TERMSRV_LIBRARY_DIRECTORY = TERMSRV_DIRECTORY .. SLASH_DIRECTORY .. "lib"

PANORAMA_DIRECTORY                      = PUBLIC_INTERNAL_DIRECTORY .. SLASH_DIRECTORY .. PANORAMA_NAME
PANORAMA_INCLUDE_DIRECTORY              = PANORAMA_DIRECTORY .. SLASH_DIRECTORY .. "inc"
PANORAMA_LIBRARY_DIRECTORY              = PANORAMA_DIRECTORY .. SLASH_DIRECTORY .. "lib"
PANORAMA_LIBRARY_DIRECTORY_CFG_PLATFORM = PANORAMA_LIBRARY_DIRECTORY .. SLASH_DIRECTORY .. CFG_PLATFORM