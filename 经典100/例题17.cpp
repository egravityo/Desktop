/*����17������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո�����
�������ַ��ĸ���*/
#include<stdio.h>
int main()
{
	int  letter=0,space=0;
	int  digit=0,other=0;
	int  ch;
	printf("������һ���ַ���\n");
	while((ch=getchar())!='\n')
	{
		if(('a'<ch&&ch<'z')||('A'<ch&&ch<'Z'))
		{
			letter++; 
		 } 
		 else if(ch=' ')
		 {
		 	space++; 
		  } 
		 else if('0'<ch&&ch<'9')
		 {
		 	digit++;
		  } 
		else
		{
			other++; 
		 } 
	 } 
	 printf("�����ַ���һ������%d����ĸ\n",letter);
	 printf("�����ַ���һ������%d������\n",digit);
     printf("�����ַ���һ������%d���ո�\n",space);
     printf("�����ַ���һ������%d�������ַ�\n",other);
	  
	return 0; 
 } 
