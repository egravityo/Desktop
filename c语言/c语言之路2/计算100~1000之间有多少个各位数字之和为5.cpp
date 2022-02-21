/*计算100~1000之间有多少个各位数字之和为5*/
#include<stdio.h>
int main()
{
	int i,a,b,c;
	int count = 0;
	for(i = 100;i <= 999;i ++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if(5 == a + b +c)
		{
			count++;
			printf("%d ",i); 
		 } 
	 } 
	printf("\n一共有%d个",count);
	return 0;
 } 
