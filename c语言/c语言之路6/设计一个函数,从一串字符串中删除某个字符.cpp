//���һ������,��һ���ַ�����ɾ��ĳ���ַ�
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
	printf("ɾ�ĺ�%s",arr);
	return 0;
}
