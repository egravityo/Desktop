//寻找1000以内的完数
#include<stdio.h>
int main()
{
	int i;
    int j;
    for(i=2;i<1001;i++)
    {
    	long sum=0;
    	for(j=1;j<i;j++)
    	{
    		if(i%j==0)
    		{
    			sum+=j;
			}
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
 } 
