#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;
void _main(int TEST)
{
	ll D,p=1,swaps=0,destruction=0;
	bool flag=false;
	string str;
	cin>>D;
	cin.ignore();
	getline(cin,str);
	ll x=str.length();
	for(ll i=0;i<x;++i)
	{
		if(str[i]=='C')
		{
			p*=2;
		}
		else if(str[i]=='S')
			destruction+=p;
	}
	for(int i=x-1;i>0;i--)
	{
		if(destruction<=D)
		{
			flag=true;
			break;
		}
		if(str[i]=='S'&& str[i-1]=='C')
		{
			swap(str[i],str[i-1]);
			swaps++;i=x;
			p=1;destruction=0;
			for(ll j=0;j<x;++j)
			{
				if(str[j]=='C')
				{
					p*=2;
				}
				else if(str[j]=='S')
					destruction+=p;
			}
		}
	}
	if(flag)
		cout<<swaps<<"\n";
	else
		cout<<"IMPOSSIBLE\n";
}
int main()
{
	int T,i=1;
	cin>>T;
	while(T--)
	{
		printf("Case #%d: ",i);
		_main(T);
		i++;
	}
	return 0;
}
