//��ӡͼ��
#include<stdio.h>
int main()
{
	int i,j,k;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//��ӡһ�� 
		//��ӡ�ո�
		for(j=0;j<i;j++)
		{
			printf("  ");
		}
		//��ӡ*
		for(k=0;k<5;k++)
		{
			printf("* ");
		}
		//���� 
		printf("\n");
	}
	return 0;
 } 
