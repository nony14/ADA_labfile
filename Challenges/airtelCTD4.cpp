#include<bits/stdc++.h>
#define ll long long
void fastscan(int &x)
{
	bool neg=false;
	register int c;
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
	ll N,K,tree[100005]={0};
	fastscan(N);
	fastscan(k);
	bool flag=false;
	for(ll i=0;i<k;++i)
	{
		fastscan(tree[i]);
		if(!tree[i]%2)
			flag=true;
	}
	if(!flag)
		printf("0");
	else
	{
		
	}
	
}
