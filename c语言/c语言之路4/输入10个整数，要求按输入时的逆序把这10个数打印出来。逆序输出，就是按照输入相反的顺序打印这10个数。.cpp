//����10��������Ҫ������ʱ���������10������ӡ������
//������������ǰ��������෴��˳���ӡ��10������
#include<stdio.h> 
int main()
{
	/*
	int i;
	char arr[30]={0};
	gets(arr);
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i = sz;i>0;i--)
	{
		printf("%d ",arr[i]);
	}*/
	int i,j;
	int arr[10]={0};
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
	}
	for(j=9;j>0;j--)
	{
		printf("%d ",arr[j]);
	}
	return 0;
}
