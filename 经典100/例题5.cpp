/*例题5：输入三个整数X,Y,Z，请把这三个数由小到大输出*/
#include<stdio.h>
int main()
{
	int x,y,z,t;//t为交换的中间量 
	printf("请输入三个整数(如1，2，3)：");
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
