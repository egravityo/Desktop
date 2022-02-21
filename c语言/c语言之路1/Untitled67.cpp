#include<stdio.h>
int MIN(int x,int y)
{
	if(x>y)
	return y;
	else 
	return x; 
 } 
int main()
{
	int a=23;
	int b=51; 
	int min=0; 
	min=MIN(a,b);
	printf("min=%d\n",min);
	return 0; 
 } 
