//����һ����������������ڵ���0�����������ƽ�������С��0���������� 
#include<stdio.h>
#include<math.h> 
int main()
{
     int a,b;
	 printf("��������һ��ʵ����\n");
	 scanf("%d",&a);
	 if(a>=0)
	 {   
	     b=a*a; 
	     printf("�������ƽ���ǣ�%d\n",b); 
	 } 
	 else
	 {
	 	printf("�� ������Ĳ���һ�����ڵ���0�����ޣ�",a); 
	 }
	 return 0; 
}
