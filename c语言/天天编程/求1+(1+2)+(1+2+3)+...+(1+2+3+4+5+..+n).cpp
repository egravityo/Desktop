//求1+(1+2)+(1+2+3)+...+(1+2+3+4+5+..+n)
#include<stdio.h>
int main()
{
	int n=0;
	while(~scanf("%d",&n))
	{
		long sum=0;
		int i=0;
		for(i=1;i<=n;i++)
		{
		    int j=0;
		    int s=0;
		    for(j=1;j<=i;j++)
		    {
		        s+=j;
			}
			sum+=s;
		}
		printf("总和是：%ld\n",sum);
	}
	return 0;
 } 
 
