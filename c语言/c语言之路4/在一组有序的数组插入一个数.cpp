//在一组有序的数组插入一个数
#include<stdio.h>
int main()
{
	int arr[11]={1,2,4,8,12,14,15,19,20,25};
	int i=0;
	int t;
	scanf("%d",&arr[10]);
	for(i=0;i<11;i++)
	{
		if(arr[i]>arr[10])
		{
			t = arr[10];
			for(int j=10;j>i;j--)
			{
				arr[j]=arr[j-1];
			}
			arr[i] = t;
		}
	}
	for(i=0;i<11;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0; 
 } 
