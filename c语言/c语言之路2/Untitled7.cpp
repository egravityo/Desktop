//�������⣺�������10����������������У����е�10����������һ������
//��������������������һλ
#include<stdio.h>
int main()
{
	int arr[10]; 
	int t;//���ڰѵ�ʮ����������һ���� 
	int i;
	for(i=0;i<10;i++)
	{
		printf("�������%d������\n",i+1);
    	scanf("%d",&arr[i]);
	 } //���10������ 
	 t=arr[9];
	for(i=9;i>0;i--)
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
