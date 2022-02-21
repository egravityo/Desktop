//输入一个数，输出其六进制 
#include<stdio.h>
int main()
{// 45->113->36+6+3
	int i=0,n;
	int arr[]={0};
	scanf("%d",&n);
	while(n>=6)
	{
	    arr[i]=n%6;//3 7 1 1
	    arr[i+1] = n / 6;
	    n = n / 6; 
	    i++; 
	}
	for(int j=i+2;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
	return 0; 
}
