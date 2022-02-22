//KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。
//上三角矩阵即主对角线以下的元素都为0的矩阵，
//主对角线为从矩阵的左上角至右下角的连线
#include<stdio.h>
int main()
{
    int i,j,flag=1;
    int arr[15][15];
    int m;
    scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		 } 
	}
	for(i=1;i<m;i++) 
	{
		for(j=0;j<i;j++)
		{
			if(arr[i][j]!=0)
			{
				flag=0; 
			 } 
		}
	}
	/*  1 2 3 4
        0 3 4 5
	    0 0 5 6
	    0 0 0 7 */
	if(flag)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
