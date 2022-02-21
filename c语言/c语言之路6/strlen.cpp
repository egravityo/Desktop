//strlen
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]={'a','b','C'};
	char arr2[]={'a','b','C','\0'};
	printf("%d \n %d",strlen(arr),strlen(arr2));
	return 0;
 }
