#include<stdio.h>
int main()
{
	char ch;
	while((ch = getchar())!=EOF)
	{
		if(ch>'a'&&'z'<ch)
		{
			printf("%c\n",ch-32);
		 } 
		else if(ch>'A'&&'Z'<ch)
		{
			printf("%c\n",ch+32); 
		 } 
		else
		{
			printf("low bee£¡"); 
		 } 
		getchar(); 
	}
	return 0;
 } 
