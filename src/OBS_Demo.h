
// OBS_Demo.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// COBS_DemoApp: 
// �йش����ʵ�֣������ OBS_Demo.cpp
//

class COBS_DemoApp : public CWinApp
{
public:
	COBS_DemoApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern COBS_DemoApp theApp;