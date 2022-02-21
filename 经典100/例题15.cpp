/*例题15： 利用条件运算符的嵌套来完成此题：
学习成绩>=90分的同学用A表示，60-89分之间的
用B表示，60分以下的用C表示*/
#include<stdio.h>
int main()
{   
    /*
	int score;
	printf("input：\n");
	scanf("%d",&score);
    if(score<0||score>100)
	{
		printf("Score is error！");
	 } 
	else if(score>=90)
	{
		printf("A"); 
	}
	else if(score>=69)
	{
		printf("B"); 
	}
	else
	{
		printf("C"); 
	 } 
	 */
	 int score;
	 int i;
	 printf("input:");
	 scanf("%d",&score);
	 if(score<0||score>100)
	 {
	 	printf("Score is error！"); 
	  } 
	  i=score>=60?(score>=90?'A':'B'):'C';
	  printf("%c\n",i);
	return 0;
}
