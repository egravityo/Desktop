//用递归计算n！
#include<stdio.h>
int Rank(int x) 
{
   if(x==1||x==0)
   {
     return 1;	 
   } 
   else
   return x*Rank(x-1);
}
int main()
{
	int ret;
	int i;
	printf("请输入一个数字：");
	scanf("%d",&i);
	ret = Rank(i);//Rank代表阶层 
	printf("\n"); 
	printf("%d的阶层为：%d",i,ret); 
	return 0; 
 } 
