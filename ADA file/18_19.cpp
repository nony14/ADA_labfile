#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool decreasing(long i,long j)
{
	return (i>j);
}
class cakewalk
{
	long N,*cake;
	public:
		void getData();
		void walk();
};
void cakewalk::getData()
{
	cin>>N;
	cake=new long[N];
	for(long i=0;i<N;i++)
	{
		cin>>cake[i];
	}
}
void cakewalk::walk()
{
	
	long sum=0;
	sort(cake,cake+N,decreasing);
	for(long i=0;i<N;i++)
	{
		sum=sum+(cake[i]*(pow(2,i)));
	}
	cout<<sum<<"\n";
}
int main()
{
	cakewalk C;
	C.getData();
	C.walk();
	return 0;
}
