//输出杨辉三角前n行
#include<stdio.h>
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1*/
int main()
{
	int i,j;
	int n;
	int arr[100][100]; 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		arr[i][i]=1;
		arr[i][0]=1; 
	}
    for(i=2;i<=n;i++)
	{
		for(j=1;j<n;j++)
		{
			arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
		}
	 } 
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%-3d ",arr[i][j]);
	    }
	    printf("\n");
	}
    return 0;
 } 
