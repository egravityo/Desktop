/*��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
����2+22+222+2222+22222(��ʱ����5�������)��
����������м��̿���*/
#include<stdio.h>
int main()
{
	int k; 
	int a,z; 
	k=a;
	int sum=0;//���裨2��5)  
	printf("��������������(a z)��");
	scanf("%d %d",&a,&z);
    while(z>0)
    {
    	sum+=k;
    	a=a*10;
    	k+=a; 
    	z--;
	}
	printf("sum=%d",sum); 
	return 0;
 } 
