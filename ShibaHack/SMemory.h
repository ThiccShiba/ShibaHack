#pragma once

#include <Windows.h>
#include <TlHelp32.h>

class SMemory 
{

public:
	template<typename SMem>
	SMem ReadMemory(HANDLE hProcess, DWORD address )
	{
		SMem temp;
		ReadProcessMemory(hProcess, (LPCVOID)address, &buffer, sizeof(SMem), NULL);
		return temp;
	}

	template<typename SMem>
	SMem WriteMemory(HANDLE hProcess, DWORD address, datatype value) 
	{
		
	}

	HANDLE GetHandleByProcessName(char* processName, DWORD dwAccessRights)
	{

	}

};