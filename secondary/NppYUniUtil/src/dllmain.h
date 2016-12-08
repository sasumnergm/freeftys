//this file is part of notepad++
//Copyright (C)2003 Don HO ( donho@altern.org )
//
//This program is free software; you can redistribute it and/or
//modify it under the terms of the GNU General Public License
//as published by the Free Software Foundation; either
//version 2 of the License, or (at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program; if not, write to the Free Software
//Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

#ifndef DLLMAIN_H
#define DLLMAIN_H

#include <windows.h>
#include "PluginInterface.h"
#include "menuCmdID.h"

#include "MyDebug.h"
#include "Ini.h"
#include "resource.h"

enum {	
		//SEPARATE1, 
		//YUtil
		PREVFOLD, PREVFOLDALT, NEXTFOLD, NEXTFOLDALT, SEPARATE2, INSERTTODAY, SEPARATE3,
		////JpSelectAreaCustomize
		//PLUG_LEFT_C, PLUG_LEFT_C_S, PLUG_RIGHT_C, PLUG_RIGHT_C_S, SEPARATE4,
		////HTOZ, HKATATOZ, HALPHATOZ, HUPALPHATOZ, HLOALPHATOZ, HNUMTOZ, HSYMBOLTOZ, SEPARATE5,
		////ZTOH, ZKATATOH, ZALPHATOH, ZUPALPHATOH, ZLOALPHATOH, ZNUMTOH, ZSYMBOLTOH, SEPARATE6,
		////HITOKA, KATOHI, SEPARATE7,
		//HorizonRuler
		RULERTOGGLE, RULERVISIBLE, RULEROPTION, SEPARATE8,
		//JpDetectEncoding
		OPEN_SJIS, OPEN_EUCJP, EUC2SJIS, SJIS2EUC, DETECTENCODEOPTION, SEPARATE9,
		//DynamicFonts
		SELECTFONT, SEPARATE10,
		ABOUT,
		
		MENUCOUNT
	};	

void pluginInit(HANDLE hModule);
void pluginTerminate();
void commandMenuInit();
void commandMenuCleanUp();
void setShortcutKey(ShortcutKey *sk, UCHAR key, bool isCtrl, bool isAlt, bool isShift);
bool setCommand(size_t index, TCHAR *cmdName, PFUNCPLUGINCMD pFunc, ShortcutKey *sk = NULL, bool check0nInit = false);
void aboutDlg();

#endif