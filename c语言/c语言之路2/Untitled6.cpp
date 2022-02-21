//¼ÆËã1!+2!+3!+...+10! 
#include<stdio.h>
int main()
{
	int ret=1;
	int n;
	int k=0;
	for(n=1;n<11;n++)
	{
	    ret=ret*n;
	    k=k+ret;
	}
	printf("%d",k);
	return 0;
}
