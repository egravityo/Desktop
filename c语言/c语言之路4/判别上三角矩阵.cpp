//?б??????Ǿ???
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[15][15]={0};
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
		{
	        scanf("%d",&arr[i][j]);		
	        if(i>j)
	        {
	        	if(arr[i][j]!=0)
	        	{
	        		printf("NO");
	        		return 0;
				}
			}
	    }
	}
	printf("YES\n");
	return 0;
 } 
