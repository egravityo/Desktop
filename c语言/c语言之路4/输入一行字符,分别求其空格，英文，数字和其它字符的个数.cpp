//����һ���ַ�,�ֱ�����ո�Ӣ�ģ����ֺ������ַ��ĸ��� 
#include<stdio.h>
int main()
{
	char c;
	int blank=0,english=0,number=0,other=0;
	while((c=getchar())!='\n') 
	{
		if(c==' ')
		{
		    blank++;
		}
		else if(('a'<=c&&c<='z')||('A'<=c&&c<='Z'))
		{
			english++; 
		}
		else if('0'<=c&&c<='9')
		{
		    number++;
		 } 
		else
		{
			other++;
		}
	 } 
	printf("�ո���%d��,Ӣ����%d��,������%d��,�����ַ���%d��",blank,english,number,other);
	getchar(); 
	return 0;
 } 
