//e=1+1+1/2!+1/3!+....+1/n! 
#include<stdio.h>
int main()
{
    int i;
	double e=1.0;
    double t=1.0;
    int n=1;
    for(;t>0.000001;)
	{
		t = t* 1.0/ n;  
		e = e + t; 
		n++;
	 } 
	printf("E is %f",e); 
	return 0;
 } 
