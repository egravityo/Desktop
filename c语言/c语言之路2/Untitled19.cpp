/*冒泡排序法*/
#include<stdio.h>
int main()
{
	int i,j;
	int arr[10];
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个整数：\n",i+1);
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
	printf("排列后的顺序为：\n");
	for(i=0;i<10;i++)
	{
	    printf("%d ",arr[i]);
	 } 
	return 0; 
 } 
