//不创建第三个变量,交换俩个整数的值
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d,b = %d\n",a,b);
	a = a - b;
	b = a + b;
	a = b - a;
	printf("a = %d,b = %d\n",a,b);
	return 0; 
 } 
