@if "%_echo%" == "" echo off
@rem
@rem If no drive has been specified for the NT development tree, assume
@rem C:.  To override this, place a SET _NTDRIVE=X: in your CONFIG.SYS
@rem
if "%_NTDRIVE%" == "" set _NTDRIVE=C:
@rem
@rem If no directory has been specified for the NT development tree, assume
@rem \nt.  To override this, place a SET _NTROOT=\xt in your CONFIG.SYS
@rem
if "%_NTROOT%" == "" set _NTROOT=\NT
set _NTBINDIR=%_NTDRIVE%%_NTROOT%
@rem
@rem This command file assumes that the developer has already defined
@rem the USERNAME environment variable to match their email name (e.g.
@rem stevewo).
@rem
@rem We want to remember some environment variables so we can restore later
@rem if necessary (see NTUSER.CMD)
@rem
set _NTUSER=%USERNAME%
@rem
@rem No hidden semantics of where to get libraries and include files.  All
@rem information is included in the command lines that invoke the compilers
@rem and linkers.
@rem
set LIB=
set INCLUDE=
@rem
@rem Setup default build parameters.
@rem
@rem If the user doesn't specify the BUILD_DEFAULT_TARGETS, use either -386
@rem  (for X86 NT or Win9x hosted builds) or the same as the processor_architecture.
@rem Also set the default architecture to 1 so naked nmake's work from the cmdline.
@rem
if NOT "%BUILD_DEFAULT_TARGETS%" == "" goto BuildDefaultTargetSet
if NOT "%_BuildArch%" == "" goto _BuildArchSet
if "%_BuildArch%" == "" set _BuildArch=%PROCESSOR_ARCHITECTURE%
if "%PROCESSOR_ARCHITECTURE%" == "x86" set 386=1
:_BuildArchSet
set BUILD_DEFAULT_TARGETS=-%_BuildArch%
:BuildDefaultTargetSet
if "%_BuildArch%" == "x86" goto UseX86BuildDefault
if "%_BuildArch%" == "arm" goto UsePocketPCBuildDefault
set BUILD_DEFAULT=daytona ~win95 ~w95cpp ~w95c ~w5api ~chicago -e -E -w -g -nmake -i
set NO_MAPSYM=1
goto BuildDefaultSet

:UsePocketPCBuildDefault
set BUILD_DEFAULT=pocketpc ~daytona ~win9x ~win95 ~w95cpp ~w95c ~w5api ~chicago -e -E -w -g -nmake -i
goto BuildDefaultSet

:UseX86BuildDefault
set BUILD_DEFAULT=daytona -e -E -w -g -nmake -i

:BuildDefaultSet
if "%BUILD_MAKE_PROGRAM%" == ""    set BUILD_MAKE_PROGRAM=nmake.exe
if "%BUILD_PRODUCT%" == ""	   set BUILD_PRODUCT=NT
if "%BUILD_PRODUCT_VER%" == ""	   set BUILD_PRODUCT_VER=500

if "%NUMBER_OF_PROCESSORS%" == "" goto SingleProc
if "%NUMBER_OF_PROCESSORS%" == "1" goto SingleProc
set BUILD_MULTIPROCESSOR=1
:SingleProc

@rem
@rem Setup default nmake parameters.
@rem
if "%NTMAKEENV%" == "" set NTMAKEENV=%_NTBINDIR%\Tools
if "%COPYCMD%" == "" set COPYCMD=/Y
@rem
@rem By default, net uses are NOT persistent.  Do this here in case
@rem user wants to override in their setenv.cmd
@rem
net use /PER:NO >nul
@rem
@rem Setup the user specific environment information
@rem
@rem ========== ntuser.cmd ==========
set DEBUG_REMOTE=
if /i "%1" == "DebugRemote" set DEBUG_REMOTE=RemoteDebug&& shift
if "%_NTDRIVE%" == "" set _NTDRIVE=C:
if NOT "%USERNAME%" == "" goto skip1
echo.
echo !!! Error - USERNAME environment variable not set !!!
echo.
goto done
:skip1

REM  This command file is either invoked by NTENV.CMD during the startup of
REM  a Razzle screen group, or it is invoked directly by a developer to
REM  switch developer environment variables on the fly. If invoked with
REM  no argument, it will restore the original developer's environment (as
REM  remembered by the NTENV.CMD command file).  Otherwise the argument is
REM  a developer's email name and that developer's environment is established.

if NOT "%1" == "" set USERNAME=%1
if "%_NTUSER%" == "" goto skip2

REM  if invoked by a debug remote, don't set aliases that confuse the debugger

if "%DEBUG_REMOTE%" == "RemoteDebug" goto skip2
if "%1" == "" if "%USERNAME%" == "%_NTUSER%" alias src /d
if "%1" == "" set USERNAME=%_NTUSER%
:skip2

REM  Most tools look for .INI files in the INIT environment variable, so set
REM  it. MS WORD looks in MSWNET of all places.

set INIT=%_NTBINDIR%\developer\%USERNAME%
set MSWNET=%INIT%

REM Load CUE with the standard public aliases and the developer's private ones

if "%DEBUG_REMOTE%" == "RemoteDebug" goto skip4
if "%_NTUSER%" == "" goto skip3

REM Initialize user settable NT nmake environment variables

set NTPROJECTS=public
set NT386FLAGS=
set NTCPPFLAGS=
if "%NTDEBUG%" == "" set NTDEBUG=ntsd
set BUILD_OPTIONS=
set 386_OPTIMIZATION=
set 386_WARNING_LEVEL=
alias src > nul
if NOT errorlevel 1 goto skip4

@rem
@rem  Check if the user has a developr directory under root and let them know it won't
@rem  be used like it was in the old build (new name is developer with an 'e').
@rem
if NOT exist %_NTBINDIR%\developr goto LoadUserEnvironment
echo WARNING: build now uses developer (with an 'e') for per user files

:LoadUserEnvironment

if exist %INIT%\cue.pri goto UsePrivateAliases
echo %INIT%\cue.pri doesn't exist - only using public alias
if EXIST %INIT%\dbg.pub alias -f %INIT%\dbg.pub
alias -f %_NTBINDIR%\developer\cue.pub -f %_NTBINDIR%\developer\ntcue.pub
alias -p remote.exe -f %_NTBINDIR%\developer\cue.pub -f %_NTBINDIR%\developer\ntcue.pub -f %_NTBINDIR%\developer\ntremote.pub
goto skip4

:UsePrivateAliases
if EXIST %INIT%\dbg.pub alias -f %INIT%\dbg.pub
alias -f %_NTBINDIR%\developer\cue.pub -f %_NTBINDIR%\developer\ntcue.pub -f %INIT%\cue.pri
alias -p remote.exe -f %_NTBINDIR%\developer\cue.pub -f %_NTBINDIR%\developer\ntcue.pub -f %_NTBINDIR%\developer\ntremote.pub -f %INIT%\cue.pri 
goto skip4

:skip3

alias src > nul
if errorlevel 1 goto skip4
alias -f %_NTBINDIR%\developer\cue.pub -f %INIT%\cue.pri
alias -p remote.exe -f %_NTBINDIR%\developer\cue.pub -f %_NTBINDIR%\developer\ntremote.pub -f %INIT%\cue.pri

:skip4

REM Load the developer's private environment initialization (keyboard rate,
REM screen size, colors, environment variables, etc).
REM Pass on "RemoteDebug" if ntuser.cmd was invoked by dbgntenv.cmd:

if exist %INIT%\setenv.cmd goto UsePrivateSetenv
if NOT exist %INIT% mkdir %INIT%
echo REM>> %INIT%\setenv.cmd
echo REM This is where you add your private build environment settings.>> %INIT%\setenv.cmd
echo REM Usually, this only consists of your favorite editor settings.>> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo REM If you want source depot to use your editor for change pages (notepad is>> %INIT%\setenv.cmd
echo REM the default), set the SDEDITOR macro to your editor name.>> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo REM You may have to add some entries to the path to find your editor.>> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo REM Note: Whatever you add to the path will have NO effect on the build>> %INIT%\setenv.cmd
echo REM       tools used when you call nmake or build in a razzle window.>> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo REM If you're tempted to put other stuff here to significantly modify the>> %INIT%\setenv.cmd
echo REM build environment, first look at the what razzle does already.>> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo REM     razzle help>> %INIT%\setenv.cmd
echo REM >> %INIT%\setenv.cmd
echo REM from a build window will show the current available options.>> %INIT%\setenv.cmd
echo REM Hopefully your requirement is already there.>> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo REM When you're done editing this file, save it and exit.  Then at>> %INIT%\setenv.cmd
echo REM your earliest convience, add>> %INIT%\setenv.cmd
echo REM      %INIT%\setenv.cmd>> %INIT%\setenv.cmd
echo REM to source control.>> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo REM If you have multiple machines, add another COMPUTERNAME test as below>> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo if "%%COMPUTERNAME%%" == "%ComputerName%" goto Do%ComputerName%>> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo echo %%COMPUTERNAME%% is unknown - Please update %%INIT%%\setenv.cmd>> %INIT%\setenv.cmd
echo goto :eof>> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo :Do%ComputerName%>> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo REM *** Add your private environment settings for computer: %COMPUTERNAME% here ***>> %INIT%\setenv.cmd
echo REM path=%%path%%;^<**Your path here**^> >> %INIT%\setenv.cmd
echo REM set SDEDITOR=^<**Your editor name here**^> >> %INIT%\setenv.cmd
echo REM>> %INIT%\setenv.cmd
echo goto :eof>> %INIT%\setenv.cmd
notepad %INIT%\setenv.cmd

:UsePrivateSetenv
call %INIT%\setenv.cmd %DEBUG_REMOTE%

:done
echo Current user is now %USERNAME%
@rem ================================
@rem
@rem Optional parameters to this script are command line to execute
@rem
%1 %2 %3 %4 %5 %6 %7 %8 %9
