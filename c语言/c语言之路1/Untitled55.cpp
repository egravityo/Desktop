//���������������С�������� 
#include<stdio.h>
int main()
{
	int a,b,c,t;
	printf("������3�����֣�\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
	   t=a;
	   a=b;
	   b=t; 
	 } 
	if(a>c)
	{
		t=a;
		a=c;
		c=t; 
	 } 
	 if(b>c) 
	 {
	 	t=b;
	    b=c;
		c=t; 
	  } 
	  printf("�����ֽ��дӴ�С����֮��%d,%d,%d\n",c,b,a);
	  return 0; 
}
