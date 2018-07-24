#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
#define M 1000000007
void scanx(ll &x)
{
	bool neg=false;
	register ll c;
	x =0;
	c=getchar();
	if(c=='-')
	{
		neg = true;
		c=getchar();
	}
	for(;(c>47 && c<58);c=getchar())
		x = (x<<1) + (x<<3) +c -48;
	if(neg)
		x *=-1;
}
int main()
{
	ll N,T;
	scanx(T);
	while(T--)
	{
		ll *arr;
		scanx(N);
		arr= new ll[N];
		for(ll i=0;i<N;++i)
		{
			scanx(arr[i]);
		}
		ll sum=0;
		std::sort(arr,arr+N,std::greater<ll>());
		for(ll i=1;i<N;++i)
		{
			arr[i]=(i)*arr[i]+arr[i];
		}
		for(ll i=0;i<N;++i)
		{
			sum+=(arr[i]%M);
		}
		printf("%lld",sum);
	}
	
}
