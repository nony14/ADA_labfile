#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
        long hash[100005];
        memset(hash,0,sizeof(hash));
        int n;
        cin>>n;
        long arr[n+1];
        for(int i=0;i<n;i++)
		{
            cin>>arr[i]; hash[arr[i]]++;
        }
        stack<int> s;
        long ans[n+1];
        s.push(0);
        for(int i=1;i<n;i++)
		{
            long next=arr[i];
            if(!s.empty())
			{
                int temp=s.top(); s.pop();
                while(hash[next]>hash[arr[temp]])
				{
                    ans[temp]=next;
                    if(s.empty()) break;
                    temp=s.top(); s.pop();
                }
                if(hash[arr[temp]]>=hash[next]) s.push(temp);
            }
            s.push(i);
        }
        while(!s.empty())
		{
            ans[s.top()]=-1;
            s.pop();
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
