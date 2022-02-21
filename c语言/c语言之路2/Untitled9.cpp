/*书上例题：从键盘输入10个数据，求其中正数，负数，和0的个数*/
#include<stdio.h>
int main()
{
	int i;
	int count1=0;//代表正数的总数
 	int count2=0;//代表负数的总数
 	int count=0;//代表0的总数 
	int arr[10];
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个数据\n",i+1);
		scanf("%d",&arr[i]); 
		if(arr[i]>0)
		{
	       count1++; 
		} 
		else if(arr[i]<0)
		{
			count2++; 
		 } 
		else if(arr[i]==0)
		{
			count++; 
		 } 
	 }
	 printf("一共有%d个正数\n",count1); 
	 printf("一共有%d个负数\n",count2); 
   	printf("一共有%d个0\n",count); 
	return 0; 
 } 
