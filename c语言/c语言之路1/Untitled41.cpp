//�ж�һ����λ���Ƿ�Ϊˮ������ 
#include<stdio.h>
#include<math.h>
int main() 
{
	int x,a,b,c;
	printf("������һ����λ����\n");
	scanf("%d",&x);
	a=x/100;
	b=x/10%10;
	c=x/10;
	if(x=a*a*a+b*b*b*+c*c*c)
	{
		printf("����Ϊˮ������\n");
	 } 
	else
	{
		printf("��������ˮ��������\n"); 
	 } 
	return 0; 
 } 
