/***************************************************************************
 * Copyright (C) 1997-1998 Microsoft Corporation.  All Rights Reserved.
 ***************************************************************************/

/* Merge229 */
/* H_16_BITS */
/* H_MONO  */
/* H_BUILD_STEREO */
/* H_SIGNED */
/* H_ORDER_LR  */
/* H_NOLOOP  */
/* H_RESAMPLE */
/* H_SCALE */
/* H_NO_FILTER  */
#define MERGE229ASM
BOOL Merge229Asm (CMixSource *pMixSource, DWORD nInputByteCount, void *pSourceWrap, PLONG *pplBuild, PLONG plBuildEnd, void **ppSource) {
  PLONG plBuild = *pplBuild;
  BYTE *pSource = *((BYTE **)ppSource);
  BYTE *pSourceStart = pSource;
  BYTE *pSourceEnd = pSource + nInputByteCount;
  PLONG plBuildStart = plBuild;
  DWORD dwFraction = pMixSource->m_dwFraction;
  DWORD dwStep     = pMixSource->m_step_fract;
  #undef STEP_SIZE
  #define STEP_SIZE (sizeof(WORD))

  #ifdef USE_ITERS
  #undef USE_ITERS
  #endif
  #ifdef XpSource
  #undef XpSource
  #endif
  #ifdef XplBuild
  #undef XplBuild
  #endif
  #define XplBuild plBuild
  #define XpSource  (pSource + ((dwFraction >> FRACT_SHIFT) * STEP_SIZE))

  if (nInputByteCount == LONG_MAX) {	// Handle any wrap issues.
     pSourceEnd = NULL;
     pSourceEnd--;
     nInputByteCount = pSourceEnd - pSource;
     if (nInputByteCount > LONG_MAX) {
        nInputByteCount = LONG_MAX;
        pSourceEnd = pSource + nInputByteCount;
     }
  }
  
  *((BYTE **)&pSourceWrap) -= STEP_SIZE;
  
  while ((plBuild < plBuildEnd) && (pSource < pSourceEnd))
    {
    if (pSourceEnd > pSourceWrap)
       pSourceEnd = (BYTE *)pSourceWrap;

    
#if 1
    if (!pMixSource->m_fUse_MMX) {
	if (1 || !pMixSource->m_MapTable)
	_asm {
	mov	esi, pSource
	mov	edx, esi
	mov	eax, dwFraction
	mov	edi, plBuild		// plBuild
	mov	ecx, eax
	shr	ecx, 12
	lea	esi, [esi+ecx*2]	// pSource
	push	ebp
	mov	ecx, DWORD PTR pMixSource
	push	DWORD PTR [ecx]pMixSource.m_dwRVolume
	push	DWORD PTR [ecx]pMixSource.m_dwLVolume
	push	DWORD PTR dwStep
	push	DWORD PTR pSourceEnd
	push	DWORD PTR plBuildEnd

	cmp	edi, DWORD PTR [esp+0]	// plBuild >= plBuildEnd
	jae	Exit

	mov	ebp, eax
Lab:
	cmp	esi, DWORD PTR [esp+4]	// pSource >= pSourceEnd
	jae	Exit

	movsx	ecx, WORD PTR [esi+2]
	movsx	ebx, WORD PTR [esi]
	and	ebp, 4095		// dwFrac = dwFraction & 0x0fff
	sub	ecx, ebx		// x   = NewSample - OldSample
	imul	ecx, ebp		// x  *= Frac
	sar	ecx, 12			// x >>= 12
	add	ecx, ebx		// NewSample += x
	mov	ebp, ecx
	imul	ecx, DWORD PTR [esp+12]
	sar	ecx, 16
	mov	ebx, DWORD PTR [edi]
	add	ebx, ecx
	mov	DWORD PTR [edi], ebx

	add	edi, 8			// plBuild += 2
	mov	ecx, DWORD PTR [esp+8]	// dwStep
	imul	ebp, DWORD PTR [esp+16]
	sar	ebp, 16
	mov	ebx, DWORD PTR [edi-4]
	add	eax, ecx		// dwFraction += dwStep
	add	ebx, ebp
	mov	ecx, eax
	mov	DWORD PTR [edi-4], ebx	// (*plBuild+1) += x

	shr	ecx, 12
	mov	ebp, eax
	lea	esi, [edx+ecx*2]	// pSource + (dwFraction >> 12) * 4
	cmp	edi, DWORD PTR [esp+0]	// plBuild < plBuildEnd
	jb	Lab
Exit:
	add	esp, 20
	pop	ebp
	mov	dwFraction, eax
	mov	plBuild, edi
	}
	else
	_asm {
	mov	esi, pSource
	mov	edx, esi
	mov	eax, dwFraction
	mov	edi, plBuild		// plBuild
	mov	ecx, eax
	shr	ecx, 12
	lea	esi, [esi+ecx*2]	// pSource
	push	ebp
	push	edx
	mov	ecx, DWORD PTR pMixSource
	mov	ecx, DWORD PTR [ecx]pMixSource.m_MapTable
	push	ecx
//	push	DWORD PTR [ecx]pMixSource.m_dwRVolume
//	push	DWORD PTR [ecx]pMixSource.m_dwLVolume
	push	DWORD PTR dwStep
	push	DWORD PTR pSourceEnd
	push	DWORD PTR plBuildEnd

	cmp	edi, DWORD PTR [esp+0]	// plBuild >= plBuildEnd
	jae	Exit1

	mov	ebp, eax
Lab1:
	cmp	esi, DWORD PTR [esp+4]	// pSource >= pSourceEnd
	jae	Exit1

	movsx	ecx, WORD PTR [esi+2]
	movsx	ebx, WORD PTR [esi]
	and	ebp, 4095		// dwFrac = dwFraction & 0x0fff
	sub	ecx, ebx		// x   = NewSample - OldSample
	imul	ecx, ebp		// x  *= Frac
	sar	ecx, 12			// x >>= 12
	add	ecx, ebx		// NewSample += x
	mov	ebp, ecx
	and	ecx, 0xff
	mov	ebx, ebp
	mov	edx, DWORD PTR [esp+12]
	sar	ebx, 8
	mov	ecx, DWORD PTR [edx+ecx*4]
	mov	ebx, DWORD PTR [edx+ebx*4+2048+512]
	add	edi, 8			// plBuild += 2
	add	ecx, ebx
//	imul	ecx, DWORD PTR [esp+12]
//	sar	ecx, 16
	mov	ebx, DWORD PTR [edi-8]
	add	ebx, ecx
	mov	DWORD PTR [edi-8], ebx

	mov	ebx, ebp
	and	ebp, 0xff
	sar	ebx, 8
	mov	ebp, DWORD PTR [edx+ebp*4+1024]
	mov	edx, DWORD PTR [edx+ebx*4+1024+2048+512]
	mov	ecx, DWORD PTR [esp+8]	// dwStep
	add	ebp, edx
//	imul	ebp, DWORD PTR [esp+16]
//	sar	ebp, 16
	mov	ebx, DWORD PTR [edi-4]
	add	eax, ecx		// dwFraction += dwStep
	add	ebx, ebp
	mov	ecx, eax
	mov	DWORD PTR [edi-4], ebx	// (*plBuild+1) += x
	mov	edx, DWORD PTR [esp+16]

	shr	ecx, 12
	mov	ebp, eax
	lea	esi, [edx+ecx*2]	// pSource + (dwFraction >> 12) * 4
	cmp	edi, DWORD PTR [esp+0]	// plBuild < plBuildEnd
	jb	Lab1
Exit1:
	add	esp, 20
	pop	ebp
	mov	dwFraction, eax
	mov	plBuild, edi
	}
     }
     else
	_asm {
	mov	eax, pMixSource
	mov	ecx, DWORD PTR [eax]pMixSource.m_dwRVolume // Use lower 16 bits
	mov	eax, DWORD PTR [eax]pMixSource.m_dwLVolume
	shr	ecx, 1			// Only have positive values.
	shr	eax, 1
//	and	eax, 0xffff
	shl	ecx, 16
	or	ecx, eax
	movd	mm6, ecx
	punpckldq	mm6, mm6

	mov	esi, pSource
	mov	edx, esi
	mov	eax, dwFraction
	mov	edi, plBuild		// plBuild
	mov	ecx, eax
	shr	ecx, 12
	lea	esi, [esi+ecx*2]	// pSource
	push	ebp
	push	DWORD PTR dwStep
	push	DWORD PTR pSourceEnd
	push	DWORD PTR plBuildEnd

	cmp	edi, DWORD PTR [esp+0]	// plBuild >= plBuildEnd
	jae	Exit0

	mov	ebp, eax
Lab0:
	cmp	esi, DWORD PTR [esp+4]	// pSource >= pSourceEnd
	jae	Exit0

	movsx	ecx, WORD PTR [esi+2]
	movsx	ebx, WORD PTR [esi]
	and	ebp, 4095		// dwFrac = dwFraction & 0x0fff
	sub	ecx, ebx		// x   = NewSample - OldSample
	imul	ecx, ebp		// x  *= Frac
	sar	ecx, 12			// x >>= 12
	add	edi, 8			// plBuild += 2
	add	ecx, ebx		// NewSample += x

	movd		mm1, ecx
	punpcklwd	mm1, mm1
	
	pmulhw		mm1, mm6			// Only need high parts.
	punpcklwd	mm1, mm1
	psrad		mm1, 15

	paddd		mm1, QWORD PTR [edi-8]
	movq		QWORD PTR [edi-8], mm1

//	mov	ebx, DWORD PTR [edi-8]
	mov	ebp, DWORD PTR [esp+8]	// dwStep
//	add	ebx, ecx
	add	eax, ebp		// dwFraction += dwStep
//	mov	DWORD PTR [edi-8], ebx	// *plBuild += x

//	mov	ebx, DWORD PTR [edi-4]
//	add	ebx, ecx
	mov	ecx, eax
//	mov	DWORD PTR [edi-4], ebx	// (*plBuild+1) += x

	shr	ecx, 12
	mov	ebp, eax
	lea	esi, [edx+ecx*2]	// pSource + (dwFraction >> 12) * 4
	cmp	edi, DWORD PTR [esp+0]	// plBuild < plBuildEnd
	jb	Lab0
Exit0:
	emms
	add	esp, 12
	pop	ebp
	mov	dwFraction, eax
	mov	plBuild, edi
	}
#else
    LONG SampleNext;
    while ((plBuild < plBuildEnd) && (XpSource < pSourceEnd))
    {
      LONG Sample;
      Sample = ((LONG)*((SHORT*)(XpSource)));
      SampleNext = ((LONG)*(((SHORT*)(XpSource))+1));
      LONG dwFrac = dwFraction & FRACT_MASK;
      Sample += ((SampleNext - Sample) * dwFrac) >> FRACT_SHIFT;
      dwFraction += dwStep;
      *XplBuild += DIVIDEBY2POW16(Sample * (int)pMixSource->m_dwLVolume);
      *(XplBuild + 1) += DIVIDEBY2POW16(Sample * (int)pMixSource->m_dwRVolume);
      plBuild += 2;
    }
#endif

    pSource          = XpSource;
    dwFraction &= FRACT_MASK;		// Eliminate accumulated offsets.
    nInputByteCount -=  pSource - pSourceStart;

    if (pSource >= pSourceWrap) {	// Goes to -1 position if necessary.
       pSource -= pMixSource->m_cbBuffer;
    }

    pSourceStart = pSource;
    pSourceEnd   = pSource + nInputByteCount;
  }

  *((LONG **)ppSource) = (LONG *)pSource;
    pMixSource->m_cSamplesInCache += ((plBuild - plBuildStart) / 2);
  *pplBuild = plBuild;
    pMixSource->m_dwFraction = dwFraction;
  
  return ((int)nInputByteCount <= 0);
}
