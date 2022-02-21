#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="*&*&****";
	char arr2[]={0};
	float a=123.45;
	strcpy(arr2,arr1);
	printf("%s\n",arr2);
	printf("%p\n",arr2[0]);
	printf("%p\n",arr2[1]);
	printf("%4.2f\n",a);
	return 0;
 } 
