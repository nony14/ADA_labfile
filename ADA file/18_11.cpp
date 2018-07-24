#include<iostream>
#include<string>
using namespace std;
class holiday   
{   
	string x;
    long long int n, ans;
    public:
        holiday() 
		{
            ans=0;
        }
        void getData();
        void process();
        void outData();
};
void holiday::getData()
{
    cin>>n>>x;
}
void holiday::process() 
{
    long long int count[26]={0};
    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j)
		{
        
            if(x[i]==x[j])
                for(int k=i+1; k<j; ++k) 
                    ans+=count[x[k]-'a'];
        }
        ++count[x[i]-'a'];
    }
}
void holiday::outData() 
{
    cout<<ans;
}
int main() 
{
    holiday ob;
    ob.getData();
    ob.process();
    ob.outData();
    return 0;
}
