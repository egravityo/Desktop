//�ж�һ����������(2,2)ΪԲ�ģ�1Ϊ�뾶��Բ��λ����� 
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,a,b;
    printf("������һ������(a,b)��\n"); 
	scanf("%f %f",&a,&b);
    x=(a-2)*(a-2)+(b-2)*(b-2);
	y=sqrt(x);
	if(y==1) 
	{
		printf("�õ���Բ��\n"); 
	}
	if(y>1)
	{
		printf("�õ���Բ��\n"); 
	 } 
	if(y<1) 
	{
		printf("�õ���Բ��\n");
	}
	return 0; 
 } 
