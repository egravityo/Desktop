#include<stdio.h>
int main() 
{
	float  distance,time,speed;
	printf("请输入俩个数字（前面代表速度，后面代表时间）:\n");  
	scanf("%f %f",&speed,time);
	distance=time*speed;
	printf("distance=%f米",distance);
	return 0; 
	
}
