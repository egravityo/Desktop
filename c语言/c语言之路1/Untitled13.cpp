#include<stdio.h>
#define PI 3.1415926
int main()
{
    float  r,cir,area;
	printf("ÇëÊäÈëÔ²µÄ°ë¾¶:\n");
	scanf("%f",&r) ;
	cir=2*PI*r;
	area=PI*r*r;
	printf("cir=%2.3f\n",cir);
	printf("area=%2.1f\n",area);
	return 0; 
 }
