//KiKi���n��m�еķ���������ҵ������ߵ��˵�λ�ã��������������������
#include<stdio.h>
int main()
{
	int i,j;
	int a,b;
	int m,n;
	scanf("%d%d",&m,&n);
	float arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&arr[i][j]);
		}
	}
	float max = arr[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<=arr[i][j]);
			{
				max = arr[i][j];
				a = i + 1;
			    b = j + 1;
			}
		}
	}
	printf("��%d��,��%d��",a,b);
	return 0;
}
