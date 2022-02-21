//计算n的阶层
#include<stdio.h>
int main()
{
	int n;
	int i; 
	int ret=1; 
	printf("请输入一个整数：\n");
	scanf("%d",&n); 
    for(i=1;i<=n;i++)
	{
	     ret=ret*i;
	 } 
	printf("ret=%d",ret);
	return 0;
}
