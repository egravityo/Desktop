//��3���ַ���,Ҫ���ҳ���������� 
#include<stdio.h>
#include<string.h>
int main()
{
   char str[3][20],s[20];
   int i;
   for(i=0;i<3;i++)
   {
   	   printf("�������%d�����飺",i+1);
   	   scanf("%s",&str[i]);
   }
   if(strcmp(str[0],str[1])>0)
   {
   	  strcpy(s,str[0]);
   }
   else
   {
   	  strcpy(s,str[1]);
   }
   if(strcmp(s,str[2])<0)
   {
   	  strcpy(s,str[2]);
	} 
   printf("�ַ��������ǣ�%s",s);
   return 0;
}
