//输出100以内的素数
#include<stdio.h>
int main()
{
	int i=0;
	int j=0;
    for(i=2;i<101;i++)
    {
    	int flag=1;
    	for(j=2;j<i;j++)
    	{
    		if(i%j==0)
    		{
    			flag=0;
			}
		}
		if(flag==1)
		{
			printf("%d  ",i);
		}
	}
	return 0;
} 
