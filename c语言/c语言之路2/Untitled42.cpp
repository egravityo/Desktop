/*��ƺ��������ֲ��ң���һ�����������в���һ����
           ����ҵ��ˣ����������±�
		   �Ҳ�������-1
*/
#include<stdio.h>
int half(int arr[],int k,int sz)//half ��ʾ���ַ� 
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
			printf("�ҵ��ˣ���%d���±�\n",k);
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
		printf("û�ҵ�!"); 
	}
	return 0;
	 
}
