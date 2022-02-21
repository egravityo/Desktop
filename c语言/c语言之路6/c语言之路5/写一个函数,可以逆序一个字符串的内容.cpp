//写一个函数,可以逆序一个字符串的内容
#include<stdio.h>
#include<string.h>
void reserve(char *p,int sz)
{
	//abcdef->fedcba
	char *left,*right;
	left = p;
    right = p + sz - 1;
    while(left<right)
    {
    	char temp = *left;
    	*left = *right;
    	*right = temp;
    	left++;
    	right--;
    	p++;
	}
 } 
int main()
{
	char arr[256]={0};
	gets(arr);
	int sz = strlen(arr); 
    reserve(arr,sz);
    puts(arr);
    return 0;	
} 
