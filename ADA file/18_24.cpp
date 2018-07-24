#include<bits/stdc++.h>
#define ll long long
int main()
{
	ll N,M,*s,*j,maxJ;
	scanf("%lld %lld",&N,&M);
	s=new ll[N]; j=new ll[N];
	for(ll i=0;i<N;++i)
	{
		scanf("%lld %lld",&s[i],&j[i]);
		if(maxJ)
			maxJ=j[i];
		else
		{
			if(maxJ<j[i])
				maxJ=j[i];
		}
	}
	ll job[maxJ][M]={0};
	ll taxi[N+1]; 
	for(ll i=0,q=0;i<N;i++)
	{
		while(q<M)
		{
			if(job[s[i]-1][q]==0)
			{
				std::cout<<1;
			    ll LL=j[i];
			    std::cout<<s[i]<<" "<<j[i]<<" "<<job[s[i]-1][q]<<"\n";
				for(ll k=s[i]-1;k<LL;++k)
				{
					++job[k][q];
					std::cout<<2;
				}
				taxi[i]=q+1;
				break;
			}
			else
			{
				++q;
				std::cout<<3;
			}				
		}
		std::cout<<q<<"\n";
	}
	for(ll i=1;i<=N;++i)
		printf("%lld ",taxi[i]);
		
	return 0;
}
