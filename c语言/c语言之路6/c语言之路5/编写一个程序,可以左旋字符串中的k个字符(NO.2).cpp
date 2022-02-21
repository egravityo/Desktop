//编写一个程序,可以左旋字符串中的k个字符(NO.2)
#include<stdio.h>
#include<string.h>
void reserve(char* left,char* right)
{
   while(left<right)
   {
      int temp=*left;
	  *left = * right;
	  *right=temp;
	  left++;
	  right--;   	
   } 
}
void fun(char* arr,int k)
{
    int len=strlen(arr);
    if(k<=len)
    {
    	reserve(arr,arr+k-1);//逆序左边k个字符
        reserve(arr+k,arr+len-1);//逆序右边len-k个字符 
        reserve(arr,arr+len-1);//逆序全部
        puts(arr);
	}
	else
	{
		printf("错误！");
	}
}
int main()  
{   //abcdefg 2
    //ba gfedc
    //cdefgab
	int i,k;
	char arr[100]={0};
	printf("请输入一串字符：");
	gets(arr);
	printf("请输入一个数字："); 
	scanf("%d",&k);
	fun(arr,k); 
	return 0;
 } 
