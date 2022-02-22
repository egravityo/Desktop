//判断一个数是否能被2整除且不能被3整除 
#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个整数:\n");
	scanf("%d",&a);
	if(a%2==0&&a%3!=0)
	{
		printf("满足条件"); 
	}
	else
	{
		printf("不满足条件"); 
	 } 
	return 0; 
 } 
