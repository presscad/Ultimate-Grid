// Calendar DemoDoc.h : interface of the CCalendarDemoDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CALENDARDEMODOC_H__EF15EDD4_BDC4_45DE_B3EC_FB678207A806__INCLUDED_)
#define AFX_CALENDARDEMODOC_H__EF15EDD4_BDC4_45DE_B3EC_FB678207A806__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCalendarDemoDoc : public CDocument
{
protected: // create from serialization only
	CCalendarDemoDoc();
	DECLARE_DYNCREATE(CCalendarDemoDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalendarDemoDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCalendarDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCalendarDemoDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALENDARDEMODOC_H__EF15EDD4_BDC4_45DE_B3EC_FB678207A806__INCLUDED_)
