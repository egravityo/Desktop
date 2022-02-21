//Ö¸Õë
#include<stdio.h>
int main()
{
	int arr[10]={700,200,500}; 
	int *pa;
	int *pb; 
	int a,b;
	a = 100;
	b = 200;
	pa =&a;
	pb = arr;
	*pa = 300;
	printf("a=%d\n",a);
	printf("*pb=%d\n",*pb);
	return 0; 
 } 
