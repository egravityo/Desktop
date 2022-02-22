//输入一个十六进制a和一个八进制b,求它们的十进制和
#include<stdio.h> 
int main()
{/*
	int a,b;
	int c;
	scanf("%x %o",&a,&b);
    c = a + b;
	printf("%x %o",a,b);
	printf("\n%d",c);
	return 0; */
	int a = 0;
	int b = 0;
	scanf("%x %o",&a,&b);
	int c = a + b;
	printf("%d",c);
	return 0;
}
