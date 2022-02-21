/*在一个长度为n的数组里,例如输入2、3、1、0、2、5、3,返回值为2,说明:2、3都是
对的*/
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
	printf("找不到！");
	return 0;
}