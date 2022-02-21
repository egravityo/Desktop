//KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵）
#include<stdio.h>
int main()
{
	int i,j,m,n;
	int arr[15][15];
	scanf("%d%d",&m,&n); 
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		} 
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",arr[j][i]); 
		}
		printf("\n");
	}
	return 0;
	/*
	2 3 4  a[0][1] = a[1][1]
	5 6 7  a[
	8 9 0
	1 2 3   ->
	            2 5 8 1
	            3 6 9 2
	            4 7 0 3*/
}

