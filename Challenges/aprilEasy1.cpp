#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll countBits(ll n)
{
    ll count=0;
    while(n)
    {
      n&=(n-1);
      count++;
    }
    return count;
}
void _main(int TEST)
{
	ll X;
	scanf("%lld",&X);
	ll bits=countBits(X);
	ll oh=0,count=0;
	for(ll i=2;i<=X;++i)
	{
		oh=countBits(X/i);
		if(oh<bits)
			count++;
	}
	printf("%lld\n",count);
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		_main(T);
	}
	return 0;
}
