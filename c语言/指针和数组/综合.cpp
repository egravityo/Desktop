#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
}
int main()
{
	//ָ������
    int* arr[10];
	//����ָ��
	int* (*p)[10]=&arr;
	//����ָ��
    int (*p)(int,int)=&Add;
    printf("%d\n",(*p)(2,3));
	//����ָ������
	int (*parr[10])(int,int); 
	//ָ����ָ�������ָ��
	int (*(*paarr)[10])(int,int)=&parr;
	return 0;
 } 
