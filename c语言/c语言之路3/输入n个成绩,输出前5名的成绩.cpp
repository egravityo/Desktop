#include<stdio.h>
int main()
{
	int i,n;
	int arr[40]={0};
	scanf("%d",&n);
	for(i = 0;i < n;i ++)
	{
	    scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		int j = 0; 
		for(j = 0;j < n-1-i ;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int t = 0;
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
    for(i=0;i<5;i++)
    {
    	printf("%d ",arr[i]);
	}
	return 0;
 } 
