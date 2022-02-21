//求10个数的最大数，并求出有多少个正数,多少个负数,多少个0; 
#include<stdio.h>
int main()
{
	int i; 
	int arr[10]; 
	int Max=0;
	int count1=0;
	int count2=0;
	int count=0; 
	for(i=0;i<10;i++)
	{
		printf("请输入第%2d个数：",i+1);
		scanf("%d",&arr[i]); 
	 } 
	Max=arr[0];
	for(i=0;i<9;i++)
	{
		if(Max<arr[i])
		{
			Max=arr[i]; 
		 } 
	
	}
	for(i=0;i<10;i++)
	{
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
	printf("Max=%d\n",Max);
	printf("这10个数中一共有%d个正数\n",count1);
	printf("这10个数中一共有%d个负数\n",count2);
	printf("这10个数中一共有%d个0\n",count);
	return 0; 
 } 
