//�������룬һ��������1~20������ʾ�����εĳ��ȣ�Ҳ��ʾ���������
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
