#include<stdio.h>
//�Ӽ�������5��ͬѧ�ĳɼ�,����ƽ��ֵ 
int main()
{
	int i;
	double average = 0.0,sum = 0.0;
	int arr[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i]; 
	 } 
	average = sum / 5.0; 
	printf("%.2f",average); 
	return 0;
	 
}
