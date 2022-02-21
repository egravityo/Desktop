#include<stdio.h>
int main() 
{
	char ch;
	printf("****我们来做一个小调查****\n");
	while(1)
	{
	
	printf("****你觉得最后选平乐多还是衡南县多****\n");
	printf("你有俩个可以选择(A,B)，你选择的答案是:\n");
	printf("A.平乐多\n");
	printf("B.平乐少\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case'A':printf("嗯，你对平乐很有信心喔，布里乌youcan上岸霍！");return 1;
		case'B':printf("哟呵，你肯定很喜欢平乐哟，相信你会上岸滴！");return 1;
		default:printf("我怀疑你在无中生有！！！，即使如此，我也布里乌youcan上岸勒！\n");
	}}
	return 1; 
 } 

