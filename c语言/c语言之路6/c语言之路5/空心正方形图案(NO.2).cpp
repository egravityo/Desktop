//空心正方形图案(NO.2)
#include<stdio.h>
int main()
{
	int n;
	while(~(scanf("%d",&n)))
    {
    	int i,j,k;
    	for(i=0;i<n;i++)
    	{
    		for(j=0;j<n;j++)
			{
				if(i==0||i==n-1||j==0||j==n-1)
				{
				   printf("* ");	
			    }
			    else
			    {
			    	printf("  ");
				}
			 } 
			printf("\n");
		}
	}
	return 0; 
 } 
 
