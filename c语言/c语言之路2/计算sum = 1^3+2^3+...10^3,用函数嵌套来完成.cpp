//计算sum = 1^3+2^3+...10^3,用函数嵌套来完成 
#include<stdio.h>
int F2(int x,int y)
{
	long power =1 ;
	int i; 
	for(i = 1; i < = y;i++) 
	{
		power = power * x;
	}
	return power;
 } 
int F1(int x,int y)
{
	long sum = 0 ;
	int o;
	for(o = 1;o <=x ;o++)
	{
		sum = sum + long F2(o,3);
	}
	return sum; 
 } 
int main()
{ 
    long F1(10,3);
	printf("1^3+2^3+...10^3 = %d",F1(10,3)); 
	return 0; 
 } 
