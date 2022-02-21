//Êä³öµ¹Èý½ÇÐÎ
#include<stdio.h>
int main()
{
	int i,j,k;
	while(scanf("%d",&i)!=EOF)
	{
	    for(j=i;j>0;j--)
	    {
	    	for(k=j;k>0;k--)
	    	{
	    		printf("*"); 
			}
			printf("\n");
		}
	}
	return 0;
 } 
