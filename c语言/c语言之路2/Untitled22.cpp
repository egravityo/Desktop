//��5��6��7��8����ɶ��ٸ���ͬ����λ�����ֱ��Ƕ��٣� 
#include<stdio.h>
int main()
{
	int i,j,k;
	int sum=0;
	printf("�ֱ����£�\n");
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
	 printf("һ����%d��\n",sum); 
	return 0;
 } 
