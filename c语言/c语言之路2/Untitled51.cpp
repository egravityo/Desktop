//ͨ��ָ�����ʵ�ֶ�����Ԫ�ص���������
#include<stdio.h>
#define N 10
int main()
{
	int *pa,arr[N];
	int i; 
	pa=arr;//pa��ʼָ��arr[0]
	printf("Input the array��\n");
	for(i=0;i<N;i++)
	{
		printf("�������%d�����ݣ�\n",i+1);
		scanf("%d",pa++); 
	 } 
	printf("10��������������\n");
	for(pa=arr;pa<arr+N;pa++)
	{
		printf("%d ",*pa); 
	 } 
	 
	return 0; 
 } 
