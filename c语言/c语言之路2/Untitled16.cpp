//��10�������������������ж��ٸ�����,���ٸ�����,���ٸ�0; 
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
		printf("�������%2d������",i+1);
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
	printf("��10������һ����%d������\n",count1);
	printf("��10������һ����%d������\n",count2);
	printf("��10������һ����%d��0\n",count);
	return 0; 
 } 
