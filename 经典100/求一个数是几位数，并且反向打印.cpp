/*��һ��������5λ���������������Ǽ�λ�����ҷ����ӡ��λ����*/
#include<stdio.h>
int Jiw(int x) 
{
	int count = 1; 
	while(x%10!=x)
	{
		count++; 
	    x=x/10; 
	 } 
	return count; 
}
int main()
{
	int i; 
	int n; 
    int k;
	printf("������һ������(5λ��֮��)��");
    scanf("%d",&i);
	int ret = Jiw(i); 
	printf("\n������%dλ��\n",ret); 
	for(n=1;n<=ret;n++) 
	{//4666
		k = i % 10;
		printf("%d ",k);
		i /= 10; 
	}
	
	return 0;
}
