//存入一个不确定个数的数组 
#include<stdio.h>
int main()
{
	/*
	int arr[100];
	int i=0;
	int m=0;
	int count=0;
	for(i=0;arr[i]!='\0';i++)
	{
		scanf("%d",&m);
		count++;
		arr[i]=m;
	}
	for(i=0;i<count;i++)
	{
		printf("%d ",arr[i]);
	}
	*/
	/*
	char arr[100];
	gets(arr);
	int len=strlen(arr);
	printf("len=%d\n",len);*/
	int arr[999];
	int count=0;
	int i;
	for(i=0;getchar()!='\n';i++)
	{
		scanf("%d",&arr[i]);
		count++;
	 } 
	printf("一共有%d个元素",count);
	for(i=0;i<count;i++)
	{
		printf("%d ",arr[i]);
    }
	return 0;
}
