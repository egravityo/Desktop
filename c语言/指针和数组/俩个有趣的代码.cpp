//������Ȥ�Ĵ��� 
#include<stdio.h>
int main()
{
	//����һ 
	void (*signal(int,void(*)(int)))(int);
	//�����
	(*void (*)())0();
	return 0;
 } 
