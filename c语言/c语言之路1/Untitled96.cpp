/*��1��2��3��4�ĸ����֣�����ɶ��ٸ�������ͬ
 �����ظ����ֵ���λ�������Ƕ��٣� */
#include<stdio.h>
int main()
{
	int i;j;k;
    int g;
	int arr[100];
	int sum=0; 
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			for(k=1;k<=4;k++)
			{
				if(i!=j&&i!=k&&j!=k)
				g=i*100+j*10+k; 
				sum++;
			 } 
		 } 
	}
	for(i=0;i<sum;i++)
	{
		printf("%d\n",arr[g]);
	}
 } 
