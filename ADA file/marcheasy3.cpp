#include<bits/stdc++.h>
void fastscan(int &x)
{
	bool neg=false;
	register int c;
	x =0;
	c=getchar_unlocked();
	if(c=='-')
	{
		neg = true;
		c=getchar_unlocked();
	}
	for(;(c>47 && c<58);c=getchar_unlocked())
		x = (x<<1) + (x<<3) +c -48;
	if(neg)
		x *=-1;
}
int main()
{
	register int N,P,D,M,*arr,max=0;
	fastscan(N);
	fastscan(P);
	fastscan(D);
	fastscan(M);
	arr=new int[3][N];
	for(register int i=0;i<3;++i)
	{
		for(register int j=0;j<N;++j)
			fastscan(arr[i][j]);
	}
	for(register int i=0;i<3;++i)
	{
		for(register int j=0;j<N;++j)
			
	}
	
}
