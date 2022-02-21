#include<stdio.h> 
int main()
{
	float pi,item=1,sum=0;
	int i=1,sign=1;
	item=1.0/i;
	for(i;item>=1e-6;i+=2)
	{
	    item=1.0/i;
		sum=sum+item*sign;
		sign=-sign;
	}
    pi=4*sum;
	printf("pi=%.5f\n",pi);
	return 0; 
} 
