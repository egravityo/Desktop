//С�����Ͽ���Ҫ��n��̨�ף�ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
//��������2 ���2 
//����10 ���89 
#include<stdio.h>
int fib(int n)
{
	if(n<=2)
	{
		return n;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
int main()
{
	//������쳲���������
	int n;
	scanf("%d",&n);
	int ret = fib(n);
	printf("%d",ret); 
	return 0;
}
