$(O)\xenrx86.dll  : i386\xenroll.dll
    copy $** $@

$(O)\xenroll.pdb : $(TARGET_DIRECTORY)\xenroll.pdb
    copy $** $@
