//�ձ�ĳ�ط�����һ��ıɱ��,ͨ�����������˵Ĺ���,д�������ж��ĸ�������
//A˵��������
//B˵����C
//C˵����D
//D˵��C�ں�˵
//��֪3����˵���滰,1����˵�˼ٻ�
#include<stdio.h>
int main()
{
	int killer=0;
	for(killer='A';killer<='D';killer++)
	{
		if((killer!='A')+(killer=='C')+(killer=='D')+(killer!='D')==3)
		{
			printf("killer = %c\n",killer);
		}
	}
	return 0;
 } 
