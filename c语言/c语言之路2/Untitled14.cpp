/*����10�������������ֵ*/
#include<stdio.h>
int main()
{ 
    /*
	int i;
	int arr[10];
	int t; 
    for(i=0;i<10;i++)
    {
    	printf("�������%d������",i+1);
		scanf("%d",&arr[i]); 
	}
	for(i=0;i<9;i++)
	{
	      if(arr[i]>arr[i+1])
		  {
		  	  t=arr[i+1];
			  arr[i+1]=arr[i];
			  arr[i]=t; 
		   } 
	 } 
	printf("Max=%d",arr[i+1]);
	*/
	int arr[10];
	int i;
	int Max=arr[0]; 
	for(i=0;i<10;i++)
	{
		printf("�������%2d����:",i+1);
		scanf("%d",&arr[i]); 
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]>Max)
		{
			Max=arr[i];
		}
	 } 
	 printf("Max=%d ",Max);
	return 0;
 } 
