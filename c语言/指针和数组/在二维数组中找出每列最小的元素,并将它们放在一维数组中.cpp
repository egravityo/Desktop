//���3*4�Ķ�ά������ÿһ���е���С��Ԫ�أ��������ŵ�
//һά������ 
#include<stdio.h>
#define M 3
#define N 4
void fun(int (*p1)[N],int M,int N,int *p)
{
	int i=0,j=0;
	int min=(*p1)[0];
	for(;j<N;j++)
	{
		for(;i<M;i++)
		{
			if(min>(*(p1+j))[i])
			{
				min=((*p1+j))[i];
				arr[j]=min;
			}
		}
	}
}
int main()
{
	int arr[M][N];
	int arr1[N];
    fun(arr,M,N,arr1);
    int i=0;
    for(;i<M;i++)
    {
    	int j=0;
    	for(;j<N;j++)
    	{
    		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("ÿһ����С��Ԫ���ǣ�\n");
    for(;i<4;i++)
    {
    	printf("%d ",arr1[i]);
	}
	return 0;
}
