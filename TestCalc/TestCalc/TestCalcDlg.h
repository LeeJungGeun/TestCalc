
// TestCalcDlg.h : 헤더 파일
//
#include <vector>
#include <array>

#pragma once


// CTestCalcDlg 대화 상자
class CTestCalcDlg : public CDialogEx
{
private:
	char m_operater_flag = 0;
	char m_step = 0;
	int m_count = 0;
	double m_value = 0;
	std::vector<CString> a;
	int count = 1;
	std::array<double, 99> muldi = { 0 };
	CString starts;
	double plma = 0;
	double all = 0;
	double muldicount = 0;
	CString ex;
	CString nulll;
	// 생성입니다.
public:
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

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedMultiply();
	afx_msg void OnBnClickedDivision();
}