/*�������⣺�Ӽ�������10�����ݱ��浽�����У��������е�Ԫ�����������
һ��λ�ã��ٽ����һ�����ݷŵ�һ�������С�*/
#include<stdio.h>
int main()
{
    int i;
    int t;//���ڽ��� 
    int arr[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	 } 
	t=arr[9];
	for(i=1;i>0;i--)
	{
		arr[i]=arr[i-1]; 
	}
	arr[0]=t;
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);	
	 } 
	return 0;
	 
 } 
