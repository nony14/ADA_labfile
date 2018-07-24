#include<bits/stdc++.h>
#include<windows.h>
#include<constream>
using namespace std;
char c;
int main()
{
	while(1)
	{
		c=getch();
		if(c==13)
			break;
		else if(c<='A'&&c>='Z'&&c<='a'&&c>='z')
			cout<<c;
		else if(c<='0'&&c>='9')
		{
			int a=c-48;
			cout<<a;
		}
		else if(c=='@')
		{
			keybd_event( VK_CAPITAL, 0, KEYEVENTF_EXTENDEDKEY | 0, 0 );
			keybd_event( VK_CAPITAL, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
		}
		else if(c=='#')
		{
			cout<<"\n";
		}
		else if(c=='/')
		{
			cout<<"\b";
		}
	}
}
