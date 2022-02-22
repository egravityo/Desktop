/*设计函数：二分查找，在一个有序数组中查找一个数
           如果找到了，返回它的下标
		   找不到返回-1
*/
#include<stdio.h>
int half(int arr[],int k,int sz)//half 表示二分法 
{ 
	int  left = 0;
	int  right = sz-1;
	int  mid  = (left+right)/2;
	while(left<=right)
	{
		if(mid > k)
		{
			right = mid - 1; 
		 } 
		else if(mid < k) 
		{
			left = mid + 1; 
		}
		else
		{
			printf("找到了！在%d个下标\n",k);
			break;
		}
	 } 
	if(left>right)
	{
		return -1; 
	 } 
 } 
int main() 
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k;
	k=5;
	int  sz = (sizeof(arr))/sizeof(arr[0]);
	int ret = half(arr,k,sz);
	if(ret==-1)
	{
		printf("没找到!"); 
	}
	return 0;
	 
}
