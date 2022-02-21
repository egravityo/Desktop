//
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i=0;
	for(i=0;i<10;i++)
	{
		str[i]='a';
	 } 
	char  str1[10];
	strcpy(str1,str);
	puts(str1);
    
	return 0;
}
