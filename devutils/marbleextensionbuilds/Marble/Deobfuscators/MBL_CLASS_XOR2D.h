#pragma once

class MBL_CLASS_XOR2D
{
public:

	MBL_CLASS_XOR2D(char cXorKey, char *cString, int iNumOfChars);
	MBL_CLASS_XOR2D(wchar_t wcXorKey, wchar_t *wcString, int iNumOfChars);
	~MBL_CLASS_XOR2D(void);

protected:
	char *cStringPointer;
	int iCStringPointerLen;
	wchar_t *wcStringPointer;
	int iWStringPointerLen;

};
