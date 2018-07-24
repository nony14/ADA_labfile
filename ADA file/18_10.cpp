#include<iostream>
#include<string>
using namespace std;
int main() 
{

    string s;
    int n;
    bool X[10000000];
    cin>>s>>n;
    for(int i=0; i<s.length(); ++i)
	{
        int sum=0;
        for(int j=0; j<s.length()-i, s[i]==s[i+j]; j++)
		{
            sum+=s[i+j]-96;
            X[sum]=true;
        }
    }
    for(int k=0; k<n; ++k) 
	{
        int x;
        cin>>x;
        (X[x]) ? cout<<"Yes"<<'\n' : cout<<"No"<<'\n';
    }
    return 0;
}
