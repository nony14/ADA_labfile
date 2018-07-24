#include<bits/stdc++.h>
void scan(int &number)
{
    bool negative = false;
    register int c;
 
    number = 0;
    c = getchar_unlocked();
    if (c=='-')
    {
        negative = true;
        c = getchar_unlocked();
    }
    for (; (c>47 && c<58); c=getchar_unlocked())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}
class mathison
{
	int *arr,N,*F,*S,j;
	public:
		void getData();
		void subarray();
		friend void scan(int *);
};
void mathison::getData()
{
	int data;
	j=0;
	scan(N);
	arr=new int[N]();
	F=new int[N]();
	S=new int[N]();
	for(int i=1;i<=N;++i)
	{
		scan(data);
		if(!F[data])
		{
			F[data]=i;
			arr[j]=data;
			++j;
		}
		else
		{
			S[data]=i;
		}
	}
}
void mathison::subarray()
{
	int max=0;
	for(int i=0;i<j;++i)
	{
		if(max<S[arr[i]]-F[arr[i]]+1)
			max=S[arr[i]]-F[arr[i]]+1;
	}
	printf("%d",max);
}
int main()
{
	mathison M;
	M.getData();
	M.subarray();
	return 0;
}
