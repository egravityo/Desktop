//在选举中进行投票,包括候选人姓名、得票数,假设有多位候选人,用结构体
//数组统计各候选人的得票数。假设有4位候选人,有10个人参加投票
#include<stdio.h>
#include<string.h>
#define N 10
struct person
{
    char name[10];
    int  vote;
}candidate[4]={{"chen",0},{"wang",0},{"li",0},{"zhao",0}};
int main()
{
	struct S ;
    int i=0;
    int j=0;
    char name[10];
    for(i=0;i<N;i++)
    {
    	printf("请输入你想投票的人(chen,wang,li,zhao)：");
    	scanf("%s",name);
    	for(j=0;j<4;j++)
    	{
    		if(strcmp(candidate[j].name,name)==0)
    		{
    			candidate[j].vote++;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%s\t%d",candidate[i].name,candidate[i].vote);
		printf("\n");
	}
    return 0; 
}
