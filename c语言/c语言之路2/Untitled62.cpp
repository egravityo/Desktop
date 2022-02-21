//用递归方法求5！
#include<stdio.h>
int DIG(int x)
{
	//5!=5*4*3*2*1
	int s; 
	if(x==1)
	{
		s = 1; 
	 } 
	else
	{
		s = x * DIG(x-1);
        return s; 
	 } 
 } 
int main()
{
	int i = 5;
	int ret = DIG(i);
    printf("5！=%d",ret); 
	return 0; 
 } 
