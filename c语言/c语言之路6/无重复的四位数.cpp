#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
int main()
{
	int i, j, k, l;
	int count = 0;
	for (i = 1;i < 5;i++)
	{
		for (j = 1;j < 5;j++)
		{
			for (k = 1;k < 5;k++)
			{
				for (l = 1;l < 5;l++)
				{
					if (i != j && i != k && i != l)
					{
						count++;
						printf("%d ", i * 1000 + j * 100 + k * 10 + l);
					}
				}
			}
		}
	}
	printf("一共有%d个", count);
	return 0;
} 
