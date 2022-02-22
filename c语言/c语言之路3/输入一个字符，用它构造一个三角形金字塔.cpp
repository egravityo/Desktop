//输入一个字符，用它构造一个三角形金字塔
#include<stdio.h>
int main()
{/*
	char ch;
	scanf("%c",&ch);
	printf("     %c     \n",ch);
	printf("   %c   %c     \n",ch,ch);
	printf(" %c       %c   \n",ch,ch);
	printf("%c  %c  %c    %c   \n  ",ch,ch,ch,ch);*/
	char ch;
	int i; 
	scanf("%c",&ch);
	for(i = 0;i < 5;i++)
	{
		int j;
		for(j = 0;j < 4-i;j++)
		{
			printf(" "); 
		 } 
		for(j = 0;j <= i ;j++)
		{
			printf("%c ",ch); 
		 } 
		 printf("\n");
	 } 
	printf("%c\n",65);
	return 0;
 } 
