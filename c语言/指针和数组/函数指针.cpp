#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
}
int main()
{
	int a=10;
	int b=20;
	int (*p)(int,int)=Add;
	printf("%d\n",Add(a,b));
	//��ӡ�����ĵ�ַ
	printf("%p\n",&Add); 
	printf("%p\n",Add); 
	//printf("%d\n",sizeof(Add)); 
	printf("%d\n",(*p)(20,30)); 
	return 0;
}
