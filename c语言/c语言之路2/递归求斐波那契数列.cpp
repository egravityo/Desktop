//用递归的方法求斐波那契数列
//1，1，2，3，5，8，13，21，34... 
#include<stdio.h>
int Fib(int n)
{
	if(n<=2)
	{
		return 1;
	}
	else
	{
        return Fib(n-1)+Fib(n-2); 
	}
 } 
int main()
{
	int i;
	scanf("%d",&i);
	int ret = Fib(i);
	printf("%d",ret);
	return 0; 
 } 
