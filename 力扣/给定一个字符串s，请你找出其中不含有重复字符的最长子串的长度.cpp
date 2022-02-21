//给定一个字符串s，请你找出其中不含有重复字符的最长子串的长度。
/*输入: s = "abcabcbb"   输出: 3  
输入: s = "bbbbb"    输出: 1   */
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	gets(arr);
	int len=strlen(arr);
	int i;
	int count=0;
	for(i=0;i<len;i++)
	{
	    if(arr[i]==arr[i+1]);
	    else
	    {
	    	count++;
		}
	}
	printf("%d ",count);
	return 0;
}
 
