#include<iostream>
#define ll long long
using namespace std;

class motuPatlu	
{	
	ll n, a[100005], p, q, r, count, i;
	public:
		motuPatlu() {
			p=0; q=0; r=0; count=0;
		}
		void getData();
		void iceCreamGame();
		void outData();
};
void motuPatlu::getData() 
{
	cin>>n;
	for(ll i=0; i<n; ++i)
		cin>>a[i];
}

void motuPatlu::iceCreamGame() 
{
	i=0;
	ll j=n-1;
	while(i<j) 
	{
		if(q>r) 
		{
			r+=(2*a[j]);
			count++;
			j--;
		}
		else if(r>q) 
		{
			q+=a[i];
			p++;
			i++;
		}
		else 
		{	
			r+=(2*a[j]);
			count++;
			j--;
			q+=a[i];
			p++;
			i++;
		}
		if(i==j && q<=r)
			p++;
		if(i==j && q>r)
			count++;
	}
}
void motuPatlu::outData() 
{
	cout<<p<<' '<<count<<'\n';
	if(p>count)
		cout<<"Motu\n";
	else if(count>p)
		cout<<"Patlu\n";
	else cout<<"Tie\n";
}
int main() 
{
    ll t;
    cin>>t;
    while(t--) 
	{
    	motuPatlu ob;
    	ob.getData();
    	ob.iceCreamGame();
    	ob.outData();
	}
    return 0;
}
