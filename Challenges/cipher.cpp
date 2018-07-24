#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str;
	int N;
	getline(cin,str);
	cin>>N;
	int l=str.length();
	for(int i=0;i<l;++i)
	{
		
		if(str[i]>48&&str[i]<58)
		{
			int z=N%10;
			if(str[i]+z>57)
			{
				int x=(str[i]+z)-57;
				str[i]=47+x;
			}
			else
				str[i]+=z;
		}
		else if(str[i]>64&&str[i]<91)
		{
			int z=N%26;
			if(str[i]+z>90)
			{
				int x=(str[i]+z)-90;
				str[i]=64+x;
			}
			else
				str[i]+=z;
		}
		else if(str[i]>96&&str[i]<123)
		{
			int z=N%26;
			if(str[i]+z>122)
			{
				int x=(str[i]+z)-122;
				str[i]=96+x;
			}
			else
				str[i]+=z;
		}
	}
	cout<<str;
	return 0;
}
