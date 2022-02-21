#include<stdio.h>
//从键盘输入5个同学的成绩,求其平均值 
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
