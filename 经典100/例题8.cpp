/*经典例8：输出9*9乘法表*/
#include<stdio.h>
int main()
{
	int i,k;
	printf("9*9乘法表如下所示：\n"); 
	for(i=1;i<10;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("%d*%d=%2d ",k,i,i*k);
		}
		printf("\n");
	 } 
	return 0; 
 } 
