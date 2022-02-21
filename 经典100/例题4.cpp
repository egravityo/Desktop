/*经典例4: 输入某年某月某日，判断这一天是这一年第几天？
*/
#include<stdio.h>
int main()
{
	int  day,month,year;
	int sum=0;//总天数 
	printf("请输入年:\n");
	scanf("%d",&year);
	printf("请输入月：\n"); 
	scanf("%d",&month);
	printf("请输入日:\n");
	scanf("%d",&day);
	switch(month) 
	{
		case 1: sum;break;
		case 2: sum=31;break;
		case 3: sum=31+28;break;
		case 4: sum=31+28+31;break;
		case 5: sum=31+28+31+30;break;
		case 6: sum=31+28+31+30+31;break;
		case 7: sum=31+28+31+30+31+30;break;
		case 8: sum=31+28+31+30+31+30+31;break;
		case 9: sum=31+28+31+30+31+30+31+31;break;
		case 10: sum=31+28+31+30+31+30+31+31+30;break;
		case 11: sum=31+28+31+30+31+30+31+31+30+31;break;
		case 12: sum=31+28+31+30+31+30+31+31+30+31+30;break;	
		default:printf("同学 别无中生有哦=.="); 
	}
    if(year%400==0)//闰年的二月份多1天 
	{
		if(month>2)
		sum++; 
	 } 
	 printf("%d年%d月%d日是这一年第%d天\n",year,month,day,sum+day); 
	return 0; 
 } 
