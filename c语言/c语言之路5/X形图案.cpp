//X形图案
#include<stdio.h>
int main()
{
	int i,j,k,line;
	scanf("%d",&line);
	//打印上面一部分 
	for(i=0;i<line;i++)
	{
		//打印空格
		for(j=0;j<i;j++)
		{
		   printf(" ");	
		}
		//打印*
		printf("*"); 
		//打印空格
		for(j=0;j<2-i;j++)
		{
			printf("  ");
		}
		//打印* 
		printf("* \n");
	 } 
	/*打印下面一部分
	for(i=0;i<line-1;i++)
	{
		
	 }*/ 
	return 0;
 } 
