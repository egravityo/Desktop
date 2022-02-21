//使用指针交换俩个整形变量的值,并输出
#include<stdio.h>
int main()
{
	/*不使用第三个变量,交换俩个变量
	int a,b;
	a = 100;
	b = 200;
    printf("交换前：\n"); 
	printf("a=%d ",a);
	printf("b=%d\n",b);
    a = a-b;
    b = a+b;
    a = b-a;
    printf("交换后：\n");
    printf("a=%d ",a);
	printf("b=%d\n",b);*/
	int *pa;
	int *pb;
	int swap=0;//用于交换 
	int a=100,b=200;
	pa = &a;
	pb = &b;
	printf("交换前：\n");
	printf("*pa=%d pb=%d",*pa,*pb); 
	swap = *pa;
	*pa = *pb;
	*pb = swap;
	printf("交换后：\n");
	printf("*pa=%d pb=%d",*pa,*pb); 
	return 0;
 } 
