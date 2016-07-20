// CaliberMPGHUpdate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "ProcMem.h"
#include <iostream>
#include <windows.h>
#include <TlHelp32.h> // Memory reading

using namespace std;

ProcMem Mem; // Shortcut

int main()
{
	cout << "Searching for csgo.exe" << endl;

	Mem.Process("csgo.exe"); // Choosing the process
	DWORD ClientDLL = Mem.Module("client.dll");
   // return 0;
}

#pragma once
