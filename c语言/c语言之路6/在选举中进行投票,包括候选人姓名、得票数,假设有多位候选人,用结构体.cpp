//��ѡ���н���ͶƱ,������ѡ����������Ʊ��,�����ж�λ��ѡ��,�ýṹ��
//����ͳ�Ƹ���ѡ�˵ĵ�Ʊ����������4λ��ѡ��,��10���˲μ�ͶƱ
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
    	printf("����������ͶƱ����(chen,wang,li,zhao)��");
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
