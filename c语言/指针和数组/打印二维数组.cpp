//打印二维数组 
#include<stdio.h>
void print(int (*p)[5],int x,int y)
{
	int i=0;
	for(i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			//printf("%2d ",*(*(p+i)+j));
			//printf("%2d ",p[i][j]);
			printf("%2d ",(*(p+i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
	print(arr,3,5);
	return 0;
}
