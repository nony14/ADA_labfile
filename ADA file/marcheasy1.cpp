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
	register int T,N,Q,x,y,c1=0,c2=0;
	char *arr;
	fastscan(T);
	while(T--)
	{
		fastscan(N);
		fastscan(Q);
		arr=new char[N];
		for(register int i=0;i<N+1;++i)
		{
			register char a;
			a=getchar_unlocked();
			if(a==13)
				break;
			arr[i]=a;
		}
		while(Q--)
		{
		    c1=0;
		    c2=0;
			fastscan(x);
			fastscan(y);
			for(register int i=x-1;i!=y-1;i==N-1?i=0:++i)
			{
			    if(i==N-1)
			    {
			        if((arr[N-1]=='R'&&arr[0]=='G')||(arr[N-1]=='G'&&arr[0]=='R'))
			            c1++;
			    }
				else if((arr[i]=='R'&&arr[i+1]=='G')||(arr[i]=='G'&&arr[i+1]=='R'))
					c1++;
			}
			for(register int i=x-1;i!=y-1;i==0?i=N-1:--i)
			{
			    if(i==0)
			    {
			        if((arr[0]=='R'&&arr[N-1]=='G')||(arr[0]=='G'&&arr[N-1]=='R'))
			            c2++;
			    }
				else if((arr[i]=='R'&&arr[i-1]=='G')||(arr[i]=='G'&&arr[i-1]=='R'))
					c2++;
			}
			c1<c2?printf("%d\n",c1):printf("%d\n",c2);
		}
		//delete(arr);
	}
	return 0;
}
Language: C++
