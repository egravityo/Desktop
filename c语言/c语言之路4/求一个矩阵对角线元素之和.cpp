//求一个矩阵对角线元素之和
#include<stdio.h>
int main()
{
	int i=0,j=0;
	int n=0;
	int sum=0;
	int arr[10][10]={0};
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&arr[i][j]); /* 1 2 3 
                                       4 5 6 
                                       7 8 9	*/
            if(i==j)
			{
				sum+=arr[i][j]; 
			 } 
		}
	}
	sum+=arr[0][2]+arr[2][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	 } 
	printf("\nsum=%d",sum);
	
	 
 	return 0;
 } 
