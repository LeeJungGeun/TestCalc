
// TestCalcDlg.cpp : 구현 파일
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


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
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


// CTestCalcDlg 대화 상자



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


// CTestCalcDlg 메시지 처리기

BOOL CTestCalcDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
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

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
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

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CTestCalcDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CTestCalcDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

BOOL CTestCalcDlg::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	if (B_Number0 <= wParam&&wParam <= B_Number9) //솔루션탐색기 → Resource.h → 숫자버튼 매크로 확인
	{
		CString str, number_str, str2; //문자열
		number_str.Format(L"%d", wParam - B_Number0); //숫자'0'을 기준으로 잡는다

		if (m_step == 0) //연산자가 눌리지 않았을경우
		{
			GetDlgItemText(Print_EDIT, str2); //에디트에 입력된값을 str변수에 저장
		}
		else if (m_step == 1)
		{
			GetDlgItemText(Print_EDIT, str);
			m_step = 0;
			m_value = _wtof(str);
		}
		SetDlgItemText(Print_EDIT, str2 + number_str); //str에 저장된 값에 숫자값을 더해 출력
	}

	return CDialogEx::OnCommand(wParam, lParam);
}

<<<<<<< HEAD



void CTestCalcDlg::OnBnClickedMultiply()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
=======
void CTestCalcDlg::OnBnClickedPlus()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

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
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
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
