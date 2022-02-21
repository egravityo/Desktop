//输入整形数组,最大的与第一个元素交换，最小的与最后一个元素交换,输出数组
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	 } 
	int max=arr[0];
	int min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	//交换1
	int temp1=arr[0]; 
	arr[0]=max;
	max=temp1;
	//交换2
	int temp2=arr[n-1]; 
	arr[n-1]=min;
	min=temp2;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } 
