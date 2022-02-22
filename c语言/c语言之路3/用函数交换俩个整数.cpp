#include<stdio.h>
//用函数交换俩个整数 
void Swap(int* pa,int* pb)
{
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
 } 
int main()
{
	int a,b;
	printf("请输入俩个整数(a,b)："); 
	scanf("%d,%d",&a,&b); 
    printf("交换前：a = %d,b = %d\n",a,b);
	Swap(&a,&b);
	printf("交换后：a = %d,b = %d\n",a,b); 
	return 0;
}
