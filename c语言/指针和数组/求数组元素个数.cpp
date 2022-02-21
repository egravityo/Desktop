//
#include<stdio.h>
int main()
{
	int i=0;
	int arr[100];
	for(;getchar()!='\n';i++)
	{
		scanf("%d",&arr[i]);
	}
	int sz=sizeof(arr)/sizeof(arr[0]);
	printf("%d ",sz);
	return 0;
 } 
