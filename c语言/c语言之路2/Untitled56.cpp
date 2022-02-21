//Çó1!+2!+3!+4!+...+10! 
#include<stdio.h>
int main()
{
	int  i;
	double sum = 0,k=1;
	for(i=1;i<=10;i++)
	{
	    k = k * i;//3!=2!*3
		sum += k; 
	 }  
	printf("%.0f",sum);
	return 0;
}
