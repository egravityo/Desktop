/*����һ���༶5��ѧ����5�Ƴɼ������5��ѧ����5�Ƴɼ����ܷ֡�
����������
���У�ÿ������һ��ѧ����5�Ƴɼ�����������ʾ����Χ0.0~100.0�����ÿո�ָ� 
���������
���У���������˳��ÿ�����һ��ѧ����5�Ƴɼ����ܷ֣�С���㱣��1λ�����ÿո�ָ�*/
#include<stdio.h>
/*
int main()
{
	int i,j;
	float arr1[20]={0};
    float arr2[20]={0};
    float arr3[20]={0};
    float arr4[20]={0};
    float arr5[20]={0};
    for(i=0;i<5;i++)
    {
    	scanf("%d",&arr1[i]); 
	}
	for(i=0;i<5;i++)
    {
    	scanf("%d",&arr2[i]); 
	}
	for(i=0;i<5;i++)
    {
    	scanf("%d",&arr3[i]); 
	}
	for(i=0;i<5;i++)
    {
    	scanf("%d",&arr4[i]); 
	}
	for(i=0;i<5;i++)
    {
    	scanf("%d",&arr5[i]); 
	}
	return 0;
 } */
int main()
{
	float arr[5][5];
	float sum[5]={0};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%f",&arr[i][j]);
		}
	}
    /*
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%f",arr[i][j]);
		}
		printf("\n");
	}
	*/
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum[i]=sum[i]+arr[i][j];
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%3.2f ",arr[i][j]);
		}
		printf("%3.2f ",sum[i]);
		printf("\n");
	}	
 } 
