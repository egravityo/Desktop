/*��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
����2+22+222+2222+22222(��ʱ����5�������)��
����������м��̿���*/
#include<stdio.h>
int main()
{
	int i,sum=0; 
	int a,z; 
	int t=0;
	printf("������a��ֵ��\n"); 
	scanf("%d",&a); 
	printf("��������Ҫ��ӵĸ�����\n");
	scanf("%d",&z);
	for(i=1;i<=z;i++)
	{
		t=t+a;
	    sum+=t;
	    a=a*10;
	} 
	printf("\n");
	printf("sum=%d",sum);
	 
	return 0; 
 } 
