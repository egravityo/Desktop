#include<stdio.h>
#include<math.h>
int main()
{
     double a,b,c,x1,x2,Y; 
	 printf("请输入3个整数a，b，c：");
	 scanf("%lf,%lf,%lf",&a,&b,&c);
	 Y=b*b-4*a*c;
	 if(Y>0)
	 {
	 	x1=(-b+sqrt(Y))/(2*a);
	 	x2=(-b-sqrt(Y))/(2*a);
	 	printf("该方程有俩个根:%f %f",x1,x2);
	 }
	 if(Y==0)
	 {
	 	x1=(-b)/(2*a);
	 	printf("该方程有一个个根:%lf\n",x1);
	  } 
	 if(Y<0)
	{
		printf("该方程没有跟！") ; 
}
	 return 0; 
 } 
