//结构体数组初始化 
#include<stdio.h>
struct employee
{
	char name[5];
	int age;
	int wage;
}boss[3]={{"chen",23,22300},{"biao",24,22000},{"ren",25,23490}}; 
int main()
{
	int i;
	scanf("%d",&i);	
    printf("%d",boss[i].age);	 
	return 0;
}
