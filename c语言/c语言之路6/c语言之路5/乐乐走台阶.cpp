//小乐乐上课需要走n阶台阶，每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//例：输入2 输出2 
//输入10 输出89 
#include<stdio.h>
int fib(int n)
{
	if(n<=2)
	{
		return n;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
int main()
{
	//本质是斐波那契数列
	int n;
	scanf("%d",&n);
	int ret = fib(n);
	printf("%d",ret); 
	return 0;
}
