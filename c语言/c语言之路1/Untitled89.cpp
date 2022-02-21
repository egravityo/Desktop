/*一个数如果刚好不小于它的所有因子之和相等，则称该数为一个
“完数”，如：6=1+2+3。求出10000以内的所有完数之和。*/
#include<stdio.h>
int main()
{
	int i,k;
    int A=0;
	float sum1=0;
	for(i=6;i<=10000;i++)
	{
		sum1=0;
		A=0;
		for(k=1;k<i;k++)
		{
			if(i%k==0)
			{
				sum1+=k;
			}
		}
		if(sum1==i)
		{
	    printf("%d是一个完数\n",i);
		A+=i;
		printf("%d\n",A);	
	   }
    }
	return 0; 
}
