//给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次，请编程帮他实现。
/* 输入：
5
1 1 2 1 3
1
输出：
3        */
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	int arr[10]={0};
	for(;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int m;
	scanf("%d",&m);
	int count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==m)
		{
			count++;
		}
	}
	printf("%d ",count);
    return 0;
} 
