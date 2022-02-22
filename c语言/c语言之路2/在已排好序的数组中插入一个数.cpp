#include<stdio.h>
int main()
{
	int i,j,k,arr[5]={1,13,25,34};
    int t; 
	printf("请输入一个数:");
	scanf("%d",&arr[4]);
	for(i=0;i<5;i++)
	{
		if(arr[4]<arr[i])
		{
			t = arr[4];
			for(k=4;k>i;k--)
			{
			    arr[k]=arr[k-1];
			}
			arr[i] = t;
		}
	}
    for(i=0;i<5;i++)
    {
    	printf("%d  ",arr[i]);
	}
	return 0;
 } 
