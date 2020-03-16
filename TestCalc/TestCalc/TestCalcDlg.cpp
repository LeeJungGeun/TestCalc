
// TestCalcDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "TestCalc.h"
#include "TestCalcDlg.h"
#include "afxdialogex.h"
#include <vector>
#include <array>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���� ���α׷� ������ ���Ǵ� CAboutDlg ��ȭ �����Դϴ�.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

// �����Դϴ�.
protected:
	DECLARE_MESSAGE_MAP()
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CTestCalcDlg ��ȭ ����



CTestCalcDlg::CTestCalcDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TESTCALC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTestCalcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTestCalcDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
<<<<<<< HEAD
	ON_BN_CLICKED(IDC_BUTTON3, &CTestCalcDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CTestCalcDlg::OnBnClickedButton4)
	ON_BN_CLICKED(Multiply, &CTestCalcDlg::OnBnClickedMultiply)
	ON_BN_CLICKED(Division, &CTestCalcDlg::OnBnClickedDivision)
=======
	ON_BN_CLICKED(Minus, &CTestCalcDlg::OnBnClickedMinus)
>>>>>>> PLMA
END_MESSAGE_MAP()


// CTestCalcDlg �޽��� ó����

BOOL CTestCalcDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// �ý��� �޴��� "����..." �޴� �׸��� �߰��մϴ�.

	// IDM_ABOUTBOX�� �ý��� ��� ������ �־�� �մϴ�.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// �� ��ȭ ������ �������� �����մϴ�.  ���� ���α׷��� �� â�� ��ȭ ���ڰ� �ƴ� ��쿡��
	//  �����ӿ�ũ�� �� �۾��� �ڵ����� �����մϴ�.
	SetIcon(m_hIcon, TRUE);			// ū �������� �����մϴ�.
	SetIcon(m_hIcon, FALSE);		// ���� �������� �����մϴ�.

	// TODO: ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
}

void CTestCalcDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// ��ȭ ���ڿ� �ּ�ȭ ���߸� �߰��� ��� �������� �׸�����
//  �Ʒ� �ڵ尡 �ʿ��մϴ�.  ����/�� ���� ����ϴ� MFC ���� ���α׷��� ��쿡��
//  �����ӿ�ũ���� �� �۾��� �ڵ����� �����մϴ�.

void CTestCalcDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Ŭ���̾�Ʈ �簢������ �������� ����� ����ϴ�.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �������� �׸��ϴ�.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ����ڰ� �ּ�ȭ�� â�� ���� ���ȿ� Ŀ���� ǥ�õǵ��� �ý��ۿ���
//  �� �Լ��� ȣ���մϴ�.
HCURSOR CTestCalcDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

BOOL CTestCalcDlg::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	if (B_Number0 <= wParam&&wParam <= B_Number9) //�ַ��Ž���� �� Resource.h �� ���ڹ�ư ��ũ�� Ȯ��
	{
		CString str, number_str, str2; //���ڿ�
		number_str.Format(L"%d", wParam - B_Number0); //����'0'�� �������� ��´�

		if (m_step == 0) //�����ڰ� ������ �ʾ������
		{
			GetDlgItemText(Print_EDIT, str2); //����Ʈ�� �ԷµȰ��� str������ ����
		}
		else if (m_step == 1)
		{
			GetDlgItemText(Print_EDIT, str);
			m_step = 0;
			m_value = _wtof(str);
		}
		SetDlgItemText(Print_EDIT, str2 + number_str); //str�� ����� ���� ���ڰ��� ���� ���
	}

	return CDialogEx::OnCommand(wParam, lParam);
}

<<<<<<< HEAD



void CTestCalcDlg::OnBnClickedMultiply()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
=======
void CTestCalcDlg::OnBnClickedPlus()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.

>>>>>>> PLMA
	CString str, str2, omg;

	double m_value_two = GetDlgItemInt(Print_EDIT);
	GetDlgItemText(Print_EDIT, omg);
	m_value_two = _wtof(omg);

	m_count++;

	if (m_count == 1) {
		m_value = m_value_two;
	}
	else
	{
		M_Operate(m_value_two);
	}
<<<<<<< HEAD
	m_operater_flag = 2;
=======
	m_operater_flag = 0;
>>>>>>> PLMA
	m_step = 1;

	GetDlgItemText(Print_EDIT, str2);
	GetDlgItemText(Print_Edit2, str);
<<<<<<< HEAD
	SetDlgItemText(Print_Edit2, str + str2 + '*');
=======
	SetDlgItemText(Print_Edit2, str + str2 + '+');
>>>>>>> PLMA

	omg.Format(L"%f", m_value);
	omg.TrimRight(L"0");
	omg.TrimRight(L".");
	SetDlgItemText(Print_EDIT, omg);
<<<<<<< HEAD
	ex.Format(L"%g", m_value_two);
	a.push_back(ex);
	count++;
	ex = "*";
	a.push_back(ex);
	count++;
	muldicount++;
}


void CTestCalcDlg::OnBnClickedDivision()
=======
}



void CTestCalcDlg::OnBnClickedMinus()
>>>>>>> PLMA
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CString str, str2, omg;

	double m_value_two = GetDlgItemInt(Print_EDIT);
	GetDlgItemText(Print_EDIT, omg);
	m_value_two = _wtof(omg);

	m_count++;

	if (m_count == 1) {
		m_value = m_value_two;
	}
	else
	{
		M_Operate(m_value_two);
	}
<<<<<<< HEAD
	m_operater_flag = 3;
=======
	m_operater_flag = 1;
>>>>>>> PLMA
	m_step = 1;

	GetDlgItemText(Print_EDIT, str2);
	GetDlgItemText(Print_Edit2, str);
<<<<<<< HEAD
	SetDlgItemText(Print_Edit2, str + str2 + '/');
=======
	SetDlgItemText(Print_Edit2, str + str2 + '-');
>>>>>>> PLMA

	omg.Format(L"%f", m_value);
	omg.TrimRight(L"0");
	omg.TrimRight(L".");
<<<<<<< HEAD
	SetDlgItemText(Print_Edit, omg);
	ex.Format(L"%g", m_value_two);
	a.push_back(ex);
	count++;
	ex = "/";
	a.push_back(ex);
	count++;
	muldicount++;
=======
	SetDlgItemText(Print_EDIT, omg);
	ex.Format(L"%g", m_value_two);
	a.push_back(ex);
	count++;
	ex = "-";
	a.push_back(ex);
	count++;
>>>>>>> PLMA
}
