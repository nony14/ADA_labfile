#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long arr[n+3];
	long long pref[n+3];
	long long ans=0;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	if(arr[0]&1)
		pref[0]=-1;
	else
		pref[0]=1;
	map<long long,long long> mp;
	mp[pref[0]]=1;
	int x=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]&1)
			pref[i]=pref[i-1]-1;
		else
			pref[i]=pref[i-1]+1;
		if(pref[i]==0)
			x++;
		mp[pref[i]]++;
	}
	for (map<long long,long long>::iterator it=mp.begin(); it!=mp.end(); ++it)
	{
		long long r=it->second;
		long long k=r*(r-1);
		k=k/2;
		ans+=k;
	}
	cout<<"\n";
	for(map<long long,long long>::iterator it=mp.begin();it!=mp.end(); ++it)
	{
		cout<<(*it).first<<" "<<(*it).second<<"\n";
	}
	for(int i=0;i<n;++i)
		cout<<pref[i]<<" ";
		cout<<"\n";
	cout<<ans+x;
}
