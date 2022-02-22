//由5，6，7，8能组成多少个不同的三位数？分别是多少？ 
#include<stdio.h>
int main()
{
	int i,j,k;
	int sum=0;
	printf("分别如下：\n");
	for(i=5;i<=8;i++)
	{
		for(j=5;j<=8;j++)
		{
			for(k=5;k<=8;k++)
			{
				if((i!=j&&i!=k)&&(j!=k))
				{
					printf("%d%d%d\n",i,j,k);
					sum++;
				}
			}
		 } 
	 } 
	 printf("一共有%d个\n",sum); 
	return 0;
 } 
