#include<stdio.h>
int main()
{
	char ch;
	while (1)
    printf("***������������С����***\n");
	printf("****����ΪEDG��AG��ȣ�˭Ӯ�Ŀ����Ը�����****\n");
	printf("A��EDG");
	printf("B: AG"); 
	printf("�����ѡ��(A.B)��Ĵ���:\n");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'A':printf("���ԣ���ܱ�����EDGŶ\n");return 0; 
	case 'B':printf("Ӵ�ǣ��������һ������������\n"); return 0; 
	default:printf("�һ��������������У���\n");
	}
	return 0; 
 } 
