//X^5
#include<stdio.h>
int main()
{
	int i=0;
	int n=0;
	scanf("%d",&n);
	long sum=1;
	for(i=1;i<=5;i++)
	{
		sum=sum*n;
	}
	printf("%ld",sum);
	
 } 
