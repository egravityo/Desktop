/*经典第三题：一个整数，它加上100后是一个完全平方数，
再加上168又是一个完全平方数，请问该数是多少？
*/ 
#include<stdio.h>
int main()
{
	int i,k,j;
    for(i=1;;i++)
	{
		for(k=1;k<i;k++)
		{
			for(j=1;j<i;j++)
			{
				if(i+100==j*j&&i+168==k*k)
				printf("该数是%d",i);
			}
		}
	 } 
	return 0; 
 } 
