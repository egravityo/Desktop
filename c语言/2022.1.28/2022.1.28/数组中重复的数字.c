/*��һ������Ϊn��������,��������2��3��1��0��2��5��3,����ֵΪ2,˵��:2��3����
�Ե�*/
#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int n;
	scanf_s("%d", &n);
	int i,j;
	int arr[100];
	int m = 0;
	scanf_s("%d", &arr[0]);
	for (i = 1;i < n;i++)
	{
		scanf_s("%d", &arr[i]);
		for (j = 0;j < i;j++)
		{
			if (arr[j] == arr[i])
			{
				scanf_s("%d", &m);
				printf("%d", m);
				return 0;
			}
		}
	}
	printf("�Ҳ�����");
	return 0;
}