//KiKi得到了一个n行m列的矩阵，现在他想知道第x行第y列的值是多少
#include<stdio.h>
int main()
{
	int n,m,a,b,o,p;
    int count=0;
	int arr[15][15];
    scanf("%d%d",&n,&m);
    for(a=0;a<n;a++)
    {
    	for(b=0;b<m;b++)
    	{
    		scanf("%d",&arr[a][b]);
		}
	}
	for(a=0;a<n;a++)
    {
    	for(b=0;b<m;b++)
    	{
    	    printf("%-2d ",arr[a][b]);
    	    count++;
		}
		if(count%m==0)
		{
			printf("\n");
		 } 
	}
	scanf("%d%d",&o,&p);
	printf("%d",arr[o-1][p-1]);
	return 0; 
 } 
