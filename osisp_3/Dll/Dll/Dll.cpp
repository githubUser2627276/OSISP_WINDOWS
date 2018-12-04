// Dll.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>

#define DLL_EXPORT __declspec(dllexport)

extern "C" void DLL_EXPORT _stdcall PrintStr(const char* str)
{
	printf("hello %s\n", str);
	_getch();
	return;
}
