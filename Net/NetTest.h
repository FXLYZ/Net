#pragma once


// NetTest 对话框

class NetTest : public CDialogEx
{
	DECLARE_DYNAMIC(NetTest)

public:
	NetTest(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~NetTest();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NET_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
