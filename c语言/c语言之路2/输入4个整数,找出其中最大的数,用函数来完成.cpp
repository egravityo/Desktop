/*输入4个整数,找出其中最大的数,用函数来完成*/
#include<stdio.h>
int Max(int* pa)
{
    int i;
    int* max;
	max = pa;
	for(i = 1;i < 4;i ++)
	{
		if(*max < *(pa+1))
		{
			*max = *(pa+1); 
		}
	 } 
	return *max; 
 } 
int main()
{
	int arr[4];
	int i,max; 
    printf("请输入4个数：");
    for(i = 0;i < 4;i ++)
	{
	   scanf("%d",&arr[i]);
	} 
	max = Max(arr); 
    printf("MAX = %d",max); 
	return 0; 
 } 
