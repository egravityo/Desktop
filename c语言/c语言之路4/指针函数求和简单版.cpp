//指针函数求和简单版 
#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int (*p)(int m,int n);
	p = add;
	printf("%d",(*p)(m,n));
	return 0;
}
