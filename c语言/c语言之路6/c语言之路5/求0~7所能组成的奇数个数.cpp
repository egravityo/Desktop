//求0~7所能组成的奇数个数
//解：题目不明确,没有说是几位数,也没有说每个数的使用次数 
#include<stdio.h>
int main()
{
	int sum=0;
	int count=0;
	int n;//代表位数
	for(n=1;n<=8;n++)
	{
	    if(n==1)
	    {
	    	count=4;
		}
		else if(n==2)
		{
			count=7*4;//俩位数有7*4种,三位有7*8*4种,四位有7*8*8*4... 
		}
		else
		{
			count*=8;
		}
		printf("%d位数有%d种\n",n,count);
		sum+=count; 
	 }
	 printf("一共有%d种",sum);
	return 0;
 } 
