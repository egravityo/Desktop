#include<stdio.h>
int main()
{ 
    int input=0; 
	do
	{
		printf("********************\n"); 
		printf("*****猜数字游戏*****\n"); 
		printf("***1.Play  2.Exit***\n"); 
		scanf("%d",&input);
		switch(input)
		{
			case 1: printf("游戏要开始了"); 
			break; 
			case 2: printf("确认离开"); 
			break; 
			default : printf("选择错误");
		    break; 
		}
	} while(input);
	return 0;
 } 
