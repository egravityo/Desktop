#include<stdio.h>
int main()
{
	char ch;
	while(1) 
	printf("С����\n");
	printf("С̫���Ǵ���С(A,B)\n");
	printf("A�Ǵ�\n");
	printf("B��С\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':printf("�ڳ���\n");return 0; 
		case 'B':printf("û�ڳ���\n");return 0;
	    default:printf(" �����������У�\n") ; 
	} 
	return 0; 
}
