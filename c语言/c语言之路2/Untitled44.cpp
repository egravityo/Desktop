/*大写字母转换为小写字母的函数strlwr()*/  
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[100]; 
	gets(arr1);
	strlwr(arr1);
	printf("%s",arr1); 
	return 0;
 } 
