//Ò»ÐÐ×Ö·û¶ÁÈ¡
#include<stdio.h>
int main()
{
	int count = 0,i=0;
	char arr[100]={0};
	gets(arr);
	while(arr[i]!='0')
	{
    	if(arr[i] == 'A')
    	{
    		count++;
		}
		else if(arr[i]  == 'B')
		{
			count--;
		}
		i++; 
	}
	if(count > 0)
	{
		printf("A");
	 } 
	else if(count < 0)
	{
		printf("B");
	}
	else
	{
		printf("E");
	}
	return 0;
 } 
