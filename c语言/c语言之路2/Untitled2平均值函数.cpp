/*����������,����ƽ��ֵ,�ú���*/
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
	printf("������3������(a��b��c):"); 
	scanf("%f %f %f",&a,&b,&c); 
	/*for(i=0;i<3;i++)
	{
		printf("�������%d������",i+1);
		scanf("%f",&arr[i]); 
	 }*/ 
	AVG=average(a,b,c);
	printf("%.3f",AVG);
	return 0; 
 } 
