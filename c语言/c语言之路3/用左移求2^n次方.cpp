#include<stdio.h>
int main()
{
	int i,k;
	while((scanf("%d",&i))!=EOF)
	{
		printf("%d",1<<i);
		printf("\n"); 
	}
	return 0;
}
