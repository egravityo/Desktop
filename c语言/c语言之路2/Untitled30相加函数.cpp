#include<stdio.h> 
float ADD(float x,float y)
{
	float z;
	z = x + y;
	return z; 
 }
int main()
{
	float a,b;
	float sum = 0.0; 
	printf("请输入第一个数据：");
    scanf("%f",&a);
	printf("请输入第二个数据：");
    scanf("%f",&b);
    sum = ADD(a,b);
    printf("sum=%.3f",sum); 
	return 0;
}
