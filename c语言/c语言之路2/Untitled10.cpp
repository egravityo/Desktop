//�������⣺����10�����ݣ������С����������� 
#include<stdio.h>
int main()
{
	int arr[10];
	int i,k;
	int t;
    for(i=0;i<10;i++)
	{
		printf("������%d��������\n",i+1);
		scanf("%d",&arr[i]); 
	 } 
	for(i=0;i<9;i++)
	{
		for(k=1;k<9-i;k++)
		{
			if(arr[k]>arr[k+1]) 
			{
				t=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=t; 
			}
		 } 
	 } 
	printf("ͨ������ٵص�Ŭ��\n");
	printf("���ڣ����к��˳�������\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	 } 
	return 0; 
 } 
