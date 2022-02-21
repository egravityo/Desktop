#include<stdio.h>
int main()
{
	float speed,time,distance;
	printf("请输入俩个数字(前面代表速度，后面代表时间):\n"); 
	scanf("%f %f",&speed,&time);
	printf("speed=%f米/秒\n",speed);
	printf("time=%f秒\n",time);
	distance=speed*time;
	printf("distance=%f米\n",distance);
	return 0; 
 } 
