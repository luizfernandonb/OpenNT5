	page	,132
	.listall

;Thunk Compiler Version 1.8  Dec 14 1994 14:53:05
;File Compiled Thu Nov 16 12:45:55 2023

;Command Line: thunk.exe thunk1632.thk 

	TITLE	$thunk1632.asm

	.386
	OPTION READONLY


IFNDEF IS_16
IFNDEF IS_32
%out command line error: specify one of -DIS_16 -DIS_32
.err
ENDIF
ENDIF
IFDEF IS_16
IFDEF IS_32
%out command line error: you can't specify both -DIS_16 and -DIS_32
.err
ENDIF

	OPTION SEGMENT:USE16
	.model LARGE,PASCAL

externDef FaxDisable:far16
externDef FaxCreateDriverContext:far16
externDef FaxDevInstall:far16
externDef FaxResetDC:far16
externDef FaxEndDoc:far16
externDef FaxAddPage:far16
externDef FaxStartDoc:far16

externDef C16ThkSL01:far16


	.data

public thunk1632_ThunkData16	;This symbol must be exported.
thunk1632_ThunkData16	dd	31304c53h	;Protocol 'SL01'
	dd	05b2dh	;Checksum
	dd	0		;Flags.
	dd	0		;RESERVED. MUST BE ZERO.
	dd	0		;RESERVED. MUST BE ZERO.
	dd	0		;RESERVED. MUST BE ZERO.
	dd	0		;RESERVED. MUST BE ZERO.
	dd	3130424ch	;Late-binding signature 'LB01'
	dd	040000000h		;More flags.
	dd	0		;RESERVED. MUST BE ZERO.
	dw	offset thunk1632_ThunkData16ApiDatabase
	dw	   seg thunk1632_ThunkData16ApiDatabase


;; Api database. Each entry == 8 bytes:
;;  byte  0:     # of argument bytes.
;;  byte  1,2,3: Reserved: Must initialize to 0.
;;  dword 4:	 error return value.
public thunk1632_ThunkData16ApiDatabase
thunk1632_ThunkData16ApiDatabase	label	dword
	db	4
	db	0,0,0
	dd	-1
	db	16
	db	0,0,0
	dd	-1
	db	12
	db	0,0,0
	dd	-1
	db	8
	db	0,0,0
	dd	-1
	db	6
	db	0,0,0
	dd	-1
	db	16
	db	0,0,0
	dd	-1
	db	8
	db	0,0,0
	dd	-1




	.code 


externDef ThunkConnect16:far16

public thunk1632_ThunkConnect16
thunk1632_ThunkConnect16:
	pop	ax
	pop	dx
	push	seg    thunk1632_ThunkData16
	push	offset thunk1632_ThunkData16
	push	seg    thunk1632_TD32Label
	push	offset thunk1632_TD32Label
	push	cs
	push	dx
	push	ax
	jmp	ThunkConnect16
thunk1632_TD32Label label byte
	db	"thunk1632_ThunkData32",0


FaxDisable label far16
	mov	cx,0			; offset in jump table
	jmp	thunk1632EntryCommon

FaxCreateDriverContext label far16
	mov	cx,4			; offset in jump table
	jmp	thunk1632EntryCommon

FaxDevInstall label far16
	mov	cx,8			; offset in jump table
	jmp	thunk1632EntryCommon

FaxResetDC label far16
	mov	cx,12			; offset in jump table
	jmp	thunk1632EntryCommon

FaxEndDoc label far16
	mov	cx,16			; offset in jump table
	jmp	thunk1632EntryCommon

FaxAddPage label far16
	mov	cx,20			; offset in jump table
	jmp	thunk1632EntryCommon

FaxStartDoc label far16
	mov	cx,24			; offset in jump table
	jmp	thunk1632EntryCommon

;===========================================================================
; This is the common setup code for 16=>32 thunks.
;
; Entry:  cx  = offset in flat jump table
;
; Don't optimize this code: C16ThkSL01 overwrites it
; after each discard.

align
thunk1632EntryCommon:
	db	0ebh, 030	;Jump short forward 30 bytes.
;;; Leave at least 30 bytes for C16ThkSL01's code patching.
	db	30 dup(0cch)	;Patch space.
	push	seg    thunk1632_ThunkData16
	push	offset thunk1632_ThunkData16
	pop	edx
	push	cs
	push	offset thunk1632EntryCommon
	pop	eax
	jmp	C16ThkSL01

ELSE	; IS_32
	.model FLAT,STDCALL

externDef STDCALL K32Thk1632Prolog@0:near32
externDef STDCALL K32Thk1632Epilog@0:near32
externDef STDCALL FaxDisable@4:near32
externDef STDCALL FaxCreateDriverContext@16:near32
externDef STDCALL FaxDevInstall@12:near32
externDef STDCALL FaxResetDC@8:near32
externDef STDCALL FaxEndDoc@8:near32
externDef STDCALL FaxAddPage@16:near32
externDef STDCALL FaxStartDoc@8:near32

MapSLFix		proto	STDCALL  :DWORD
MapSL		proto	STDCALL  :DWORD
UnMapSLFixArray		proto	STDCALL  :DWORD, :DWORD
externDef	MapHInstSL:near32
externDef	MapHInstSL_PN:near32
externDef	MapHInstLS:near32
externDef	MapHInstLS_PN:near32
externDef T_FAXDISABLE:near32
externDef T_FAXCREATEDRIVERCONTEXT:near32
externDef T_FAXDEVINSTALL:near32
externDef T_FAXRESETDC:near32
externDef T_FAXENDDOC:near32
externDef T_FAXADDPAGE:near32
externDef T_FAXSTARTDOC:near32

;===========================================================================
	.code 


; This is a jump table to API-specific flat thunk code.

align
thunk1632_JumpTable label dword
	dd	offset FLAT:T_FAXDISABLE
	dd	offset FLAT:T_FAXCREATEDRIVERCONTEXT
	dd	offset FLAT:T_FAXDEVINSTALL
	dd	offset FLAT:T_FAXRESETDC
	dd	offset FLAT:T_FAXENDDOC
	dd	offset FLAT:T_FAXADDPAGE
	dd	offset FLAT:T_FAXSTARTDOC

thunk1632_ThunkDataName label byte
	db	"thunk1632_ThunkData16",0

	.data

public thunk1632_ThunkData32	;This symbol must be exported.
thunk1632_ThunkData32	dd	31304c53h	;Protocol 'SL01'
	dd	05b2dh	;Checksum
	dd	0	;Reserved (MUST BE 0)
	dd	0	;Flat address of ThunkData16
	dd	3130424ch	;'LB01'
	dd	0	;Flags
	dd	0	;Reserved (MUST BE 0)
	dd	0	;Reserved (MUST BE 0)
	dd	offset thunk1632_JumpTable - offset thunk1632_ThunkDataName



	.code 


externDef ThunkConnect32@24:near32

public thunk1632_ThunkConnect32@16
thunk1632_ThunkConnect32@16:
	pop	edx
	push	offset thunk1632_ThunkDataName
	push	offset thunk1632_ThunkData32
	push	edx
	jmp	ThunkConnect32@24


;===========================================================================
; Common routines to restore the stack and registers
; and return to 16-bit code.  There is one for each
; size of 16-bit parameter list in this script.

align
ExitFlat_4:
	mov	cl,4		; parameter byte count
	mov	esp,ebp		; point to return address
	retn			; return to dispatcher

align
ExitFlat_6:
	mov	cl,6		; parameter byte count
	mov	esp,ebp		; point to return address
	retn			; return to dispatcher

align
ExitFlat_8:
	mov	cl,8		; parameter byte count
	mov	esp,ebp		; point to return address
	retn			; return to dispatcher

align
ExitFlat_12:
	mov	cl,12		; parameter byte count
	mov	esp,ebp		; point to return address
	retn			; return to dispatcher

align
ExitFlat_16:
	mov	cl,16		; parameter byte count
	mov	esp,ebp		; point to return address
	retn			; return to dispatcher

;===========================================================================
T_FAXDISABLE label near32

; ebx+22   dwPtr

;-------------------------------------
; create new call frame and make the call

; dwPtr  from: unsigned long
	push	dword ptr [ebx+22]	; to unsigned long

	call	K32Thk1632Prolog@0
	call	FaxDisable@4		; call 32-bit version
	call	K32Thk1632Epilog@0

	shld	edx,eax,16
	or	eax,edx
;-------------------------------------
	jmp	ExitFlat_4

;===========================================================================
T_FAXCREATEDRIVERCONTEXT label near32

; ebx+34   lpDeviceName
; ebx+30   lpPort
; ebx+26   lpDevMode
; ebx+22   lpDrvContext

;-------------------------------------
; temp storage

	xor	eax,eax
	push	eax	;MapLS unfix temp
	push	eax	;MapLS unfix temp
	push	eax	;MapLS unfix temp
	push	eax	;MapLS unfix temp
; lpDeviceName inline mapping
; lpPort inline mapping
; lpDevMode inline mapping
; lpDrvContext inline mapping
;-------------------------------------
; *** BEGIN parameter packing

; lpDeviceName
; pointer char --> char
; inline mapping

; lpPort
; pointer char --> char
; inline mapping

; lpDevMode
; pointer struct --> struct
; inline mapping

; lpDrvContext
; pointer unsigned long --> unsigned long
; inline mapping

; *** END   parameter packing
;-------------------------------------
; create new call frame and make the call

; lpDrvContext  from: unsigned long
	mov	eax, [ebx+22]		; base address
	mov	[esp + 0],eax
	push	eax
	call	MapSLFix	
	push	eax

; lpDevMode  from: struct
	mov	eax, [ebx+26]		; base address
	mov	[esp + 8],eax
	push	eax
	call	MapSLFix	
	push	eax

; lpPort  from: char
	mov	eax, [ebx+30]		; base address
	mov	[esp + 16],eax
	push	eax
	call	MapSLFix	
	push	eax

; lpDeviceName  from: char
	mov	eax, [ebx+34]		; base address
	mov	[esp + 24],eax
	push	eax
	call	MapSLFix	
	push	eax

	call	K32Thk1632Prolog@0
	call	FaxCreateDriverContext@16		; call 32-bit version
	call	K32Thk1632Epilog@0

	shld	edx,eax,16
	or	eax,edx
	lea	ecx, [esp+0]
	push	ecx
	push	dword ptr 4
	call	UnMapSLFixArray	;! Preserves eax & edx
;-------------------------------------
	jmp	ExitFlat_16

;===========================================================================
T_FAXDEVINSTALL label near32

; ebx+30   lpDevName
; ebx+26   lpOldPort
; ebx+22   lpNewPort

;-------------------------------------
; temp storage

	xor	eax,eax
	push	eax	;MapLS unfix temp
	push	eax	;MapLS unfix temp
	push	eax	;MapLS unfix temp
; lpDevName inline mapping
; lpOldPort inline mapping
; lpNewPort inline mapping
;-------------------------------------
; *** BEGIN parameter packing

; lpDevName
; pointer char --> char
; inline mapping

; lpOldPort
; pointer char --> char
; inline mapping

; lpNewPort
; pointer char --> char
; inline mapping

; *** END   parameter packing
;-------------------------------------
; create new call frame and make the call

; lpNewPort  from: char
	mov	eax, [ebx+22]		; base address
	mov	[esp + 0],eax
	push	eax
	call	MapSLFix	
	push	eax

; lpOldPort  from: char
	mov	eax, [ebx+26]		; base address
	mov	[esp + 8],eax
	push	eax
	call	MapSLFix	
	push	eax

; lpDevName  from: char
	mov	eax, [ebx+30]		; base address
	mov	[esp + 16],eax
	push	eax
	call	MapSLFix	
	push	eax

	call	K32Thk1632Prolog@0
	call	FaxDevInstall@12		; call 32-bit version
	call	K32Thk1632Epilog@0

	shld	edx,eax,16
	or	eax,edx
	lea	ecx, [esp+0]
	push	ecx
	push	dword ptr 3
	call	UnMapSLFixArray	;! Preserves eax & edx
;-------------------------------------
	jmp	ExitFlat_12

;===========================================================================
T_FAXRESETDC label near32

; ebx+26   pdwOldPtr
; ebx+22   pdwNewPtr

;-------------------------------------
; temp storage

	xor	eax,eax
	push	eax	;MapLS unfix temp
	push	eax	;MapLS unfix temp
; pdwOldPtr inline mapping
; pdwNewPtr inline mapping
;-------------------------------------
; *** BEGIN parameter packing

; pdwOldPtr
; pointer unsigned long --> unsigned long
; inline mapping

; pdwNewPtr
; pointer unsigned long --> unsigned long
; inline mapping

; *** END   parameter packing
;-------------------------------------
; create new call frame and make the call

; pdwNewPtr  from: unsigned long
	mov	eax, [ebx+22]		; base address
	mov	[esp + 0],eax
	push	eax
	call	MapSLFix	
	push	eax

; pdwOldPtr  from: unsigned long
	mov	eax, [ebx+26]		; base address
	mov	[esp + 8],eax
	push	eax
	call	MapSLFix	
	push	eax

	call	K32Thk1632Prolog@0
	call	FaxResetDC@8		; call 32-bit version
	call	K32Thk1632Epilog@0

	shld	edx,eax,16
	or	eax,edx
	lea	ecx, [esp+0]
	push	ecx
	push	dword ptr 2
	call	UnMapSLFixArray	;! Preserves eax & edx
;-------------------------------------
	jmp	ExitFlat_8

;===========================================================================
T_FAXENDDOC label near32

; ebx+24   dwPtr
; ebx+22   bAbort

;-------------------------------------
; create new call frame and make the call

; bAbort  from: bool16
	movzx	eax,word ptr [ebx+22]
	push	eax			; to: bool32

; dwPtr  from: unsigned long
	push	dword ptr [ebx+24]	; to unsigned long

	call	K32Thk1632Prolog@0
	call	FaxEndDoc@8		; call 32-bit version
	call	K32Thk1632Epilog@0

	shld	edx,eax,16
	or	eax,edx
;-------------------------------------
	jmp	ExitFlat_6

;===========================================================================
T_FAXADDPAGE label near32

; ebx+34   dwPtr
; ebx+30   lpBitmapData
; ebx+26   dwPxlsWidth
; ebx+22   dwPxlsHeight

;-------------------------------------
; temp storage

	xor	eax,eax
	push	eax	;MapLS unfix temp
; lpBitmapData inline mapping
;-------------------------------------
; *** BEGIN parameter packing

; lpBitmapData
; pointer unsigned char --> unsigned char
; inline mapping

; *** END   parameter packing
;-------------------------------------
; create new call frame and make the call

; dwPxlsHeight  from: unsigned long
	push	dword ptr [ebx+22]	; to unsigned long

; dwPxlsWidth  from: unsigned long
	push	dword ptr [ebx+26]	; to unsigned long

; lpBitmapData  from: unsigned char
	mov	eax, [ebx+30]		; base address
	mov	[esp + 8],eax
	push	eax
	call	MapSLFix	
	push	eax

; dwPtr  from: unsigned long
	push	dword ptr [ebx+34]	; to unsigned long

	call	K32Thk1632Prolog@0
	call	FaxAddPage@16		; call 32-bit version
	call	K32Thk1632Epilog@0

	shld	edx,eax,16
	or	eax,edx
	lea	ecx, [esp+0]
	push	ecx
	push	dword ptr 1
	call	UnMapSLFixArray	;! Preserves eax & edx
;-------------------------------------
	jmp	ExitFlat_16

;===========================================================================
T_FAXSTARTDOC label near32

; ebx+26   dwPtr
; ebx+22   lpdi

;-------------------------------------
; temp storage

	xor	eax,eax
	push	eax	;MapLS unfix temp
	push	eax	;MapLS unfix temp
	push	eax	;MapLS unfix temp
	push	eax	;MapLS unfix temp
	push	eax			; ptr param #1   lpdi
;-------------------------------------
; *** BEGIN parameter packing

; lpdi
; pointer struct --> struct
	cld				; esi, edi will increment

	sub	esp,20			; lpdi alloc space on stack

	mov	eax,[ebx+22]		; base address
	or	eax,eax
	jz	L0			; skip if null


; structures are not identical
; structures have pointers

	mov	[esp+20],esp		; save pointer to buffer

	mov	[esp + 24],eax
	push	eax
	call	MapSLFix	
	mov	esi,eax			; source flat address
	mov	edi,esp			; destination flat address

	movsw
	inc	edi
	inc	edi
	lodsd
	mov	[esp + 28],eax
	push	eax
	call	MapSLFix	
	stosd

	lodsd
	mov	[esp + 32],eax
	push	eax
	call	MapSLFix	
	stosd

	lodsd
	mov	[esp + 36],eax
	push	eax
	call	MapSLFix	
	stosd

	movsd
L0:

; *** END   parameter packing
;-------------------------------------
; create new call frame and make the call

; lpdi  from: struct
	push	dword ptr [esp+20]	; to: struct

; dwPtr  from: unsigned long
	push	dword ptr [ebx+26]	; to unsigned long

	call	K32Thk1632Prolog@0
	call	FaxStartDoc@8		; call 32-bit version
	call	K32Thk1632Epilog@0

	shld	edx,eax,16
	or	eax,edx
	lea	ecx, [esp+24]
	push	ecx
	push	dword ptr 4
	call	UnMapSLFixArray	;! Preserves eax & edx
;-------------------------------------
	jmp	ExitFlat_8

ENDIF
END
