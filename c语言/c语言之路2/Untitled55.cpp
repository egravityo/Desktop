//ÿ����һ��������num�ͼ�һ 
#include<stdio.h>
void ADD(int* p)
{
	(*p)++;
}
int main()
{
	int sum = 0;
	ADD(&sum);
	printf("sum=%d\n",sum); 
	ADD(&sum);
	printf("sum=%d\n",sum);
	ADD(&sum);
	printf("sum=%d",sum);
	return 0; 
 } 
