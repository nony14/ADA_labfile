#include<iostream>
#include<algorithm>
using namespace std;
struct problem
{
	int L;
	bool T;
};
bool increasing(problem i,problem j)
{
	return (i.L<j.L);
}
class contest
{
	int N,K,imp;
	problem *P;
	public:
		contest()
		{
			imp=0;
		}
		void getData();
		void luckCounter();
};
void contest::getData()
{
	cin>>N>>K;
	P=new problem[N];
	for(int i=0;i<N;i++)
	{
		cin>>P[i].L;
		cin>>P[i].T;
		if(P[i].T)
			imp++;
	}
}
void contest::luckCounter()
{
	sort(P,P+N,increasing);
	int luck=0;
	int attempt=imp-K;
	for(int i=0;i<N;i++)
	{
		if(P[i].T)
		{
			if(attempt>0)
			{
				luck-=P[i].L;
				attempt--;
			}
			else
			{
				luck+=P[i].L;
			}
		}
		else
		{
			luck+=P[i].L;
		}
	}
	cout<<luck<<"\n";
}
int main()
{
	contest C;
	C.getData();
	C.luckCounter();
	return 0;
}
