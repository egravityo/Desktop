#include<stdio.h>
int main()
{
	char arr[5][20];
	int i=0;
	for(i=0;i<5;i++);
	{
		gets(arr);
	}
	char (*p)[20];
	for(i=0;i<5;i++)
	{
		printf("%s",*p++); 
	}
	return 0;
}
