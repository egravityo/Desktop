//ÊäÈë4*3¾ØÕó
#include<stdio.h>
int main()
{   
	int i, j;
	int m, n;
	int arr[10][10] = { 0 };
	scanf_s("%d%d", &m, &n);
	for (i = 0;i < m;i++)
	{
		for (j = 0;j < n;j++)
		{
			scanf_s("%d", &arr[i][j]);
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}