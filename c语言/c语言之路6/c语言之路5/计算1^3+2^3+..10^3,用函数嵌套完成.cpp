//计算s=1^3+2^3+3^3+...10^3,用函数嵌套来处理
#include<stdio.h>
int fun1(int n,int k)
{
	int i=1;
	int sum=0;
	int fun2(int n,int k);
	for(i=1;i<=n;i++)
	{
	   sum+=fun2(i,k);
	}
	return sum;
}
int fun2(int n,int k)
{
	int i;
	int sum=1;
	for(i=1;i<=k;i++)
	{
	   sum*=n;
	}
	return sum;
}
int main()
{
	int i=10,k=3;
	int sum=0;
	sum = fun1(i,k);
	printf("sum=%d",sum);
	return 0;
 } 
