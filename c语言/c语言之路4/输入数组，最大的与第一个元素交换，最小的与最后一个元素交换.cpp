//�������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ���
//�������
#include<stdio.h>
int main()
{
	int n=0,i=0;
	printf("�������м���Ԫ�أ�");
	scanf("%d",&n);//����������м���Ԫ�� 
	int arr[n]={0};
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	int sz = sizeof(arr)/sizeof(arr[0]);
	int temp = 0; 
	int max=arr[0];
	int min=arr[0];
	for(i=1;i<sz;i++)
	{
		if(max<arr[i])
		{
		   max = arr[i];
		 } 
	}
	for(i=1;i<sz-1;i++)
	{
		if(min>arr[i])
		{
		   min = arr[i];
		}
	}
	arr[0]=max;
	arr[sz-1]=min;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } 
