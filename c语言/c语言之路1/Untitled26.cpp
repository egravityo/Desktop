#include<stdio.h>
int main()
{
	float speed,time,distance;
	printf("��������������(ǰ������ٶȣ��������ʱ��):\n"); 
	scanf("%f %f",&speed,&time);
	printf("speed=%f��/��\n",speed);
	printf("time=%f��\n",time);
	distance=speed*time;
	printf("distance=%f��\n",distance);
	return 0; 
 } 
