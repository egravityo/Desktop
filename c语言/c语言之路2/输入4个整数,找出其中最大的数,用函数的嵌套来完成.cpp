//����4������,�ҳ�����������,�ú�����Ƕ�������
#include<stdio.h>
int Max(int* pa);
{
	int* max;
	max = pa;
	if(*max < *(pa+1))
    {
    	*max = * (pa+1);
	}
 } 
int main()
{
	int i,arr[4];
	printf("������4�����ݣ�");
	for(i = 0;i < 4;i ++)
	{
		scanf("%d",&arr[i]);
	} 
	max = Max(arr);
	printf("Max = %d",max);
	return 0; 
 } 
