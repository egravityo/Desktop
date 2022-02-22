#include<stdio.h>
/*
int main()
{
	//100->244
	
	int i,n; 
	printf("请输入一个数：");
    scanf("%d",&n);
	int arr[10]={0};
    for(i=0;i<3;i++)
    {
    	arr[i]=n%6;//4
        arr[i]=((n-n%6)/6)%6;	//	4
		arr[i+1]=((n-n%6)/36); // 2
	}
	int j;
	for(j=i;j>0;j--)
	{
		printf("%d ",arr[j]);
	}
	return 0;
}*/
#include <stdio.h>
int main()
{
    int n,i=0,a[100];
    scanf("%d", &n);/*
    while(n >=6)
    {
    a[i] = n%6;
    a[i+1] = n/6;
    n /= 6;
    i++;
    }*/
    for(;n>=6;)
    {
        a[i]=n%6;
        a[i+1]=n/6;
        n /= 6;
        i++;
	}
    for (int j=i;j>=0;j--)
    {
    printf("%d",a[j]);
    }
    
}
