$(O)\scrdx86.dll  : i386\scrdenrl.dll
    copy $** $@

w2k\$(O)\scrdw2k.dll  : w2k\scrdenrl.dll
    -mkdir w2k\$(O)
    copy $** $@

$(O)\scrdsign.dll : $(TARGET_DIRECTORY)\scrdenrl.dll
    copy $** $@

$(O)\scrdenrl.pdb : $(TARGET_DIRECTORY)\scrdenrl.pdb
    copy $** $@


