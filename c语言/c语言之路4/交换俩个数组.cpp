//交换俩个数组 
#include<stdio.h>
int main()
{
	char arr1[15]={0};
	char arr2[15]={0};
	char arr3[15]={0}; 
	gets(arr1);
	gets(arr2);
	int i;
	for(i=0;arr1[i]!='\0';i++)
	{
	   	arr3[i]=arr1[i]; 
	} 
	arr3[i]='\0';
	for(i=0;arr2[i]!='\0';i++)
    {
    	arr1[i]=arr2[i];
	}
    arr1[i]='\0';
    for(i=0;arr3[i]!='\0';i++)
	{
		arr2[i]=arr3[i];
	 } 
	arr2[i]='\0';
	puts(arr1);
	puts(arr2);	
	return 0;
}
