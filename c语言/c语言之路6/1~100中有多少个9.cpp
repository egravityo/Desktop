//1~100的数字中有多少个9
#include<stdio.h>
int main()
{
	int i=0;
	int sum=1;
	for(i=10;i<100;i++)
	{ 
	    int j=1;
	    for(;j>0;)
		{
			if((i%10)%9==0)
			{
				sum++;
			}
			i/=10;
		 } 
	}
	printf("%d",sum);
	return 0;
 } 
