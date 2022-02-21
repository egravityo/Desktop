//设计一个函数,求出输入的一串字符串长度 
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
	printf("请输入一串字符：");
	gets(arr);
	int ret = fun(arr);
    printf("%d",ret);
	return 0;
 } 
