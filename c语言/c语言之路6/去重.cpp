//去重 
#include<stdio.h>
int main()
{
	printf("请输入该数组的元素：");
	int n;
    scanf("%d",&n);
    int i;
    int m;
    int max=0;
    int arr[100]={0};
    for(i=0;i<n;i++)
    {
    	scanf("%d",&m);
    	arr[m]=m;
    	if(max<arr[m])
    	{
    		max=arr[m];
		}
	}
	for(i=1;i<=max;i++)
	{
		if(arr[i]!=0)
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
