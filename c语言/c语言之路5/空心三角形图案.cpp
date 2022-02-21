//空心三角形图案
#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("* ");
		 } 
		else if(i!=n-1)
		{
			//打印* 
		    printf("* "); 
		    //打印空格
		    for(j=0;j<=i-2;j++)
		    {
	 	     	printf("  ");
		    }
		    //打印*
		    printf("* "); 
		} 
		else
		{
			for(i=0;i<n;i++)
			{
				printf("* "); 
			}
		}
		printf("\n");
	}
	return 0;
 } 
