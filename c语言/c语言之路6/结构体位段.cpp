//结构体位段
#include<stdio.h>
struct S
{
	int a:2;
	int b:5;
	int c:10;
	int d:30;
};
int main()
{
	struct S s1;
	printf("%d",sizeof(s1));
	return 0;
 } 
