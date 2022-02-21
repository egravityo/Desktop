//结构体 
#include<stdio.h>
#define N 2
struct person
{
   char name[10];
   float wage;	
   int no;//编号 
};
int main()
{
	struct person worker[N];
	int i;
	for(i=0;i<N;i++)
	{
	    printf("请输入第%d个(姓名，工资,编号)：",i+1);
	    scanf("%s %f %d",&worker[i].name,&worker[i].wage,&worker[i].no);
    }
    printf("姓名\t工资\t编号\n");
    for(i=0;i<N;i++)
    {
    	printf("%s\t%f\t%d",worker[i].name,worker[i].wage,worker[i].no);
        printf("\n");
	}
    return 0;
}
