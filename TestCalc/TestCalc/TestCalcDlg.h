
// TestCalcDlg.h : ��� ����
//

#pragma once


// CTestCalcDlg ��ȭ ����
class CTestCalcDlg : public CDialogEx
{
private:
	int m_value = 0; //�������尪
	char m_step = 0; //Ȯ�κ���
	char m_operater_flag = 0; //��ȣ
// �����Դϴ�.
public:
	CTestCalcDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTCALC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()


};
