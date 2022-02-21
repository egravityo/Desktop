/*功能：确认密码
  日期:2021.11.13
  作者：cbr*/ 
#include<stdio.h>
int main()
{
	int ret=0;
	char ch; 
	char password[20]={0};
	printf("请输入密码:");
	scanf("%s",&password);
	while(ch=getchar()!='\n')
	{
		;
	}
	printf("请确认(Y/N):");
	ret=getchar();
	if(ret=='Y')
	{
		printf("确认成功");
	}
	else
	{
	    printf("确认失败"); 
	 } 
	return 0; 
 } 
