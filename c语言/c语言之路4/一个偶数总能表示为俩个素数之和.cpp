//һ��ż�����ܱ�ʾΪ��������֮�� 
#include<stdio.h>
int fun(int i)//�ж�����
{
	int flag=1;
	int j=2;
	for(j=2;j<=i/2;j++)
	{
		if(i%j==0)
		{
		    flag=0;
		}
	 } 
	if(flag==1)
	{
	   return 1	; 
	 } 
	else
	{
	   return 0;
	}
 } 
int main()
{
	int even=0;
	printf("������һ��ż����");
	scanf("%d",&even); 
    int i=2;
	for(i=2;i<even;i++)
	{
		if(fun(i)&&fun(even-i))
		{
			break;
		 } 
	 }
	 printf("%d��%d��%d������\n",even,i,even-i); 
	return 0;
}
