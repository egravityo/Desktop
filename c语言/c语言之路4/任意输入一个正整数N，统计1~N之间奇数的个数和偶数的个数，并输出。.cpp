//��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ����������
#include<stdio.h>
//odd ����  even ż�� 
int main()
{
	int n=0;
    int even = 0; 
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			even++;
	    }
	} 
	printf("ż��һ����%d��\n",even);
	printf("����һ����%d��\n",n-even);
	return 0;
}
