#include<bits/stdc++.h>
#include<math.h>
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
int F(float var)
{
    register int x=var*10;
    register int y=x%10;
    if(y>=5)
        return (x+y)/10;
    else
        return (x-y)/10;
}
int main()
{
	register int T,N,*arr,sum;
	fastscan(T);
	while(T--)
	{
		sum=0;
		fastscan(N);
		arr=new int[N];
		for(register int i=0;i<N;++i)
		{
			fastscan(arr[i]);
		}
		for(register int i=0;i<N;++i)
		{
			for(register int j=0;j<N;++j)
			{
				sum+=F(float(arr[i])/float(arr[j]));
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
