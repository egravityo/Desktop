/*��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ���
���������������*/ 
#include<stdio.h>
int main()
{
	int i;//����ѭ��
    int k; 
    int t;//��ʱ��� 
	int arr[6]={1,3,4,6,54};
	printf("������һ����:");
	scanf("%d",&arr[5]); 
	for(i=0;i<5;i++)
	{
		if(arr[5]<arr[i])
		{
			t = arr[5]; 
			for(k=5;k>i;k--)
			{
			   arr[k]=arr[k-1];
			} 
			arr[i] = t;
		} 
	 } 
	for(i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0; 
 } 
