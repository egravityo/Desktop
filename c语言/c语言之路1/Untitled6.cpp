#include<stdio.h>
#define PI 3.14
int main()
{
	double r,cir,area;
	printf("ÇëÊäÈëÔ²µÄ°ë¾¶£º");
	scanf("%lf£¬%lf\n",&r);
	cir=2*PI*r;
	area=PI*r*r;
	printf("cir=%4.2lf\n",cir);
	printf("area=%3.2lf\n",area) ;
	return 0;
 } 
