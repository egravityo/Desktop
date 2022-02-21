//pi/4 = 1 - 1/3 + 1/5 - 1/7+...
#include<stdio.h>
#include<math.h>
int main()
{
	double pi=0;
	int i=1;
	float flag=1;
	double t=1.0; 
	for(;fabs(t)>0.000001;)
	{
	    pi += t;
		flag=-flag; 
		i+=2; 
		t = flag *1.0/ i;
		
	 } 
	printf("pi is %f",4*pi);
	return 0;
 } 
