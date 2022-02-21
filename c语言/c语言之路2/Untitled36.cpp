/*设计一个函数：求出俩个数的最大值*/ 
#include<stdio.h>
int MAX(int x,int y)
{
	if(x>y)
	{
		return x; 
	 } 
	else
	return y; 
 } 
int main()
{
	int i,k;
	int max=0;
	scanf("%d %d",&i,&k);
	max=MAX(i,k);
	printf("max=%d",max); 
	return 0; 
 } 
