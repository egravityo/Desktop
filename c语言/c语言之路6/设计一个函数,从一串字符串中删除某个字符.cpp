//设计一个函数,从一串字符串中删除某个字符
#include<stdio.h>
void delchar(char p[],char c)
{
	char* s;
	for(s=p;*s!='\0';s++)
	{
		if(*s!=c)
		{
		   *p++=*s;
		}
	}
	*p='\0';
}
int main()
{
	char arr[20];
	char ch;
	gets(arr);
	scanf("%c",&ch);
	delchar(arr,ch);
	printf("删改后：%s",arr);
	return 0;
}
