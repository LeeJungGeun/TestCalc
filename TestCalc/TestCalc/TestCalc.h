
// TestCalc.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CTestCalcApp:
// �� Ŭ������ ������ ���ؼ��� TestCalc.cpp�� �����Ͻʽÿ�.
//

class CTestCalcApp : public CWinApp
{
public:
	CTestCalcApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CTestCalcApp theApp;