#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
	{
        string a, b;
        int a1[26]= {0}, b1[26]={0}, count=0, i;
        cin>>a;
        cin>>b;
        int x=a.size(), y=b.size();
        for(i=0; i<x; ++i) {
    		if(a[i]>='a'&& a[i]<='z') 
			{
    			++a1[a[i]-'a'];
    		}	
    	}
        for(i=0; i<y; ++i) 
		{
    		if(b[i]>='a' && b[i]<='z')
    			++b1[b[i]-'a'];
    	}
    	for(i=0; i<26; i++) 
		{
    		if(a1[i]!=b1[i])
    		    count+=abs(a1[i]-b1[i]);
    	}
    	cout<<count<<endl;
    }
    return 0;
}

