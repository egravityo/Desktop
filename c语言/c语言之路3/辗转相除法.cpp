#include<stdio.h>
int main()
{
	int a,b,s;
	scanf("%d%d",&a,&b);
	while(!b==0)
	{
		s = a%b;
		a = b;
		b = s;
	}
	printf("%d",a);
	return 0;
}
