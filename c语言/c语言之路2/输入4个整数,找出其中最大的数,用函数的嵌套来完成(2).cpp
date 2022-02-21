//输入4个整数,找出其中最大的数,用函数的嵌套来完成
#include<stdio.h> 
int Max2(int x,int y)
{
    return (x>y)?x:y; 
}
int Max(int a, int b, int c, int d)
{
	int max,ret,ret1,ret2;
	max = a;
    ret = Max2(max,b);
	ret1 = Max2(ret,c);
    ret2 = Max2(ret1,d);
	return ret2; 
} 
int main()
{
	int a,b,c,d;
	printf("请 输 入 四 个 数：");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int max = Max(a,b,c,d);
	printf("Max = %d",max); 
	return 0;
}
