//����һ�������ո���ַ�,������һ����ɾ�����ַ�,���ɾ������ַ� 
#include<stdio.h>
int main()
{
	char arr[40]={0};
	int i,j;
	int count=0;
    printf("����һ���ַ���\n");
    gets(arr);
    for(i=0;arr[i]!='\0';i++)
	{
		count++; 
	 } 
	printf("��������ɾ�����ַ���\n");
    j = getchar();
  	printf("ɾ������ַ���Ϊ��\n");
    for(i=0;i<count;i++)
	{
		if(arr[i]!=j)
		{
			printf("%c",arr[i]);
		}
	 } 
	return 0;
 } 
