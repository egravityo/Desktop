/*һС���100�׸߿���������,ÿ����غ��ַ�������ԭ���߶ȵ�һ��;
�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�*/
#include<stdio.h>
int main()
{   /*
	int count=0
	int sum=0;
	for(count=1;count<=10;count++)
	{
		sum=sum+i+2*k;
		i=i/2; 
        k=i/2; 
         
	}	
	
	int i;
	double sum=100,h=sum/2; 
	for(i=2;i<=10;i++)
	{
		sum=sum+2*h;
		h=h/2; 
	 } 
	printf("��10�����һ������%lf��\n",sum);
	printf("��10�η���%lf��\n",h); 
	return 0; 
 } /* 
 ˼·����һ�������·�̣�100
       ��һ�η�����50
	   �ڶ��������·�̣�100+50+50=200
	   �ڶ��η�����25
	   �����������·�̣�100+50+50+25+25=250
	   �����η�����12.5 */
	int i;
	int z;
	double sum=100,h=sum/2;
	printf("���������(���ڵ���2)��\n");
	scanf("%d",&z); 
	for(i=2;i<=z;i++)
	{
		sum=sum+2*h;
		h=h/2; 
	 } 
	printf("��%d�����һ������%lf��\n",z,sum);
	printf("��%d�η���%lf��\n",z,h); 
	return 0;
}
