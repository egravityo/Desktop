//输入俩个数a，b 如果a>b，就将俩个数交换 
#include<stdio.h>
int main() 
{
	int a,b,c;
	printf("请输入俩个数：\n");
	scanf("%d%d",&a,&b);
	if(a>b)
    {
       c=a;
	   a=b;
	   b=c;
	   printf("交换后的数为：%d %d",a,b); 
	 } 
	 else
	 printf("不满足题意噢");
	 return 0; 
}
