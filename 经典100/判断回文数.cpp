//一个5位数，判断它是不是回文数。即12321是回文数。
#include<stdio.h>
int HuiW(int n)
{//21312
    int a,b,c,d,e;//..
	a = n / 10000;//..
	b = n / 1000%10;//..
	c = n / 100%10;//.. 
	d = n / 10%10;//十位 
	e = n % 10;//提取个位 
	if(a==e&&b==d)
	{
		printf("%d是一个回文数",n); 
	 } 
	else
	{
		printf("%d不是一个回文数",n); 
	 } 
	 
 } 
int main()
{
	int i;
	int ret;
	printf("请输入一个5位数：");
	scanf("%d",&i);
	ret = HuiW(i); 
	return 0; 
 } 
