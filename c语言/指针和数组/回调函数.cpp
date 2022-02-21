//»Øµ÷º¯Êý 
#include<stdio.h>
void print(char* str)
{
	printf("ºÇºÇ:%s\n",str);
}
void test(void (*p)(char*))
{
	printf("test\n");
	p("China");
}
int main()
{
	test(print);
	return 0;
}

