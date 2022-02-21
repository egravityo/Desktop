#include<stdio.h> 
/*
int MAX(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;	
}
int main()
{
	int a=28;
	int b=39;
	int max=0;
	max=MAX(a,b);
	printf("max=%d\n",max);
	return 0; 
 }*/
int MAX(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
 } 
int  main()
{
	int a=42;
	int b=54;
	int max=0;
	max=MAX(a,b);
	printf("max=%d\n",max);
	return 0;
}
