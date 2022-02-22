//通讯录 
#include<stdio.h>
#include<string.h> 
#define MAX 1000
#define MAX_NAME 20
#define MAX_TELE 12
#define MAX_ADDR 20
void menu()
{
	printf("*******************\n");
	printf("***1.增加 2.打印***\n");
	printf("***   0.离开    ***\n");
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
//增加通讯录
void AddContact(con pc)
{
    if(pc->sz==MAX)
	{
	   printf("通讯录已满，无法增加\n");
	   return;	
	}	
	printf("请输入姓名：");
	scanf("%s",pc->data[pc->sz].name);
	printf("请输入年龄：");
	scanf("%d",&(pc->data[pc->sz].age));
	printf("请输入电话：");
	scanf("%s",pc->data[pc->sz].tele);
	printf("请输入地址：");
    scanf("%s",pc->data[pc->sz].addr); 
    (pc->sz)++;
    printf("增加成功！");
} 
//打印通讯录
void PrintContact(con pc)
{
    int i=0;
    printf("%-12s\t%-12s\t%-12s\t%-12s\n","姓名","年龄","电话","地址");
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
	//初始化通讯录
	InitContact(&con); 
    do
    {
       menu();
	   printf("你的选择是：\n");
	   scanf("%d",&input);
	   switch(input)
	   {
	   	case Add:AddContact(&con); 
		   break;
		case Exit:printf("你好牛哦！退出！\n");
		   break;
		case Print:PrintContact(&con);
	       break;
		default:
	       break;		
	   }	
	}while(input);
	return 0;
}
