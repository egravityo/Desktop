//strstrµÄÊ¹ÓÃ
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[30]="abcdef";
	char arr2[]="abc";
	char* ret=strstr(arr1,arr2);
	if(ret==NULL)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
 } 
