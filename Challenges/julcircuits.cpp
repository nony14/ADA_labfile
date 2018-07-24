#include<bits/stdc++.h>
#include<limits>
using namespace std;
int main()
{
    int T,min=INT_MAX;
    cin>>T;
    while(T--)
    {
        int N,A,B;
        cin>>N>>A>>B;
        int minflw[N+1][N+1];
        for(int i=0;i<N+1;i++)
        {
            for(int j=0;j<N+1;j++)
            {
                if((i+j)==N)
                {
                    int x=(A*pow(i,2))+(B*pow(j,2));
                    if(min>x)
                    {
                        min=x;
                    }
                }
            }
        }
        cout<<min;
    }
}
