//�������ڵ�ʱ���Լ�Ҫ˯��ʱ��k����λ��minute�����м��ÿո�ֿ���
//�����ʽ��hour:minute k(��hour��minute��ֵΪ1������Ϊ1��������01)
//���룺0:0 100  �����01:40 
#include<stdio.h>
int main()
{
	int hour=0,minute=0,k;
	int a,b;
	printf("�������ڵ�ʱ��(hour��minute)��Ҫ˯��ʱ��(k)��");
	scanf("%d:%d %d",&hour,&minute,&k);
	a = k % 60;	
	b = k / 60;
	minute += a; 
	if(minute>=60)
    {
    	minute%=60;
    	hour++;
	}
	hour+=b;
	printf("%02d:%02d",hour,minute);
	return 0;
}
