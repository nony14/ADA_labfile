#include <bits/stdc++.h>
#define ll long long
using namespace std;
void run()
{
    int D,N;
    cin>>D>>N;
    double ans=0.0; // longest time
    for (int i=0;i<N;i++)
    {
        double K,S;
        cin>>K>>S;
        ans=max(ans,(D-K)/S);
    }
    cout<<D/ans;
}
int main()
{
    cout<<fixed<<setprecision(7);
    int T;
	cin>>T;
    for (int i = 1; i <= T; i++)
    {
        cout << "Case #" << i << ": ";
        run();
        cout << "\n";
    }
}
