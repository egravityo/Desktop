//求2+22+222+2222
#include<stdio.h>
int main()
{
	int i,j;
	int m,n,t=0;
	printf("请输入一个整数（0~9)：");
	scanf("%d",&m);
	printf("\n再输入一个相加的个数：");
	scanf("%d",&n);
	long sum=0;//2+22+222+2222+22222
	for(i=0;i<n;i++)
	{
	    t = t + m; 
	    sum+=t;
	    t = t * 10;
	 } 
	printf("\nsum = %ld",sum);
	return 0;
 } 
