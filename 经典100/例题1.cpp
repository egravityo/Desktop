/*经典100例第一题:
 有1，2，3，4四个数字，能组成多少个互不相同
 且无重复数字的三位数？都是多少？*/  
#include<stdio.h>
int main()
{
	int i,j,k;
	int al[100];
	int sum=0;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++) 
		{
			for(k=1;k<=4;k++) 
			{
			      if(i!=j&&j!=k&&i!=k) 
				  {
				  	al[sum]=i*100+j*10+k;
				  	sum+=1;
		          }
			}
		}
	 } 
     printf("一共能组成%d个无重复的三位数\n",sum);
     printf("它们分别是: ",al[sum]); 
     for(i=0;i<sum;i++)
     {
     	printf("%d ",al[i]);
	 }
	 return 0; 
}
