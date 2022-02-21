//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出
#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	printf("请输入俩个序列的个数：");
	scanf("%d%d",&m,&n); 
	int arr1[m],arr2[n],arr3[m+n];
	for(i=0;i<m;i++)
	{
	   scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
    {
       scanf("%d",&arr2[i]);
	}
	for(i=0;i<m;i++) 
	{
		if(arr1[i]!='\0')
	    {
		   arr3[i]=arr1[i];
	    } 
	}
	for(i=0;i<n;i++)
	{
		if(arr2[i]!='\0') 
		{
			arr3[i+m]=arr2[i]; 
		}
	 } 
	arr3[m+n]='\0';
	for(i=0;i<m+n;i++)
	{
		printf("%d ",arr3[i]); 
	}
	for(i=0;i<m+n-1;i++)
	{
		for(j=0;j<m+n-1-i;j++)
		{
			if(arr3[j]>arr3[j+1])
			{
				int temp = 0;
				temp = arr3[j];
				arr3[j] = arr3[j+1];
				arr3[j+1] = temp; 
			 } 
		}
	 } 
	printf("排序后的结果：\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d ",arr3[i]);
	}
	return 0;
}
