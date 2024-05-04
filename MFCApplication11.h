
// MFCApplication11.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CMFCApplication11App:
// Сведения о реализации этого класса: MFCApplication11.cpp
//

class CMFCApplication11App : public CWinApp
{
public:
	CMFCApplication11App();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication11App theApp;
