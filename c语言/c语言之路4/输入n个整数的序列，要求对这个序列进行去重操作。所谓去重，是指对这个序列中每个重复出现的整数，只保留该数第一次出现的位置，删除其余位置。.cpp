//输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，
//是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
#include<stdio.h>
int main()
{
	int i,j,n,m;
    printf("请输入该组数有几个数：");
    scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]); 
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]!=arr[j+1])
			{
				printf("%d ",arr[j]); 
			}
		}
	}
	return 0;
 } 
