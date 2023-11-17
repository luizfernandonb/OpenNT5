#
# Build wdm.lib.  This consists of wdmguid.lib, wdmnt.lib and wdmhal.lib, all
# built below.
#

WDMLIBDEP=$(O)\wdmnt.lib \
          $(O)\wdmhal.lib \
          $(O)\wdmguid.obj

!if $(386)
WDMLIBDEP=$(WDMLIBDEP) \
    $(SDK_LIB_PATH)\exsup.lib \
    $(SDK_LIB_PATH)\int64.lib \
    $(PROJECT_ROOT)\ntos\init\$(TARGET_DIRECTORY)\excptlst.obj \
    $(PROJECT_LIB_PATH)\loadcfg.obj \
    $(PROJECT_LIB_PATH)\seccook.obj
!endif

#
# __NULL_IMPORT_DESCRIPTOR is found in both wdmhal.lib and wdmnt.lib, which
# generates warning 4006.
#

$(O)\wdm.lib: $(WDMLIBDEP)
     -$(LIB_NAME) -out:$(@R).lib @<<
$(LINK_LIB_IGNORE_FLAG)
-ignore:4006
$(WDMLIBDEP)
<<NOKEEP

#
# Build wdmnt.lib
#

$(O)\wdmnt.def: i386nt.src alphant.src amd64nt.src

$(O)\wdmnt.lib : $(O)\wdmnt.def $(DDK_LIB_PATH)\ntoskrnl.lib
    -$(LIB_NAME) -out:$@ @<<
$(LIBRARIAN_FLAGS: =
)
-def:$(O)\wdmnt.def
$(DDK_LIB_PATH)\ntoskrnl.lib
<<NOKEEP

#
# Build wdmhal.lib
#

$(O)\wdmhal.def: i386hal.src alphahal.src amd64hal.src

$(O)\wdmhal.lib : $(O)\wdmhal.def $(DDK_LIB_PATH)\hal.lib
    -$(LIB_NAME) -out:$@ @<<
$(LIBRARIAN_FLAGS: =
)
-def:$(O)\wdmhal.def
$(DDK_LIB_PATH)\hal.lib
<<NOKEEP
