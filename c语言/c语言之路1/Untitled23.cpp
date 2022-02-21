#include<stdio.h>
int main()
{
	char ch;
	while(1) 
	printf("小调查\n");
	printf("小太阳是大还是小(A,B)\n");
	printf("A是大\n");
	printf("B是小\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':printf("在虫梦\n");return 0; 
		case 'B':printf("没在虫梦\n");return 0;
	    default:printf(" 你在无中生有！\n") ; 
	} 
	return 0; 
}
