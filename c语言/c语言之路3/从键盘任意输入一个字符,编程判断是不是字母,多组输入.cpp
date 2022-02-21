//从键盘任意输入一个字符,编程判断是不是字母,多组输入
#include<stdio.h> 
#include<ctype.h>
int main()
{
	int  ch;
	while((ch = getchar())!=EOF)
	{
		//if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		if(isalpha(ch))
		{
		    printf("YES!");
		}
		else 
		{
			printf("NO!");
		}
		getchar();
		printf("\n"); 
	}
	return 0;
}
