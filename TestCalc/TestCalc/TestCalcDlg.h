
// TestCalcDlg.h : 헤더 파일
//

#pragma once
#include <vector>
#include <array>


// CTestCalcDlg 대화 상자
class CTestCalcDlg : public CDialogEx
{
private:
	int m_value = 0; //숫자저장값
	char m_step = 0; //확인변수
	char m_operater_flag = 0; //기호
	int m_count=0;
	std::vector<CString> a;
	CString ex;
	int count = 1;

public:
	void M_Operate(double m_vaule_two);

	CTestCalcDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

	

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTCALC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);

// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	
	void OnBnClickedPlus();
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnBnClickedMinus();
};
