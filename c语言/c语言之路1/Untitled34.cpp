#include<stdio.h>
int main()
{
	char ch1,ch2;
	int choice=0;
	printf("*****��ӭʹ��ת����*****\n");
	printf("���ߣ�Сͺͷ\n");
	printf("�汾��NO.1\n");
	printf("�������ڣ�2021.10.28\n");
	printf("������һ���Ϸ���ĸ��\n"); 
	scanf("%c",&ch1);
//	if(!(('a'<=ch1&&ch1<='z')||('A'<=ch1&&ch1<='Z'))) 
//   {
//    	printf("�������Կǽ�ˮ��Ŷ��\n"); 
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
     case 0:printf("�ڸ�Ϲ��ô��\n");break;
     case 1:printf("ch2=%c\n",ch2=ch1-32);break;
     default:printf("ch2=%c\n",ch2=ch1+32);
     } 
	 return 0; 
}
