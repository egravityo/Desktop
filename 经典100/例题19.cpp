/*一个数如果刚好等于它所有的因数之和，就称其"完数",例如
6=1+2+3,找出1000以内所有的完数*/
#include<stdio.h> 
int main()
{
	int i,k;
	int sum=0;
	int count=0; 
	printf("1000以内的完数分别如下：\n"); 
	for(i=2;i<1001;i++)
	{
		sum=0;
		for(k=1;k<i;k++)
		{
			if(i%k==0)
			{
		        sum+=k;
			}
		 } 
		 if(sum==i)
		 {
		 	printf("%d ",i);
		 	count++; 
		 }
	 } 
	 printf("\n一共有%d个",count);
	return 0; 
 } 
