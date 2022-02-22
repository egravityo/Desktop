/*例题17：输入一行字符，分别统计出其中英文字母、空格、数字
和其他字符的个数*/
#include<stdio.h>
int main()
{
	int  letter=0,space=0;
	int  digit=0,other=0;
	int  ch;
	printf("请输入一行字符：\n");
	while((ch=getchar())!='\n')
	{
		if(('a'<ch&&ch<'z')||('A'<ch&&ch<'Z'))
		{
			letter++; 
		 } 
		 else if(ch=' ')
		 {
		 	space++; 
		  } 
		 else if('0'<ch&&ch<'9')
		 {
		 	digit++;
		  } 
		else
		{
			other++; 
		 } 
	 } 
	 printf("这行字符中一共含有%d个字母\n",letter);
	 printf("这行字符中一共含有%d个数字\n",digit);
     printf("这行字符中一共含有%d个空格\n",space);
     printf("这行字符中一共含有%d个其他字符\n",other);
	  
	return 0; 
 } 
