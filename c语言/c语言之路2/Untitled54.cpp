/*利用函数在一个一维数组中通过二分法查找一个数 
  查到了返回数组的下标,否则返回-1*/
#include<stdio.h>
int Found(int arr[],int k,int sz)
{
	int  left = 0;
	int  right = sz -1 ;
    while(left<=right)
	{
		int  mid = (left+right)/2;
		if(arr[mid]>k)
	    {
		   right = mid - 1; 
	    } 
        else if(arr[mid]<k)
	    {
		   left = mid + 1; 
    	}
	    else 
	    {
	       return mid; 
	    } 
	} 
	return -1; 
 } 
int main()
{
	int arr[]={1,3,5,6,7,8,13,32,34,54},i;
	int k=7;
	int mid; 
	int sz = sizeof(arr)/sizeof(arr[0]); 
	int ret = Found(arr,k,sz);
    if(ret == -1)
    {
       	printf("没找到！"); 
	}
	else 
	{
		printf("找到了！在该数组的下标为：%d",ret);
	 } 
	return 0;
 } 
