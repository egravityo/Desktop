//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ�������
#include<stdio.h>
int HuiW(int n)
{//21312
    int a,b,c,d,e;//..
	a = n / 10000;//..
	b = n / 1000%10;//..
	c = n / 100%10;//.. 
	d = n / 10%10;//ʮλ 
	e = n % 10;//��ȡ��λ 
	if(a==e&&b==d)
	{
		printf("%d��һ��������",n); 
	 } 
	else
	{
		printf("%d����һ��������",n); 
	 } 
	 
 } 
int main()
{
	int i;
	int ret;
	printf("������һ��5λ����");
	scanf("%d",&i);
	ret = HuiW(i); 
	return 0; 
 } 
