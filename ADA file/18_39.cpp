#include <bits/stdc++.h>

using namespace std;
int N, K;
char S[10000];

void flip(int TEST)
{
    scanf("%s%d", S, &K);
    N=strlen(S);
    int ans=0;
    for(int i=0; i+K-1<N; i++) if(S[i]=='-')
    {
        for(int j=0; j<K; j++)
            S[i+j]^='-'^'+';
        ans++;
    }
    for(int i=0; i<N; i++) if(S[i]=='-')
        ans=-1;
    if(ans==-1)
        printf("IMPOSSIBLE\n");
    else
        printf("%d\n", ans);
}

int main()
{
    freopen("A-large-practice.in", "r", stdin);
    freopen("A-large.out", "w", stdout);
    int TEST;
    scanf("%d", &TEST);
    for(int i=1; i<=TEST; i++)
    {
        printf("Case #%d: ", i);
        flip(i);
    }
    return 0;
}
