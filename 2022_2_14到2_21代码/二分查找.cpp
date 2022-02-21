//二分查找
#include<stdio.h>
int HalfFound(int arr[],int k,int sz)
{
	int mid;
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
	    mid=(left+right)/2;
	    if(arr[mid]<k)
	    {
	    	left=mid+1;
		}
		else if(arr[mid]>k)
		{
			right=mid-1;
		}
		else
		{
			return 1;
		}
	}
    return 0;
}
void test(int k)
{
	int arr[13]={1,3,6,11,14,15,17,19,23,26,29,36,38};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int ret=HalfFound(arr,k,sz);
	if(ret==1)
	{
		printf("找到了！");
	}
	else{
		printf("没找到！");
	} 
}
int main()
{
   printf("请输入查找的数：");
   int k=0;
   scanf("%d",&k);
   test(k);	
} 
