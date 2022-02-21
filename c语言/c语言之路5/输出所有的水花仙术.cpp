//输出所有的水仙花数 
#include<stdio.h>
#include<math.h> 
int fun(int n)
{
	int flag=0;
	int i;
	int m;
	int z=n;
	int sum=0;
	while(n)
	{
		m = n %10;
		sum+=pow(m,3); 
		n/=10;
	}
	if(sum==z)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	int i;
	for(i=100;i<1000;i++)
	{
		int ret = fun(i);
		if(ret==1)
		{
			printf("%d ",i);
		 } 
	}
	return 0;
 } 
