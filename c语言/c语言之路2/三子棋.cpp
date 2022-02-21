//三子棋
#include<stdio.h>
void menu()
{
	printf("********************\n");
	printf("***1.Play  0.Exit***\n");
	printf("********************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("Please input：\n");	
	    scanf("%d",&input);  
		switch(input)
		{
	    case 1:
			printf("三子棋\n"); 
			break;
		case 0:
		    printf("离开游戏\n"); 
			break;
		default:
		    printf("输入错误，请重新输入!\n"); 
			break; 
		} 
	} while (input); 
 } 
int main()
{
	test();
	return 0; 
} 
