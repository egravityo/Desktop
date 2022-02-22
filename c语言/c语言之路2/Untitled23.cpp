/*编写一个能求俩个数中的最大数的函数*/
#include<stdio.h>
int get_max(int x,int y)
{
	if(x>y)
	{
		return x; 
	 } 
	else
	{
		return y; 
	 } 
 } 
int main()
{
	int a=100;
	int b=200;
    int	max=get_max(a,b);
	printf("max=%d",max); 
	return 0; 
 } 
