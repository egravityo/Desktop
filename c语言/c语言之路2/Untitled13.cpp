/*¼ÆËã1/1-1/2+1/3-1/4+...-1/100µÄºÍ*/
#include<stdio.h>
int main()
{
	int i;
	double sum=0.0;
	int item;
	int sign=1; 
	for(i=1;i<101;i++)
	{
		sum=sum+sign*1.0/i;
	    sign=-sign;
	 } 
	 printf("%lf",sum);
	 /*
	int i;
	double sum=0.0;
	int flag=1;
	for(i=1;i<=100;i++)
	{
		sum+=flag*1.0/i;
		flag=-flag;
	 } 
	 printf("%lf\n",sum);*/
	return 0;
 } 
