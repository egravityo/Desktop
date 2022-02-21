#include<stdio.h>
int main()
{/*
	int a = 0;
	int b = 5;
	int c = a&&b;
	int d = a||b; 
	printf("c=%d\n",c);
	printf("d=%d\n",d);*/
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d £¬b = %d\n",a,b); 
	 
	return 0; 
}
