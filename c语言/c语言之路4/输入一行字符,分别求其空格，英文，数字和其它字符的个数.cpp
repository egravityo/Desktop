//输入一行字符,分别求其空格，英文，数字和其它字符的个数 
#include<stdio.h>
int main()
{
	char c;
	int blank=0,english=0,number=0,other=0;
	while((c=getchar())!='\n') 
	{
		if(c==' ')
		{
		    blank++;
		}
		else if(('a'<=c&&c<='z')||('A'<=c&&c<='Z'))
		{
			english++; 
		}
		else if('0'<=c&&c<='9')
		{
		    number++;
		 } 
		else
		{
			other++;
		}
	 } 
	printf("空格有%d个,英文有%d个,数字有%d个,其它字符有%d个",blank,english,number,other);
	getchar(); 
	return 0;
 } 
