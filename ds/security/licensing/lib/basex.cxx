#include "precomp.h"
#pragma hdrstop
#include <math.h>
#include "basex.h"

CWPABigNumBaseConverter::CWPABigNumBaseConverter(LPCWSTR lpszAlphabet) {
	m_lpszAlphabet = NULL;
	m_dwBase = 0;
	field_0 = 0;
	field_4 = 0;
	field_8 = 0;
	field_C = 0;
	field_10 = 0;
	field_14 = 0;
	sub_105B019(lpszAlphabet);
}

CWPABigNumBaseConverter::~CWPABigNumBaseConverter() {
	if (m_lpszAlphabet != NULL) {
		HeapFree(GetProcessHeap(), 0, m_lpszAlphabet);
		m_lpszAlphabet = NULL;
		m_dwBase = 0;
	}
}

DWORD CWPABigNumBaseConverter::sub_105B019(LPCWSTR p) {
	DWORD err = ERROR_SUCCESS;
	if (p != NULL) {
		DWORD edi = wcslen(p);
		m_lpszAlphabet = (LPWSTR)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, (edi + 1) * sizeof(WCHAR));
		if (m_lpszAlphabet == 0) {
			err = ERROR_OUTOFMEMORY;
			goto Done;
		}
		wcscpy(m_lpszAlphabet, p);
		m_dwBase = edi;
	} else {
		if (m_lpszAlphabet != NULL) {
			HeapFree(GetProcessHeap(), 0, m_lpszAlphabet);
			m_lpszAlphabet = NULL;
			m_dwBase = 0;
		}
	}
Done:
	return err;
}

void CWPABigNumBaseConverter::sub_105B193(DWORD nBits) {
	double tmp = nBits * log10(2) / log10(m_dwBase);
	field_0 = (DWORD)tmp;
	if (field_0 < tmp)
		field_0++;
	field_4 = nBits;
	field_8 = nBits / 8 + (nBits % 8 ? 1 : 0);
}

DWORD CWPABigNumBaseConverter::sub_105B375(CONST BYTE* lpBinaryData, LPWSTR* ppszResult) {
	DWORD err = ERROR_SUCCESS;
	LONG var_4 = field_0;
	*ppszResult = NULL;
	LPBYTE lpMem = NULL;
	LPWSTR var_10 = (LPWSTR)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, (field_0 + 1) * sizeof(WCHAR));
	if (var_10 == NULL) {
		err = ERROR_OUTOFMEMORY;
		goto Cleanup;
	}
	if (lpBinaryData == NULL) {
		err = ERROR_INVALID_PARAMETER;
		goto Cleanup;
	}
	lpMem = (LPBYTE)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, field_8);
	if (lpMem == NULL) {
		err = ERROR_OUTOFMEMORY;
		goto Cleanup;
	}
	memcpy(lpMem, lpBinaryData, field_8);
	var_10[var_4] = 0;
	for (; --var_4 >= 0; ) {
		DWORD edx = 0;
		LONG i = field_8;
		for (; --i >= 0; ) {
			DWORD ecx = edx * 0x100 + lpMem[i];
			lpMem[i] = (BYTE)(ecx / m_dwBase);
			edx = ecx % m_dwBase;
		}
		var_10[var_4] = m_lpszAlphabet[edx];
	}
	*ppszResult = var_10;
Cleanup:
	if (lpMem != NULL) {
		HeapFree(GetProcessHeap(), 0, lpMem);
	}
	if (err != ERROR_SUCCESS && var_10 != NULL) {
		HeapFree(GetProcessHeap(), 0, var_10);
	}
	return err;
}

void CWPABigNumBaseConverter::sub_105B5D7(DWORD nChars) {
	field_10 = nChars;
	double tmp = nChars * log10(m_dwBase) / log10(2);
	field_14 = (DWORD)tmp;
	if (field_14 < tmp)
		field_14++;
	field_C = field_14 / 8 + (field_14 % 8 ? 1 : 0);
}

DWORD CWPABigNumBaseConverter::sub_105B7C0(LPCWSTR lpTextData, PBYTE* ppResult) {
	*ppResult = NULL;
	DWORD err = ERROR_SUCCESS;
	DWORD var_8 = 0;
	PBYTE edi = (PBYTE)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, field_C);
	if (edi == NULL) {
		err = ERROR_OUTOFMEMORY;
		goto Cleanup;
	}
	for (; *lpTextData; lpTextData++) {
		LPCWSTR pChar = wcschr(m_lpszAlphabet, *lpTextData);
		if (pChar == NULL) {
			err = ERROR_INVALID_DATA;
			goto Cleanup;
		}
		DWORD_PTR digit = pChar - m_lpszAlphabet;
		DWORD i;
		for (i = 0; i <= var_8; i++) {
			digit += edi[i] * m_dwBase;
			edi[i] = (BYTE)digit;
			digit >>= 8;
		}
		if (digit != 0) {
			edi[i] = (BYTE)digit;
			var_8 = i;
		}
	}
	*ppResult = edi;
Cleanup:
	if (err != ERROR_SUCCESS && edi != NULL) {
		HeapFree(GetProcessHeap(), 0, edi);
	}
	return err;
}
