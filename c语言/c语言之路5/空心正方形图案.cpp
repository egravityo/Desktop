//空心正方形图案
#include<stdio.h>
int main()
/* 
{
	int i,j,n;
	scanf("%d",&n);
	char arr[100][100]={'*	'};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0||j==0||i==n-1||j==n-1)
			{
				printf("%c",arr[i][j]);
			}
		}
		printf("\n"); 
	}
	return 0;
 }*/
{
	int i,j,n;
	int k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			if(i==0||i==n-1)
			{
				for(k=0;k<n;k++)
			    {
				    printf("* ");
			    }
			}
			else
			{
				printf("* "); 
				//打印空格
				for(k=0;k<n-2;k++)
				{
					printf("  ");
				 } 
				printf("* ");
			}
			printf("\n");
	 } 
	return 0; 
 } 
