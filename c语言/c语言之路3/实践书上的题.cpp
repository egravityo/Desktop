#include<stdio.h>
int main()
{
	double x = 2.0,y;
	if(x < 0.0) y = 0.0;
	else if((x<5.0)&&(!x))  y = 1.0/(x+2.0);
	else if(x<10.0) y = 1.0/x;
	else y = 10.0;
	printf("%f\n",y);
	printf("%%d,%%d\n",2,5);
    printf("%5.0f",2.32); 
	return 0;
}
