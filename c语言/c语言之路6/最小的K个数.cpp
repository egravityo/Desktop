//最小的K个数
#include<stdio.h>
int main()
{
	int arr[10];
	int i=0;
	for(;i<10;i++) 
	{
		scanf("%d",&arr[i]);
	}
	//冒泡排序
	int j=0;
	for(i=0;i<9;i++) 
	{
		for(j=0;j<9-i;j++0)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	//输出最小的K个数
	int k=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	 } 
	return 0;
 } 
