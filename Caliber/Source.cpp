
#include "ProcMem.h"
#include <iostream>
#include <windows.h>
#include <TlHelp32.h> // Memory reading

using namespace std;

ProcMem Caliber; // Shortcut

void caliber_check() {
	cout << "Checking for csgo.exe..." << endl;
	Caliber.Process("csgo.exe"); // Choosing the process
	DWORD ClientDLL = Caliber.Module("client.dll");
}

int main()
{
	SetConsoleTitle("Caliber for CounterStrike : Global Offensive");
	caliber_check();
	// return 0;
}

#pragma once
