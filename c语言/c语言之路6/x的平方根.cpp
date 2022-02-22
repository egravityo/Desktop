//x的平方根
//由于返回类型是整数，结果只保留 整数部分 ，小数部分将被舍去.
#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	scanf("%d",&x);
	int len=sqrt(x);
	printf("%d",len);
	return 0;
 } 
