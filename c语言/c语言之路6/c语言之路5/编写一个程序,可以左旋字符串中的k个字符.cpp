//编写一个程序,可以左旋字符串中的k个字符
#include<stdio.h>
#include<string.h>
int main()
{
	//a b c d e f 2 -> c d e f a b
	char arr[100]={0};
	gets(arr);
	int len=strlen(arr);
    int k=0;
    scanf("%d",&k);
    int i;
    int j;
    int temp;
    for(i=0;i<k;i++)
    {
    	//左旋一个字符
		temp = arr[0];
		for(j=0;j<len-1;j++)
		{
			arr[j]=arr[j+1]; 
		}
		arr[len-1]=temp;
	}
	puts(arr);
	return 0;
 } 
