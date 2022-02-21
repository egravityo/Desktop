//ͨѶ¼
#include<stdio.h>
#include<string.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;
typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}contact,*con;
void menu()
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
//ͨѶ¼�ĳ�ʼ��
void InitContact(con pc)
{
	pc->sz=0;
	//memset---�ڴ�����
	memset(pc->data,0,sizeof(pc->data)); 
}
//����ͨѶ¼����Ϣ
void AddContact(con pc)
{
    if(pc->sz==MAX)
    {
        printf("ͨѶ¼����,�޷����\n");
		return ;	
	}	
	//����
	printf("������������������>");
	scanf("%s",pc->data[pc->sz].name);
	printf("�������������Ա�>");
	scanf("%s",pc->data[pc->sz].sex);
	printf("���������������䣺>");
	scanf("%d",&(pc->data[pc->sz].age));
	printf("�����������ĵ绰��>");
	scanf("%s",pc->data[pc->sz].tele);
	printf("�����������ĵ�ַ��>");
	scanf("%s",pc->data[pc->sz].addr);
	pc->sz++;
	printf("��ӳɹ���\n");
}
//��ӡͨѶ¼ 
void PrintContact(con pc)
{
    //��ӡ����
	printf("%-15s\t%-10s\t%-10s\t%-15s\t%-20s\n","����","�Ա�","����",
	"�绰","��ַ");
	int i=0;
	for(i=0;i<pc->sz;i++)
	{
	    printf("%-15s\t%-10s\t%-10d\t%-15s\t%-20s\n",pc->data[i].name,
	    pc->data[i].sex,pc->data[i].age,pc->data[i].tele,
	    pc->data[i].addr);
	} 
}
//��ѯ
int Found_contact(con pc,char name[])
{
	int i=0;
	for(i=0;i<pc->sz;i++)
	{
		if(strcmp(pc->data[i].name,name)==0)
		{
			int pos=i;
			return pos;
		}
	}
	return -1; 
}
void DelContact(con pc)
{
	char name[MAX_NAME];
    printf("������ɾ�������֣�>");
	scanf("%s",name);
	//��ѯ
	int pos= Found_contact(pc,name);
	if(pos==-1)
	{
		printf("���޴��ˣ�\n");
		return;
	}
	//ɾ��
	int i=0;
	for(i=pos;i<pc->sz-1;i++)
	{
		pc->data[i]=pc->data[i+1]; 
	} 
	pc->sz--;
	printf("ɾ���ɹ���\n"); 
} 
//����ĳ�˵���Ϣ
void SearchContact(con pc)
{
	char name[MAX_NAME];
    printf("��ѡ����ҵ����֣�>");
	scanf("%s",name);
	int pos= Found_contact(pc,name);
	if(pos==-1)
	{
		printf("���޴��ˣ�\n");
		return;
	}
	//��ӡ
	printf("%-15s\t%-10s\t%-10d\t%-15s\t%-20s\n",pc->data[pos].name,
	pc->data[pos].sex,pc->data[pos].age,pc->data[pos].tele,
	pc->data[pos].addr);
 } 
void ModifyContact(con pc)
{
	char name[MAX_NAME];
    printf("��ѡ���޸ĵ����֣�>");
	scanf("%s",name);
	int pos= Found_contact(pc,name);
	if(pos==-1)
	{
		printf("���޴��ˣ�\n");
		return;
	}
	//�޸�
	printf("����������: >");
	scanf("%s",pc->data[pos].name);
	printf("�������Ա�>");
	scanf("%s",pc->data[pos].sex);
	printf("���������䣺>");
	scanf("%d",&(pc->data[pos].age));
	printf("������绰��>");
	scanf("%s",pc->data[pos].tele);
	printf("�������ַ��>");
	scanf("%s",pc->data[pos].addr);
	printf("�޸ĳɹ���\n");
}
void SortContact(con pc)
{
	int i=0;
	int j=0;
	for(i=0;i<pc->sz-1;i++)
	{
		for(j=0;j<pc->sz-1-i;j++)
		{
			if(pc->data[j].age>pc->data[j+1].age)
			{ 
				int temp=pc->data[j].age;
				pc->data[j].age=pc->data[j+1].age;
				pc->data[j+1].age=temp;
			}
		}
	} 
}
int main()
{
	/*1.ͨѶ¼��Ա����Ϣ 
	���� �Ա� ���� �绰 ��ַ
	2.����ͨѶ¼����Ϣ
	3.ɾ��ͨѶ¼����Ϣ
	4.����ͨѶ¼����Ϣ
	5.�޸�ͨѶ¼����Ϣ
	6.��ӡͨѶ¼����Ϣ 
	*/
	int input=0;
	int sz=0;
	//ͨѶ¼�Ĵ���
	contact Con; 
	//ͨѶ¼�ĳ�ʼ��
	InitContact(&Con);
	do
	{
		menu();
		printf("˵�����ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
		case ADD://����ͨѶ¼����Ϣ
			AddContact(&Con);
			break;
		case DEL://ɾ��ĳ����Ϣ 
			DelContact(&Con);
			break;
		case SEARCH://����ĳ�˵���Ϣ
			SearchContact(&Con); 
			break;
		case MODIFY:
			ModifyContact(&Con); 
			break;
		case SORT://������������ͨѶ¼
		    SortContact(&Con); 
			break;
		case PRINT://��ӡͨѶ¼
			PrintContact(&Con);
			break;
		case EXIT:
			printf("�뿪��");
			break;
		default:printf("������㣡\n"); 
			break;
		}
	}while(input);
	return 0;
}
