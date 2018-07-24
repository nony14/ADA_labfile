#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
	{
        long int pos=0, c=0, sum=0, n, i;
        cin>>n;
        int arr[n];
        for(i=0; i<n; ++i) 
		{
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]>=0) 
			{
                pos+=arr[i];
                ++c;
            }
        }
        long int rem=n-c;
        sort(arr,arr+n);
        long int x=(sum-pos);
        long int max=pos*c+x;
        long int temp;
        for(i=n-1; i>=0; --i) 
		{
            if(arr[i]<0) 
			{
                temp=(pos+arr[i])*(c+1)+(x-arr[i]);
                if(temp>max)
				{
                    max=temp;
                    ++c;
                    --rem;
                    x-=arr[i];
                    pos+=arr[i];
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
