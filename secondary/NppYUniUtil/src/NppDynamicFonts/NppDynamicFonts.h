﻿/*
The zlib/libpng License 
Copyright (c) 2012 freesftys<freesftys@gmail.com>

This software is provided 'as-is', without any express or implied warranty. 
In no event will the authors be held liable for any damages arising from 
the use of this software.

Permission is granted to anyone to use this software for any purpose, including 
commercial applications, and to alter it and redistribute it freely, subject to 
the following restrictions:

    1. The origin of this software must not be misrepresented; you must not 
	   claim that you wrote the original software. If you use this software in 
	   a product, an acknowledgment in the product documentation would be 
	   appreciated but is not required.
	
    2. Altered source versions must be plainly marked as such, and must not be 
       misrepresented as being the original software.
	
    3. This notice may not be removed or altered from any source distribution.

原文
http://opensource.org/licenses/Zlib

日本語訳
http://sourceforge.jp/projects/opensource/wiki/licenses%2Fzlib_libpng_license
*/

#ifndef NPPDYNAMICFONTS_H
#define NPPDYNAMICFONTS_H

#include "..\dllmain.h"

//void MyPluginTemplate-SetInfo(NppData *notpadPlusData);
void onDynamicFontsBeNotified(SCNotification *notifyCode);

int LoadFonts(int add=1);
void DynamicFontsSettingSave();
void DynamicFontsSettingLoad();
void SelectFont();
void SetStyleFontData();
BOOL CALLBACK DynamicFontsOptionDlgProc(HWND hWndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);
bool InitDlg(HWND hWndDlg);
bool OkDlg(HWND hWndDlg);
int CALLBACK EnumeFontsExProc(ENUMLOGFONTEX *lpelfe, NEWTEXTMETRICEX *lpntme, DWORD fontType, LPARAM lParam);

#endif