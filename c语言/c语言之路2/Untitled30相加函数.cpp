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
	printf("�������һ�����ݣ�");
    scanf("%f",&a);
	printf("������ڶ������ݣ�");
    scanf("%f",&b);
    sum = ADD(a,b);
    printf("sum=%.3f",sum); 
	return 0;
}
