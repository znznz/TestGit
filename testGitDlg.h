// testGitDlg.h : header file
//

#if !defined(AFX_TESTGITDLG_H__460C8294_4FDC_4DAF_BA91_59A5AE4C2746__INCLUDED_)
#define AFX_TESTGITDLG_H__460C8294_4FDC_4DAF_BA91_59A5AE4C2746__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTestGitDlg dialog

class CTestGitDlg : public CDialog
{
// Construction
public:
	CTestGitDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTestGitDlg)
	enum { IDD = IDD_TESTGIT_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestGitDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTestGitDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTGITDLG_H__460C8294_4FDC_4DAF_BA91_59A5AE4C2746__INCLUDED_)
