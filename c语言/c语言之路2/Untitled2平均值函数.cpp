/*输入三个数,求其平均值,用函数*/
#include<stdio.h>
float average(float x,float y,float z)
{
	float Y;
	Y = (x + y + z)/3;
	return Y; 
 }  
int main()
{
	float a,b,c;
	int i;
	float arr[3]; 
	float AVG; 
	printf("请输入3个数据(a，b，c):"); 
	scanf("%f %f %f",&a,&b,&c); 
	/*for(i=0;i<3;i++)
	{
		printf("请输入第%d个数：",i+1);
		scanf("%f",&arr[i]); 
	 }*/ 
	AVG=average(a,b,c);
	printf("%.3f",AVG);
	return 0; 
 } 
