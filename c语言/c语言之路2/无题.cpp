#include<stdio.h>
int main()
{
	int  i = 100; 
	int count; 
	while(i != 0)
	{
		count++; 
		printf("%-3d ",i);
		if(count%4==0) 
		{
			printf("\n"); 
	    }
	    i--; 
	 } 
    return 0; 
 } 
