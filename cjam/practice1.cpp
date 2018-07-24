#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;
string s;
ll N;
ll search(ll low,ll high)
{
	ll x=(low+high)/2;
	cout<<x<<"\n";
	cin>>s;
	if(N>0)
	{
		N--;
		if(s=="TOO_BIG")
			return search(low,x);
		else if(s=="TOO_SMALL")
			return search(x+1,high);
		else if(s=="CORRECT")
			return 0;
		else if(s=="WRONG_ANSWER")
			exit(0);
	}
	else 
		return -1;
}
void _main()
{
	ll a,b;
	cin>>a>>b;
	cin>>N;
	search(a,b);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		_main();
	}
	return 0;
}
