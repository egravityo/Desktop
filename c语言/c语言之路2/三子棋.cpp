//������
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
		printf("Please input��\n");	
	    scanf("%d",&input);  
		switch(input)
		{
	    case 1:
			printf("������\n"); 
			break;
		case 0:
		    printf("�뿪��Ϸ\n"); 
			break;
		default:
		    printf("�����������������!\n"); 
			break; 
		} 
	} while (input); 
 } 
int main()
{
	test();
	return 0; 
} 
