/*дһ�������ж�һ���ǲ�������*/
#include<stdio.h>
int leap(int x)//laep year��ʾ���� 
{
	if(x%400==0||(x%4==0)&&(x%100!=0))	
	{
		printf("%d������\n",x);
	 } 
	else
	{
		printf("%d��������\n",x); 
	 } 
}
int main()
{
	int year; 
	printf("������һ����ݣ�");
	scanf("%d",&year);
	int H = leap(year); 
	return 0; 
 } 
