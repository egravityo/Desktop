//�������룬һ��������2~20������ʾֱ��������ֱ�Ǳߵĳ���
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
