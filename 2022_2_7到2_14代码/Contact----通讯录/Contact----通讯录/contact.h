#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

#pragma once
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


//���͵Ķ���
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
	PeoInfo data[MAX];//�����ӽ����˵���Ϣ
	int sz;//��¼���ǵ�ǰͨѶ¼����Ч��Ϣ�ĸ���

}contact,*con;

//��ʼ����������
void InitContact(contact* pc);

//����ͨѶ¼��Ϣ
void AddContact(contact* pc);

//��ӡͨѶ¼��Ϣ
void PrintContact(const contact* pc);
