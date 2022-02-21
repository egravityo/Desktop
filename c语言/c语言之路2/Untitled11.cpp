/*打印100~200之间的素数*/
/* 
#include<stdio.h>
int main()
{
	int i;
	int k;
	int flag=1;
    int sum=0;
	for(i=101;i<=199;i+=2)
	{
		flag=1;
		for(k=2;k<i;k++)
		{
			if(i%k==0)
			{
				flag=0;break;
			}
		}
		if(flag!=0)
		{
			printf("%d ",i);
			sum++;
		}
	 } 
	printf("\n"); 
	printf("100~200之间一共有%d个素数",sum);
	return 0; 
 } 
 */
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int k;
	int count=0;
	for(i=101;i<=199;i+=2)
	{
		for(k=2;k<=sqrt(i);k++)
		{
			if(i%k==0)
			{
				break;
			}
		}
		if(k>sqrt(i))
		{
			printf("%d ",i);
			count++;
		}
	 } 
	 printf("\n一共有%d个素数",count);
	return 0; 
 } 
