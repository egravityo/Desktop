//ͨѶ¼ 
#include<stdio.h>
#include<string.h> 
#define MAX 1000
#define MAX_NAME 20
#define MAX_TELE 12
#define MAX_ADDR 20
void menu()
{
	printf("*******************\n");
	printf("***1.���� 2.��ӡ***\n");
	printf("***   0.�뿪    ***\n");
	printf("*******************\n");
}
typedef struct data
{
	char name[MAX_NAME];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}data;
typedef struct contact
{
    data data[MAX];
    int sz;
}contact,*con;
enum Option
{
	Exit,
    Add,
    Print, 
};
void InitContact(con pc)
{
	pc->sz=0;
	memset(pc->data,0,sizeof(pc->data));
}
//����ͨѶ¼
void AddContact(con pc)
{
    if(pc->sz==MAX)
	{
	   printf("ͨѶ¼�������޷�����\n");
	   return;	
	}	
	printf("������������");
	scanf("%s",pc->data[pc->sz].name);
	printf("���������䣺");
	scanf("%d",&(pc->data[pc->sz].age));
	printf("������绰��");
	scanf("%s",pc->data[pc->sz].tele);
	printf("�������ַ��");
    scanf("%s",pc->data[pc->sz].addr); 
    (pc->sz)++;
    printf("���ӳɹ���");
} 
//��ӡͨѶ¼
void PrintContact(con pc)
{
    int i=0;
    printf("%-12s\t%-12s\t%-12s\t%-12s\n","����","����","�绰","��ַ");
	for(i=0;i<pc->sz;i++)
	{
		printf("%-12s\t%-12d\t%-12s\t%-12s\n",pc->data[i].name,
        pc->data[i].age,pc->data[i].tele,pc->data[i].addr);
	}	
} 
int main()
{
	int input=0;
	contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con); 
    do
    {
       menu();
	   printf("���ѡ���ǣ�\n");
	   scanf("%d",&input);
	   switch(input)
	   {
	   	case Add:AddContact(&con); 
		   break;
		case Exit:printf("���ţŶ���˳���\n");
		   break;
		case Print:PrintContact(&con);
	       break;
		default:
	       break;		
	   }	
	}while(input);
	return 0;
}
