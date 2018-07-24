#include <bits/stdc++.h>
using namespace std;
int N;
char S[100001];

int revenge(int pos, char want)
{
    if(pos<0)
        return 0;
    if(S[pos]==want)
        return revenge(pos-1, want);
    return revenge(pos-1, want^'+'^'-')+1;
}
void pancakes(int TEST)
{
    scanf("%s", S);
    N=strlen(S);
    printf("%d\n", revenge(N-1, '+'));
}
int main()
{
    freopen("B-large-practice_16.in", "r", stdin);
    freopen("B-large_16.out", "w", stdout);
    int TEST;
    scanf("%d", &TEST);
    for(int i=1; i<=TEST; i++)
    {
        printf("Case #%d: ", i);
        pancakes(i);
    }
    return 0;
}
