#include<stdio.h>
int main()
{
	char ch1,ch2; 
	int choice; 
	printf("***��ӭ������ĸת����***\n");
	printf("***������һ���Ϸ���ĸ��***\n");
	scanf("%c",&ch1);
	choice=choice+1*('a'<ch1&&ch1<'z')+2*('A'<ch1&&ch1<'Z');
	switch(choice)
	{
		case 0:printf("������Ĳ���һ����ĸ\n");break;
		case 1:printf("ch2=%c\n",ch2=ch1+32);break; 
		default:printf("ch2=%c\n",ch2=ch1-32); 
	}
    return 0; 	 
 } 
