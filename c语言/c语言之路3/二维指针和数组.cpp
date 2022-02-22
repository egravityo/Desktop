#include<stdio.h>
#define I 3
#define J 5 
int main()
{
	int arr[I][J]={0};
	int i,j;
	int (*pa)[J];
	pa = arr; 
	for(i=0;i<I;i++)
	{
		for(j=0;j<J;j++)
		{
		    scanf("%d",&arr[i][j]); 
		}
	 } 	 
	for(i=0;i<I;i++)
	{
		for(j=0;j<J;j++)
		{
			printf("%d ",*(*(pa+i)+j)); 
		}
	 } 	 
	return 0;
}
