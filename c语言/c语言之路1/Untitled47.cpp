#include<stdio.h>
int main()
{
	char ch1,ch2; 
	printf("欢迎来到字母转换器\n");
	printf("请输入一个合法字母：\n");
	scanf("%c%c",&ch1,&ch2);
	if(!(('a'<=ch1&&ch1<='z')||('A'<=ch1&&ch1<='Z'))) 
	{
		printf("***注意看题！***\n");  
    }  
	else
	{ 
	    if('a'<=ch1&&ch1<='z') 
	    {   
	       printf("转换后的字母为：ch2=%c\n",ch2=ch1-32);
	    }  
	    if('A'<=ch1&&ch1<='Z')
		{
		   printf("转换后的字母为：ch2=%c\n",ch2=ch1+32);
		 } 
    }
    return 0;
}
