#include<stdio.h>
void Static()
{
	static int m = 0;
	int n = 0;
	printf("静态变量m为%d,动态变量n为%d\n",m,n);
	m++;
	n++; 
 } 
int main()
{
	int i;
	for(i = 0 ;i < 3;i ++)
	{
	    Static(); 
	 } 
	return 0; 
 } 
