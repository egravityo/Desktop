//���ýṹ�����������ꡢ�¡���,����һ������,ͳ�Ƹ������Ǳ���ȵڼ��� 
#include<stdio.h>
struct date
{
    int year;
	int month;
	int day;	
};
int main()
{
	struct date pdate;
	int d=0;
    printf("������һ�����ڣ�");
	scanf("%d %d %d",&pdate.year,&pdate.month,&pdate.day);
	int i;
	int day=0;
	for(i=1;i<pdate.month;i++)
	{
		switch(i)
		{
		    case 1:case 3:case 5:case 7:case 8:case 10: case 12:
			{
			    d=31;
			    break;
			}	
			case 4:case 6:case 9:case 11:
			{
				d=30;
				break;
			}
			case 2:if(pdate.year%400==0||pdate.year%4==0&&pdate.year%100!=0)
			       {
			       	    d=29;
			       	    break;
				   }
				   else
				   {
				   	    d=28;
				   	    break;
				   }
		 } 
		 day+=d;
	 } 
	day+=pdate.day;
	printf("%d.%d.%d����һ��ĵ�%d��",pdate.year,pdate.month,pdate.day,day);
	return 0;
}
