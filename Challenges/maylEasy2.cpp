#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int N;
	ll *X,*Y;
	cin>>N;
	X=new ll[N]; Y=new ll[N];
	for(int i=0;i<N;++i)
		cin>>X[i]>>Y[i];
	sort(X,X+N,greater<int>());
	sort(Y,Y+N);
	ll min=0,happy=N;
	for(int i=0;i<N;++i,--happy)
	{
		min=X[i];
		if(X[i]<Y[i])
		{
			break;
		}
	}
	cout<<min<<" "<<happy;
}
