#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	char *a;
	cin>>N;
	a=new char[N];
	cin>>a;
	int count=0;
	for(int i=0; i<N;i++)
	{
		if(a[i]=='0')
		{
			count++;
		}
	}
	cout<<count;
}
	
	
