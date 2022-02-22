#include<stdio.h>
int main()
{
	int x,i; 
	printf("请输入一个大于2的整数：\n");
	scanf("%d",&x);
	for(i=2;i<x-1;i++)
	{
		if(x%i==0) break;
	 } 
	if(i==x-1)
	printf("该数是素数！\n",x);
	else
	printf("该数不是素数！\n",x);
	return 0; 
 } 
