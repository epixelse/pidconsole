// pidconsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
// find process id of any application, used Paint for demonstration purposes, replacee with any program to to find it's process id.

#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <TlHelp32.h>

using namespace std;

DWORD ProcessID;

int main() {

	HWND hwnd = FindWindowA(NULL, ("Untitled - Paint"));
	GetWindowThreadProcessId(hwnd, &ProcessID);

	if (hwnd) {

		cout << ProcessID << endl;
		cout << "you found me" << endl;
	}
	else {
		cout << "Windows cannot be found" << endl;
	}

	system("pause");

}
