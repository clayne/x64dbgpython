#pragma once
#include <Windows.h>
#include "pluginmain.h"
#include "CBreakpoints.h"

INT_PTR CALLBACK BreakpointDlgProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);
INT_PTR CALLBACK ScriptEditorProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);