//图案3
#include<stdio.h>
int main()
{
	int i,j,n;
	int k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//打印一行
		//打印空格
		for(j=0;j<i;j++)
		{
			printf(" ");
		 }
		//打印* 
		for(k=0;k<n-i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
 } 
