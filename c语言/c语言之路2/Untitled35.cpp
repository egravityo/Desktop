#include<stdio.h>
#include<string.h>
int main() 
{
	char arr1[10];
	gets(arr1);
	char arr2[10];
	gets(arr2);
	strcat(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}
