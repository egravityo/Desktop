//1+2+3+4+...+n 
#include<stdio.h>
int main()
{
	long long sum=0;
	long long n=0;
	scanf("%lld",&n);
  /*  for(int i=1;i<=n;i++)
	{
		sum+=i; 
	 }   */
	sum=(1+n)*n/2;
	printf("%lld",sum);
	return 0;
 } 
