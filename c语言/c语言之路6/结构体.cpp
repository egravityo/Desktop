//�ṹ�� 
#include<stdio.h>
#define N 2
struct person
{
   char name[10];
   float wage;	
   int no;//��� 
};
int main()
{
	struct person worker[N];
	int i;
	for(i=0;i<N;i++)
	{
	    printf("�������%d��(����������,���)��",i+1);
	    scanf("%s %f %d",&worker[i].name,&worker[i].wage,&worker[i].no);
    }
    printf("����\t����\t���\n");
    for(i=0;i<N;i++)
    {
    	printf("%s\t%f\t%d",worker[i].name,worker[i].wage,worker[i].no);
        printf("\n");
	}
    return 0;
}
