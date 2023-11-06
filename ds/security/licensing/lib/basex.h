#pragma once
class CWPABigNumBaseConverter {
	DWORD field_0;
	DWORD field_4;
	DWORD field_8;
	DWORD field_C;
	DWORD field_10;
	DWORD field_14;
	LPWSTR m_lpszAlphabet;
	DWORD m_dwBase;

	DWORD sub_105B019(LPCWSTR lpszAlphabet);

public:
	explicit CWPABigNumBaseConverter(LPCWSTR lpszAlphabet); // sub_105B97D
	~CWPABigNumBaseConverter(); // sub_105AF48
	void sub_105B193(DWORD nBits);
	DWORD sub_105B375(CONST BYTE* lpBinaryData, LPWSTR* ppszResult);
	void sub_105B5D7(DWORD nChars);
	DWORD sub_105B7C0(LPCWSTR lpTextData, PBYTE* ppResult);
};

class CWPABigNumBase24Converter : public CWPABigNumBaseConverter {
public:
	CWPABigNumBase24Converter() : CWPABigNumBaseConverter(L"BCDFGHJKMPQRTVWXY2346789") {} // sub_104A57F
};

class CWPABigNumDecimalConverter : public CWPABigNumBaseConverter {
public:
	CWPABigNumDecimalConverter() : CWPABigNumBaseConverter(L"0123456789") {}
};
