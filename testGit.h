// testGit.h : main header file for the TESTGIT application
//

#if !defined(AFX_TESTGIT_H__F6932F79_1719_4103_A7F2_5F48EB27D073__INCLUDED_)
#define AFX_TESTGIT_H__F6932F79_1719_4103_A7F2_5F48EB27D073__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTestGitApp:
// See testGit.cpp for the implementation of this class
//

class CTestGitApp : public CWinApp
{
public:
	CTestGitApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestGitApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTestGitApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTGIT_H__F6932F79_1719_4103_A7F2_5F48EB27D073__INCLUDED_)
