//�Ӽ�������n��ְ������Ϣ,���б�š��������Ա𡢳������ڡ�����,Ȼ���������
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
	printf("�������ж�����ְ��:\n");
	scanf("%d",&n);
	printf("�ֱ�����(no��name��sex��date birth��wage)\n");
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
