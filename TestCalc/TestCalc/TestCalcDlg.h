
// TestCalcDlg.h : ��� ����
//
#include <vector>
#include <array>

#pragma once
#include <vector>
#include <array>


// CTestCalcDlg ��ȭ ����
class CTestCalcDlg : public CDialogEx
{
private:
<<<<<<< HEAD
	int m_value = 0; //�������尪
	char m_step = 0; //Ȯ�κ���
	char m_operater_flag = 0; //��ȣ
	int m_count=0;
	std::vector<CString> a;
	CString ex;
	int count = 1;

=======
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
>>>>>>> 188d3ea5559d6914439cba6aa7bb8c4a2c44f5ad
public:
	void M_Operate(double m_vaule_two);

	CTestCalcDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

	

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTCALC_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);

<<<<<<< HEAD
// �����Դϴ�.
=======
	// �����Դϴ�.
>>>>>>> 188d3ea5559d6914439cba6aa7bb8c4a2c44f5ad
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
<<<<<<< HEAD
	
	void OnBnClickedPlus();
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnBnClickedMinus();
};
=======

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedMultiply();
	afx_msg void OnBnClickedDivision();
}
>>>>>>> 188d3ea5559d6914439cba6aa7bb8c4a2c44f5ad
