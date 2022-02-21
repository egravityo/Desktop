#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	int sum = 0;
	int m;
	for (i = 0;i < 2;i++)
	{
		scanf("%d", &m);
		sum += m;
	}
	printf("%d\n", sum);
	return 0;
}