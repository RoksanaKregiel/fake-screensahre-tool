
// menu.cpp //

#include <iostream> 
#include <vector> 
#include <string> 
#include <fstream> 
#include <windows.h> 
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <stdlib.h>
#include<ctime>	
#include "menu.h"
#include <time.h>

void menu() {
	using namespace std;
	system("CLS"); 
	struct tm newtime;
	__time32_t aclock;
	HWND hwndCmd = GetConsoleWindow();
	if (hwndCmd != NULL) { MoveWindow(hwndCmd, 700, 700,700, 750, TRUE); }
	SetWindowLong(hwndCmd, GWL_STYLE, GetWindowLong(hwndCmd, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);
	::SetWindowPos(hwndCmd, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
	SetConsoleTitleA("Drippy ScreenShare Tool | Scanned With Success");
	system("Color 1");
	std::cout << "            [Drippy SS Tool]\n\n";
	std::cout << "Scan Info:\n\n";
	std::cout << "--------------------------------------------------------------------------------\n\n";
	std::cout << "Strings: Nothing Found (clear)!\n";
	std::cout << "--------------------------------------------------------------------------------\n\n";
	std::cout << "Last Launched Apps: Google Chrome, Discord, AnyDesk, TeamSpeak3, Avast, Steam, Feather Launcher, Lunar\n";
	std::cout << "--------------------------------------------------------------------------------\n\n";
	std::cout << "Last Time Clearing Recycle Bin: 0.7.02.2022\n";
	std::cout << "--------------------------------------------------------------------------------\n\n";
	std::cout << "Couldn't find fake anydesk.exe in %appdata%\n\n";
	std::cout << "--------------------------------------------------------------------------------\n\n";
	char buffer[32];
	errno_t errNum;
	_time32(&aclock);
	_localtime32_s(&newtime, &aclock);
	errNum = asctime_s(buffer, 32, &newtime);
    printf("Scan Date:: %s", buffer);
	std::cout << "--------------------------------------------------------------------------------\n\n";
	std::cout << "Scan Time: 20sec";
	std::cout << "[LOG]~$ Scanned With Drippy SS Tool";

}
