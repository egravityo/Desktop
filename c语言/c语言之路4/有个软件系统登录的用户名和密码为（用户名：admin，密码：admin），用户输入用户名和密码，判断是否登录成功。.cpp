//�и����ϵͳ��¼���û���������Ϊ���û�����admin�����룺admin��
//�û������û��������룬�ж��Ƿ��¼�ɹ�
#include<stdio.h>
#include<string.h> 
int main()/* 
{
    int arr[40]={"admin  admin"};
    int brr[40]={0};
    gets(brr);
    if(arr[]==brr[])	
    {
    	printf("��¼�ɹ�");
	}
	else
	{
		printf("��¼ʧ�ܣ�");
	}
	return 0;
}
{
    char arr[6]="admin";
    char arr1[100],arr2[100];
    int i;
    while(scanf("%s %s",arr1,arr2)!=EOF)
    {
    	int flag = 1;
		for(i=0;arr[i]!='\0';i++)
		{
			if(arr1[i]!=arr[i]||arr2[i]!=arr[i])
			{
				flag = 0;
				break;
			}
		 }
		if(flag==1)
		{
			printf("��¼�ɹ���");
		}
		else
		{
		    printf("��¼ʧ�ܣ�"); 
		 } 
		 printf("\n");
	}
	return 0;
 }*/
{
	char name[100]={0};
	char password[100]={0};
	while(scanf("%s %s",name,password)!=EOF)
	{
		if((strcmp(name,"admin"))==0&&(strcmp(password,"admin")==0))
		{
			printf("��¼�ɹ���");
		 } 
		else
		{
		    printf("��¼ʧ�ܣ�"); 
		}
		printf("\n");
	 } 
	return 0;
}
