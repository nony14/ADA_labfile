#include<bits/stdc++.h>
#include<math.h>
#include<string>
#include<algorithm>
#define ll long long
int main()
{
	std::string str;
	ll T;
	scanf("%lld",&T);
	while(T--)
	{
		std::cin>>str;
		ll X=str.length();
		ll hash[X+5]={0};
		for(ll i=0;i<X;++i)
		{
			for(ll j=0;j+i<X&&i-j>=0;++j)
			{
				if(str[i+j]!=str[i-j])
					break;
				else
				{
					if(j==0)
					{
						hash[1]++;
					}
					else
						hash[(2*j)+1]++;
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
					hash[(2*j)+2]++;
				}
			}
		}
		ll strength=0;
		for(ll i=1;i<=X;++i)
		{
			if(hash[i]!=0)
			{
				strength+=(hash[i]*(pow(i,2)));
			}
		}
		printf("%lld\n",strength);
	}
	return 0;
}
