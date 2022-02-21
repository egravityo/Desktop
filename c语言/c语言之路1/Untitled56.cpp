#include<stdio.h>
int main()
{
	int A;
	printf("请输入一个年份：\n");
	scanf("%d",&A);
	if(A%400==0)
	{
		printf("%d是闰年！\n",A);
	 } 
	 else
	 {
	 	printf("%d不是闰年！\n",A); 
	  } 
	  return 0; 
 } 
