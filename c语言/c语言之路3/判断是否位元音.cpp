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
			    printf("��Ԫ��\n"); 
	            break; 
		    }  
		 } 
        if(i==10)
        {
        	printf("����Ԫ��\n");
		}
        getchar(); 
	}
	return 0;
}
