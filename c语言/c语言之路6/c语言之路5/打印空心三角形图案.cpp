//打印空心三角形图案
#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++)
			{
				if(j==0||i==n-1||i==j)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
 } 
