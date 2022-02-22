//书上例题：输入10个数据，将其从小到大进行排列 
#include<stdio.h>
int main()
{
	int arr[10];
	int i,k;
	int t;
    for(i=0;i<10;i++)
	{
		printf("请输入%d个整数：\n",i+1);
		scanf("%d",&arr[i]); 
	 } 
	for(i=0;i<9;i++)
	{
		for(k=1;k<9-i;k++)
		{
			if(arr[k]>arr[k+1]) 
			{
				t=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=t; 
			}
		 } 
	 } 
	printf("通过开天辟地的努力\n");
	printf("终于，排列后的顺序出来啦\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	 } 
	return 0; 
 } 
