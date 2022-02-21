#include<stdio.h> 
int main()
{
	int arr[10]={1,23,54,34,32365,43,23,54,67,45};
	int i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
			    int temp=arr[j];
			    arr[j]=arr[j+1];
			    arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
