#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"


//��ʼ��
void InitContact(contact* pc)
{
	int sz = 0;
	//memset---�ڴ����� 
	memset(pc->data, 0, sizeof(pc->data));
}


//����һ���˵���Ϣ
void AddContact(contact* pc)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼��Ϣ�������޷����\n");
		return;
	}
	else
	{
		//���һ���˵���Ϣ
		printf("������������>");
		scanf("%s",pc->data[pc->sz].name);
		printf("�������Ա�>");
		scanf("%s",pc->data[pc->sz].sex);
		printf("���������䣺>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("������绰��>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ��>");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++; 
		printf("��ӳɹ�\n");
	}
}


//��ӡͨѶ¼��Ϣ

void PrintContact(contact* pc)
{
	//��ӡ����
	printf("%-20s\t%-10s\t%-10s\t%-15s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	int i = 0;
	for (i = 0;i <( pc->sz);i++)
	{
		printf("%s\t%s\t%d\t%s\t%s\n", pc->data[i].name,pc->data[i].sex,
		                                              pc->data[i].age,pc->data[i].tele,
		                                              pc->data[i].addr);
	}
}