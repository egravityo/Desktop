/*����13����ӡ���е�ˮ��������ˮ�����������λ���ֵ������͵��ڸ��� */
#include<stdio.h>
int main()
{
	int i;
    int a,b,c,d;
    int count=0;
	for(i=101;i<10000;i++)
	{
		d=i/1000;
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(i==d*d*d+a*a*a+b*b*b+c*c*c)
		{
			printf("%d ",i); 
			count++;
		}
	 } 
	 printf("\n");
	 printf("һ����%d��ˮ������",count); 
	 return 0;
 } 
