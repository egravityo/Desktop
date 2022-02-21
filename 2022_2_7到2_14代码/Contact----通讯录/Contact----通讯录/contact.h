#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

#pragma once
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


//类型的定义
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct contact
{
	PeoInfo data[MAX];//存放添加进来人的信息
	int sz;//记录的是当前通讯录中有效信息的个数

}contact,*con;

//初始化函数声明
void InitContact(contact* pc);

//增加通讯录信息
void AddContact(contact* pc);

//打印通讯录信息
void PrintContact(const contact* pc);
