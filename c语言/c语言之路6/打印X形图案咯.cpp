//¥Ú”°XÕº∞∏
#include<stdio.h>
int main()
{
	int N=0;
	scanf("%d",&N);
	int arr[N][N];
	int i,j;
    for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	{
    		if(i==j||i+j==N-1)
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
	return 0;
 } 
