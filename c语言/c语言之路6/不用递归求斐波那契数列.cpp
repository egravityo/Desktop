//不用递归求斐波那契数列
#include<stdio.h>
int main()
{
	//1 1 2 3 5 8 13...
    int n=0;
    scanf("%d",&n);
    if(n<=2)
    {
    	printf("1");
	}
	else
	{
		int i=0;
		int a=1,b=1;
		long long sum=0;
		for(i=3;i<=n;i++)
		{
			sum=a+b;
			b=a;
			a=sum;
		 } 
		printf("%lld ",sum);
	}
    return 0;
 } 
