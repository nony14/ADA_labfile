#include<iostream>
using namespace std;
class array   
{   
	int A[3][3], sum1, sum2;
    public:
        array() 
		{
            sum1=0; sum2=0;
        }
        void getData();
        void altAdd();
        void outData();
};
void array::getData() 
{
    for(int i=0; i<3; ++i)
        for(int j=0; j<3; ++j)
            cin>>A[i][j];
}

void array::altAdd() 
{
    for(int i=0; i<3; ++i)
        for(int j=0; j<3; ++j) 
		{
            if((i+j)%2==0)
                sum1+=A[i][j];
            else sum2+=A[i][j];
        }
}
void array::outData() 
{
    cout<<sum1<<'\n'<<sum2;
}
int main() 
{
    array ob;
    ob.getData();
    ob.altAdd();
    ob.outData();
    return 0;
}
