#include<bits/stdc++.h>
#include<queue>
#define ll long long
using namespace std;
ll M,N,Q,Si,Sj,Di,Dj;
char **grid;
void fastscan(ll &x)
{
	bool neg=false;
	register ll c;
	x =0;
	c=getchar();
	if(c=='-')
	{
		neg = true;
		c=getchar();
	}
	for(;(c>47 && c<58);c=getchar())
		x = (x<<1) + (x<<3) +c -48;
	if(neg)
		x *=-1;
}
class QItem {
public:
    ll row;
    ll col;
    ll dist;
    QItem(ll x, ll y, ll w)
        : row(x), col(y), dist(w)
    {
    }
};
 
ll minDistance()
{
    QItem source(0, 0, 0);
    bool visited[N][M];
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < M; j++)
        {
            if (grid[i][j] == '*')
                visited[i][j] = true;
            else
                visited[i][j] = false;
            if (grid[i][j] == 's')
            {
               source.row = i;
               source.col = j;
            }
        }
    }
    queue<QItem> q;
    q.push(source);
    visited[source.row][source.col] = true;
    while (!q.empty()) {
        QItem p = q.front();
        q.pop();
        if (grid[p.row][p.col] == 'd')
            return p.dist;
        if (p.row - 1 >= 0 && visited[p.row - 1][p.col] == false) {
            q.push(QItem(p.row - 1, p.col, p.dist + 1));
            visited[p.row - 1][p.col] = true;
        }
        if (p.row + 1 < N && visited[p.row + 1][p.col] == false) {
            q.push(QItem(p.row + 1, p.col, p.dist + 1));
            visited[p.row + 1][p.col] = true;
        }
        if (p.col - 1 >= 0 && visited[p.row][p.col - 1] == false) {
            q.push(QItem(p.row, p.col - 1, p.dist + 1));
            visited[p.row][p.col - 1] = true;
        }
        if (p.col + 1 < M && visited[p.row][p.col + 1] == false) {
            q.push(QItem(p.row, p.col + 1, p.dist + 1));
            visited[p.row][p.col + 1] = true;
        }
    }
    return -1;
}
int main()
{
	fastscan(M);
    fastscan(N);
    fastscan(Q);
	grid= new char *[M];
	for( ll i = 0 ; i < M ; i++ )
        grid[i] = new char[N];
	for(ll i=0;i<M;++i)
	{
		fflush(stdin);
		for(ll j=0;j<N;++j)
		{
			grid[i][j]=getchar();
		}
	}
	fflush(stdin);
	fastscan(::Si);
	fastscan(::Sj);
	while(Q--)
	{
		fastscan(::Di);
		fastscan(::Dj);
		if(grid[Di-1][Dj-1]=='*' ||grid[Si-1][Sj-1]=='*')
			printf("-1\n");
		else
		{
			grid[Di-1][Dj-1]='d';
			grid[Si-1][Sj-1]='s';
	    	printf("%lld\n",minDistance());
	    }
	}
	return 0;
}
