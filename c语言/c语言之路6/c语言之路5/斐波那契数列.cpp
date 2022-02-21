//斐波那契数列
#include<stdio.h>
#include<math.h>
int main() 
{
	int n=0;
	scanf("%d",&n);
	int y;
	double z; 
	double x;
	int i;
	double sum=1;
	if(n>=1)
	{
	    z = 1+sqrt(5);
	    x = z/2.0;
	    for(i=1;i<=n;i++)
		{
			sum=sum*x;
		 } 
	}
	else
	{
		printf("输入错误！");
	}
	y = sum;
	printf("%d ",y);
	return 0;
}
