//�����ĸ�С��10�������Ҳ��ظ�������ɶ��ٸ���ͬ����λ��
//���Ƕ���
#include<stdio.h>
int main()
{
	int a;//��λ
	int b;//ʮλ
	int c;//��λ
	int i,j,k; 
	int arr[4];
	int sum=0;
	for(i=0;i<4;i++)
	{
		printf("�������%d����\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++) 
	{
		a=arr[i];
		for(j=0;j<4;j++)
		{
			b=arr[j];
			for(k=0;k<4;k++)
			{
			   c=arr[k];
			   if(i!=j&&i!=k&&j!=k)
			   {
			   	   printf("%d\n",a*100+b*10+c);
			   	   sum++;
			   }
		    }
		}
	}
	printf("һ����%d�����ظ�����",sum); 
	return 0; 
	
 } 
