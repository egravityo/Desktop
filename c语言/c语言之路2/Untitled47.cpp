/*计算1^3+2^3+3^3+....+10^3的和,用循环嵌套函数*/
#include<stdio.h>//思路：设计俩个函数,第一个函数long f1相加,
                 //      第二个函数long f2为一个数的三次方 
int One f1(int i,int k)
{
	int sum = 0;
	int t; 
	for(t=1;t<=i;t++)
	{
		sum += Two f1(int t,k);
	}
	
 } 
int Two f1(int t,k)
{
	int power = 1;
	int z;
	for(z=1;z<=k;z++)
	{
		t = t*
	 } 
 } 
int main()
{
	int ret;
	ret = One f1(i=10,k=3);
	printf("%d",ret); 
	return 0; 
 } 
 
