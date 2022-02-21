//通讯录
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
//通讯录的初始化
void InitContact(con pc)
{
	pc->sz=0;
	//memset---内存重置
	memset(pc->data,0,sizeof(pc->data)); 
}
//增加通讯录的信息
void AddContact(con pc)
{
    if(pc->sz==MAX)
    {
        printf("通讯录已满,无法添加\n");
		return ;	
	}	
	//增加
	printf("请输入新增的姓名：>");
	scanf("%s",pc->data[pc->sz].name);
	printf("请输入新增的性别：>");
	scanf("%s",pc->data[pc->sz].sex);
	printf("请输入新增的年龄：>");
	scanf("%d",&(pc->data[pc->sz].age));
	printf("请输入新增的电话：>");
	scanf("%s",pc->data[pc->sz].tele);
	printf("请输入新增的地址：>");
	scanf("%s",pc->data[pc->sz].addr);
	pc->sz++;
	printf("添加成功！\n");
}
//打印通讯录 
void PrintContact(con pc)
{
    //打印标题
	printf("%-15s\t%-10s\t%-10s\t%-15s\t%-20s\n","姓名","性别","年龄",
	"电话","地址");
	int i=0;
	for(i=0;i<pc->sz;i++)
	{
	    printf("%-15s\t%-10s\t%-10d\t%-15s\t%-20s\n",pc->data[i].name,
	    pc->data[i].sex,pc->data[i].age,pc->data[i].tele,
	    pc->data[i].addr);
	} 
}
//查询
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
    printf("请输入删除的名字：>");
	scanf("%s",name);
	//查询
	int pos= Found_contact(pc,name);
	if(pos==-1)
	{
		printf("查无此人！\n");
		return;
	}
	//删除
	int i=0;
	for(i=pos;i<pc->sz-1;i++)
	{
		pc->data[i]=pc->data[i+1]; 
	} 
	pc->sz--;
	printf("删除成功！\n"); 
} 
//查找某人的信息
void SearchContact(con pc)
{
	char name[MAX_NAME];
    printf("请选择查找的名字：>");
	scanf("%s",name);
	int pos= Found_contact(pc,name);
	if(pos==-1)
	{
		printf("查无此人！\n");
		return;
	}
	//打印
	printf("%-15s\t%-10s\t%-10d\t%-15s\t%-20s\n",pc->data[pos].name,
	pc->data[pos].sex,pc->data[pos].age,pc->data[pos].tele,
	pc->data[pos].addr);
 } 
void ModifyContact(con pc)
{
	char name[MAX_NAME];
    printf("请选择修改的名字：>");
	scanf("%s",name);
	int pos= Found_contact(pc,name);
	if(pos==-1)
	{
		printf("查无此人！\n");
		return;
	}
	//修改
	printf("请输入名字: >");
	scanf("%s",pc->data[pos].name);
	printf("请输入性别：>");
	scanf("%s",pc->data[pos].sex);
	printf("请输入年龄：>");
	scanf("%d",&(pc->data[pos].age));
	printf("请输入电话：>");
	scanf("%s",pc->data[pos].tele);
	printf("请输入地址：>");
	scanf("%s",pc->data[pos].addr);
	printf("修改成功！\n");
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
	/*1.通讯录成员的信息 
	姓名 性别 年龄 电话 地址
	2.增加通讯录的信息
	3.删除通讯录的信息
	4.查找通讯录的信息
	5.修改通讯录的信息
	6.打印通讯录的信息 
	*/
	int input=0;
	int sz=0;
	//通讯录的创建
	contact Con; 
	//通讯录的初始化
	InitContact(&Con);
	do
	{
		menu();
		printf("说出你的选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case ADD://增加通讯录的信息
			AddContact(&Con);
			break;
		case DEL://删除某个信息 
			DelContact(&Con);
			break;
		case SEARCH://查找某人的信息
			SearchContact(&Con); 
			break;
		case MODIFY:
			ModifyContact(&Con); 
			break;
		case SORT://按照年龄排序通讯录
		    SortContact(&Con); 
			break;
		case PRINT://打印通讯录
			PrintContact(&Con);
			break;
		case EXIT:
			printf("离开！");
			break;
		default:printf("看清楚点！\n"); 
			break;
		}
	}while(input);
	return 0;
}
