//һС���m�׸߶ȵ��䣬ÿ�ε��䶼����ԭ��һ��ĸ߶�,������,
//�����ڵ�n�����ʱ,������߲��Ҿ����ľ����Ƕ��٣� 
#include<stdio.h>
int main()
{
	int i;
	float m; 
	int n;
	scanf("%f %d",&m,&n);
	float h=m/2;//h�Ƿ����ĸ߶�
    double sum=m;
    for(i=2;i<=n;i++)
    {
		sum+=h*2;
		h/=2;
	}
	printf("%.4f %.4f",h,sum);
	return 0;
}
