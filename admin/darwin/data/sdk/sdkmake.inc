# --------- DO NOT EDIT THIS FILE ------------ DO NOT EDIT THIS FILE ---------
# --------- DO NOT EDIT --- see layout.txt --- DO NOT EDIT -------------------
# --------- DO NOT EDIT THIS FILE ------------ DO NOT EDIT THIS FILE ---------
sdk\LIB\patchwiz.lib : $(_NTPOSTBLD)\msiwin9x\patchwiz.lib
	if not exist sdk\LIB md sdk\LIB
	copy $** $@
sdk\WEB\MsiStuff.exe : $(_NTPOSTBLD)\MsiStuff.exe
	if not exist sdk\WEB md sdk\WEB
	copy $** $@
sdk\WEB\Setup.exe : $(_NTPOSTBLD)\msiwin9x\Setup.exe
	if not exist sdk\WEB md sdk\WEB
	copy $** $@
sdk\TOOLS\mergemod.dll : $(_NTPOSTBLD)\msi_bins\mergemod.dll
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\MsiMig.dll : $(_NTPOSTBLD)\msiwin9x\MsiMig.dll
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\MsiMig.exe : $(_NTPOSTBLD)\msiwin9x\MsiMig.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\orca.msi : $(_NTPOSTBLD)\instmsi\msitools\temp\orca.msi
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\msival2.msi : $(_NTPOSTBLD)\instmsi\msitools\temp\msival2.msi
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\MsiCert.exe : $(_NTPOSTBLD)\msiwin9x\MsiCert.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\msidb.exe : $(_NTPOSTBLD)\msiwin9X\mstools\msidb.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\msifiler.exe : $(_NTPOSTBLD)\msiwin9x\mstools\msifiler.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\MsiInfo.exe : $(_NTPOSTBLD)\msiwin9x\MsiInfo.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\MsiMerg.exe : $(_NTPOSTBLD)\msiwin9x\msi_bins\MsiMerg.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\msitran.exe : $(_NTPOSTBLD)\msiwin9x\msitran.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\MsiZap.exe : $(_NTPOSTBLD)\msiwin9x\MsiZap.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\wilogutl.exe : $(_NTPOSTBLD)\msiwin9x\wilogutl.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\120\darice.cub : 1sdk\TOOLS\120\darice.cub1
	if not exist sdk\TOOLS\120 md sdk\TOOLS\120
	copy $** $@
sdk\TOOLS\120\logo.cub : 1sdk\TOOLS\120\logo.cub1
	if not exist sdk\TOOLS\120 md sdk\TOOLS\120
	copy $** $@
sdk\TOOLS\120\mergemod.cub : 1sdk\TOOLS\120\mergemod.cub1
	if not exist sdk\TOOLS\120 md sdk\TOOLS\120
	copy $** $@
sdk\TOOLS\mpatch.exe : $(_NTPOSTBLD)\idw\mpatch.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\apatch.exe : $(_NTPOSTBLD)\idw\apatch.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\mspatchc.dll : $(_NTPOSTBLD)\idw\mspatchc.dll
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\patchwiz.dll : $(_NTPOSTBLD)\msiwin9x\patchwiz.dll
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\TOOLS\MsiMsp.exe : $(_NTPOSTBLD)\msiwin9x\MsiMsp.exe
	if not exist sdk\TOOLS md sdk\TOOLS
	copy $** $@
sdk\SAMPLES\tutorial.dll\makefile : 3sdk\SAMPLES\tutorial.dll\makefile3
	if not exist sdk\SAMPLES\tutorial.dll md sdk\SAMPLES\tutorial.dll
	copy $** $@
sdk\SAMPLES\tutorial.dll\readme.txt : 3sdk\SAMPLES\tutorial.dll\readme.txt3
	if not exist sdk\SAMPLES\tutorial.dll md sdk\SAMPLES\tutorial.dll
	copy $** $@
sdk\SAMPLES\process.dll\makefile : 4sdk\SAMPLES\process.dll\makefile4
	if not exist sdk\SAMPLES\process.dll md sdk\SAMPLES\process.dll
	copy $** $@
sdk\SAMPLES\process.dll\readme.txt : 4sdk\SAMPLES\process.dll\readme.txt4
	if not exist sdk\SAMPLES\process.dll md sdk\SAMPLES\process.dll
	copy $** $@
sdk\SAMPLES\remove.dll\makefile : 5sdk\SAMPLES\remove.dll\makefile5
	if not exist sdk\SAMPLES\remove.dll md sdk\SAMPLES\remove.dll
	copy $** $@
sdk\SAMPLES\remove.dll\readme.txt : 5sdk\SAMPLES\remove.dll\readme.txt5
	if not exist sdk\SAMPLES\remove.dll md sdk\SAMPLES\remove.dll
	copy $** $@
sdk\SAMPLES\create.dll\makefile : 6sdk\SAMPLES\create.dll\makefile6
	if not exist sdk\SAMPLES\create.dll md sdk\SAMPLES\create.dll
	copy $** $@
sdk\SAMPLES\create.dll\readme.txt : 6sdk\SAMPLES\create.dll\readme.txt6
	if not exist sdk\SAMPLES\create.dll md sdk\SAMPLES\create.dll
	copy $** $@
sdk\SAMPLES\msiloc\Makefile : 7sdk\SAMPLES\msiloc\Makefile7
	if not exist sdk\SAMPLES\msiloc md sdk\SAMPLES\msiloc
	copy $** $@
sdk\SAMPLES\msiloc\readme.txt : 7sdk\SAMPLES\msiloc\readme.txt7
	if not exist sdk\SAMPLES\msiloc md sdk\SAMPLES\msiloc
	copy $** $@
sdk\SAMPLES\setup.exe\Makefile : 1sdk\SAMPLES\setup.exe\Makefile1
	if not exist sdk\SAMPLES\setup.exe md sdk\SAMPLES\setup.exe
	copy $** $@
sdk\SAMPLES\setup.exe\ReadMe.htm : 1sdk\SAMPLES\setup.exe\ReadMe.htm1
	if not exist sdk\SAMPLES\setup.exe md sdk\SAMPLES\setup.exe
	copy $** $@
sdk\SAMPLES\MsiStuff\Makefile : 2sdk\SAMPLES\MsiStuff\Makefile2
	if not exist sdk\SAMPLES\MsiStuff md sdk\SAMPLES\MsiStuff
	copy $** $@
sdk\SAMPLES\MsiStuff\ReadMe.htm : 2sdk\SAMPLES\MsiStuff\ReadMe.htm2
	if not exist sdk\SAMPLES\MsiStuff md sdk\SAMPLES\MsiStuff
	copy $** $@
sdk\DATABASE\100\schema.msi : 1sdk\DATABASE\100\schema.msi1
	if not exist sdk\DATABASE\100 md sdk\DATABASE\100
	copy $** $@
sdk\DATABASE\110\schema.msi : 2sdk\DATABASE\110\schema.msi2
	if not exist sdk\DATABASE\110 md sdk\DATABASE\110
	copy $** $@
sdk\DATABASE\120\schema.msi : 3sdk\DATABASE\120\schema.msi3
	if not exist sdk\DATABASE\120 md sdk\DATABASE\120
	copy $** $@
sdk\DATABASE\100\sequence.msi : 1sdk\DATABASE\100\sequence.msi1
	if not exist sdk\DATABASE\100 md sdk\DATABASE\100
	copy $** $@
sdk\DATABASE\110\sequence.msi : 2sdk\DATABASE\110\sequence.msi2
	if not exist sdk\DATABASE\110 md sdk\DATABASE\110
	copy $** $@
sdk\DATABASE\120\sequence.msi : 3sdk\DATABASE\120\sequence.msi3
	if not exist sdk\DATABASE\120 md sdk\DATABASE\120
	copy $** $@
sdk\DATABASE\110\schema.msm : 1sdk\DATABASE\110\schema.msm1
	if not exist sdk\DATABASE\110 md sdk\DATABASE\110
	copy $** $@
sdk\DATABASE\120\schema.msm : 2sdk\DATABASE\120\schema.msm2
	if not exist sdk\DATABASE\120 md sdk\DATABASE\120
	copy $** $@
sdklayout : 	sdk\LIB\patchwiz.lib \
	sdk\WEB\MsiStuff.exe \
	sdk\WEB\Setup.exe \
	sdk\TOOLS\mergemod.dll \
	sdk\TOOLS\MsiMig.dll \
	sdk\TOOLS\MsiMig.exe \
	sdk\TOOLS\orca.msi \
	sdk\TOOLS\msival2.msi \
	sdk\TOOLS\MsiCert.exe \
	sdk\TOOLS\msidb.exe \
	sdk\TOOLS\msifiler.exe \
	sdk\TOOLS\MsiInfo.exe \
	sdk\TOOLS\MsiMerg.exe \
	sdk\TOOLS\msitran.exe \
	sdk\TOOLS\MsiZap.exe \
	sdk\TOOLS\wilogutl.exe \
	sdk\TOOLS\120\darice.cub \
	sdk\TOOLS\120\logo.cub \
	sdk\TOOLS\120\mergemod.cub \
	sdk\TOOLS\mpatch.exe \
	sdk\TOOLS\apatch.exe \
	sdk\TOOLS\mspatchc.dll \
	sdk\TOOLS\patchwiz.dll \
	sdk\TOOLS\MsiMsp.exe \
	sdk\SAMPLES\tutorial.dll\makefile \
	sdk\SAMPLES\tutorial.dll\readme.txt \
	sdk\SAMPLES\process.dll\makefile \
	sdk\SAMPLES\process.dll\readme.txt \
	sdk\SAMPLES\remove.dll\makefile \
	sdk\SAMPLES\remove.dll\readme.txt \
	sdk\SAMPLES\create.dll\makefile \
	sdk\SAMPLES\create.dll\readme.txt \
	sdk\SAMPLES\msiloc\Makefile \
	sdk\SAMPLES\msiloc\readme.txt \
	sdk\SAMPLES\setup.exe\Makefile \
	sdk\SAMPLES\setup.exe\ReadMe.htm \
	sdk\SAMPLES\MsiStuff\Makefile \
	sdk\SAMPLES\MsiStuff\ReadMe.htm \
	sdk\DATABASE\100\schema.msi \
	sdk\DATABASE\110\schema.msi \
	sdk\DATABASE\120\schema.msi \
	sdk\DATABASE\100\sequence.msi \
	sdk\DATABASE\110\sequence.msi \
	sdk\DATABASE\120\sequence.msi \
	sdk\DATABASE\110\schema.msm \
	sdk\DATABASE\120\schema.msm \

