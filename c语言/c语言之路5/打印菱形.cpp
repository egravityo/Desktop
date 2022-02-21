//打印菱形
#include<stdio.h>
int main()
{
	int i;
	int j;
	int line=0;//上半部分行数 
	scanf("%d",&line);
	//打印上半部分
	for(i=0;i<line;i++)
	{
	   //打印每行
	   for(j=0;j<line-1-i;j++)
	   {
	       //打印空格
	       printf("  ");
	   }	
	   for(j=0;j<2*i+1;j++)
	   {
	   	   //打印* 
	   	   printf("* ");
	   }
	   printf("\n");
    } 
	//打印下半部分 
	for(i=0;i<line-1;i++)
	{
		//打印每行
		//打印空格 
		for(j=0;j<=i;j++)
		{ 
		   printf("  ");  
		} 
		//打印* 
		for(j=0;j<2*(line-1-i)-1;j++)
		{
		   printf("* ");
		} 
		printf("\n");
	 } 
    return 0;
}
