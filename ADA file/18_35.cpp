#include<bits/stdc++.h>
#include<string>
#define ll long long
int main()
{
	std::string str;
	std::cin>>str;
	ll X=str.length();
	ll count=0;
	for(ll i=0;i<X;++i)
	{
		for(ll j=0;j+i<X&&i-j>=0;++j)
		{
			if(str[i+j]!=str[i-j])
				break;
			else
			{
				count++;
			}
		}
	}
	for(ll i=0;i<X;++i)
	{
		for(ll j=0;j+i+1<X&&i-j>=0;++j)
		{
			if(str[i+j+1]!=str[i-j])
				break;
			else
			{
				count++;
			}
		}
	}
	printf("%lld\n",count);
	return 0;
}
