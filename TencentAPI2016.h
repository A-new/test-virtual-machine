#pragma once

#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

//�������system������ִ�н��
extern BOOL system_hide(string CommandLine, string &exe_result);

//��ȡ��ǰ������һ��������MAC��ַ
extern void get_3part_mac(string &mac);

//ͨ��WMI��ȡ������Ϣ
extern BOOL ManageWMIInfo(string &result, string table, wstring wcol);

//ʶ��Virtual PC�쳣
extern DWORD __forceinline IslnsideVPC_exceptionFilter(LPEXCEPTION_POINTERS ep);