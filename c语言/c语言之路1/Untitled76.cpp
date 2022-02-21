#include<stdio.h> 
int main()
{
	float pi,item=1,sum=0;
	int i=1,sign=1;
	item=1.0/i;
	for(i=1;item>=1e-6;i=i+2)
	{
		item=1.0/i;
		sum=sum+sign*item;
	    sign=-sign;
	 } 
	printf("sum=%d\n",sum);
	pi=4*sum;
	printf("pi=%.4f\n",pi);
	return 0;
}
