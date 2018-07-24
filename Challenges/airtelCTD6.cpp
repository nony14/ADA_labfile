#include<bits/stdc++.h>
#define ll long long int
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
bool isPerfectSquare(ll n) {
    if (n < 0)
        return false;
    ll root(round(sqrt(n)));
    return n == root * root;
}

bool isPerfectCube(ll n) {
    ll root(round(cbrt(n)));
    return n == root * root * root;
}
int main()
{
	ll N,Q,*arr;
	scanx(N);
	scanx(Q);
	arr= new ll[N];
	for(ll i=0;i<N;++i)
	{
		scanx(arr[i]);
	}
	while(Q--)
	{
		ll l,r;
		bool *hash;
		hash = new bool[2]();
		scanx(l);
		l--;
		scanx(r);
		r--;
		ll p=1;
		for(ll i=l;i<=r;++i)
		{
			p*=arr[i];
		}
		hash[0]=isPerfectSquare(p);
		hash[1]=isPerfectCube(p);
		if(hash[0]&&hash[1])
			printf("Both\n");
		else if(!hash[0]&&hash[1])
			printf("Cube\n");
		else if(hash[0]&&!hash[1])
			printf("Square\n");
		else
			printf("None\n");
		delete(hash);
	}
	return 0;
}
