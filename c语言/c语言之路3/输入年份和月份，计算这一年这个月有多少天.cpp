//KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�
//������ݺ��·ݣ�������һ��������ж�����
//�������� 
#include<stdio.h>
/*
int main()
{
	int year,month;
    while(scanf("%d%d",&year,&month)!=EOF)
	{
	    switch(month)
	    {
	    	case 1||3||5||7||8||10||12:printf("31");
	        break;
	        case (4||6||9||11):printf("30");
			break;
	        case 2:printf("28");
			break;
			default:printf("�������");
			break; 
		}
		
	 } 
    
	return 0;
}*/
int main()
{
	int year,month;
	while(scanf("%d%d",&year,&month)!=EOF)
	{
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		{
			printf("31");
		}
		else if(month==2)
		{
			if(year%400==0||(year%4==0&&year%100!=0))
			{
				printf("29");
			}
			else
			{
				printf("28");
			}
		}
		else
		{
			printf("30");
		}
	}
	return 0;
}
