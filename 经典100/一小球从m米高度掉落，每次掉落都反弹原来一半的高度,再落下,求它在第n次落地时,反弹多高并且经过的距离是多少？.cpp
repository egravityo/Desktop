//一小球从m米高度掉落，每次掉落都反弹原来一半的高度,再落下,
//求它在第n次落地时,反弹多高并且经过的距离是多少？ 
#include<stdio.h>
int main()
{
	int i;
	float m; 
	int n;
	scanf("%f %d",&m,&n);
	float h=m/2;//h是反弹的高度
    double sum=m;
    for(i=2;i<=n;i++)
    {
		sum+=h*2;
		h/=2;
	}
	printf("%.4f %.4f",h,sum);
	return 0;
}
