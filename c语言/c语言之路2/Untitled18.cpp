#include<stdio.h>
int main()
{ 
    int input=0; 
	do
	{
		printf("********************\n"); 
		printf("*****��������Ϸ*****\n"); 
		printf("***1.Play  2.Exit***\n"); 
		scanf("%d",&input);
		switch(input)
		{
			case 1: printf("��ϷҪ��ʼ��"); 
			break; 
			case 2: printf("ȷ���뿪"); 
			break; 
			default : printf("ѡ�����");
		    break; 
		}
	} while(input);
	return 0;
 } 
