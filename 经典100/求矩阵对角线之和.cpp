//��һ��3*3����Խ���֮��
/* 1 2 3 
   5 4 6
   8 2 4 */ 
#include<stdio.h>
#define N 3 
int main()
{
	int i,j;
	int sum = 0; 
	int count = 0; 
	int arr[N][N]={0};
	printf("������9����:");
	for(i=0;i<N;i++) 
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&arr[i][j]); 
		}
	}
	sum=arr[0][0]+arr[0][N-1]+arr[1][N-2]+arr[2][0]+arr[2][N-1]; 
	printf("�����������£�\n"); 
	for(i=0;i<N;i++) 
	{ 
		for(j=0;j<N;j++)
		{
			if(count%3==0) 
			{
				printf("\n");
				printf("\n"); 
			}
			printf("%3d   ",arr[i][j]); 
			count++; 
		}
	}
    printf("\n\n�Խ��ߵĺ�Ϊ %d",sum);
	return 0; 
 } 
