#include<stdio.h>
//�������һ����λ�� 
int main()
{
	int i,a,b,c,d;
	printf("������һ����λ����");
	scanf("%d",&i);
	a = i / 1000;
	b = i / 100 % 10;
	c = i / 10 % 10;
    d = i % 10;
	printf("%d%d%d%d",d,c,b,a); 
	return 0;
}
