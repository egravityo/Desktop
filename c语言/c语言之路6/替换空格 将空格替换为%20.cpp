//替换空格 将空格替换为%20 
/* 当输入We are Happy
   输出We%20are%20Happy */
#include<stdio.h> 
int main()
{
	char arr[10];
    char ch;
    while((ch=getchar())!='\0')
    {
    	if(ch==' ')
    	{
    		ch=2;
		}
	}
	puts(arr);
	return 0; 
 } 
