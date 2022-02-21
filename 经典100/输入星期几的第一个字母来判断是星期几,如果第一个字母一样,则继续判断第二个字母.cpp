/*输入星期几的第一个字母来判断是星期几,如果第一个字母一样,则继续判断第二个字母*/
//Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
#include<stdio.h>
int main()
{
	char ch,ch1,ch2;
	printf("请输入一个字母：");
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
	    printf("\n哦豁，再输一个咯：");
	    ch1 = getchar();
		if(ch1=='u')
		printf("Tuesday");
		else
		printf("Thursday");
		break;
	    case 'S':
	    printf("\n哦豁，再输一个咯：");
	    getchar();
	    ch2 = getchar();
		if(ch2=='u')
		printf("Sunday");
		else
		printf("Saturday");
		break;
		default:
		printf("我怀疑你在搞我!");
		break; 
	}
	return 0; 
 } 
