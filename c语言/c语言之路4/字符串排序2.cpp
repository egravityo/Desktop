//�ַ�������2
#include<stdio.h>
#include<string.h> 
void swap(char *pa,char *pb)
{
	char str[20];
	strcpy(str,pa);
	strcpy(pa,pb);
	strcpy(pa,str);
}
int main()
{
	void swap(char *pa,char *pb);
	char str1[15],str2[15],str3[15];
	printf("�����������ַ���");
	gets(str1);
	gets(str2);
	gets(str3);
	if(strcmp(str1,str2)>0)
	{
		swap(str1,str2);
	 } 
	else if(strcmp(str1,str3)>0)
	{
		swap(str1,str3);
	}
	else if(strcmp(str2,str3)>0)
	{
		swap(str2,str3);
	}
	printf("�������С���������ǣ�\n");
    printf("%s %s %s",str1,str2,str3); 
 } 
