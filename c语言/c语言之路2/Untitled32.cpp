/*回文素数问题：请编写求出所有大于10且小于1000的回文素数，
并求出该范围中回文素数的个数。要求每行输出4个数，最后输出
回文素数的个数*/
//原始版 
#include<stdio.h>
int main()
{
	int i,k,t;
	int a,b,c; 
	int flag=1;
	int count=0; 
	for(i=11;i<1000;i+=2)
	{
		flag=1;
		for(k=2;k<i;k++)
		{
			if(i%k==0)
			{
				flag=0;
			}
		}
		if(flag!=0)
		{
			a=i/100;
			b=i/10%10;
			c=i%10;
			if(a==c||(a==0)&&(b==c)) 
			{
				count++;
				printf("%3d ",i); 
				if(count%4==0)
				{
				   printf("\n");
				 } 
		    	 
			}
		}
	 } 
     printf("\n一共有%d个回文素数",count); 
	 return 0; 
 } 
