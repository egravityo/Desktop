//编写一个函数,当输入为偶数时，调用函数求1/2+1/4+1/6+...+1/n,
//当输入为奇数时，调用函数求1/1+1/3+1/5+...+1/n（利用指针函数） 
#include<stdio.h>
double even(int n)
{
	double sum=0.0;
	int i;
	for(i=2;i<=n;i+=2)
	{
		sum+=1.0/i;
	}
	return sum;
}
double odd(int n)
{
	double sum=0.0;
	int i;
	for(i=1;i<=n;i+=2)
	{
		sum+=1.0/i;
	}
    return sum;
}
int main()
{
	int n=0;
	scanf("%d",&n);
	double (*p)(int n);//定义指向函数的指针 
	double sum=0.0;
	if(n%2==0)
	{
		p = even; 
	}
	else
	{
		p = odd; 
	}
	printf("%.4f",(*p)(n));
	return 0;
}
