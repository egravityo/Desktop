#include<stdio.h>
int main()
{
	char arr[]="AaEeIiOoUu";
	char ch;
 
	while((ch = getchar())!=EOF)
	{
		int i=0;
		for(i=0;i<10;i++)
		{
			if(arr[i] == ch)
		    {
			    printf("是元音\n"); 
	            break; 
		    }  
		 } 
        if(i==10)
        {
        	printf("不是元音\n");
		}
        getchar(); 
	}
	return 0;
}
