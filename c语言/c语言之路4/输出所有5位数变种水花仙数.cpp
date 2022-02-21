/*输出所有5位数变种水花仙数
655 = 6 * 55 + 65 * 5
1461 = 1*461 + 14*61 + 146*1    */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=100;i<99999;i++)
	{
		int sum=0;
		for(j=10;j<i;j*=10)
		{
			sum+=(i/j)*(i%j); 
		}
		if(sum==i)
		{
			printf("%d ",sum);
		 } 
	}
	return 0;
 } 
