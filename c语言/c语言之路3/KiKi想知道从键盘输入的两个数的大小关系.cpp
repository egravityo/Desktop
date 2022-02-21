//KiKi想知道从键盘输入的两个数的大小关系 
#include<stdio.h>
int main()
{
	int i,k;
	scanf("%d%d",&i,&k);
	if(i == k)
	{
		printf("%d == %d",i,k); 
	}
	else if(i > k)
	{
		printf("%d > %d",i,k); 
	}
	else
	{
		printf("%d < %d",i,k);
	}
	return 0;
 } 
