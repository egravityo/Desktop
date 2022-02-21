#include<stdio.h>
int main()
{   
    char c='s';
	char* pc=&c;
	*pc='A';
	printf("%c\n",c); 
    /* 
	int b=293;
	int *p=&b;
	*p=335;
	printf("%p\n",p);
	printf("%d\n",b);
	*/ 
	return 0; 
 } 
