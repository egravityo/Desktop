//打印图案
#include<stdio.h>
int main()
{
	int i,j,k;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//打印一行 
		//打印空格
		for(j=0;j<i;j++)
		{
			printf("  ");
		}
		//打印*
		for(k=0;k<5;k++)
		{
			printf("* ");
		}
		//换行 
		printf("\n");
	}
	return 0;
 } 
