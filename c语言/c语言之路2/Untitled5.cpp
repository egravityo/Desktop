//����n�Ľײ�
#include<stdio.h>
int main()
{
	int n;
	int i; 
	int ret=1; 
	printf("������һ��������\n");
	scanf("%d",&n); 
    for(i=1;i<=n;i++)
	{
	     ret=ret*i;
	 } 
	printf("ret=%d",ret);
	return 0;
}
