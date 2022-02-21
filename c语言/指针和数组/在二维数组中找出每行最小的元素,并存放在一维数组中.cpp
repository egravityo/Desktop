#include<stdio.h>
int main()
{
	int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int arr1[4];
	int i=0,j=0;
	for(;i<3;i++)
	{
		for(;j<4;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int min;
	for(i=0;i<3;i++)
	{
	    min=arr[i][0];	
		for(j=0;j<4;j++)
		{
			if(min>arr[i][j])
			{
				min=arr[i][j];
			}
			arr1[i]=min;
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d ",arr1[i]);
	}
	return 0;
}
