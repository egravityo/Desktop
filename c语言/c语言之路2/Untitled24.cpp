/*����һ�������ķ���������Χ������Ԫ�ص�ƽ��ֵ������3λС��
���ƽ��ֵ�����磬5�Ľײ�
 3 2 1 2 3
 3 1 1 2 1 
 2 3 4 1 2
 4 3 4 2 2
 4 1 4 2 9*/
#include<stdio.h>
#define N 5 
int main()
{
	int arr[N][N]={{3,2,1,2,3},{3,1,1,2,1},{2,3,4,1,2},{4,3,4,2,2},{4,1,4,2,9}};
	float sum=0.000;
    float average=0.000;
	int count=0; 
	int i,k,j,delaytime=100000000;
	for(i=0;i<=N-1;i++)
	{
		for(k=0;k<=N-1;k++)
		{
			printf("%3d",arr[i][k]);
			if(i==0||i==N-1||k==0||k==N-1)
			{
				sum+=arr[i][k];
				count++; 
			 } 
			for(j=1;j<=delaytime;j++)//Ūʱ��,����������ô����� 
			{
				
			}
		}
		printf("\n");
	}
	average=sum/count; 
	printf("�ܱ�Ԫ��һ����%d��\n",count); 
	printf("sum=%.3f\n",sum);
	printf("average=%.3f\n",average); 
	return 0; 	
 } 
