#include<stdio.h>
int main()
{/*
	char ch;
	int count_A=0,count_B=0;
	while(((ch = getchar())!='0')&&(ch!=EOF))
    {
    	if(ch == 'A')
    	{
    		count_A++; 
		}
		if(ch == 'B')
		{
		    count_B++;
		}
    }
    if(count_A==count_B)
    {
    	printf("E");
	}
	if(count_A>count_B)
    {
    	printf("A");
	}
	if(count_A<count_B)
    {
    	printf("B");
	}*/
	int ch=0;
	int count = 0; 
	while(((ch = getchar())!='0')&&(ch!=EOF))
	{
	    if(ch == 'A')
		{
			count++; 
		 } 
		if(ch == 'B')
		{
			count--; 
		 } 
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
