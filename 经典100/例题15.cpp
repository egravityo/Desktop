/*����15�� ���������������Ƕ������ɴ��⣺
ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮���
��B��ʾ��60�����µ���C��ʾ*/
#include<stdio.h>
int main()
{   
    /*
	int score;
	printf("input��\n");
	scanf("%d",&score);
    if(score<0||score>100)
	{
		printf("Score is error��");
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
	 	printf("Score is error��"); 
	  } 
	  i=score>=60?(score>=90?'A':'B'):'C';
	  printf("%c\n",i);
	return 0;
}
