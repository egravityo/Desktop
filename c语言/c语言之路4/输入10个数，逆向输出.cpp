//输入10个数，逆向输出
#include<stdio.h>
#define N 10
int main()
{
	int i;
	int arr[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=N-1;j>=0;j--)
	{
		printf("%d ",arr[j]);
	}
	return 0;
 } 
