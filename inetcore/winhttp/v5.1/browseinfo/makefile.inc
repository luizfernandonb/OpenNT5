$(O)\sbrlist.inc:
    perl.exe gensbrlists.pl .. $(O)

!if "$(BUILD_PASS)" == "PASS2"

!include $(O)\sbrlist.inc

$(O)\WinHttp5.bsc: $(SBRLIST) 
    $(MAKEDIR)\tools\x86\bscmake -nologo -o $@ @<<
$(SBRLIST: =
)
<<NOKEEP

!else

$(O)\WinHttp5.bsc: 

!endif
