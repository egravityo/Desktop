/*经典例题12：判断101~200之间的整数有多少个素数？
它们分别是多少？*/
#include<stdio.h>
#include<math.h>
int main()
{
	int  i,k; 
	int  count=0; 
	int flag=1; 
	int arr[100]; 
	for(i=101;i<=200;i+=2)
	{
		flag=1; 
		for(k=2;k<=int (sqrt(i));k++)
		{
			if(i%k==0)
			{
				flag=0;
			    break; 
			}
		}
		if(flag!=0) 
    	{  
    	   printf("%d ",i);
	 	   count++;
	    }
	 } 
	 printf("\n");
	 printf("101~200之间一共有%d个素数\n",count); 
	return 0; 
 } 
