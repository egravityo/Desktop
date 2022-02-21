//×Ö·û´®ÅÅĞò 
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[15]={0};
	char arr2[15]={0};
	char arr3[15]={0};
	gets(arr1);
	gets(arr2);
	gets(arr3);
	int temp=0;
	if(strcmp(arr1,arr2)<=0)
    {
    	strcpy(arr1,arr2); 
	}
	else if(strcmp(arr1,arr3)<=0)
	{
	    strcpy(arr1,arr3);
	 } 
	else if(strcmp(arr2,arr3)<=0)
	{
		strcpy(arr2,arr3);
	}
	puts(arr1);
	puts(arr2);
	puts(arr3); 
	return 0; 
 } 
