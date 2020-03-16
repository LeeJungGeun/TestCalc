
// TestCalcDlg.h : ��� ����
//
#include <vector>
#include <array>

#pragma once


// CTestCalcDlg ��ȭ ����
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
	// �����Դϴ�.
public:
	CTestCalcDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTCALC_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);

	// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedMultiply();
	afx_msg void OnBnClickedDivision();
}