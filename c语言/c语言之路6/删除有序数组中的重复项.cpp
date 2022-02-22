//删除有序数组中的重复项 
#include<stdio.h>
#define N 10
int main()
{
	int arr[N];
    int i=0;
    int temp=0;
    for(i=0;i<N;i++)
    {
    	scanf("%d",&temp);
    	arr[temp]=temp;
	}
	int len=sizeof(arr)/sizeof(arr[0]);
	printf("一共有%d个\n",len);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
