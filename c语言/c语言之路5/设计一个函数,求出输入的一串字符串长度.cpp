//���һ������,��������һ���ַ������� 
#include<stdio.h>
int fun(char *p)
{
	int count=0;
	while(*p!='\0')
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char arr[256]={0};
	printf("������һ���ַ���");
	gets(arr);
	int ret = fun(arr);
    printf("%d",ret);
	return 0;
 } 
