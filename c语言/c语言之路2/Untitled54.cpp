/*���ú�����һ��һά������ͨ�����ַ�����һ���� 
  �鵽�˷���������±�,���򷵻�-1*/
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
       	printf("û�ҵ���"); 
	}
	else 
	{
		printf("�ҵ��ˣ��ڸ�������±�Ϊ��%d",ret);
	 } 
	return 0;
 } 
