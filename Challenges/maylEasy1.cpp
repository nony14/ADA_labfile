#include<bits/stdc++.h>
#define ll long long
using namespace std;
void _main(int TEST)
{
	ll H,X,Z;
	cin>>H>>X>>Z;
	double Vf=sqrt((2*32)*H);
	double t=Vf/32;
	double tRahul=X/Z;
//	cout<<t<<' '<<tRahul<<"\n";
	if(t<tRahul)
	{
		cout<<"Raj\n";
	}
	else
		cout<<"Rahul\n";
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		_main(T);
	}
}
