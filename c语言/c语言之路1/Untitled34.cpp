#include<stdio.h>
int main()
{
	char ch1,ch2;
	int choice=0;
	printf("*****欢迎使用转换器*****\n");
	printf("作者：小秃头\n");
	printf("版本：NO.1\n");
	printf("出版日期：2021.10.28\n");
	printf("请输入一个合法字母：\n"); 
	scanf("%c",&ch1);
//	if(!(('a'<=ch1&&ch1<='z')||('A'<=ch1&&ch1<='Z'))) 
//   {
//    	printf("你怕是脑壳进水了哦！\n"); 
//	}
//	else
//		if('a'<=ch1&&ch1<='z')
//		printf("ch2=%c\n",ch2=ch1-32);
//		if('A'<=ch1&&ch1<='Z')
//		printf("ch2=%c\n",ch2=ch1+32);	 
//	 } 
     choice=choice+1*('a'<=ch1&&ch1<='z')+2*('A'<=ch1&&ch1<='Z');
     switch(choice)
     {
     case 0:printf("在搞瞎的么！\n");break;
     case 1:printf("ch2=%c\n",ch2=ch1-32);break;
     default:printf("ch2=%c\n",ch2=ch1+32);
     } 
	 return 0; 
}
