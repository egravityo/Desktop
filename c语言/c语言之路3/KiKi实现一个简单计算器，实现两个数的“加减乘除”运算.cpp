/*KiKi实现一个简单计算器，实现两个数的“加减乘除”运算，
用户从键盘输入算式“操作数1运算符操作数2”，计算并输出表达式的值，
如果输入的运算符号不包括在（+、-、*、/）范围内，输出“Invalid operation!”。
当运算符为除法运算，即“/”时。
如果操作数2等于0.0，则输出“Wrong!Division by zero!”*/
#include<stdio.h>
int main()
{
	double a,b;
	char ch;
	printf("请输入改形式(a+b)：");
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
