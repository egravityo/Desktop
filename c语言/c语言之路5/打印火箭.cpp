//��ӡ���
#include<stdio.h>
int main()
{
	int i,j,line;
	int k; 
	while((scanf("%d",&line))!=EOF)
	{
		//��ӡ����һ���� 
		for(i=0;i<line;i++)
		{
			//��ӡÿһ��
			//��ӡ�ո�
			for(j=0;j<line-1-i;j++)
			{
				printf("  ");
			 } 
			//��ӡ*
			for(k=0;k<=i;k++)
			{
				printf("*"); 
			 } 
			printf("\n");
		 } 
		//��ӡ����һ����
		for(i=0;i<line-1;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("  ");
			}
			for(k=0;k<line-1-i;k++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
 } 
