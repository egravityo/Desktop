/*�������⣺�Ӽ���������10�������������������У���
����������������֮��*/
#include<stdio.h>
int main()
{
	int i,arr[10];
	int sum=0; 
	for(i=0;i<10;i++)
	{
	  	printf("�������%d��������\n",i+1);
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
