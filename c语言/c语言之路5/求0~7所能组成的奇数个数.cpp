//��0~7������ɵ���������
//�⣺��Ŀ����ȷ,û��˵�Ǽ�λ��,Ҳû��˵ÿ������ʹ�ô��� 
#include<stdio.h>
int main()
{
	int sum=0;
	int count=0;
	int n;//����λ��
	for(n=1;n<=8;n++)
	{
	    if(n==1)
	    {
	    	count=4;
		}
		else if(n==2)
		{
			count=7*4;//��λ����7*4��,��λ��7*8*4��,��λ��7*8*8*4... 
		}
		else
		{
			count*=8;
		}
		printf("%dλ����%d��\n",n,count);
		sum+=count; 
	 }
	 printf("һ����%d��",sum);
	return 0;
 } 
