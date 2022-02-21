/*书上例题：从键盘上输入10个整数，保存在数组中，求
该数组中所有正数之和*/
#include<stdio.h>
int main()
{
	int i,arr[10];
	int sum=0; 
	for(i=0;i<10;i++)
	{
	  	printf("请输入第%d个整数：\n",i+1);
     	scanf("%d",&arr[i]); 
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]>0)
		{
			sum+=arr[i]; 
		 } 
	 } 
	 printf("sum=%d",sum); 
	return 0; 
 } 
