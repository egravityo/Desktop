//输入一串字符,统计数字的个数
#include<stdio.h> 
#include<string.h>
#include<malloc.h>
int fun(char* s,int arr[])
{
    int n=0;
	while(*s!='\0')
	{
	    //跳过非数字区
		while(*s>'9'||*s<'0')
		{
			s++;
		} 
		//数字区
		int d=0;
		while(*s<='9'&&*s>='0')
		{
			d=d*10+(*s-'0');
			s++;
    	}
        arr[n]=d;
        n++;
	}
	return n;
}
int main()
{
	char* s;
    printf("请输入一串字符：\n");
    s=(char*)malloc(100);
    gets(s);
    int n=0;
    int arr[20];
    n=fun(s,arr);  
    int i=0;
    printf("一共有%d个",n);
    if(n>0)
    {
    	printf("它们是：\n");
    	for(i=0;i<n;i++)
    	{
    		printf("%d ",arr[i]);
		}
	}
	free(s);
	return 0;
}
