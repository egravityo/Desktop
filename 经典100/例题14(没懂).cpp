/*����14����һ���������ֽ������������磺����90��
��ӡ�� 90=2*3*3*5*/
#include<stdio.h>
int main()
{
	int i;
	int k; 
	printf("������һ����������\n");
	scanf("%d",&i);
    for(k=2;k<=i;k++)
	{
		if(i==k)
		{
			printf("%d\n",i);
		}
		else 
		{
			i=i/k;
			printf("%d\n",k);
		}
	 } 
	return 0; 
 } 
