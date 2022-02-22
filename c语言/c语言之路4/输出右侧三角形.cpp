#include<stdio.h>
int main()
{
	int i,j,k,m;
	while(~scanf("%d",&i))
	{
		for(j=0;j<i;j++)
		{
			for(k=0;k<j;k++)
			{
				for(m=0;m<j-1;m++)
				{
				   printf(" ");
				}
				printf("* ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
