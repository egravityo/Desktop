//����������a��b ���a>b���ͽ����������� 
#include<stdio.h>
int main() 
{
	int a,b,c;
	printf("��������������\n");
	scanf("%d%d",&a,&b);
	if(a>b)
    {
       c=a;
	   a=b;
	   b=c;
	   printf("���������Ϊ��%d %d",a,b); 
	 } 
	 else
	 printf("������������");
	 return 0; 
}
