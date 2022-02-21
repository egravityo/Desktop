//KiKi想知道1~2019中有多少个包含数字9的数
/*#include<stdio.h>
int fun(int i)
{
	for(;i<=2019;i/=10)
	{
		int n = i % 10;
		if(n==9)
		{
			return 1;
		}
	} 
	return 0;
 } 
int main()
{
	int i;
	int count = 0;
	for(i=1;i<=2019;i++)
	{
		int ret = fun(i);
		if(ret)
		{
			count++;
		}
	}
	printf("\n");
	printf("一共有%d个",count);
	return 0;
}
#include<stdio.h>
int main()
{
	int i;
	int count = 0; 
	for(i=1;i<=2019;i++)
	{
		int a,b,c,d;
		a = i / 1000;
		b = i / 100 % 10;
		c = i / 10 % 10;
		d = i % 10;
		if(a==9||b==9||c==9||d==9)
		{
			count ++;
		}
	}
    printf("一共有%d个",count);
	return 0;
 } */
#include<stdio.h>
int main()
{
	int count = 0;
	int i;
	for(i=1;i<=2019;i++)
	{
		if(i==9||i%10==9||i/10%10==9||i/100%10==9)
		{
			count++;
		 } 
	 } 
	printf("一共有%d个",count);
	return 0;
}
