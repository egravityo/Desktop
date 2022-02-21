//数组加一
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i=0;
	int arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	} 
	long sum=0;
	int a=n-1;
	for(i=0;i<n;i++)
	{
		sum+=arr[i]*(pow(10,a)); 
		a--;
	}
	printf("%d",sum+1);
	return 0;
} 
