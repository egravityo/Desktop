//冒泡排序法 (从大到小) 
#include<stdio.h>
int main()
{
	int i,j;
	int n;
	scanf("%d",&n);
	int arr[19]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
			   	int temp=0;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp; 
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]); 
	}
	return 0;
 } 
