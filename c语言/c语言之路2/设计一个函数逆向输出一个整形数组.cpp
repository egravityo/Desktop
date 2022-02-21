//设计一个函数逆向输出一个整形数组 
#include<stdio.h> 
int Shuchu(int* pa)
{
	int i;
	for(i=4;i>=0;i--)
	{
		 printf("%d ",*(pa+i));
	} 
 } 
int main()
{
	int  arr[5]={0};
	int  i;
	for(i=0;i<5;i++)
	{
	    scanf("%d",&arr[i]); 
	} 
	Shuchu(arr); 
	return 0; 
 } 
