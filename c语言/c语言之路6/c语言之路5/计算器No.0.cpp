#include<stdio.h>
void menu()
{
	printf("*****************************\n");
	printf("***��ӭ���������������   ***\n");
	printf("***1.�ӷ�    2.����       ***\n");
	printf("***3.�˷�    4.����       ***\n");
	printf("****    0.�뿪           ****\n");
	printf("*****************************\n");
}
int add(int m,int n)
{
   return m+n;
}
int sub(int m,int n)
{
   return m-n;
}
int mul(int m,int n)
{
   return m*n;
}
int div(int m,int n)
{
   return m/n;
}
int main()
{
	int m,n;
	int i;
	int result=0;
	menu();
	printf("���������ѡ��");
	scanf("%d",&i);
	printf("������������������"); 
	scanf("%d%d",&m,&n);
		switch(i)
		{
			case 1:result = add(m,n);
			       break;
			case 2:result = sub(m,n);
			       break;
			case 3:result = mul(m,n);
			       break;
			case 4:result = div(m,n);
			       break;
	        case 0:printf("�뿪��");
			       break;
			default : printf("����ͬѧ�ڸ�Ϲ����");
			       break; 
		}		
	    printf("���õ��Ľ���ǣ�\n");
	    printf("%d",result);
	return 0;
}
