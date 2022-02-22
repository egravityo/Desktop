//Õ·×ªÏà³ý·¨
#include<stdio.h>
int main()
{
	long long n,m,n1,m1;
	long long min=0,max=0;
	n1=n;
	m1=m;
	while((scanf("%lld %lld",&m,&n))!=EOF)
	{
		while(max=n%m)
		{
        //36 8
           m = n;
           n = max;
		}
		max = m;
		min = (n1*m1)/max;
		printf("%lld %lld",max,min);
	}
	return 0;
}
