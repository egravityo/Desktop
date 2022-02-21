//从键盘输入n个职工的信息,含有编号、姓名、性别、出生日期、工资,然后输出它们
#include<stdio.h>
#define N 100
struct date
{
	int year;
	int month;
	int day;
};
struct employee
{
    long no;
	char name[10];
	char sex; 
	struct date birth;
	int wage; 
}; 
int main()
{
	struct employee sum[N];
	int n;
	printf("请输入有多少名职工:\n");
	scanf("%d",&n);
	printf("分别输入(no，name，sex，date birth，wage)\n");
	int i;
	for(i=0;i<n;i++)
	{
	     scanf("%ld,%s,%c,%d,%d,%d,%d",&sum[i].no,sum[i].name,
	     &sum[i].sex,&sum[i].birth.year,&sum[i].birth.month,
		 &sum[i].birth.day,&sum[i].wage);
	}
    for(i=0;i<n;i++)
	{
	     printf("%ld,%s,%c,%d,%d,%d,%d",sum[i].no,sum[i].name,
	     sum[i].sex,sum[i].birth.year,sum[i].birth.month,
		 sum[i].birth.day,sum[i].wage);
		 printf("\n");
	}
	return 0;
 } 
