#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"


//初始化
void InitContact(contact* pc)
{
	int sz = 0;
	//memset---内存设置 
	memset(pc->data, 0, sizeof(pc->data));
}


//增加一个人的信息
void AddContact(contact* pc)
{
	//判断通讯录是否已满
	if (pc->sz == MAX)
	{
		printf("通讯录信息已满，无法添加\n");
		return;
	}
	else
	{
		//添加一个人的信息
		printf("请输入姓名：>");
		scanf("%s",pc->data[pc->sz].name);
		printf("请输入性别：>");
		scanf("%s",pc->data[pc->sz].sex);
		printf("请输入年龄：>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("请输入电话：>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址：>");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++; 
		printf("添加成功\n");
	}
}


//打印通讯录信息

void PrintContact(contact* pc)
{
	//打印标题
	printf("%-20s\t%-10s\t%-10s\t%-15s\t%-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	int i = 0;
	for (i = 0;i <( pc->sz);i++)
	{
		printf("%s\t%s\t%d\t%s\t%s\n", pc->data[i].name,pc->data[i].sex,
		                                              pc->data[i].age,pc->data[i].tele,
		                                              pc->data[i].addr);
	}
}