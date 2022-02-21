//最小公倍数
#include<stdio.h>
int main()
{
	int i,m,n;
	scanf("%d%d",&m,&n);
	for(i=m>n?m:n;;i++)
	{
		if(i%m==0&&i%n==0)
		{
			printf("%2d",i);
			break;
		 } 
	}
	return 0;
}
