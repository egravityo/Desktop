/*�������û�����С��
  ���������룺123
  С��ͬѧ����ӭʹ�ñ�ϵͳ*/
#include<stdio.h>
#include<string.h> 
int main() 
{
	char name[10],password[10];
	printf("�������û�����\n");
	gets(name);
	printf("���������룺\n");
	gets(password);
	if(((strcmp(name,"С��")==0))&&(strcmp(password,"123")==0))
    {
    	printf("%sͬѧ����ӭʹ�ñ�ϵͳ\n",name);
	}
	else
	{
		printf("���ǷǷ��ͻ���\n"); 
	 } 
	 
}
