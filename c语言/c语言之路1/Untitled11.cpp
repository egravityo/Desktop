#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,T,x1,x2;//a,b,c为一元二次方程的系数;
	printf("请输入3个小太阳a，b，c：\n");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	T=b*b-4*a*c;
	if(T>0)
	{
		x1=-b+sqrt(T)/(2*a); 
		x2=-b-sqrt(T)/(2*a); 
	    printf("该方程有俩个小太阳的解：%lf %lf",x1,x2);
    } 
    if(T==0)
    {
    	x1=-b/(2*a);
    	printf("该方程有一个小太阳的解：%lf",x1);
	}
	if(T<0)
	{
		printf("哦豁几大，国甲方程冒得一甲小太阳！\n"); 
	 } 
	 return 0;
}
