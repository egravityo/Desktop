/*������4: ����ĳ��ĳ��ĳ�գ��ж���һ������һ��ڼ��죿
*/
#include<stdio.h>
int main()
{
	int  day,month,year;
	int sum=0;//������ 
	printf("��������:\n");
	scanf("%d",&year);
	printf("�������£�\n"); 
	scanf("%d",&month);
	printf("��������:\n");
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
		default:printf("ͬѧ ����������Ŷ=.="); 
	}
    if(year%400==0)//����Ķ��·ݶ�1�� 
	{
		if(month>2)
		sum++; 
	 } 
	 printf("%d��%d��%d������һ���%d��\n",year,month,day,sum+day); 
	return 0; 
 } 
