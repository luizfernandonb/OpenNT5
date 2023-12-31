;
;DSVXD.INC
;
;Include file for HAL and HEL VXD layers
;
;Copyright (C) 1997-1999 Microsoft Corporation.  All Rights Reserved.
;

                ;
                ;Return byte count to caller
                ;
                ;Do not use ESI as parameter!
                ;

OUTCNT          MACRO RetCnt
                LOCAL exit

                push esi
                mov esi,IOCTL_parms
                mov esi,[esi].lpcbBytesReturned
                or esi,esi
                jz exit
                mov DWORD PTR [esi],RetCnt
exit:           pop esi

                ENDM

                ;
                ;Return 4-byte DWORD to caller
                ;
                ;Do not use ESI as parameter!
                ;

OUTDWORD        MACRO RetVal
                LOCAL exit

                push esi
                mov esi,IOCTL_parms
                mov esi,[esi].lpvOutBuffer
                or esi,esi
                jz exit
                mov DWORD PTR [esi],RetVal
                OUTCNT 4
exit:           pop esi

                ENDM

                ;
                ;Read 4-byte DWORD from caller
                ;
                ;Do not use ESI as parameter!
                ;

INDWORD         MACRO RetVal
                LOCAL exit

                push esi
                mov esi,IOCTL_parms
                mov esi,[esi].lpvInBuffer
                mov RetVal,-1
                or esi,esi
                jz exit
                mov RetVal,DWORD PTR [esi]
exit:           pop esi

                ENDM

                ;
                ;String copy/write macros
                ;

REP_MOVSB       MACRO

                push ecx
                and ecx,3
                rep movsb
                pop ecx
                shr ecx,2
                rep movsd

                ENDM

REP_STOSB       MACRO

                push ecx
                and ecx,3
                rep stosb
                pop ecx
                shr ecx,2
                rep stosd

                ENDM

                ;
                ;Scale definition
                ;
DS_SCALE_MAX	equ 65535
DS_SCALE_MID	equ 32768

                ;
                ;Error codes
                ;

HAL_OK              equ 0
HAL_ERROR           equ 1
HAL_CANT_OPEN_VXD   equ 2
HAL_ALLOC_FAILED    equ 3
HAL_NOT_ALLOCATED   equ 4
HAL_MUST_STOP_FIRST equ 5

HAL_SYSALLOCMEM	    equ 11

                ;
                ;Base mode flag equates
                ;        Note: This file is generated by modeflag.m4

include <modeflag.inc>

                ;
                ;HALHWMODE afAbilityFlags values
                ;
                ;These flags describe dynamic capabilities (what the device
                ;can/cannot do)
                ;

A_CAN_CHANGE_VOLUME         equ 00000001b  ;Can change volume while playing
A_CANNOT_CHANGE_VOLUME      equ 00000000b  ;Cannot change volume while playing

A_CAN_CHANGE_MODE           equ 00000010b  ;Can change PCM mode while playing
A_CANNOT_CHANGE_MODE        equ 00000000b  ;Cannot change PCM mode while playing

A_CAN_CHANGE_RATE           equ 00000100b  ;Can change rate while playing
A_CANNOT_CHANGE_RATE        equ 00000000b  ;Cannot change rate while playing

A_CAN_LOOP_SECONDARY        equ 00001000b  ;Can loop secondary buffers before starting
A_CANNOT_LOOP_SECONDARY     equ 00000000b  ;Cannot loop secondary buffers before starting

A_CAN_UNLOOP_SECONDARY      equ 00010000b  ;Secondary bufers do not have to loop
A_CANNOT_UNLOOP_SECONDARY   equ 00000000b  ;Secondary buffers must always loop

A_CAN_CHANGE_LOOP_STATUS    equ 00100000b  ;Can turn looping on/off during playback
A_CANNOT_CHANGE_LOOP_STATUS equ 00000000b  ;Cannot turn looping on/off during playback

                ;
                ;HALSTRBUF.dwFlags values
                ;

HSB_DMA_ALLOC   equ 1h		;Buffer was allocated from DMA services
HSB_RAM_ALLOC   equ 2h		;Buffer was allocated from sound card RAM

                ;
                ;
                ;Passed to HAL_ChangeStreamFormat() to inhibit parameter
                ;change
                ;

HF_NO_CHANGE    equ -1


                ;
                ;DSound Caps
                ;


DSC_LOCK_SYSMEM		equ 65535
DSC_LOCK_SLOW		equ 64
DSC_PLAY_DMA		equ 20
DSC_PLAY_ONBOARD	equ 0


DSC_CAPSF_MONO		equ 1
DSC_CAPSF_STEREO	equ 2
DSC_CAPSF_8BIT		equ 4
DSC_CAPSF_16BIT		equ 8


                ;
                ;Stream buffer descriptor
                ;
HALSTRBUF STRUCT
 hfFormat       DWORD ?
 dwSampleRate   DWORD ?
 dwUserSampleRate DWORD ?
 dwVolume       DWORD ?
 dwPan	        DWORD ?
 dwLVolume      DWORD ?
 dwRVolume      DWORD ?
 dwMVolume      DWORD ?
HALSTRBUF ENDS

                ;
                ;Mix session descriptor
                ;

MIXSESSION STRUCT
 lpBuildBuffer  DWORD ?
 dwBuildSize    DWORD ?
 HALOutStrBuf   HALSTRBUF <>
 pBuffer	DWORD ?
 cbBuffer	DWORD ?
 nOutputBytes   DWORD ?
MIXSESSION ENDS

                ;
                ;Mixer input descriptor
                ;

MIXERINPUT STRUCT
 HALInStrBuf    HALSTRBUF <>
 pBuffer	DWORD ?
 cbBuffer	DWORD ?
 lpdwInputPos   DWORD ?
 dwInputBytes   DWORD ?
 dwOutputOffset DWORD ?
MIXERINPUT ENDS


; VxD ID registered to DSHEL.VXD
DSOUND_Device_ID		EQU	357Eh

ifdef DDB_Sys_Crit_Init_Done

; DSound Driver  VxDs use this service to

Begin_Service_Table	DSOUND
        DSOUND_Service  _DSOUND_GetVersion, LOCAL
        DSOUND_Service  _DSOUND_RegisterDeviceDriver, VxD_CODE
        DSOUND_Service  _DSOUND_DeregisterDeviceDriver, VxD_CODE
End_Service_Table DSOUND


ENDIF   ; DDB_Sys_Crit_Init_Done (VxD's only)
