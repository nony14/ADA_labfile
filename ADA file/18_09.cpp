#include<iostream>
using namespace std;
class sets	
{	
	int A[100], B[100], n, m, i, j;
	public:
		void getData();
		int b2S();
		void outData();
};
void sets::getData()
{
	cin>>n>>m;
	for(i=0; i<n; i++)
		cin>>A[i];
	for(i=0; i<m; i++)
		cin>>B[i];
}
int sets::b2S() 
{
    int count=0;
    for(i=1; i<101; ++i) 
	{
        int flag=1;
        for(j=0; j<n; ++j)
            if(i%A[j]!=0) 
			{
                flag=0;
                break;
            }
        for(j=0; j<m; ++j)
            if(B[j]%i!=0) 
			{
                flag=0;
                break;
            }
        if(flag==1)
            ++count;
    }
    return count;
}
void sets::outData() 
{
    cout<<b2S();
}
int main() 
{
    sets ob;
    ob.getData();
    ob.outData();
    return 0;
}
