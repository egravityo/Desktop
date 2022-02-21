#include<stdio.h>
int main()
{
	float distance,speed,time;
	printf("请输入俩个数字：");//前面代表speed，后面代表time;
	scanf("%f %f",&speed,&time);
	distance=speed*time;
	printf("distance=%f米",distance);
	return 0; 
 } 
