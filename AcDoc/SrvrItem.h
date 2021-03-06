// SrvrItem.h : interface of the CAcDocSrvrItem class
//

#if !defined(AFX_SRVRITEM_H__4713B550_062B_11D2_B890_C54647D3D618__INCLUDED_)
#define AFX_SRVRITEM_H__4713B550_062B_11D2_B890_C54647D3D618__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CAcDocSrvrItem : public CDocObjectServerItem
{
	DECLARE_DYNAMIC(CAcDocSrvrItem)

// Constructors
public:
	CAcDocSrvrItem(CAcDocDoc* pContainerDoc);

// Attributes
	CAcDocDoc* GetDocument() const
		{ return (CAcDocDoc*)CDocObjectServerItem::GetDocument(); }

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAcDocSrvrItem)
	public:
	virtual BOOL OnDraw(CDC* pDC, CSize& rSize);
	virtual BOOL OnGetExtent(DVASPECT dwDrawAspect, CSize& rSize);
	//}}AFX_VIRTUAL

// Implementation
public:
	~CAcDocSrvrItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SRVRITEM_H__4713B550_062B_11D2_B890_C54647D3D618__INCLUDED_)
