//多组输入，一个整数（1~20），表示正方形的长度，也表示输出行数。
#include<stdio.h>
int main() 
{
	int i,k,j;
	while(scanf("%d",&i)!=EOF)
	{
		for(k=0;k<i;k++)
		{
			for(j=0;j<i;j++)
			{
				printf("* ");
			}
			printf("\n"); 
		 } 
	}
	return 0;
}
