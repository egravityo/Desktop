//图案2
#include<stdio.h>
int main()
/*
{
	int i,j;
	int n;
	scanf("%d",&n);
	//打印一行
	int k;
	for(i=0;i<n;i++)
	{
	//打印空格
	   for(j=0;j<n-1-i;j++)	
	   {
	   	    printf("  ");
	   }
	   	//打印*
	   for(k=0;k<=i;k++)
	   {
	   	    printf("* ");
	   }
	   printf("\n");
    }
	return 0;
}*/
{
	int i,j;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j<n-1)
			{
				printf("  ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}
