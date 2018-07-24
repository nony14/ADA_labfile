 #include<bits/stdc++.h>
#include<limits.h>
#include<algorithm>
int main()
{
	int T,N,*arr;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		arr=new int[N];
		for(int i=0;i<N;++i)
		{
			scanf("%d",&arr[i]);
		}
		int maxNC=INT_MIN;
		int maxC=maxNC;
		for(int i=0;i<N;++i)
		{
			for(int j=i;j<N;++j) 
			{ 
				int sum=0; 
				for(int k=i;k<=j;++k) 
				{ 
					sum+=arr[k]; 
				} 
				if(sum>maxC) 
				{ 
					maxC=sum; 
				} 
			}
			int temp[N];
			for(int i=0;i<N;++i)
				temp[i]=arr[i];
			if(maxC<0)
			{
			    std::sort(temp,temp+N);
				maxC=temp[N-1];
			}
		} 
		int max=maxNC,maxNeg=maxNC; 
		int sum=0; 
		bool flag=0; 
		for(int i=0;i<N;++i)
		{
			if(arr[i]>0)
			{
				sum+=arr[i];
				flag=1;
			}
		}
		if(!flag)
		{
			std::sort(arr,arr+N);
			sum=arr[N-1];
		}
		maxNC=sum;
		printf("%d %d\n",maxC,maxNC);
	}
}
