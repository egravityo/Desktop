//����һ����������Ҫ��õ��ø������ĸ�λ��
#include<stdio.h>
int main()
{
    float i;
    int j;
    while(~scanf("%f",&i))
    {
    	j = (int)i % 10;
	    printf("%d\n",j); 
	}
	return 0;
}
