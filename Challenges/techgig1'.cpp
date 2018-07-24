#include<bits/stdc++.h>
#include<limits>
using namespace std;
bool arr[1005]={0};
void deleteNode(int pos)
{
	if(arr[pos]==0)
		return;
	else
		arr[pos]=0;
	deleteNode(2*pos);
	deleteNode((2*pos)+1);
}
int countLeaf(int N)
{
	int leaf=0;
	for(int i=2;i<=N;++i)
	{
		if(arr[i])
		{
			if(!arr[2*i]&&!arr[(2*i)+1])
				leaf++;
		}
	}
	return leaf;
}
int main()
{
	int N,x,dump;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>dump;
		arr[i]=1;
	}
	cin>>x;
	deleteNode(x+1);
	cout<<countLeaf(N);
}
