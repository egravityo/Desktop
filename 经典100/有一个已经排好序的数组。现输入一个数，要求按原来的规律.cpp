/*有一个已经排好序的数组。现输入一个数，要求按原来的规律
将它插入该数组中*/ 
#include<stdio.h>
int main()
{
	int i;//用来循环
    int k; 
    int t;//暂时存放 
	int arr[6]={1,3,4,6,54};
	printf("请输入一个数:");
	scanf("%d",&arr[5]); 
	for(i=0;i<5;i++)
	{
		if(arr[5]<arr[i])
		{
			t = arr[5]; 
			for(k=5;k>i;k--)
			{
			   arr[k]=arr[k-1];
			} 
			arr[i] = t;
		} 
	 } 
	for(i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0; 
 } 
