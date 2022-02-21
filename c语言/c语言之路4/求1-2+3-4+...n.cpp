//Çó1-2+3-4+5-6+...+n
#include<stdio.h>
int main()
{
	int n=0;
	int i=1;
	scanf("%d",&n);
	int sum1=0;
	int sum2=0;
	int sum=0;
    if(n%2==1)
    {
    	for(i=1;i<=n;i+=2)
    	{
    		sum1+=i;
		}
	}
	int j; 
	for(j=2;j<=n-1;j+=2)
	{
       sum2+=j; 
    }
	sum=sum1-sum2;
	printf("sum=%d",sum);
	return 0;
 } 
