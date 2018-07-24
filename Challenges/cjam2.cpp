#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
ll *arr;
void troubleSort(ll N)
{
	bool done=1;
	while(done)
	{
		done=0;
		for(ll i=0;i<=N-2;++i)
		{
			if(arr[i]>arr[i+2])
			{
				swap(arr[i],arr[i+2]);
				done=1;
			}
		}
	}
}
void _main(int TEST)
{
	ll N,*aux;
	bool flag=true;
	cin>>N;
	arr=new ll[N];
	aux=new ll[N];
	for(int i=0;i<N;++i)
	{
		cin>>arr[i];
		aux[i]=arr[i];
	}
	sort(aux,aux+N);
	troubleSort(N-1);
	for(ll i=0;i<N;++i)
	{
		if(arr[i]!=aux[i])
		{
			cout<<i<<"\n";
			flag=false;
			break;
		}
	}
	if(flag)
		cout<<"OK\n";
		delete(aux);
}
int main()
{
	int T,i=1;
	cin>>T;
	while(T--)
	{
		cout<<"Case #"<<i<<": ";
		_main(T);
		i++;
		delete(arr);
	}
	return 0;
}
