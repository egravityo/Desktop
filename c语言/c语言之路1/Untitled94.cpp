/*���ܣ�ȷ������
  ����:2021.11.13
  ���ߣ�cbr*/ 
#include<stdio.h>
int main()
{
	int ret=0;
	char ch; 
	char password[20]={0};
	printf("����������:");
	scanf("%s",&password);
	while(ch=getchar()!='\n')
	{
		;
	}
	printf("��ȷ��(Y/N):");
	ret=getchar();
	if(ret=='Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
	    printf("ȷ��ʧ��"); 
	 } 
	return 0; 
 } 
