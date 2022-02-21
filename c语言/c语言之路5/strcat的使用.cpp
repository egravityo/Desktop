//strcatµÄÊ¹ÓÃ
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]={"abc"};
	char arr2[]={"defg"};
	char *p1,*p2;
	p1=arr1;
	p2=arr2;
	strcat(p1,p2);
	puts(arr1);
	return 0;
 } 
