#include<stdio.h>
int main() 
{
	char ch;
	printf("****��������һ��С����****\n");
	while(1)
	{
	
	printf("****��������ѡƽ�ֶ໹�Ǻ����ض�****\n");
	printf("������������ѡ��(A,B)����ѡ��Ĵ���:\n");
	printf("A.ƽ�ֶ�\n");
	printf("B.ƽ����\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case'A':printf("�ţ����ƽ�ֺ�������ร�������youcan�ϰ�����");return 1;
		case'B':printf("Ӵ�ǣ���϶���ϲ��ƽ��Ӵ����������ϰ��Σ�");return 1;
		default:printf("�һ��������������У���������ʹ��ˣ���Ҳ������youcan�ϰ��գ�\n");
	}}
	return 1; 
 } 

