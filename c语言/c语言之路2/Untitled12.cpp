//数9的个数:求1~100之间一共出现了多少个9
#include<stdio.h>
int main()
{
	int i,k;
	int a;//提取十位
	int b;//提取个位 
	int count=0;
	for(i=1;i<101;i++)
	{
		a=i/10;
		b=i%10;
		if(a==9||b==9)
		{
			printf("%d ",i);
			count++; 
		 } 
		if(a==9&&b==9)
		{
			printf("%d ",i);
			count++; 
		}
	 } 
	printf("\n"); 
	printf("一共有%d个9",count); 
	return 0; 
 } 
