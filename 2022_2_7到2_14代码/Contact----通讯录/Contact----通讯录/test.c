#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"


void my_menu()
{
	printf("*************************\n");
	printf("**** 1.add    2.del *****\n");
	printf("**** 3.search 4.modify***\n");
	printf("**** 5.sort   6.print****\n");
	printf("**** 0.exit          ****\n");
	printf("*************************\n");
}
enum Option
{
	EXIT,
	ADD,
    DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT,
};
int main()
{
	int input = 0;
	//����ͨѶ¼
	contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		my_menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case ADD://����ͨѶ¼����Ϣ
			AddContact(&con);
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SORT:
			break;
		case PRINT://��ӡͨѶ¼
			PrintContact(&con);
				break;
		case EXIT:
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}