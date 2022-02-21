#include<stdio.h>
int main()
{
	int arr[]={1,3,5,6,7,3};
	printf("%d ",sizeof(arr)/sizeof(arr[0]));
	return 0;
}
