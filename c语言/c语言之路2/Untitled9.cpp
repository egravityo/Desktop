/*�������⣺�Ӽ�������10�����ݣ���������������������0�ĸ���*/
#include<stdio.h>
int main()
{
	int i;
	int count1=0;//��������������
 	int count2=0;//������������
 	int count=0;//����0������ 
	int arr[10];
	for(i=0;i<10;i++)
	{
		printf("�������%d������\n",i+1);
		scanf("%d",&arr[i]); 
		if(arr[i]>0)
		{
	       count1++; 
		} 
		else if(arr[i]<0)
		{
			count2++; 
		 } 
		else if(arr[i]==0)
		{
			count++; 
		 } 
	 }
	 printf("һ����%d������\n",count1); 
	 printf("һ����%d������\n",count2); 
   	printf("һ����%d��0\n",count); 
	return 0; 
 } 
