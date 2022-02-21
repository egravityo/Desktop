#include<stdio.h>
void print1(int arr[3][4],int x,int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void printf2(int (*p)[4],int x,int y) 
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			//printf("%d ",*(*(p+i)+j));
			printf("%d ",(*(p+i))[j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
	print1(arr,3,4);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf2(arr,3,4); 
	return 0;
 } 
