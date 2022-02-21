#include<stdio.h>
void f(int n)
{
	if(n<5)
	{
		printf("%d",n);
	}
	else
	{
		printf("%d",n%5);
		f(n/5);
	}
}
int main()
{
	int n=27;
	f(n);
	return 0;
}

