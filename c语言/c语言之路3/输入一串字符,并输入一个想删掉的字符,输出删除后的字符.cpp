//输入一串不含空格的字符,并输入一个想删掉的字符,输出删除后的字符 
#include<stdio.h>
int main()
{
	char arr[40]={0};
	int i,j;
	int count=0;
    printf("输入一串字符：\n");
    gets(arr);
    for(i=0;arr[i]!='\0';i++)
	{
		count++; 
	 } 
	printf("输入你想删掉的字符：\n");
    j = getchar();
  	printf("删除后的字符串为：\n");
    for(i=0;i<count;i++)
	{
		if(arr[i]!=j)
		{
			printf("%c",arr[i]);
		}
	 } 
	return 0;
 } 
