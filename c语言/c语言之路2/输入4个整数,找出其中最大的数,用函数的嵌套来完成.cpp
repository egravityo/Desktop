//输入4个整数,找出其中最大的数,用函数的嵌套来完成
#include<stdio.h>
int Max(int* pa);
{
	int* max;
	max = pa;
	if(*max < *(pa+1))
    {
    	*max = * (pa+1);
	}
 } 
int main()
{
	int i,arr[4];
	printf("请输入4个数据：");
	for(i = 0;i < 4;i ++)
	{
		scanf("%d",&arr[i]);
	} 
	max = Max(arr);
	printf("Max = %d",max);
	return 0; 
 } 
