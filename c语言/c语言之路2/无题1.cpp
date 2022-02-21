#include<stdio.h>
/* 
int Swap(int x,int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
 } 
int main()
{
	int  a = 100;
	int  b = 200;
	int  ret = Swap(a,b);
	printf("a = %d ,b = %d \n",a,b);
	return 0;
 } */
void Swap(int* pa,int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp; 
 } 
int main()
{ 
    int  a = 100;
	int  b = 200;
	printf("a = %d,b = %d",a,b);
	Swap(&a,&b);
	printf("\n");
	printf("a = %d,b = %d",a,b);
    return 0; 
 } 
