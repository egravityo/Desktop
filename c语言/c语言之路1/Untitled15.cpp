#include<stdio.h>
int main()
{
	char ch;
	while (1)
    printf("***让我们来做个小调查***\n");
	printf("****你认为EDG和AG相比，谁赢的可能性更大勒****\n");
	printf("A：EDG");
	printf("B: AG"); 
	printf("你可以选择(A.B)你的答案是:\n");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'A':printf("阔以，你很比例乌EDG哦\n");return 0; 
	case 'B':printf("哟呵，和我想的一样，阔以阔以\n"); return 0; 
	default:printf("我怀疑你在无中生有！！\n");
	}
	return 0; 
 } 
