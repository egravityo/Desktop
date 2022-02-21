#include<stdio.h>
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
int main()
{
	int a=7,b=6,c=8;
	int s;
	s=add(add(a,b),c--);
	printf("%d",s);
	return 0;
}

