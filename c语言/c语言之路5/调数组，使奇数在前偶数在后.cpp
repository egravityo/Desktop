//输入一个整数数组,调整该数组中的数字的顺序,使奇数位于
//前半部分,偶数位于后半部分
#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int arr[100]={0};
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
	}
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left=0;
	int right=n-1;
	//从左找偶数 
	while(left<right)
	{
    	while((left<right)&&(arr[left]%2==1))
	   {
	        left++;
	   }
	//从右找奇数 
	   while((left<right)&&(arr[right]%2==0))
	   {
	    	right--;
	   }
	//交换
	    if(left<right)
	    {
	       int temp=arr[right];
	       arr[right]=arr[left];
	       arr[left]=temp; 
	    } 
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
