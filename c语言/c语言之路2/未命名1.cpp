#include<stdio.h>
void game()
{
	printf("�Ƿ�Ҫ��ʼ��Ϸ����Y/N):\n");
	char i;
	scanf("%c",&i);
	getchar(); 
	if(i=='Y')
	printf("���Ѿ�ȷ����");
	else
	printf("�ݰ�,���ͣ�"); 
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
        printf("Please input��");
        scanf("%d",&input);
	    switch(input)	
		{
	        case 1:game(); 
		    break;
			case 0:printf("�뿪��Ϸ"); 
			break;
			default:printf("ѡ�����,������ѡ��"); 
			break;	
		 }
	 }while(input);
 } 
int main()
{
    test();
	return 0; 
 } 
