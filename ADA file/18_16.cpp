#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
class ruins
{
	char s[50];
	public:
		void getData();
		void explore();
};
void ruins::getData()
{
	cin>>s;
}
void ruins::explore()
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]=='?')
		{
			if(s[i-1]=='a'||s[i+1]=='a')
			{
				s[i]='b';
			}
			else
			s[i]='a';
		}
		i++;
	}
	cout<<s<<"\n";
}
int main()
{
	ruins R;
	R.getData();
	R.explore();
	return 0;
}
