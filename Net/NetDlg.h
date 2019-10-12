
// NetDlg.h: 头文件
//

#pragma once


// CNetDlg 对话框
class CNetDlg : public CDialogEx
{
// 构造
public:
	CNetDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NET_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
	CEdit ServerIP;
	CEdit ServerPort;
	CEdit Cmd;
	CEdit Result;
	CAsyncSocket mysocket;
	CString sIP, sPORT, sCMD;
	CString sResult;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
