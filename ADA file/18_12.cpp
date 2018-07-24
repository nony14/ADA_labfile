#include<iostream>
using namespace std;
class monk  
{   
	long int m, p;
    int count;
    public:
        monk() {
            count=0;
        }
        void getData();
        void game();
        void outData();
};
void monk::getData() 
{
    cin>>m>>p;
}
void monk::game() 
{
    long int x=m^p;
    while(x>0) 
	{
        if(x%2==1)
            count++;
        x/=2;
    }
}
void monk::outData() 
{
    cout<<count<<endl;
}
int main() 
{
    int T;
    cin>>T;
    while(T--) 
    {
        monk ob;
        ob.getData();
        ob.game();
        ob.outData();
    }
    return 0;
}
