#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class florist   
{   
	int n, k;
    vector<int> a;
    public:
        void getData();
        int flower();
        void showData();
};
void florist::getData() 
{
    cin>>n>>k;
    int temp;
	for(int i=0; i<n; ++i)
	{
		cin>>temp;
		a.push_back(temp);
	}
}
int florist::flower() 
{
    sort(a.begin(), a.end());
	int cost=1;
	int ans=0;
	for(int i=n-1; i>=0; --i)
	{
		cost=(n-i-1)/k+1;
		ans+=cost*a[i];
	}
    return ans;
}
void florist::showData() 
{
    cout<<flower();
}
int main()
{
    florist ob;
    ob.getData();
    ob.showData();
	return 0;
}
