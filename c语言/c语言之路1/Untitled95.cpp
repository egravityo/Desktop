/*功能：求圆的周长和半径
  日期：2021.11.13
  作者:Cbr*/ 
#include<stdio.h>
#include<math.h>
#define PI 3.1415926 
int main()
{
	float r,cir,area; 
	printf("请输入半径(r)：");
	scanf("%f",&r);
	cir=2*PI*r;
	area=PI*r*r;
	printf("cir=%.3f\n",cir);
	printf("area=%.3f\n",area);
	return 0; 
 } 
