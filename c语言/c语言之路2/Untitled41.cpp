/*写一个函数判断一年是不是闰年*/
#include<stdio.h>
int leap(int x)//laep year表示闰年 
{
	if(x%400==0||(x%4==0)&&(x%100!=0))	
	{
		printf("%d是闰年\n",x);
	 } 
	else
	{
		printf("%d不是闰年\n",x); 
	 } 
}
int main()
{
	int year; 
	printf("请输入一个年份：");
	scanf("%d",&year);
	int H = leap(year); 
	return 0; 
 } 
