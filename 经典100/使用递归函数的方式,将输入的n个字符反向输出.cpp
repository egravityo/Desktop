//使用递归函数的方式,将输入的n个字符反向输出
#include<stdio.h>
void fun(int i)
{//54321
    char n;
	if(i==1)
	{
		n =  getchar();
		putchar(n);
	}
	else
	{
		n = getchar();
		fun(i-1);
		putchar(n);
	}
}
int main()
{
	int i,j,m,n;
	scanf("%d",&m);
	getchar();
    fun(m);
    printf("\n");
	return 0;
 } 
