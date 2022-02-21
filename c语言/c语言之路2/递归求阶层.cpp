//输入一个数,求其阶层 
#include<stdio.h>
int Fac1(int n)
{
	int k;
	int ret = 1; 
	for(k=1;k<=n;k++)
	{
		ret*=k; 
	 } 
    return ret; 
 } 
int Fac2(int n)
{
   if(n<=1)
   {
   	  return 1; 
	} 
    else
	{
		return n*Fac2(n-1); 
	 } 
 } 
int main()
{
	int i;
	scanf("%d",&i);
	int ret = Fac1(i);//用循环的方法
	int jet = Fac2(i);//用递归的方法 
	printf("%d\n",ret); 
	printf("%d",jet);
	return 0;
 } 
