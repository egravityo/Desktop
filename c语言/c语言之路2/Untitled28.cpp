#include<stdio.h>
#define N 5 
int main()
{
	int i,k;
	int arr[N]={2,43,342,13,232}; 
	printf("������һ�����ݣ�");
	scanf("%d",&k);
	for(i=0;i<N;i++)
	{
		if(k==arr[i])
		{
			printf("�ҵ���,�����ҵ��ڵ�%dλ",i+1);
			break; 
		 } 
	 }  
	if(i>=N)
	printf("û�ҵ�");
	return 0; 
 } 
