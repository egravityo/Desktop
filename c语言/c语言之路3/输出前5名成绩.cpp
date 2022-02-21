//输入一串成绩,求前5名的成绩
#include<stdio.h>
int main()
{
    int i,j,n;
    int arr[40]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
			   int t;
			   t = arr[j+1];
			   arr[j+1] = arr[j];
			   arr[j] = t;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } 
