//最大公约数
#include<stdio.h>
int main()
{
	int m,n;
	int i;
	scanf("%d%d",&m,&n);
	for(i = m>n?n:m;i>=1;i--)
	{
	   if(m%i==0&&n%i==0)
       printf("%3d ",i);
       break;
	}
	return 0;
 } 
