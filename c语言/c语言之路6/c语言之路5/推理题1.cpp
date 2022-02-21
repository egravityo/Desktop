//日本某地发生了一件谋杀案,通过几个嫌疑人的供述,写程序来判断哪个是凶手
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说
//已知3个人说了真话,1个人说了假话
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
