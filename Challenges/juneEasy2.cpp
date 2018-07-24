#include<bits/stdc++.h>
#define ll long long
using namespace std;
void _main(int TEST)
{
	ll N,*arr;
	cin>>N;
	arr=new ll[N];
	for(ll i=0;i<N;i++)
		cin>>arr[i];
	ll minSum;
	for(ll i=0;i<N-1;i++)
	{
		if(i==0)
			minSum=arr[i]+arr[i+1];
		else if(minSum>(arr[i]+arr[i+1]))
			minSum=arr[i]+arr[i+1];
	}
	delete(arr);
	cout<<minSum<<"\n";
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		_main(T);
	}
	return 0;
}
