#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int ret = add(a, b);
	printf("%d", ret);
	return 0;
}
