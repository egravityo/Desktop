//��һ�������������У���С�������򣬽�һ��������������뵽�����У�
//��֤����������������Ȼ������
#include<stdio.h>
int main()
{
    int i,j,k;
    int arr[20]={0};
	scanf("%d",&i);
    for(k=0;k<i;k++)
	{
		scanf("%d",&arr[k]);
	}	
	scanf("%d",&j);
	arr[i] = j;
	// 12 14 15 18      17 
	for(i=4;i>0;i--)
	{
		if(arr[i-1]>arr[i])
		{
			int temp = 0;
			temp = arr[i-1];
			arr[i-1] = arr[i];
			arr[i] = temp; 
		}
	}
	for(i=0;i<5;i++)
	{
	    printf("%d ",arr[i]);
	 } 
	return 0;
 } 
