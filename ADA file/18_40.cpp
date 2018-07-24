#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N;

ll number(__int128 cur, int last)
{
    if(cur>N)
        return 0;
    long long ret=cur;
    for(; last<=9; last++)
        ret=max(ret, number(cur*10+last, last));
    return ret;
}

void tidy(int TEST)
{
    scanf("%lld", &N);
    printf("%lld\n", number(0, 1));
}

int main()
{
    freopen("B-large-practice.in", "r", stdin);
    freopen("B-large.out", "w", stdout);
    int TEST;
    scanf("%d", &TEST);
    for(int i=1; i<=TEST; i++)
    {
        printf("Case #%d: ", i);
        tidy(i);
    }
    return 0;
}
