/*����5��������������X,Y,Z���������������С�������*/
#include<stdio.h>
int main()
{
	int x,y,z,t;//tΪ�������м��� 
	printf("��������������(��1��2��3)��");
	scanf("%d %d %d",&x,&y,&z);
	if(x>y) 
	{
		t=y;
		y=x;
		x=t; 
	}
	if(x>z)
	{
		t=z;
		z=x; 
		x=t; 
	 } 
	if(y>z)
	{
		t=z;
		z=y;
		y=t; 
	 } 
	 printf("%d %d %d",x,y,z); 
	 return 0; 
 } 
