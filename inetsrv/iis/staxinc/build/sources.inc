!if "$(FREEBUILD)"=="1"
### !message **** FREE BUILD ***
!else
C_DEFINES=$(C_DEFINES) -DDEBUG=1
!if !$(WIN64)
MSC_OPTIMIZATION=/Od
!endif
!endif

!ifdef TRACE_ENABLED
C_DEFINES=$(C_DEFINES) -DTRACE_ENABLED
!endif

INCLUDES=$(INCLUDES);$(STAXINC)\export;$(IISBASEDIR)\inc
