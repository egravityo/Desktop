//��200��~2050�����ж��ٸ�����,���Ƿֱ��Ƕ��٣� 
#include<stdio.h>
int main() 
{
	int i;
	int count=0; 
	for(i=200;i<=2050;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0)) 
		{
			printf("%4d ",i);
			count++; 
		}
	}
	printf("һ����%d������",i); 
	return 0;
}
