//����������,���������������Լ������С������֮��
#include<stdio.h>
int main()
{
	long long m=0,n=0,sum=0;
	while((scanf("%lld %lld",&m,&n)!=EOF))
	{
	    long long max=m>n?n:m;
	   	long long min=m>n?m:n;
		while(1)
		{
		    if(m%max==0&&n%max==0)
	   	    {
	   	        break;	
		    }
		    max--;
		}
	   	while(1)
		{
		    if(min%m==0&&min%n==0)
	   	    {
	   	        break;	
		    }
		    min++;
		}
        sum=max+min;
		printf("%lld",sum); 
		printf("\n");
	} 
	return 0;
 } 
