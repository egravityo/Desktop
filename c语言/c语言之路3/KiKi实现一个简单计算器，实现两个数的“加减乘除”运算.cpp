/*KiKiʵ��һ���򵥼�������ʵ���������ġ��Ӽ��˳������㣬
�û��Ӽ���������ʽ��������1�����������2�������㲢������ʽ��ֵ��
��������������Ų������ڣ�+��-��*��/����Χ�ڣ������Invalid operation!����
�������Ϊ�������㣬����/��ʱ��
���������2����0.0���������Wrong!Division by zero!��*/
#include<stdio.h>
int main()
{
	double a,b;
	char ch;
	printf("���������ʽ(a+b)��");
    while((scanf("%lf",&a))!=EOF)
	{
     	ch = getchar();
     	scanf("%lf",&b);
		if(ch == '+') 
		{
		    double add = a + b;
		    printf("%.3f %c %.3f = %.3f",a,ch,b,add);
		}
		else if(ch == '-') 
		{
		    double sub = a - b;
		    printf("%.3f - %.3f = %.3f",a,b,sub);
		}
		else if(ch == '*') 
		{
		    double mul = a * b;
		    printf("%.3f * %.3f = %.3f",a,b,mul);
		}
		else if(ch == '/')
		{
		    if(b==0.000)
		    {
		    	printf("Wrong!Division by zero!");
			}
			else 
			{
				double div = a / b;
				printf("%.3f / %.3f = %.3f",a,b,div);
			}
		 } 
		else
		{
			printf("Invalid operation!");
		}
	  }  
	return 0;
}
