//��9�ĸ���:��1~100֮��һ�������˶��ٸ�9
#include<stdio.h>
int main()
{
	int i,k;
	int a;//��ȡʮλ
	int b;//��ȡ��λ 
	int count=0;
	for(i=1;i<101;i++)
	{
		a=i/10;
		b=i%10;
		if(a==9||b==9)
		{
			printf("%d ",i);
			count++; 
		 } 
		if(a==9&&b==9)
		{
			printf("%d ",i);
			count++; 
		}
	 } 
	printf("\n"); 
	printf("һ����%d��9",count); 
	return 0; 
 } 
