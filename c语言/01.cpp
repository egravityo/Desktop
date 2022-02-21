#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p;
	p=arr;
	int i=0;
	for(;i<10;i++)
	{
		printf("%d ",*(p+i)); 
	 } 
	//int (*p)[10]=&arr;
	return 0;
 } 
