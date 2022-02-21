//有n个整数，将前面的位置往后移动m个单位,最后m个元素放到最前面的m个数 
#include<stdio.h>
int main()
{
    int arr[20],brr[20];
	int m,n;
	scanf("%d%d",&n,&m);
	int i;
	printf("请输入%d个元素：",n);
	for(i=0;i<n;i++)	
	{ 
	    scanf("%d",&arr[i]);	
	} 
	/* 4 1
	 1 2 3 4
	 4 1 2 3 */
	/* 4 2
	 1 2 3 4
	 3 4 1 2 */
    for(i=0;i<m;i++)
    {
    	int temp=arr[0];
    	int j;
    	for(j=0;j<n-1;j++)
    	{
    		arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
		
	
	return 0;
}
