#include<stdio.h>
float ADD(float x,float y)
{
	return x+y; 
 } 
int main()
{
	float  a,b;
	scanf("%f %f",&a,&b);
	float ret = ADD(a,b);
	printf("他们的和为：%.1f",ret);
	return 0;
 } 
