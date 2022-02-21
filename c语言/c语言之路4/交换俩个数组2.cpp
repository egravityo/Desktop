//交换俩个数组2
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[15];
	char arr2[15];
	char arr3[15];
	gets(arr1);
	gets(arr2);
	strcpy(arr3,arr1);
	strcpy(arr1,arr2);
	strcpy(arr2,arr3);
	puts(arr1);
	puts(arr2);
	return 0;
 } 
