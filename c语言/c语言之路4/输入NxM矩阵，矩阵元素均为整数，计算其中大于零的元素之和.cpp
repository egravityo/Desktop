//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和
#include<stdio.h>
int main()
{
	int n,m;
	int i,j; 
	int sum = 0; 
	int arr[][20]={0};
	int count=0;
	scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
	{
       for(j=0;j<m;j++)
	   {
	       scanf("%d",&arr[i][j]);   	
	   }	
	}
	for(i=0;i<n;i++)
	{
       for(j=0;j<m;j++)
	   {
	       printf("%3d ",arr[i][j]);   
		   {
		      count++;
		   }	
		   if(count%m==0)
		   {
		   	   printf("\n");
		   }
	   }	
	}
	for(i=0;i<n;i++)
	{
       for(j=0;j<m;j++)
	   {
	       if(arr[i][j]>0)
		   {
		   	  sum+=arr[i][j]; 
		   }  	
	   }	
	}
	printf("\nsum = %d",sum); 
	return 0;
}
