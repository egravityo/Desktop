//转化为8进制
#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	int arr[10];
	while(n)
	{
	   arr[i]=n%8;
	   n/=8;
	   i++; 
	}
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
	return 0;
 } 
