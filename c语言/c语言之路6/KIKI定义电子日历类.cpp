//KIKI定义电子日历类
#include<stdio.h>
struct Tdate 
{ 
    int year;
    int month;
    int day;
};
int main()
{
	struct Tdate s;
	scanf("%d%d%d",&s.year,&s.month,&s.day); 
	printf("%d/%d/%d",s.day,s.month,s.year); 
    return 0;	
} 
