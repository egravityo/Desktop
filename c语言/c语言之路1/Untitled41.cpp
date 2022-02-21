//判断一个三位数是否为水花仙数 
#include<stdio.h>
#include<math.h>
int main() 
{
	int x,a,b,c;
	printf("请输入一个三位数：\n");
	scanf("%d",&x);
	a=x/100;
	b=x/10%10;
	c=x/10;
	if(x=a*a*a+b*b*b*+c*c*c)
	{
		printf("该数为水花仙数\n");
	 } 
	else
	{
		printf("该数不是水花仙数！\n"); 
	 } 
	return 0; 
 } 
