#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int i;
	int *pa  = arr;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i = 0;i < sz;i ++)
	{
		printf("%d ",*pa);
	    pa++;		
	 } 
	return 0;
}
