// NetTest.cpp: 实现文件
//

#include "pch.h"
#include "Net.h"
#include "NetTest.h"
#include "afxdialogex.h"


// NetTest 对话框

IMPLEMENT_DYNAMIC(NetTest, CDialogEx)

NetTest::NetTest(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_NET_DIALOG, pParent)
{

}

NetTest::~NetTest()
{
}

void NetTest::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(NetTest, CDialogEx)
END_MESSAGE_MAP()


// NetTest 消息处理程序
