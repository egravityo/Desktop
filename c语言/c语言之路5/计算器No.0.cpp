#include<stdio.h>
void menu()
{
	printf("*****************************\n");
	printf("***欢迎来到欢快计算器：   ***\n");
	printf("***1.加法    2.减法       ***\n");
	printf("***3.乘法    4.除法       ***\n");
	printf("****    0.离开           ****\n");
	printf("*****************************\n");
}
int add(int m,int n)
{
   return m+n;
}
int sub(int m,int n)
{
   return m-n;
}
int mul(int m,int n)
{
   return m*n;
}
int div(int m,int n)
{
   return m/n;
}
int main()
{
	int m,n;
	int i;
	int result=0;
	menu();
	printf("请输入你的选择：");
	scanf("%d",&i);
	printf("请输入俩个操作数："); 
	scanf("%d%d",&m,&n);
		switch(i)
		{
			case 1:result = add(m,n);
			       break;
			case 2:result = sub(m,n);
			       break;
			case 3:result = mul(m,n);
			       break;
			case 4:result = div(m,n);
			       break;
	        case 0:printf("离开！");
			       break;
			default : printf("果甲同学在搞瞎果！");
			       break; 
		}		
	    printf("您得到的结果是：\n");
	    printf("%d",result);
	return 0;
}
