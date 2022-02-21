//打印火箭
#include<stdio.h>
int main()
{
	int i,j,line;
	int k; 
	while((scanf("%d",&line))!=EOF)
	{
		//打印上面一部分 
		for(i=0;i<line;i++)
		{
			//打印每一行
			//打印空格
			for(j=0;j<line-1-i;j++)
			{
				printf("  ");
			 } 
			//打印*
			for(k=0;k<=i;k++)
			{
				printf("*"); 
			 } 
			printf("\n");
		 } 
		//打印下面一部分
		for(i=0;i<line-1;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("  ");
			}
			for(k=0;k<line-1-i;k++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
 } 
