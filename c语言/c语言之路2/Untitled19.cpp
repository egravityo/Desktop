/*ð������*/
#include<stdio.h>
int main()
{
	int i,j;
	int arr[10];
	for(i=0;i<10;i++)
	{
		printf("�������%d��������\n",i+1);
		scanf("%d",&arr[i]); 
	 } 
	for(i=0;i<9;i++)
	{
	    for(j=0;j<9-i;j++)
		{
		    int t;
	        if(arr[j]>arr[j+1])
	        {
	        	t=arr[j];
	        	arr[j]=arr[j+1];
	        	arr[j+1]=t;
			}	
		 } 	
	}
	printf("���к��˳��Ϊ��\n");
	for(i=0;i<10;i++)
	{
	    printf("%d ",arr[i]);
	 } 
	return 0; 
 } 
