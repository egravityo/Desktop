/*�������ڼ��ĵ�һ����ĸ���ж������ڼ�,�����һ����ĸһ��,������жϵڶ�����ĸ*/
//Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
#include<stdio.h>
int main()
{
	char ch,ch1,ch2;
	printf("������һ����ĸ��");
	ch = getchar();
	switch(ch)
	{	
	    case 'M'://
	    printf("Monday"); 
	    break;
	    case 'F'://
	    printf("Friday"); 
	    break;
	    case 'W'://
	    printf("Wednesday"); 
	    break;
	    case 'T'://
	    getchar(); 
	    printf("\nŶ������һ������");
	    ch1 = getchar();
		if(ch1=='u')
		printf("Tuesday");
		else
		printf("Thursday");
		break;
	    case 'S':
	    printf("\nŶ������һ������");
	    getchar();
	    ch2 = getchar();
		if(ch2=='u')
		printf("Sunday");
		else
		printf("Saturday");
		break;
		default:
		printf("�һ������ڸ���!");
		break; 
	}
	return 0; 
 } 
