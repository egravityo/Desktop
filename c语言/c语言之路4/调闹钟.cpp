//������,�������ڵ�ʱ�̺���˯��ʱ��
//�������룺  20��30  100
//�����22��10 
#include<stdio.h>
int main()
{
	int h,m,k;
	scanf("%d:%d %d",&h,&m,&k);
	h = ((m+k)/60+h)%24;
    m = (m+k)%60;
    printf("%02d:%02d",h,m);
	return 0;
}
