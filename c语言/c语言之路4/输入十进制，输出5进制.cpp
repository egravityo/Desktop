//输入十进制，输出5进制
#include<stdio.h>
int main()
{//10 20
	int n,i=0;
	scanf("%d",&n);
	int arr[15]={0};
	while(n!=0) 
	{
		arr[i]=n%5;
		n/=5;
		i++;
	}
	for(int j=i;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
	return 0;
 } 
