/*写一个函数可以交换俩个整形变量的内容 */
/*
void get_Swap(int x,int y)
{
	int t=0;
    t = x;
	x = y;
	y = t; 
 } 
int main()
{
	int i=10,k=20;
	int Swap;
	printf("i=%d k=%d\n",i,k);
	get_Swap(i,k);
	printf("i=%d k=%d\n",i,k);
	return 0; 
 } */ 
#include<stdio.h>
void Swap(int x,int y)
{
	int t;
	int*  pa = x;
	*pa = t
    int* pa = y;
	 
 } 
int main()
{
	int a;
	scanf("%d",&a); 
	int* pa=&a;
	*pa = 20;
	printf("a=%d\n",a);
	return 0; 
 } 
