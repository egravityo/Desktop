#include<stdio.h>
#include<math.h>
int main()
{
     double a,b,c,x1,x2,Y; 
	 printf("������3������a��b��c��");
	 scanf("%lf,%lf,%lf",&a,&b,&c);
	 Y=b*b-4*a*c;
	 if(Y>0)
	 {
	 	x1=(-b+sqrt(Y))/(2*a);
	 	x2=(-b-sqrt(Y))/(2*a);
	 	printf("�÷�����������:%f %f",x1,x2);
	 }
	 if(Y==0)
	 {
	 	x1=(-b)/(2*a);
	 	printf("�÷�����һ������:%lf\n",x1);
	  } 
	 if(Y<0)
	{
		printf("�÷���û�и���") ; 
}
	 return 0; 
 } 
