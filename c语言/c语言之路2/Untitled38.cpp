	/*设计一个函数交换整形变量的内容*/
#include<stdio.h>
void Swap(int* pa,int* pb)
{
	int temp=0;
	temp = *pa;
    *pa =  *pb;
    *pb = temp;
 } 
int main()
{
	int a,b;
	printf("请输入俩个整数(a，b)：\n");
    scanf("%d,%d",&a,&b);
	printf("交换前：a=%d,b=%d\n",a,b);
	Swap(&a,&b);
	printf("交换后：a=%d,b=%d\n",a,b);
	return 0;
}
