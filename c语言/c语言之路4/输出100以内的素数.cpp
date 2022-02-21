//输出100以内的素数
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	int count=0;
	for(i=2;i<=99;i++)
	{
		int flag=1;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=0;
			}
		} 
	    if(flag==1)
	    {
	    	printf("%d ",i);
	    	count++;
		}
	}
	printf("\n一共%d个",count);
	return 0;
 } 
