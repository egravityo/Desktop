#include<stdio.h>
void game()
{
	printf("是否要开始游戏？（Y/N):\n");
	char i;
	scanf("%c",&i);
	getchar(); 
	if(i=='Y')
	printf("你已经确定！");
	else
	printf("拜拜,不送！"); 
 } 
void menu()
{
	printf("***************\n");
	printf("**1.PlAY 0.EXIT\n");
	printf("***************\n"); 
 } 
void test()
{
	int input;
	do
	{
		menu();
        printf("Please input：");
        scanf("%d",&input);
	    switch(input)	
		{
	        case 1:game(); 
		    break;
			case 0:printf("离开游戏"); 
			break;
			default:printf("选择错误,请重新选择！"); 
			break;	
		 }
	 }while(input);
 } 
int main()
{
    test();
	return 0; 
 } 
