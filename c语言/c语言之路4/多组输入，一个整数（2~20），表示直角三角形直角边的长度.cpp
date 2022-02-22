//多组输入，一个整数（2~20），表示直角三角形直角边的长度
#include<stdio.h>
int main()
{
	int j,k,i;
	while(scanf("%d",&i)!=EOF)
	{
	   for(j=0;j<i;j++)
	   {
	   	  for(k=0;k<=j;k++)
		  {
			 printf("*");
		  } 
	      printf("\n");
	   }
	   printf("\n");
	}
}
