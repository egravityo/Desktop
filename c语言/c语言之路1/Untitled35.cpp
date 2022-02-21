//判断一个坐标在以(2,2)为圆心，1为半径的圆的位置情况 
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,a,b;
    printf("请输入一个坐标(a,b)：\n"); 
	scanf("%f %f",&a,&b);
    x=(a-2)*(a-2)+(b-2)*(b-2);
	y=sqrt(x);
	if(y==1) 
	{
		printf("该点在圆上\n"); 
	}
	if(y>1)
	{
		printf("该点在圆外\n"); 
	 } 
	if(y<1) 
	{
		printf("该点在圆内\n");
	}
	return 0; 
 } 
