#include<stdio.h>
int main()
{
	double i,jc=1;
	int  n=10,sum=0; 
	scanf("%lf",&jc);
	for(i=1;i<11;)
	{
		jc=jc*i;
		printf("µÚ%d!=%lf\n",n,jc);
		sum=sum+jc;
		i++; 
	 } 
	 printf("sum=%d\n",sum);
	 return 0; 
 } 
