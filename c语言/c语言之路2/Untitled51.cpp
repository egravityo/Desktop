//通过指针变量实现对数组元素的输入和输出
#include<stdio.h>
#define N 10
int main()
{
	int *pa,arr[N];
	int i; 
	pa=arr;//pa初始指向arr[0]
	printf("Input the array：\n");
	for(i=0;i<N;i++)
	{
		printf("请输入第%d个数据：\n",i+1);
		scanf("%d",pa++); 
	 } 
	printf("10个数据输出结果：\n");
	for(pa=arr;pa<arr+N;pa++)
	{
		printf("%d ",*pa); 
	 } 
	 
	return 0; 
 } 
