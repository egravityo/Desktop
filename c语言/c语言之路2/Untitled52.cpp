//ʹ��ָ�뽻���������α�����ֵ,�����
#include<stdio.h>
int main()
{
	/*��ʹ�õ���������,������������
	int a,b;
	a = 100;
	b = 200;
    printf("����ǰ��\n"); 
	printf("a=%d ",a);
	printf("b=%d\n",b);
    a = a-b;
    b = a+b;
    a = b-a;
    printf("������\n");
    printf("a=%d ",a);
	printf("b=%d\n",b);*/
	int *pa;
	int *pb;
	int swap=0;//���ڽ��� 
	int a=100,b=200;
	pa = &a;
	pb = &b;
	printf("����ǰ��\n");
	printf("*pa=%d pb=%d",*pa,*pb); 
	swap = *pa;
	*pa = *pb;
	*pb = swap;
	printf("������\n");
	printf("*pa=%d pb=%d",*pa,*pb); 
	return 0;
 } 
