#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,T,x1,x2;//a,b,cΪһԪ���η��̵�ϵ��;
	printf("������3��С̫��a��b��c��\n");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	T=b*b-4*a*c;
	if(T>0)
	{
		x1=-b+sqrt(T)/(2*a); 
		x2=-b-sqrt(T)/(2*a); 
	    printf("�÷���������С̫���Ľ⣺%lf %lf",x1,x2);
    } 
    if(T==0)
    {
    	x1=-b/(2*a);
    	printf("�÷�����һ��С̫���Ľ⣺%lf",x1);
	}
	if(T<0)
	{
		printf("Ŷ���󣬹��׷���ð��һ��С̫����\n"); 
	 } 
	 return 0;
}
