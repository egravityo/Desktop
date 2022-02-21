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
	//创建通讯录
	contact con;//通讯录
	//初始化通讯录
	InitContact(&con);
	do
	{
		my_menu();
		printf("请选择：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case ADD://增加通讯录的信息
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
		case PRINT://打印通讯录
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