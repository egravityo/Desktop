//求200年~2050年中有多少个闰年,它们分别是多少？ 
#include<stdio.h>
int main() 
{
	int i;
	int count=0; 
	for(i=200;i<=2050;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0)) 
		{
			printf("%4d ",i);
			count++; 
		}
	}
	printf("一共有%d个闰年",i); 
	return 0;
}
