#include<stdio.h>
//�ú��������������� 
void Swap(int* pa,int* pb)
{
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
 } 
int main()
{
	int a,b;
	printf("��������������(a,b)��"); 
	scanf("%d,%d",&a,&b); 
    printf("����ǰ��a = %d,b = %d\n",a,b);
	Swap(&a,&b);
	printf("������a = %d,b = %d\n",a,b); 
	return 0;
}
