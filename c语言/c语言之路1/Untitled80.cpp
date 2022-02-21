#include<stdio.h>
int main()
{
	int j,i;
	for(j=1;j<=9;j++)
	{
		for(i=1;i<=j;i++)
		{
		    printf("%d*%d=%2d  ",i,j,i*j);
		}
	printf("\n");
    } 
}
