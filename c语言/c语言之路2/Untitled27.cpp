/*��һ��÷�(10��)��,ȥ��һ����߷ֺ�һ����ͷ�,Ȼ����ƽ��ֵ(����5λС��)*/
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
		printf("�������%d���ɼ�:",i+1);
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
