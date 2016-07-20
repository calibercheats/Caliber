
#include "ProcMem.h"
#include <iostream>
#include <windows.h>
#include <TlHelp32.h> // Memory reading

using namespace std;

ProcMem Caliber; // Shortcut

int main()
{
	Caliber.Process("csgo.exe"); // Choosing the process
	DWORD ClientDLL = Caliber.Module("client.dll");
	// return 0;
}

#pragma once
