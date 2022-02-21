/*将一组得分(10个)中,去掉一个最高分和一个最低分,然后求平均值(保留5位小数)*/
#include<stdio.h>
int main()
{
	int i,k; 
	int arr[10];
	int max=arr[0];
	int min=arr[0];
	float sum=0.00000;
	float average=0.00000;
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个成绩:",i+1);
		scanf("%d",&arr[i]);
	 } 
	for(i=1;i<10;i++) 
	{
		if(arr[i]>max) 
		{
			max=arr[i]; 
		}
	}
	for(i=0;i<10;i++) 
	{
	    if(arr[i]<min)
		{
			min=arr[i];
		 } 
	}
	printf("max=%d\n",max);
	printf("min=%d\n",min);
    for(i=0;i<10;i++) 
    {
    	if((arr[i]!=max)||(arr[i]!=min))
    	{
    		sum+=arr[i];
		}
	}
	average=sum/8;
	printf("sum=%.5f\n",sum);
	printf("average=%.5f\n",average);
	return 0; 
 } 
