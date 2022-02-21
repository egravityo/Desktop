#include<stdio.h>
#define N 5 
int main()
{
	int i,k;
	int arr[N]={2,43,342,13,232}; 
	printf("请输入一个数据：");
	scanf("%d",&k);
	for(i=0;i<N;i++)
	{
		if(k==arr[i])
		{
			printf("找到了,你所找的在第%d位",i+1);
			break; 
		 } 
	 }  
	if(i>=N)
	printf("没找到");
	return 0; 
 } 
