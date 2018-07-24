#include<bits/stdc++.h>
#include<windows.h>
#include<constream>
#include<conio2.h>
using namespace conio;
using namespace std;
int main()
{
	cout<<"\na\n";
	CONSOLE_SCREEN_BUFFER_INFO coninfo;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hConsole, &coninfo);
	coninfo.dwCursorPosition.Y -= 2;    // move up one line
//	coninfo.dwCursorPosition.X += 5;    // move to the right the length of the word
	SetConsoleCursorPosition(hConsole, coninfo.dwCursorPosition);
	keybd_event( VK_CAPITAL, 0, KEYEVENTF_EXTENDEDKEY | 0, 0 );
	keybd_event( VK_CAPITAL, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
	char a=getch();
    cout<<a;
    getch();
    return 0;
}
