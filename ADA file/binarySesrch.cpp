#include<bits/stdc++.h>
using namespace std;
class binSearch
{
	int *arr,N,T,key;
	public:
		void getData();
		int search(int,int);
};
void binSearch::getData()
{
	cin>>N;
	arr=new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	cin>>T;
	while(T--)
	{
		cin>>key;
		search(0,N-1);
	}
}
int biSearch::search(int low,int high)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;                //key not found
 }
int main()
{
	binSearch B;
	B.getData();
	return 0;
}
