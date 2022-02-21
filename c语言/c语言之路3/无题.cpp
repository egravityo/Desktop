#include<stdio.h>
int main()
{
	int *pa,i;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	pa = arr;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		printf("%d ",*(pa+i));
	 } 
	return 0;
}
