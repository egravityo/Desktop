//����4������,�ҳ�����������,�ú�����Ƕ�������
#include<stdio.h> 
int Max2(int x,int y)
{
    return (x>y)?x:y; 
}
int Max(int a, int b, int c, int d)
{
	int max,ret,ret1,ret2;
	max = a;
    ret = Max2(max,b);
	ret1 = Max2(ret,c);
    ret2 = Max2(ret1,d);
	return ret2; 
} 
int main()
{
	int a,b,c,d;
	printf("�� �� �� �� �� ����");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int max = Max(a,b,c,d);
	printf("Max = %d",max); 
	return 0;
}
