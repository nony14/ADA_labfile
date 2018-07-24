#include <bits/stdc++.h>
using namespace std;
int a[1000005];
bool check(int N) 
{
	int total=0,mx=0;
	for(int i=0;i<N;i++) 
	{
		total+=a[i];
		mx=max(mx,a[i]);
	}
	return (2*mx<=total);
}
int main() 
{
	int T;
	scanf("%d",&T);
	for(int k=1;k<=T;k++) 
	{
		printf("Case #%d:",k);
		int N;
		scanf("%d", &N);
		for(int i=0;i<N;i++) 
		{
			scanf("%d",&a[i]);
		}
		while (1) 
		{
			start:;
			bool done=true;
			for(int i=0;i<N;i++) 
			{
				done&=(a[i]==0);
			}
			if(done) 
			{
				break;
			}
			for(int i=0;i<N;i++) 
			{
				if(a[i]>0) 
				{
					a[i]--;
					if(check(N)) 
					{
						printf(" %c",i+65);
						goto start;
					}
					a[i]++;
				}
			}
			for(int i=0;i<N;i++) 
			{
				if(a[i]>0) 
				{
					a[i]--;
					for(int j=i;j<N;j++) 
					{
						if(a[j]>0) 
						{
							a[j]--;
							if(check(N)) 
							{
								printf(" %c%c",i+65,j+65);
								goto start;
							}
							a[j]++;
						}
					}
					a[i]++;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
