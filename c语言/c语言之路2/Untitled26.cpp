/*请输入用户名：小明
  请输入密码：123
  小明同学，欢迎使用本系统*/
#include<stdio.h>
#include<string.h> 
int main() 
{
	char name[10],password[10];
	printf("请输入用户名：\n");
	gets(name);
	printf("请输入密码：\n");
	gets(password);
	if(((strcmp(name,"小明")==0))&&(strcmp(password,"123")==0))
    {
    	printf("%s同学，欢迎使用本系统\n",name);
	}
	else
	{
		printf("你是非法客户！\n"); 
	 } 
	 
}
