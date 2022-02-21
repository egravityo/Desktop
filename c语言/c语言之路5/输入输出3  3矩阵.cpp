//ÊäÈë Êä³ö3*3¾ØÕó
#include<stdio.h>
int main()
{
	int i,j;
	int arr[10][10]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		puts("\n");
	}
	return 0;
 } 
