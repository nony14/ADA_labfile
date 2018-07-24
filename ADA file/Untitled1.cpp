#include<stdio.h>
int main()
{
	static int arr[]={0,1,2,3,4};
	int *p[]={arr,arr+1,arr+2,arr+3,arr+40};
	int **ptr=p;
	ptr++;
	printf("%d, %d, %d",ptr-p,*ptr-arr,**ptr);
	*ptr++;
	printf("%d, %d, %d",ptr-p,*ptr-arr,**ptr);
	*++ptr;
	printf("%d, %d, %d",ptr-p,*ptr-arr,**ptr);
	++*ptr;
	printf("%d, %d, %d",ptr-p,*ptr-arr,**ptr);
	
	return 0;
}
