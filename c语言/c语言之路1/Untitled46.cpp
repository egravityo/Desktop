#include<stdio.h>
int main()
{
	char ch1,ch2; 
	int choice; 
	printf("***欢迎来到字母转换器***\n");
	printf("***请输入一个合法字母：***\n");
	scanf("%c",&ch1);
	choice=choice+1*('a'<ch1&&ch1<'z')+2*('A'<ch1&&ch1<'Z');
	switch(choice)
	{
		case 0:printf("您输入的不是一个字母\n");break;
		case 1:printf("ch2=%c\n",ch2=ch1+32);break; 
		default:printf("ch2=%c\n",ch2=ch1-32); 
	}
    return 0; 	 
 } 
