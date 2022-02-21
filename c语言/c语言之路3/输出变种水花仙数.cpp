/*变种水花仙数 ：1461 = 1*461+14*61+146*1
  输出所有的5位数变种水花仙数*/
#include<stdio.h>
int main()
{/* 
	int i;//23456
	int a,b,c,d,e;
	int count = 0;
	a = i / 10000;
	b = i / 1000 % 10;
	c = i / 100 % 10;
	d = i / 10 % 10;
	e = i % 10;
	for(i = 10000; i<= 99999;i ++)
	{
	    a = i / 10000;
	    b = i / 1000 % 10;
	    c = i / 100 % 10;
	    d = i / 10 % 10; 
	    e = i % 10;
	    if(i == a*(b*1000+c*100+d*10+e)+(a*10+b)*(c*100+d*10+e)+(a*100+b*10+c)*(d*10+e
		)+(a*1000+b*100+c*10+d)*e)
	    {
	    	printf("%d ",i); 
	    	count ++;
		}
	}
	printf("\n"); 
	printf("一共有%d个",count);*/
	int i;
	int count = 0;//23456
	for(i = 10000;i <= 99999;i ++)
	{
		int sum = 0;
		int j; 
		for(j = 10;j <= 10000;j *= 10)
		{
			sum += ((i/j)*(i%j)); 
	    }
		if(sum == i)
		{
			printf("%d ",i);
			count++;
		}
	 } 
	printf("\n一共有%d个",count);
	return 0;
 } 
