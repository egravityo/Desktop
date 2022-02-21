//求四个数中的最大值
#include<stdio.h>
int main()
{
	int arr[4]={0};
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	for(i=1;i<4;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%d ",max);
	return 0;
 } 
