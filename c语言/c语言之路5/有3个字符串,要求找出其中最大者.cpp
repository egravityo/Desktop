//有3个字符串,要求找出其中最大者 
#include<stdio.h>
#include<string.h>
int main()
{
   char str[3][20],s[20];
   int i;
   for(i=0;i<3;i++)
   {
   	   printf("请输入第%d个数组：",i+1);
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
   printf("字符串最大的是：%s",s);
   return 0;
}
