//输出1到10的阶乘值
//Factorial 阶乘
#include<stdio.h>
int F2(int x)
{
	long power = 1;
	int i;
	for(i=1;i<=x;i++)
	{
		power *= i; 
	 } 
	return power; 
}
int F1(int x)
{
    long sum = 0;
	int i;
	for(i = 1; i<=x;i++)
	{
		printf("%d! = %d\n",i,F2(i));
		sum+=F2(i); 
	}
	printf("\n");
	printf("sum = %d ",sum); 
 } 
int main()
{
    long F1(10); 
	return 0; 
 } 
