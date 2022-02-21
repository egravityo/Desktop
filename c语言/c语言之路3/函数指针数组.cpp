//函数指针数组
#include<stdio.h>
int ADD(int x,int y)
{
	return x+y;
}
int SUB(int x,int y)
{
	return x-y;
}
int MUL(int x,int y)
{
	return x*y;
}
int DIV(int x,int y)
{
	return x/y;
}
int mian()
{
	int (*pa[4])(int,int) = {ADD,SUB,MUL,DIV};
	int i;
	for(i=0;i<4;i++)
	{
		printf("%d ",pa[i](3,4)); 
	}
	return 0;
 } 
