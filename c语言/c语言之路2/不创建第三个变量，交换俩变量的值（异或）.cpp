#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a = %d,b = %d\n",a,b);
	a = a ^ b ;
	b = a ^ b ;
	a = a ^ b;
	printf("������a = %d,b = %d\n",a,b); 
	return 0; 
 } 
