//����ˮ,һƿ��ˮһԪһƿ,������ƿ���Ի�һƿ,������nԪ,���Ժȶ���ƿ
#include<stdio.h>
int main()
{
	int money=0;
	scanf("%d",&money);//total=2*money-1
	int total=money;
	int empty=money;
	while(empty>=2)
	{
		total+=empty/2;
		empty=empty/2+empty%2;
	}
	printf("total=%d",total);
	return 0;
 } 
