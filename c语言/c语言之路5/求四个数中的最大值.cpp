//求4个数中的最大数
#include<stdio.h>
int cmp(int x,int y)
{
	if(x>y)
	return 0;
	else
	return 1; 
 } 
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int max=a;
    if(cmp(max,b))
    {
    	max=b; 
	}
	if(cmp(max,c))
	{
		max=c; 
	 } 
	if(cmp(max,d))
	{
		max=d;
	}
	printf("Max=%d\n",max);
	return 0;
}
