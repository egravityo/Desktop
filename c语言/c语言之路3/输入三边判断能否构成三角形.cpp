//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ�
//�ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ�,�������� 
#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
	    if((a+b>c)&&(a+c>b)&&(b+c>a))
	    {
	    	if(a==b&&b==c)
	    	{
	    		printf("�ȱ�������"); 
			}
			else if(a==b||b==c||a==c) 
			{
				printf("����������");
			}
			else
			{
				printf("��ͨ������");
			 } 
		}
		else
		{
			printf("�����������Σ�");
		}
    }
	return 0;
}
