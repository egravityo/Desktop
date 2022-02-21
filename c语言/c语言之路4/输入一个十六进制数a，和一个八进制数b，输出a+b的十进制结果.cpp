//输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%x%o",&a,&b); 
	int ret = a + b;
	printf("%d\n",ret);	
	return 0;
}
